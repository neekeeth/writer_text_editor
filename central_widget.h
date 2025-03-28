#ifndef CENTRAL_WIDGET_H
#define CENTRAL_WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include <QGridLayout>
#include "workplace.h"
#include "bottom.h"


class Central_widget: public QWidget {
    Q_OBJECT
    QGridLayout* central_grid{};
    void make_grid();
    Workplace* my_workplace{};//most important to save this objects by this class-names insted of QWdiget*!!!
    Bottom* my_bottom{};
    void make_widgets();
public:
    Central_widget(QMainWindow *parent);
    void set_words_counter ();
    ~Central_widget();
};

#endif // CENTRAL_WIDGET_H
