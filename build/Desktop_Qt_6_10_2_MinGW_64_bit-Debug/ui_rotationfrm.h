/********************************************************************************
** Form generated from reading UI file 'rotationfrm.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROTATIONFRM_H
#define UI_ROTATIONFRM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rotationFrm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinAngle;
    QPushButton *pbSaveRotation;
    QPushButton *pbLoadLastRotation;

    void setupUi(QDialog *rotationFrm)
    {
        if (rotationFrm->objectName().isEmpty())
            rotationFrm->setObjectName("rotationFrm");
        rotationFrm->resize(211, 49);
        widget = new QWidget(rotationFrm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 190, 36));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinAngle = new QDoubleSpinBox(widget);
        spinAngle->setObjectName("spinAngle");
        spinAngle->setDecimals(2);
        spinAngle->setMinimum(-15.000000000000000);
        spinAngle->setMaximum(15.000000000000000);
        spinAngle->setSingleStep(0.010000000000000);

        gridLayout->addWidget(spinAngle, 0, 0, 1, 1);

        pbSaveRotation = new QPushButton(widget);
        pbSaveRotation->setObjectName("pbSaveRotation");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/download-icon.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSaveRotation->setIcon(icon);

        gridLayout->addWidget(pbSaveRotation, 0, 1, 1, 1);

        pbLoadLastRotation = new QPushButton(widget);
        pbLoadLastRotation->setObjectName("pbLoadLastRotation");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/imagenInte/go-top.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbLoadLastRotation->setIcon(icon1);

        gridLayout->addWidget(pbLoadLastRotation, 0, 2, 1, 1);


        retranslateUi(rotationFrm);

        QMetaObject::connectSlotsByName(rotationFrm);
    } // setupUi

    void retranslateUi(QDialog *rotationFrm)
    {
        rotationFrm->setWindowTitle(QCoreApplication::translate("rotationFrm", "Rotate image", nullptr));
#if QT_CONFIG(tooltip)
        pbSaveRotation->setToolTip(QCoreApplication::translate("rotationFrm", "<html><head/><body><p>Save current rotation</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSaveRotation->setText(QString());
#if QT_CONFIG(tooltip)
        pbLoadLastRotation->setToolTip(QCoreApplication::translate("rotationFrm", "<html><head/><body><p>Load last rotation</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLoadLastRotation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rotationFrm: public Ui_rotationFrm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROTATIONFRM_H
