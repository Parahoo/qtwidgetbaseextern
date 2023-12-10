#include "qcheckboxswitch.h"

QCheckBoxSwitch::QCheckBoxSwitch(QWidget *parent)
    :QCheckBox(parent)
{
    setStyleSheet("\
        QCheckBox {\
            font-size: 15px;\
        }\
\
        QCheckBox::indicator {\
            width: 40px;\
            height: 30px;\
            border: none;\
        }\
\
        QCheckBox::indicator:unchecked {\
            image: url(:/res/images/switch_off.png);\
        }\
\
        QCheckBox::indicator:checked {\
            image: url(:/res/images/switch_on.png);\
        }\
        ");

    setLayoutDirection(Qt::RightToLeft);
}

QCheckBoxSwitch::~QCheckBoxSwitch()
{

}
