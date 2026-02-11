/********************************************************************************
** Form generated from reading UI file 'formtimertxt.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTIMERTXT_H
#define UI_FORMTIMERTXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formTimerTxt
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *formTimerTxt)
    {
        if (formTimerTxt->objectName().isEmpty())
            formTimerTxt->setObjectName("formTimerTxt");
        formTimerTxt->resize(242, 127);
        label = new QLabel(formTimerTxt);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 241, 81));
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(formTimerTxt);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(93, 86, 61, 28));
        label_2 = new QLabel(formTimerTxt);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 60, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(formTimerTxt);

        QMetaObject::connectSlotsByName(formTimerTxt);
    } // setupUi

    void retranslateUi(QDialog *formTimerTxt)
    {
        formTimerTxt->setWindowTitle(QCoreApplication::translate("formTimerTxt", "Remainder Time to Start", nullptr));
        label->setText(QCoreApplication::translate("formTimerTxt", "00:00:0a", nullptr));
        pushButton->setText(QCoreApplication::translate("formTimerTxt", "Close", nullptr));
        label_2->setText(QCoreApplication::translate("formTimerTxt", "aprox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formTimerTxt: public Ui_formTimerTxt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTIMERTXT_H
