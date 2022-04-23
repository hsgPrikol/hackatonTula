#ifndef ACHIVEMENT_H
#define ACHIVEMENT_H

#include <instruments.h>

class Achivement
{
public:
    int id;
    QString name;
    QString info;
    int aim;
    int progress;
    QByteArray image;

    Achivement();
    Achivement(int _id, QString _name, QString _info,int _aim, int _progress, QByteArray _image):
        id (_id), name (_name), info (_info),aim (_aim), progress (_progress), image(_image){};
    Achivement(QString _name, QString _info,int _aim, QByteArray _image):
        id (-1), name (_name), info (_info),aim (_aim), progress (-1), image(_image){};
};

#endif // ACHIVEMENT_H
