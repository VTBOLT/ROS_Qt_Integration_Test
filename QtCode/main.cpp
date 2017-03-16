#include <QCoreApplication>

#include "qt_parent.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QString path = "../TestProcess/TestProcess";
    QString path = "rosrun";
    QStringList args;
    args << "backend" << "listener2";
    qtParent * handler = new qtParent(path, args);

    handler->startRos();

    return a.exec();
}
