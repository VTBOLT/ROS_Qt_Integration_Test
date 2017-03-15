#ifndef QT_PARENT_H
#define QT_PARENT_H

#include <QProcess>
#include <QThread>
#include <QTextStream>

class qtParent : QObject {

public:
    qtParent(QString path, QStringList args);
    void startRos();

private:
    QProcess * rosProcess;
    void connectSlots();

private slots:
    void printData();

};

#endif // QT_PARENT_H
