#include <QCoreApplication>
#include <QtDebug>
#include "servercontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   ServerController* controller = ServerController::getInstance();

    int a1=controller->confirmAuthorization("maksim","123");
    int a2=controller->confirmAuthorization("maksim","1234");

    Farmer* a3= controller->getUser("maksim");

    return a.exec();
}
