#include "mainwindow.h"
#include "central_widget.h"
#include <QTimer>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setContentsMargins(0,0,0,0);
    w.resize(1000, 600);
    w.setMinimumSize(1000, 600);
    Central_widget* my_central_widget {new Central_widget(&w)};
    w.setCentralWidget(my_central_widget);

    QTimer timer;

    timer.start(1000);
    QObject::connect(&timer, &QTimer::timeout, [my_central_widget](){
        my_central_widget -> set_words_counter();
    });


    w.show();
    return a.exec();
}
