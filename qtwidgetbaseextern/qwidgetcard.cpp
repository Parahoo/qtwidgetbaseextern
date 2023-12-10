#include "qwidgetcard.h"

#include <QStyleOption>
#include <QPainter>

QWidgetCard::QWidgetCard(QWidget *parent)
    : QWidget{parent}
{
    setStyleSheet("\
        QWidgetCard { \
            background-color:\"#fcfcfc\";\
            border-radius:10px;\
        }\
    ");
}

void QWidgetCard::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
