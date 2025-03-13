#include "workplace.h"


Workplace::Workplace(QWidget *in_parent)
    :QWidget(in_parent) {
    make_workpalece_widgets();
    make_workplace_v_box(); 
}

void Workplace::make_workpalece_widgets() {
    main_text_area = new QTextEdit(this);
    main_text_area -> setMinimumSize(800, 700);
    main_text_area -> setStyleSheet("background-color: #323232;"
                                    "border: 0px;"
                                    "font-family: American Typewriter;"
                                    "font-style: normal;"
                                    "font-size: 20pt;"
                                    "font-weight: normal;");
    main_text_area -> setAlignment(Qt::AlignJustify);
    main_text_area -> setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    main_text_area -> setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //This function is make an app work slowly. Need to research this!
    //MB its because i send pointer of the class insted of 2 small args...
    QObject::connect(main_text_area, &QTextEdit::textChanged,[this](){
        text_area_length = 0;
        std::string all_text {(main_text_area -> toPlainText()).toStdString()};
        std::stringstream ss {all_text};
        for (std::string next{}; ss >> next;) {
            ++text_area_length;
        }
    });
}
void Workplace::make_workplace_v_box() {
    workplace_v_box = new QVBoxLayout(this);
    this -> setLayout(workplace_v_box);
    workplace_v_box->addWidget(main_text_area, 0, Qt::AlignCenter);
}

size_t Workplace::get_text_area_length (){
    return text_area_length;
}

Workplace::~Workplace() {
    qDebug() << "Workplace deleted";
}
