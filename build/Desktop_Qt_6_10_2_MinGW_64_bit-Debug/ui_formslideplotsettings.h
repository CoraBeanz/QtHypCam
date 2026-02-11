/********************************************************************************
** Form generated from reading UI file 'formslideplotsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDEPLOTSETTINGS_H
#define UI_FORMSLIDEPLOTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_formSlidePlotSettings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *spinBoxMinWave;
    QDoubleSpinBox *spinBoxMaxWave;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxXFrame;
    QLabel *label_3;
    QDoubleSpinBox *spinBoxYFrame;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *spinBoxXStep;
    QLabel *label_6;
    QDoubleSpinBox *spinBoxYStep;

    void setupUi(QDialog *formSlidePlotSettings)
    {
        if (formSlidePlotSettings->objectName().isEmpty())
            formSlidePlotSettings->setObjectName("formSlidePlotSettings");
        formSlidePlotSettings->resize(392, 410);
        buttonBox = new QDialogButtonBox(formSlidePlotSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formSlidePlotSettings);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 181, 20));
        spinBoxMinWave = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxMinWave->setObjectName("spinBoxMinWave");
        spinBoxMinWave->setGeometry(QRect(210, 26, 141, 29));
        spinBoxMinWave->setMinimum(0.000000000000000);
        spinBoxMinWave->setMaximum(15000.000000000000000);
        spinBoxMinWave->setValue(0.000000000000000);
        spinBoxMaxWave = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxMaxWave->setObjectName("spinBoxMaxWave");
        spinBoxMaxWave->setGeometry(QRect(210, 66, 141, 29));
        spinBoxMaxWave->setMinimum(0.000000000000000);
        spinBoxMaxWave->setMaximum(15000.000000000000000);
        spinBoxMaxWave->setValue(1100.000000000000000);
        label_2 = new QLabel(formSlidePlotSettings);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 181, 20));
        spinBoxXFrame = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxXFrame->setObjectName("spinBoxXFrame");
        spinBoxXFrame->setGeometry(QRect(210, 106, 141, 29));
        spinBoxXFrame->setMinimum(0.000000000000000);
        spinBoxXFrame->setMaximum(15000.000000000000000);
        spinBoxXFrame->setValue(50.000000000000000);
        label_3 = new QLabel(formSlidePlotSettings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 181, 20));
        spinBoxYFrame = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxYFrame->setObjectName("spinBoxYFrame");
        spinBoxYFrame->setGeometry(QRect(210, 146, 141, 29));
        spinBoxYFrame->setMinimum(0.000000000000000);
        spinBoxYFrame->setMaximum(15000.000000000000000);
        spinBoxYFrame->setValue(50.000000000000000);
        label_4 = new QLabel(formSlidePlotSettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 150, 181, 20));
        label_5 = new QLabel(formSlidePlotSettings);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 194, 181, 20));
        spinBoxXStep = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxXStep->setObjectName("spinBoxXStep");
        spinBoxXStep->setGeometry(QRect(210, 190, 141, 29));
        spinBoxXStep->setMinimum(0.000000000000000);
        spinBoxXStep->setMaximum(15000.000000000000000);
        spinBoxXStep->setValue(10.000000000000000);
        label_6 = new QLabel(formSlidePlotSettings);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 240, 181, 20));
        spinBoxYStep = new QDoubleSpinBox(formSlidePlotSettings);
        spinBoxYStep->setObjectName("spinBoxYStep");
        spinBoxYStep->setGeometry(QRect(210, 236, 141, 29));
        spinBoxYStep->setMinimum(0.000000000000000);
        spinBoxYStep->setMaximum(15000.000000000000000);
        spinBoxYStep->setValue(50.000000000000000);

        retranslateUi(formSlidePlotSettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formSlidePlotSettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formSlidePlotSettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formSlidePlotSettings);
    } // setupUi

    void retranslateUi(QDialog *formSlidePlotSettings)
    {
        formSlidePlotSettings->setWindowTitle(QCoreApplication::translate("formSlidePlotSettings", "Plot Settings", nullptr));
        label->setText(QCoreApplication::translate("formSlidePlotSettings", "Minimum Wavelength", nullptr));
        label_2->setText(QCoreApplication::translate("formSlidePlotSettings", "Maximum Wavelength", nullptr));
        label_3->setText(QCoreApplication::translate("formSlidePlotSettings", "X-Frame", nullptr));
        label_4->setText(QCoreApplication::translate("formSlidePlotSettings", "Y-Frame", nullptr));
        label_5->setText(QCoreApplication::translate("formSlidePlotSettings", "X-Step", nullptr));
        label_6->setText(QCoreApplication::translate("formSlidePlotSettings", "Y-Step", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlidePlotSettings: public Ui_formSlidePlotSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDEPLOTSETTINGS_H
