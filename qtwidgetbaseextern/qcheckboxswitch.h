#ifndef QCHECKBOXSWITCH_H
#define QCHECKBOXSWITCH_H

#include <QCheckBox>

class QCheckBoxSwitch : public QCheckBox
{
    Q_OBJECT
public:
    QCheckBoxSwitch(QWidget *parent = nullptr);
    ~QCheckBoxSwitch();
};

#endif // QCHECKBOXSWITCH_H
