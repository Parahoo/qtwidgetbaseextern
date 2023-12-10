#ifndef QWIDGETCARD_H
#define QWIDGETCARD_H

#include <QWidget>

class QWidgetCard : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetCard(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *);

};

#endif // QWIDGETCARD_H
