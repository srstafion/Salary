#include "worker.h"

Worker::Worker()
{

}

Worker::Worker(QString name, QString lastname, int pay){
    this->name=name;
    this->lastname=lastname;
    this->pay=pay;
}

QString Worker::getName(){
    return name;
}

QString Worker::getLastname(){
    return lastname;
}

int Worker::getPay(){
    return pay;
}
