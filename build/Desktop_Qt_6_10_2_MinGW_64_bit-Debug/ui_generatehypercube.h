/********************************************************************************
** Form generated from reading UI file 'generatehypercube.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEHYPERCUBE_H
#define UI_GENERATEHYPERCUBE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_generateHypercube
{
public:

    void setupUi(QDialog *generateHypercube)
    {
        if (generateHypercube->objectName().isEmpty())
            generateHypercube->setObjectName("generateHypercube");
        generateHypercube->resize(784, 653);

        retranslateUi(generateHypercube);

        QMetaObject::connectSlotsByName(generateHypercube);
    } // setupUi

    void retranslateUi(QDialog *generateHypercube)
    {
        generateHypercube->setWindowTitle(QCoreApplication::translate("generateHypercube", "Hypercube", nullptr));
    } // retranslateUi

};

namespace Ui {
    class generateHypercube: public Ui_generateHypercube {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEHYPERCUBE_H
