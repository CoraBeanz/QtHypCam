/********************************************************************************
** Form generated from reading UI file 'formmergeslidecalibrations.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMERGESLIDECALIBRATIONS_H
#define UI_FORMMERGESLIDECALIBRATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formMergeSlideCalibrations
{
public:
    QPushButton *pbHorizontal;
    QLabel *labelHor;
    QLineEdit *txtHorPath;
    QLabel *labelHor_2;
    QLineEdit *txtVertPath;
    QPushButton *pbVertical;
    QPushButton *pbMergeCalibration;
    QLineEdit *txtCameraID;
    QLabel *labelHor_3;
    QLabel *labelHor_4;
    QSpinBox *spinBoxOriginH;
    QLabel *labelHor_5;
    QPushButton *pbAffineTrans;
    QLineEdit *txtAffineTrans;
    QPushButton *pbSensitivities;
    QLabel *labelHor_6;
    QLineEdit *txtSensitivities;

    void setupUi(QDialog *formMergeSlideCalibrations)
    {
        if (formMergeSlideCalibrations->objectName().isEmpty())
            formMergeSlideCalibrations->setObjectName("formMergeSlideCalibrations");
        formMergeSlideCalibrations->resize(841, 316);
        pbHorizontal = new QPushButton(formMergeSlideCalibrations);
        pbHorizontal->setObjectName("pbHorizontal");
        pbHorizontal->setGeometry(QRect(770, 20, 41, 28));
        labelHor = new QLabel(formMergeSlideCalibrations);
        labelHor->setObjectName("labelHor");
        labelHor->setGeometry(QRect(14, 25, 121, 20));
        txtHorPath = new QLineEdit(formMergeSlideCalibrations);
        txtHorPath->setObjectName("txtHorPath");
        txtHorPath->setEnabled(false);
        txtHorPath->setGeometry(QRect(140, 20, 631, 28));
        labelHor_2 = new QLabel(formMergeSlideCalibrations);
        labelHor_2->setObjectName("labelHor_2");
        labelHor_2->setGeometry(QRect(14, 65, 121, 20));
        txtVertPath = new QLineEdit(formMergeSlideCalibrations);
        txtVertPath->setObjectName("txtVertPath");
        txtVertPath->setEnabled(false);
        txtVertPath->setGeometry(QRect(140, 60, 631, 28));
        pbVertical = new QPushButton(formMergeSlideCalibrations);
        pbVertical->setObjectName("pbVertical");
        pbVertical->setGeometry(QRect(770, 60, 41, 28));
        pbMergeCalibration = new QPushButton(formMergeSlideCalibrations);
        pbMergeCalibration->setObjectName("pbMergeCalibration");
        pbMergeCalibration->setGeometry(QRect(140, 273, 161, 28));
        txtCameraID = new QLineEdit(formMergeSlideCalibrations);
        txtCameraID->setObjectName("txtCameraID");
        txtCameraID->setGeometry(QRect(140, 225, 161, 28));
        labelHor_3 = new QLabel(formMergeSlideCalibrations);
        labelHor_3->setObjectName("labelHor_3");
        labelHor_3->setGeometry(QRect(14, 230, 121, 20));
        labelHor_4 = new QLabel(formMergeSlideCalibrations);
        labelHor_4->setObjectName("labelHor_4");
        labelHor_4->setGeometry(QRect(14, 185, 121, 20));
        spinBoxOriginH = new QSpinBox(formMergeSlideCalibrations);
        spinBoxOriginH->setObjectName("spinBoxOriginH");
        spinBoxOriginH->setGeometry(QRect(140, 180, 161, 29));
        spinBoxOriginH->setMinimum(20);
        spinBoxOriginH->setMaximum(3000);
        labelHor_5 = new QLabel(formMergeSlideCalibrations);
        labelHor_5->setObjectName("labelHor_5");
        labelHor_5->setGeometry(QRect(14, 105, 121, 20));
        pbAffineTrans = new QPushButton(formMergeSlideCalibrations);
        pbAffineTrans->setObjectName("pbAffineTrans");
        pbAffineTrans->setGeometry(QRect(770, 100, 41, 28));
        txtAffineTrans = new QLineEdit(formMergeSlideCalibrations);
        txtAffineTrans->setObjectName("txtAffineTrans");
        txtAffineTrans->setEnabled(false);
        txtAffineTrans->setGeometry(QRect(140, 100, 631, 28));
        pbSensitivities = new QPushButton(formMergeSlideCalibrations);
        pbSensitivities->setObjectName("pbSensitivities");
        pbSensitivities->setGeometry(QRect(770, 140, 41, 28));
        labelHor_6 = new QLabel(formMergeSlideCalibrations);
        labelHor_6->setObjectName("labelHor_6");
        labelHor_6->setGeometry(QRect(14, 145, 121, 20));
        txtSensitivities = new QLineEdit(formMergeSlideCalibrations);
        txtSensitivities->setObjectName("txtSensitivities");
        txtSensitivities->setEnabled(false);
        txtSensitivities->setGeometry(QRect(140, 140, 631, 28));
        pbMergeCalibration->raise();
        pbHorizontal->raise();
        labelHor->raise();
        txtHorPath->raise();
        labelHor_2->raise();
        txtVertPath->raise();
        pbVertical->raise();
        txtCameraID->raise();
        labelHor_3->raise();
        labelHor_4->raise();
        spinBoxOriginH->raise();
        labelHor_5->raise();
        pbAffineTrans->raise();
        txtAffineTrans->raise();
        pbSensitivities->raise();
        labelHor_6->raise();
        txtSensitivities->raise();

        retranslateUi(formMergeSlideCalibrations);

        QMetaObject::connectSlotsByName(formMergeSlideCalibrations);
    } // setupUi

    void retranslateUi(QDialog *formMergeSlideCalibrations)
    {
        formMergeSlideCalibrations->setWindowTitle(QCoreApplication::translate("formMergeSlideCalibrations", "Merge Calibration", nullptr));
        pbHorizontal->setText(QCoreApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        labelHor->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Horizontal (*)", nullptr));
        labelHor_2->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Vertical (*)", nullptr));
        pbVertical->setText(QCoreApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        pbMergeCalibration->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Merge Calibration", nullptr));
        labelHor_3->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Camera ID (*)", nullptr));
        labelHor_4->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Origin H (*)", nullptr));
        labelHor_5->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Transformation (*)", nullptr));
        pbAffineTrans->setText(QCoreApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        pbSensitivities->setText(QCoreApplication::translate("formMergeSlideCalibrations", "...", nullptr));
        labelHor_6->setText(QCoreApplication::translate("formMergeSlideCalibrations", "Sensitivities", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formMergeSlideCalibrations: public Ui_formMergeSlideCalibrations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMERGESLIDECALIBRATIONS_H
