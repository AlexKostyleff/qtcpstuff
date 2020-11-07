#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QCoreApplication>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QString>
#include <QFile>
#include <QDataStream>
#include <QTextStream>

class MyClient: public QTcpSocket {
Q_OBJECT

public:
    MyClient();
    ~MyClient();

    QTcpSocket* socket;
    QByteArray data;

  //  QJsonDocument jsonDocument;
  //  QJsonParseError jsonErrorDocument;
    struct UserInformation{
        int age;
        QString name;
        QString surname;
        QString group;
        bool gender;
    };

public slots:
    void socketReady();
    void socketDisconnected();
    void socketConnect();
    void socketSend();
    void socketRecieve();

};

//QDataStream &operator <<(QDataStream &out,const UserInformation &dataStruct);
//QDataStream &operator >>(QDataStream &in, UserInformation  &dataStruct);
#endif // MYCLIENT_H
