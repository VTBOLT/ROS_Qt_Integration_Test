#include "qt_parent.h"

QTextStream qCout(stdout);

qtParent::qtParent(QString path, QStringList args)
{
    rosProcess = new QProcess();
    rosProcess->setProgram(path);
    rosProcess->setArguments(args);

    connectSlots();
}

void qtParent::startRos()
{
    rosProcess->start();
}

void qtParent::connectSlots()
{
    connect(rosProcess, SIGNAL(readyReadStandardOutput()),this,SLOT(printData()));
}

void qtParent::printData()
{
    QString data = rosProcess->readAllStandardOutput();
    qCout << "DATA FROM ROS: " << data << endl;
}
