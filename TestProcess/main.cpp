#include <QCoreApplication>
#include <QTextStream>
#include <unistd.h>

QTextStream qtCout(stdout);


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    float i = 0;

        float incr = -0.5;

        while (1)
        {
            qtCout << i << endl;
            if ( i > 7999 || i <= 0)
                incr = -1 * incr;
            i = i + incr;
            sleep(1);
        }

    return a.exec();
}
