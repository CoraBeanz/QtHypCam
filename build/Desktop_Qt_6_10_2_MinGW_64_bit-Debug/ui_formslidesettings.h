/********************************************************************************
** Form generated from reading UI file 'formslidesettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDESETTINGS_H
#define UI_FORMSLIDESETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formSlideSettings
{
public:
    QSpinBox *spinBoxIni;
    QLabel *label_3;
    QLabel *label;
    QSpinBox *spinBoxSpeed;
    QPushButton *pbSave;
    QPushButton *pbClose;
    QSpinBox *spinBoxEnd;
    QSpinBox *spinBoxJump;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QDialog *formSlideSettings)
    {
        if (formSlideSettings->objectName().isEmpty())
            formSlideSettings->setObjectName("formSlideSettings");
        formSlideSettings->resize(231, 245);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/document-properties.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        formSlideSettings->setWindowIcon(icon);
        spinBoxIni = new QSpinBox(formSlideSettings);
        spinBoxIni->setObjectName("spinBoxIni");
        spinBoxIni->setGeometry(QRect(143, 16, 61, 29));
        spinBoxIni->setMaximum(360);
        label_3 = new QLabel(formSlideSettings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 100, 131, 20));
        label = new QLabel(formSlideSettings);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 131, 20));
        spinBoxSpeed = new QSpinBox(formSlideSettings);
        spinBoxSpeed->setObjectName("spinBoxSpeed");
        spinBoxSpeed->setGeometry(QRect(143, 136, 61, 29));
        spinBoxSpeed->setMinimum(800);
        spinBoxSpeed->setMaximum(10000);
        pbSave = new QPushButton(formSlideSettings);
        pbSave->setObjectName("pbSave");
        pbSave->setGeometry(QRect(132, 196, 71, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/imagenInte/document-save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSave->setIcon(icon1);
        pbClose = new QPushButton(formSlideSettings);
        pbClose->setObjectName("pbClose");
        pbClose->setGeometry(QRect(21, 196, 91, 28));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/imagenInte/gtk-cancel.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbClose->setIcon(icon2);
        spinBoxEnd = new QSpinBox(formSlideSettings);
        spinBoxEnd->setObjectName("spinBoxEnd");
        spinBoxEnd->setGeometry(QRect(143, 56, 61, 29));
        spinBoxEnd->setMinimum(5);
        spinBoxEnd->setMaximum(360);
        spinBoxJump = new QSpinBox(formSlideSettings);
        spinBoxJump->setObjectName("spinBoxJump");
        spinBoxJump->setGeometry(QRect(143, 96, 61, 29));
        spinBoxJump->setMinimum(1);
        spinBoxJump->setMaximum(360);
        label_4 = new QLabel(formSlideSettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 140, 131, 20));
        label_2 = new QLabel(formSlideSettings);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 131, 20));

        retranslateUi(formSlideSettings);

        QMetaObject::connectSlotsByName(formSlideSettings);
    } // setupUi

    void retranslateUi(QDialog *formSlideSettings)
    {
        formSlideSettings->setWindowTitle(QCoreApplication::translate("formSlideSettings", "Slide settings", nullptr));
        label_3->setText(QCoreApplication::translate("formSlideSettings", "Jump degree", nullptr));
        label->setText(QCoreApplication::translate("formSlideSettings", "Initial degree", nullptr));
        pbSave->setText(QCoreApplication::translate("formSlideSettings", "Save", nullptr));
        pbClose->setText(QCoreApplication::translate("formSlideSettings", "Close", nullptr));
        label_4->setText(QCoreApplication::translate("formSlideSettings", "Speed", nullptr));
        label_2->setText(QCoreApplication::translate("formSlideSettings", "Final degree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlideSettings: public Ui_formSlideSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDESETTINGS_H
