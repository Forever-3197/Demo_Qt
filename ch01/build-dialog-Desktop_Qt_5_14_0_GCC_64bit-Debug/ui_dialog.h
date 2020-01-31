/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *raiusLabel;
    QLineEdit *radiusLineEdit;
    QPushButton *countBtn;
    QLabel *areaLabel_2;
    QLabel *areaLabel_1;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(237, 67);
        raiusLabel = new QLabel(Dialog);
        raiusLabel->setObjectName(QString::fromUtf8("raiusLabel"));
        raiusLabel->setGeometry(QRect(10, 7, 31, 18));
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(12, 28, 108, 26));
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(130, 27, 31, 26));
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QString::fromUtf8("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(170, 7, 55, 18));
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QString::fromUtf8("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(170, 30, 55, 20));
        areaLabel_1->setFrameShape(QFrame::Panel);
        areaLabel_1->setFrameShadow(QFrame::Sunken);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        raiusLabel->setText(QCoreApplication::translate("Dialog", "\345\215\212\345\276\204\357\274\232", nullptr));
        countBtn->setText(QCoreApplication::translate("Dialog", "\357\274\235", nullptr));
        areaLabel_2->setText(QCoreApplication::translate("Dialog", "\351\235\242\347\247\257\357\274\232", nullptr));
        areaLabel_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
