#include <QCoreApplication>
#include "MyClient.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClient Client;
    Client.socketConnect();
    Client.socketSend();
    return a.exec();
}
