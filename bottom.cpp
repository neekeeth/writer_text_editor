#include "bottom.h"

Bottom::Bottom(QWidget *in_parent)
    :QWidget(in_parent) {
    make_bottom_widgets();
    make_bottom_h_box();
}

void Bottom::make_bottom_widgets () {
    bottom_spacer = new QWidget (this);
    page_number = new QLabel (this);
    page_number -> setText("1");
    words_counter = new QLabel (this);

    //Collect all in vector
    bottom_widgets.push_back(bottom_spacer);
    bottom_widgets.push_back(page_number);
    bottom_widgets.push_back(words_counter);
}

void Bottom::make_bottom_h_box () {
    bottom_h_box = new QHBoxLayout(this);
    this -> setLayout(bottom_h_box);
    for (auto next : bottom_widgets) {
        bottom_h_box -> addWidget(next);
    }
}

void Bottom::change_word_counter (size_t in_counter) {
    words_counter -> setText(std::to_string(in_counter).c_str());
    words_counter->update();
}

Bottom::~Bottom() {
    qDebug() << "Bottom deleted";
}
