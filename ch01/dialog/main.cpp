#include "dialog.h"                 //(a)

#include <QApplication>             //(b)

int main(int argc, char *argv[])    //(c)
{
    QApplication a(argc, argv);     //(d)
    Dialog w;                       //(e)
    w.show();                       //(f)
    return a.exec();                //(g)
}
