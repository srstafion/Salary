#ifndef WORKER_H
#define WORKER_H
#include <QApplication>


class Worker
{
private:
    QString name;
    QString lastname;
    int pay;
public:
    Worker();
    Worker(QString name, QString lastname, int pay);
    QString getName();
    QString getLastname();
    int getPay();
};

#endif // WORKER_H
