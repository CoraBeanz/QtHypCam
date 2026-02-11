/********************************************************************************
** Form generated from reading UI file 'formhypercubeanalysis.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHYPERCUBEANALYSIS_H
#define UI_FORMHYPERCUBEANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_formHypercubeAnalysis
{
public:
    QProgressBar *progressBar;
    QPushButton *pbCubeToImg;
    QPushButton *pbLoadCube;
    QLabel *labelImgNumber;
    QSlider *slideTmpImg;
    QLabel *labelProgressBar;
    QPushButton *pbReset;

    void setupUi(QDialog *formHypercubeAnalysis)
    {
        if (formHypercubeAnalysis->objectName().isEmpty())
            formHypercubeAnalysis->setObjectName("formHypercubeAnalysis");
        formHypercubeAnalysis->resize(829, 614);
        formHypercubeAnalysis->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(formHypercubeAnalysis);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(570, 12, 251, 23));
        progressBar->setValue(24);
        pbCubeToImg = new QPushButton(formHypercubeAnalysis);
        pbCubeToImg->setObjectName("pbCubeToImg");
        pbCubeToImg->setGeometry(QRect(10, 12, 81, 28));
        pbLoadCube = new QPushButton(formHypercubeAnalysis);
        pbLoadCube->setObjectName("pbLoadCube");
        pbLoadCube->setGeometry(QRect(210, 13, 84, 28));
        labelImgNumber = new QLabel(formHypercubeAnalysis);
        labelImgNumber->setObjectName("labelImgNumber");
        labelImgNumber->setGeometry(QRect(10, 82, 471, 20));
        slideTmpImg = new QSlider(formHypercubeAnalysis);
        slideTmpImg->setObjectName("slideTmpImg");
        slideTmpImg->setGeometry(QRect(10, 50, 811, 31));
        slideTmpImg->setOrientation(Qt::Horizontal);
        labelProgressBar = new QLabel(formHypercubeAnalysis);
        labelProgressBar->setObjectName("labelProgressBar");
        labelProgressBar->setGeometry(QRect(570, 40, 251, 20));
        pbReset = new QPushButton(formHypercubeAnalysis);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(110, 12, 84, 28));

        retranslateUi(formHypercubeAnalysis);

        QMetaObject::connectSlotsByName(formHypercubeAnalysis);
    } // setupUi

    void retranslateUi(QDialog *formHypercubeAnalysis)
    {
        formHypercubeAnalysis->setWindowTitle(QCoreApplication::translate("formHypercubeAnalysis", "Hypercube Analysis", nullptr));
        pbCubeToImg->setText(QCoreApplication::translate("formHypercubeAnalysis", "Settings", nullptr));
        pbLoadCube->setText(QCoreApplication::translate("formHypercubeAnalysis", "Load Cube", nullptr));
        labelImgNumber->setText(QString());
        labelProgressBar->setText(QString());
        pbReset->setText(QCoreApplication::translate("formHypercubeAnalysis", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formHypercubeAnalysis: public Ui_formHypercubeAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHYPERCUBEANALYSIS_H
