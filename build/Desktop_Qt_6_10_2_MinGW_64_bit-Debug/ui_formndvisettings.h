/********************************************************************************
** Form generated from reading UI file 'formndvisettings.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNDVISETTINGS_H
#define UI_FORMNDVISETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_formNDVISettings
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QDoubleSpinBox *spinBoxThreshold;
    QCheckBox *cbBrilliant;
    QDoubleSpinBox *spinBoxWeightRatio;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxMinimumValue;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBoxInfrared;
    QComboBox *comboBoxRed;

    void setupUi(QDialog *formNDVISettings)
    {
        if (formNDVISettings->objectName().isEmpty())
            formNDVISettings->setObjectName("formNDVISettings");
        formNDVISettings->resize(294, 353);
        buttonBox = new QDialogButtonBox(formNDVISettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 290, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formNDVISettings);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 131, 20));
        spinBoxThreshold = new QDoubleSpinBox(formNDVISettings);
        spinBoxThreshold->setObjectName("spinBoxThreshold");
        spinBoxThreshold->setGeometry(QRect(170, 26, 91, 29));
        spinBoxThreshold->setMinimum(-1.000000000000000);
        spinBoxThreshold->setMaximum(1.000000000000000);
        cbBrilliant = new QCheckBox(formNDVISettings);
        cbBrilliant->setObjectName("cbBrilliant");
        cbBrilliant->setGeometry(QRect(170, 234, 81, 26));
        spinBoxWeightRatio = new QDoubleSpinBox(formNDVISettings);
        spinBoxWeightRatio->setObjectName("spinBoxWeightRatio");
        spinBoxWeightRatio->setGeometry(QRect(170, 66, 91, 29));
        spinBoxWeightRatio->setMinimum(0.010000000000000);
        spinBoxWeightRatio->setMaximum(100.000000000000000);
        label_2 = new QLabel(formNDVISettings);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 131, 20));
        spinBoxMinimumValue = new QDoubleSpinBox(formNDVISettings);
        spinBoxMinimumValue->setObjectName("spinBoxMinimumValue");
        spinBoxMinimumValue->setGeometry(QRect(170, 106, 91, 29));
        spinBoxMinimumValue->setMinimum(1.000000000000000);
        spinBoxMinimumValue->setMaximum(255.000000000000000);
        label_3 = new QLabel(formNDVISettings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 131, 20));
        label_4 = new QLabel(formNDVISettings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 151, 131, 20));
        label_5 = new QLabel(formNDVISettings);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 192, 131, 20));
        comboBoxInfrared = new QComboBox(formNDVISettings);
        comboBoxInfrared->addItem(QString());
        comboBoxInfrared->addItem(QString());
        comboBoxInfrared->addItem(QString());
        comboBoxInfrared->setObjectName("comboBoxInfrared");
        comboBoxInfrared->setGeometry(QRect(170, 147, 91, 28));
        comboBoxRed = new QComboBox(formNDVISettings);
        comboBoxRed->addItem(QString());
        comboBoxRed->addItem(QString());
        comboBoxRed->addItem(QString());
        comboBoxRed->setObjectName("comboBoxRed");
        comboBoxRed->setGeometry(QRect(170, 185, 91, 28));

        retranslateUi(formNDVISettings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formNDVISettings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formNDVISettings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formNDVISettings);
    } // setupUi

    void retranslateUi(QDialog *formNDVISettings)
    {
        formNDVISettings->setWindowTitle(QCoreApplication::translate("formNDVISettings", "NDVI Settings", nullptr));
        label->setText(QCoreApplication::translate("formNDVISettings", "Threshold", nullptr));
        cbBrilliant->setText(QCoreApplication::translate("formNDVISettings", "Brilliant", nullptr));
        label_2->setText(QCoreApplication::translate("formNDVISettings", "Weight Ratio", nullptr));
        label_3->setText(QCoreApplication::translate("formNDVISettings", "Minimum Value", nullptr));
        label_4->setText(QCoreApplication::translate("formNDVISettings", "Infrared Chanel", nullptr));
        label_5->setText(QCoreApplication::translate("formNDVISettings", "Red Chanel", nullptr));
        comboBoxInfrared->setItemText(0, QCoreApplication::translate("formNDVISettings", "Blue", nullptr));
        comboBoxInfrared->setItemText(1, QCoreApplication::translate("formNDVISettings", "Red", nullptr));
        comboBoxInfrared->setItemText(2, QCoreApplication::translate("formNDVISettings", "Green", nullptr));

        comboBoxRed->setItemText(0, QCoreApplication::translate("formNDVISettings", "Red", nullptr));
        comboBoxRed->setItemText(1, QCoreApplication::translate("formNDVISettings", "Green", nullptr));
        comboBoxRed->setItemText(2, QCoreApplication::translate("formNDVISettings", "Blue", nullptr));

    } // retranslateUi

};

namespace Ui {
    class formNDVISettings: public Ui_formNDVISettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNDVISETTINGS_H
