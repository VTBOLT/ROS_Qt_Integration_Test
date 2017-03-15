#include <QCoreApplication>
//#include <QTextStream>
#include <unistd.h>
#include <iostream>
//QTextStream qtCout(stdout);

using std::cout;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    float i = 0;

        float incr = -0.5;

        while (1)
        {
            cout << i << std::endl;
            if ( i > 7999 || i <= 0)
                incr = -1 * incr;
            i = i + incr;
            sleep(1);
        }

    return a.exec();
}
