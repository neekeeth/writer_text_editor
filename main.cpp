#include "mainwindow.h"
#include "central_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setContentsMargins(0,0,0,0);
    w.resize(1000, 600);

    /*create a central widget that will do all others*/
    Central_widget* my_central_widget {new Central_widget(&w)};
    w.setCentralWidget(my_central_widget);




    w.show();
    return a.exec();
}
