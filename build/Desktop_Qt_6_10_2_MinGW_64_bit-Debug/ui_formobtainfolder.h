/********************************************************************************
** Form generated from reading UI file 'formobtainfolder.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMOBTAINFOLDER_H
#define UI_FORMOBTAINFOLDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formObtainFolder
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *txtSource;
    QLineEdit *txtDestination;
    QLabel *label_2;
    QPushButton *pbFolderDestination;

    void setupUi(QDialog *formObtainFolder)
    {
        if (formObtainFolder->objectName().isEmpty())
            formObtainFolder->setObjectName("formObtainFolder");
        formObtainFolder->resize(400, 300);
        buttonBox = new QDialogButtonBox(formObtainFolder);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(formObtainFolder);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 63, 20));
        txtSource = new QLineEdit(formObtainFolder);
        txtSource->setObjectName("txtSource");
        txtSource->setGeometry(QRect(105, 67, 241, 28));
        txtDestination = new QLineEdit(formObtainFolder);
        txtDestination->setObjectName("txtDestination");
        txtDestination->setGeometry(QRect(105, 110, 241, 28));
        label_2 = new QLabel(formObtainFolder);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 113, 81, 20));
        pbFolderDestination = new QPushButton(formObtainFolder);
        pbFolderDestination->setObjectName("pbFolderDestination");
        pbFolderDestination->setGeometry(QRect(356, 110, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbFolderDestination->setIcon(icon);

        retranslateUi(formObtainFolder);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, formObtainFolder, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, formObtainFolder, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(formObtainFolder);
    } // setupUi

    void retranslateUi(QDialog *formObtainFolder)
    {
        formObtainFolder->setWindowTitle(QCoreApplication::translate("formObtainFolder", "Obtain Folder", nullptr));
        label->setText(QCoreApplication::translate("formObtainFolder", "Source", nullptr));
        label_2->setText(QCoreApplication::translate("formObtainFolder", "Destination", nullptr));
#if QT_CONFIG(tooltip)
        pbFolderDestination->setToolTip(QCoreApplication::translate("formObtainFolder", "<html><head/><body><p>Origin</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbFolderDestination->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class formObtainFolder: public Ui_formObtainFolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMOBTAINFOLDER_H
