/********************************************************************************
** Form generated from reading UI file 'formgenlinearregression.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMGENLINEARREGRESSION_H
#define UI_FORMGENLINEARREGRESSION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_formGenLinearRegression
{
public:
    QPushButton *pbSelectFile;
    QDoubleSpinBox *spinWavelen;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableLstPoints;
    QPushButton *pbRemoveItem;
    QPushButton *pbGenRegression;

    void setupUi(QDialog *formGenLinearRegression)
    {
        if (formGenLinearRegression->objectName().isEmpty())
            formGenLinearRegression->setObjectName("formGenLinearRegression");
        formGenLinearRegression->resize(365, 387);
        pbSelectFile = new QPushButton(formGenLinearRegression);
        pbSelectFile->setObjectName("pbSelectFile");
        pbSelectFile->setGeometry(QRect(114, 60, 31, 28));
        spinWavelen = new QDoubleSpinBox(formGenLinearRegression);
        spinWavelen->setObjectName("spinWavelen");
        spinWavelen->setGeometry(QRect(114, 16, 121, 29));
        spinWavelen->setMaximum(2400.000000000000000);
        label = new QLabel(formGenLinearRegression);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 91, 20));
        label_2 = new QLabel(formGenLinearRegression);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 64, 91, 20));
        tableLstPoints = new QTableWidget(formGenLinearRegression);
        if (tableLstPoints->columnCount() < 3)
            tableLstPoints->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableLstPoints->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableLstPoints->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableLstPoints->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableLstPoints->setObjectName("tableLstPoints");
        tableLstPoints->setGeometry(QRect(20, 120, 321, 211));
        pbRemoveItem = new QPushButton(formGenLinearRegression);
        pbRemoveItem->setObjectName("pbRemoveItem");
        pbRemoveItem->setGeometry(QRect(310, 340, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/stop.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbRemoveItem->setIcon(icon);
        pbGenRegression = new QPushButton(formGenLinearRegression);
        pbGenRegression->setObjectName("pbGenRegression");
        pbGenRegression->setGeometry(QRect(140, 340, 161, 28));

        retranslateUi(formGenLinearRegression);

        QMetaObject::connectSlotsByName(formGenLinearRegression);
    } // setupUi

    void retranslateUi(QDialog *formGenLinearRegression)
    {
        formGenLinearRegression->setWindowTitle(QCoreApplication::translate("formGenLinearRegression", "Generate Linear Regression", nullptr));
        pbSelectFile->setText(QCoreApplication::translate("formGenLinearRegression", "...", nullptr));
        label->setText(QCoreApplication::translate("formGenLinearRegression", "Wavelength", nullptr));
        label_2->setText(QCoreApplication::translate("formGenLinearRegression", "Centroid", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableLstPoints->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("formGenLinearRegression", "Wavelength", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableLstPoints->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("formGenLinearRegression", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableLstPoints->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("formGenLinearRegression", "Y", nullptr));
#if QT_CONFIG(tooltip)
        pbRemoveItem->setToolTip(QCoreApplication::translate("formGenLinearRegression", "<html><head/><body><p>Remove Item</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRemoveItem->setText(QString());
        pbGenRegression->setText(QCoreApplication::translate("formGenLinearRegression", "Generate Regression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formGenLinearRegression: public Ui_formGenLinearRegression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMGENLINEARREGRESSION_H
