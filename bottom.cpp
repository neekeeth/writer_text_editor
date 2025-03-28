#include "bottom.h"

Bottom::Bottom(QWidget *in_parent)
    :QWidget(in_parent) {
    bottom_h_box = new QHBoxLayout{this};
    make_bottom_widgets();
    qDebug() << "Bottom created";
}

void Bottom::make_bottom_widgets () {
    bottom_spacer = new QWidget {this};
    bottom_h_box -> addWidget(bottom_spacer);
    bottom_spacer ->setMinimumWidth(900);
    page_number = new QLabel (this);
    bottom_h_box -> addWidget(page_number);
    words_counter = new QLabel (this);
    bottom_h_box -> addWidget(words_counter);
}

void Bottom::change_word_counter (size_t in_counter) {
    words_counter -> setText(counter_decription + std::to_string(in_counter).c_str());
    words_counter->update();
    if (in_counter - 500 >= 0) {
        page_number -> setText(pages_decription + std::to_string(in_counter / 500).c_str());
    };
}

Bottom::~Bottom() {
    qDebug() << "Bottom deleted";
}
