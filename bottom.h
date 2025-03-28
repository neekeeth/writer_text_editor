#ifndef BOTTOM_H
#define BOTTOM_H

#include <QWidget>
#include <QDebug>
#include <QHBoxLayout>
#include <QLabel>
#include <QDebug>

class Bottom : public QWidget {
    QHBoxLayout* bottom_h_box{};
    void make_bottom_h_box();
    QWidget* bottom_spacer{};
    QLabel* page_number{};
    QLabel* words_counter{};
    void make_bottom_widgets();
    //std::vector<QWidget*> bottom_widgets; //just to make simple adding or deleting a widgets
    QString pages_decription = "Pages: ";
    QString counter_decription = "Words: ";
public:
    void change_word_counter (size_t in_counter);
    Bottom(QWidget *parent = nullptr);
    ~Bottom();
};

#endif // BOTTOM_H
