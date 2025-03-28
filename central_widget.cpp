#include "central_widget.h"

Central_widget::Central_widget(QMainWindow *in_parent) :
    QWidget {in_parent} {
    qDebug() << "Central widget created";
    make_widgets();
    make_grid();
}

void Central_widget::make_widgets () {
    my_bottom = new Bottom(this);
    my_workplace = new Workplace(this);
}

void Central_widget::make_grid () {
    central_grid = new QGridLayout(this);
    this -> setLayout(central_grid);
    central_grid -> addWidget(my_workplace, 0, 0, Qt::AlignCenter);
    central_grid -> addWidget(my_bottom, 1, 0, Qt::AlignCenter);
}

void Central_widget::set_words_counter(){
    size_t intermediate_counter = my_workplace -> get_text_area_length();
    my_bottom -> change_word_counter(intermediate_counter);
}

Central_widget::~Central_widget() {
    qDebug() << "Central widget deleted";
}
