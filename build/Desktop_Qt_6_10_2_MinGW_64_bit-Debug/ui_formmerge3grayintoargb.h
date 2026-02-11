/********************************************************************************
** Form generated from reading UI file 'formmerge3grayintoargb.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMERGE3GRAYINTOARGB_H
#define UI_FORMMERGE3GRAYINTOARGB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formMerge3GrayIntoARgb
{
public:
    QLineEdit *txtRed;
    QPushButton *pbRed;
    QLabel *labelRed;
    QPushButton *pbGreen;
    QLineEdit *txtGreen;
    QLabel *labelGreen;
    QLineEdit *txtBlue;
    QPushButton *pbBlue;
    QLabel *labelBlue;
    QPushButton *pbSave;

    void setupUi(QDialog *formMerge3GrayIntoARgb)
    {
        if (formMerge3GrayIntoARgb->objectName().isEmpty())
            formMerge3GrayIntoARgb->setObjectName("formMerge3GrayIntoARgb");
        formMerge3GrayIntoARgb->resize(598, 206);
        txtRed = new QLineEdit(formMerge3GrayIntoARgb);
        txtRed->setObjectName("txtRed");
        txtRed->setEnabled(false);
        txtRed->setGeometry(QRect(82, 20, 451, 28));
        pbRed = new QPushButton(formMerge3GrayIntoARgb);
        pbRed->setObjectName("pbRed");
        pbRed->setGeometry(QRect(532, 20, 51, 28));
        labelRed = new QLabel(formMerge3GrayIntoARgb);
        labelRed->setObjectName("labelRed");
        labelRed->setGeometry(QRect(10, 24, 63, 20));
        pbGreen = new QPushButton(formMerge3GrayIntoARgb);
        pbGreen->setObjectName("pbGreen");
        pbGreen->setGeometry(QRect(532, 66, 51, 28));
        txtGreen = new QLineEdit(formMerge3GrayIntoARgb);
        txtGreen->setObjectName("txtGreen");
        txtGreen->setEnabled(false);
        txtGreen->setGeometry(QRect(82, 66, 451, 28));
        labelGreen = new QLabel(formMerge3GrayIntoARgb);
        labelGreen->setObjectName("labelGreen");
        labelGreen->setGeometry(QRect(10, 70, 63, 20));
        txtBlue = new QLineEdit(formMerge3GrayIntoARgb);
        txtBlue->setObjectName("txtBlue");
        txtBlue->setEnabled(false);
        txtBlue->setGeometry(QRect(82, 111, 451, 28));
        pbBlue = new QPushButton(formMerge3GrayIntoARgb);
        pbBlue->setObjectName("pbBlue");
        pbBlue->setGeometry(QRect(532, 111, 51, 28));
        labelBlue = new QLabel(formMerge3GrayIntoARgb);
        labelBlue->setObjectName("labelBlue");
        labelBlue->setGeometry(QRect(10, 115, 63, 20));
        pbSave = new QPushButton(formMerge3GrayIntoARgb);
        pbSave->setObjectName("pbSave");
        pbSave->setGeometry(QRect(350, 160, 181, 28));

        retranslateUi(formMerge3GrayIntoARgb);

        QMetaObject::connectSlotsByName(formMerge3GrayIntoARgb);
    } // setupUi

    void retranslateUi(QDialog *formMerge3GrayIntoARgb)
    {
        formMerge3GrayIntoARgb->setWindowTitle(QCoreApplication::translate("formMerge3GrayIntoARgb", "Create RGB from 3 Gray Images", nullptr));
        pbRed->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "...", nullptr));
        labelRed->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "Red", nullptr));
        pbGreen->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "...", nullptr));
        labelGreen->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "Green", nullptr));
        pbBlue->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "...", nullptr));
        labelBlue->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "Blue", nullptr));
        pbSave->setText(QCoreApplication::translate("formMerge3GrayIntoARgb", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formMerge3GrayIntoARgb: public Ui_formMerge3GrayIntoARgb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMERGE3GRAYINTOARGB_H
