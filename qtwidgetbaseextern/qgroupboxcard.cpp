#include "qgroupboxcard.h"

QGroupBoxCard::QGroupBoxCard(QWidget *parent):QGroupBox(parent)
{
    setStyleSheet("\
        QGroupBox { \
            background-color:\"#fcfcfc\";\
            border-radius:10px;\
        }\
    ");

    setTitle("");
}
