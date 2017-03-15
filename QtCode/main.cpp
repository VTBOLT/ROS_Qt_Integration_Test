#include <QCoreApplication>

#include "qt_parent.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = "../TestProcess/TestProcess";
    QStringList args;
    qtParent * handler = new qtParent(path, args);

    handler->startRos();

    return a.exec();
}
