/********************************************************************************
** Form generated from reading UI file 'formslidelinearregression.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSLIDELINEARREGRESSION_H
#define UI_FORMSLIDELINEARREGRESSION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_formSlideLinearRegression
{
public:
    QPushButton *pbGenRegression;
    QLabel *label_2;
    QPushButton *pbRemoveItem;
    QPushButton *pbSelectFile;
    QTableWidget *tableLstPoints;
    QPushButton *pbGenHorRegression;
    QPushButton *pbGenAffinTrans;

    void setupUi(QDialog *formSlideLinearRegression)
    {
        if (formSlideLinearRegression->objectName().isEmpty())
            formSlideLinearRegression->setObjectName("formSlideLinearRegression");
        formSlideLinearRegression->resize(537, 464);
        pbGenRegression = new QPushButton(formSlideLinearRegression);
        pbGenRegression->setObjectName("pbGenRegression");
        pbGenRegression->setGeometry(QRect(260, 380, 221, 28));
        label_2 = new QLabel(formSlideLinearRegression);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 111, 20));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        pbRemoveItem = new QPushButton(formSlideLinearRegression);
        pbRemoveItem->setObjectName("pbRemoveItem");
        pbRemoveItem->setGeometry(QRect(490, 380, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/stop.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbRemoveItem->setIcon(icon);
        pbSelectFile = new QPushButton(formSlideLinearRegression);
        pbSelectFile->setObjectName("pbSelectFile");
        pbSelectFile->setGeometry(QRect(115, 26, 31, 28));
        tableLstPoints = new QTableWidget(formSlideLinearRegression);
        if (tableLstPoints->columnCount() < 4)
            tableLstPoints->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        tableLstPoints->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableLstPoints->setObjectName("tableLstPoints");
        tableLstPoints->setGeometry(QRect(10, 68, 511, 301));
        pbGenHorRegression = new QPushButton(formSlideLinearRegression);
        pbGenHorRegression->setObjectName("pbGenHorRegression");
        pbGenHorRegression->setGeometry(QRect(30, 380, 221, 28));
        pbGenAffinTrans = new QPushButton(formSlideLinearRegression);
        pbGenAffinTrans->setObjectName("pbGenAffinTrans");
        pbGenAffinTrans->setGeometry(QRect(30, 420, 221, 28));

        retranslateUi(formSlideLinearRegression);

        QMetaObject::connectSlotsByName(formSlideLinearRegression);
    } // setupUi

    void retranslateUi(QDialog *formSlideLinearRegression)
    {
        formSlideLinearRegression->setWindowTitle(QCoreApplication::translate("formSlideLinearRegression", "Slide Linear Regression", nullptr));
        pbGenRegression->setText(QCoreApplication::translate("formSlideLinearRegression", "Generate Vertical Calibration", nullptr));
        label_2->setText(QCoreApplication::translate("formSlideLinearRegression", "Select Line", nullptr));
#if QT_CONFIG(tooltip)
        pbRemoveItem->setToolTip(QCoreApplication::translate("formSlideLinearRegression", "<html><head/><body><p>Remove Item</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbRemoveItem->setText(QString());
        pbSelectFile->setText(QCoreApplication::translate("formSlideLinearRegression", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableLstPoints->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("formSlideLinearRegression", "Wavelength", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableLstPoints->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("formSlideLinearRegression", "P1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableLstPoints->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("formSlideLinearRegression", "P2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableLstPoints->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("formSlideLinearRegression", "Image Size", nullptr));
        pbGenHorRegression->setText(QCoreApplication::translate("formSlideLinearRegression", "Generate Horizontal Calibration", nullptr));
        pbGenAffinTrans->setText(QCoreApplication::translate("formSlideLinearRegression", "Generate Affine Transformation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formSlideLinearRegression: public Ui_formSlideLinearRegression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSLIDELINEARREGRESSION_H
