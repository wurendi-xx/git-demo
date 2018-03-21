#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug("Hello Qt World! My %d application.",1);

    return a.exec();
}
