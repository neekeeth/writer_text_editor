#ifndef WORKPLACE_H
#define WORKPLACE_H

#include <QWidget>
#include <QDebug>
#include <QVBoxLayout>
#include <QTextEdit>
#include "bottom.h"
#include <sstream>

class Workplace : public QWidget {
    Q_OBJECT
    QVBoxLayout* workplace_v_box{};
    void make_workplace_v_box();
    QTextEdit* main_text_area{};
    void make_workpalece_widgets();
    size_t text_area_length = 0;
public:
    Workplace(QWidget *parent = nullptr);
    size_t get_text_area_length();
    ~Workplace();
};

#endif // WORKPLACE_H
