/********************************************************************************
** Form generated from reading UI file 'recparamfrm.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECPARAMFRM_H
#define UI_RECPARAMFRM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_recParamFrm
{
public:
    QLineEdit *txtParam;
    QPushButton *pbSendParam;

    void setupUi(QDialog *recParamFrm)
    {
        if (recParamFrm->objectName().isEmpty())
            recParamFrm->setObjectName("recParamFrm");
        recParamFrm->resize(252, 51);
        txtParam = new QLineEdit(recParamFrm);
        txtParam->setObjectName("txtParam");
        txtParam->setGeometry(QRect(10, 10, 191, 33));
        pbSendParam = new QPushButton(recParamFrm);
        pbSendParam->setObjectName("pbSendParam");
        pbSendParam->setEnabled(true);
        pbSendParam->setGeometry(QRect(210, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/dialog-apply.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSendParam->setIcon(icon);

        retranslateUi(recParamFrm);

        QMetaObject::connectSlotsByName(recParamFrm);
    } // setupUi

    void retranslateUi(QDialog *recParamFrm)
    {
        recParamFrm->setWindowTitle(QCoreApplication::translate("recParamFrm", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        pbSendParam->setToolTip(QCoreApplication::translate("recParamFrm", "<html><head/><body><p>Play</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSendParam->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class recParamFrm: public Ui_recParamFrm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECPARAMFRM_H
