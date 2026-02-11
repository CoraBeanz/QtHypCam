/********************************************************************************
** Form generated from reading UI file 'formsquareaperturesettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSQUAREAPERTURESETTINGS_H
#define UI_FORMSQUAREAPERTURESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_formSquareApertureSettings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxBlue;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxGreen;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxRed;
    QLabel *label_4;
    QSpinBox *spinBoxEMIterations;

    void setupUi(QDialog *formSquareApertureSettings)
    {
        if (formSquareApertureSettings->objectName().isEmpty())
            formSquareApertureSettings->setObjectName("formSquareApertureSettings");
        formSquareApertureSettings->resize(400, 300);
        buttonBox = new QDialogButtonBox(formSquareApertureSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formSquareApertureSettings);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 121, 20));
        doubleSpinBoxBlue = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxBlue->setObjectName("doubleSpinBoxBlue");
        doubleSpinBoxBlue->setGeometry(QRect(140, 16, 70, 29));
        doubleSpinBoxBlue->setMinimum(300.000000000000000);
        doubleSpinBoxBlue->setMaximum(510.000000000000000);
        doubleSpinBoxBlue->setValue(438.000000000000000);
        label_2 = new QLabel(formSquareApertureSettings);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 55, 121, 20));
        doubleSpinBoxGreen = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxGreen->setObjectName("doubleSpinBoxGreen");
        doubleSpinBoxGreen->setGeometry(QRect(140, 51, 70, 29));
        doubleSpinBoxGreen->setMinimum(450.000000000000000);
        doubleSpinBoxGreen->setMaximum(570.000000000000000);
        doubleSpinBoxGreen->setValue(542.000000000000000);
        label_3 = new QLabel(formSquareApertureSettings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 90, 121, 20));
        doubleSpinBoxRed = new QDoubleSpinBox(formSquareApertureSettings);
        doubleSpinBoxRed->setObjectName("doubleSpinBoxRed");
        doubleSpinBoxRed->setGeometry(QRect(140, 86, 70, 29));
        doubleSpinBoxRed->setMinimum(500.000000000000000);
        doubleSpinBoxRed->setMaximum(750.000000000000000);
        doubleSpinBoxRed->setValue(618.000000000000000);
        label_4 = new QLabel(formSquareApertureSettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 124, 121, 20));
        spinBoxEMIterations = new QSpinBox(formSquareApertureSettings);
        spinBoxEMIterations->setObjectName("spinBoxEMIterations");
        spinBoxEMIterations->setGeometry(QRect(140, 121, 71, 29));
        spinBoxEMIterations->setMinimum(1);
        spinBoxEMIterations->setMaximum(1000);
        spinBoxEMIterations->setValue(1);

        retranslateUi(formSquareApertureSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formSquareApertureSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formSquareApertureSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formSquareApertureSettings);
    } // setupUi

    void retranslateUi(QDialog *formSquareApertureSettings)
    {
        formSquareApertureSettings->setWindowTitle(QCoreApplication::translate("formSquareApertureSettings", "Fluorescent Wavelengths", nullptr));
        label->setText(QCoreApplication::translate("formSquareApertureSettings", "Wavelen Blue", nullptr));
        label_2->setText(QCoreApplication::translate("formSquareApertureSettings", "Wavelen Green", nullptr));
        label_3->setText(QCoreApplication::translate("formSquareApertureSettings", "Wavelen Red", nullptr));
        label_4->setText(QCoreApplication::translate("formSquareApertureSettings", "EM Iterations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSquareApertureSettings: public Ui_formSquareApertureSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSQUAREAPERTURESETTINGS_H
