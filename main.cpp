#include <QApplication>
#include "View.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View * view = new View;
    view->show();
    return a.exec();
}
