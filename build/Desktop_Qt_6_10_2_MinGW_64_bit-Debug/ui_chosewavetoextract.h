/********************************************************************************
** Form generated from reading UI file 'chosewavetoextract.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOSEWAVETOEXTRACT_H
#define UI_CHOSEWAVETOEXTRACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choseWaveToExtract
{
public:
    QTableWidget *tableOptions;
    QTableWidget *tableChoises;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pbAdd;
    QPushButton *pbRemove;
    QPushButton *pbAddAll;
    QPushButton *pbRemoveAll;
    QDoubleSpinBox *spinBoxStep;

    void setupUi(QDialog *choseWaveToExtract)
    {
        if (choseWaveToExtract->objectName().isEmpty())
            choseWaveToExtract->setObjectName("choseWaveToExtract");
        choseWaveToExtract->resize(429, 332);
        tableOptions = new QTableWidget(choseWaveToExtract);
        if (tableOptions->columnCount() < 1)
            tableOptions->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableOptions->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableOptions->setObjectName("tableOptions");
        tableOptions->setGeometry(QRect(0, 0, 151, 331));
        tableChoises = new QTableWidget(choseWaveToExtract);
        if (tableChoises->columnCount() < 1)
            tableChoises->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableChoises->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableChoises->setObjectName("tableChoises");
        tableChoises->setGeometry(QRect(278, 0, 151, 331));
        layoutWidget = new QWidget(choseWaveToExtract);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 140, 113, 76));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pbAdd = new QPushButton(layoutWidget);
        pbAdd->setObjectName("pbAdd");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/go-next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbAdd->setIcon(icon);

        gridLayout->addWidget(pbAdd, 0, 0, 1, 1);

        pbRemove = new QPushButton(layoutWidget);
        pbRemove->setObjectName("pbRemove");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/imagenInte/go-previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbRemove->setIcon(icon1);

        gridLayout->addWidget(pbRemove, 1, 0, 1, 1);

        pbAddAll = new QPushButton(choseWaveToExtract);
        pbAddAll->setObjectName("pbAddAll");
        pbAddAll->setGeometry(QRect(160, 60, 111, 34));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/imagenInte/go-last.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbAddAll->setIcon(icon2);
        pbRemoveAll = new QPushButton(choseWaveToExtract);
        pbRemoveAll->setObjectName("pbRemoveAll");
        pbRemoveAll->setGeometry(QRect(160, 280, 111, 34));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/imagenInte/go-first.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbRemoveAll->setIcon(icon3);
        spinBoxStep = new QDoubleSpinBox(choseWaveToExtract);
        spinBoxStep->setObjectName("spinBoxStep");
        spinBoxStep->setGeometry(QRect(159, 20, 111, 29));
        spinBoxStep->setMinimum(1.000000000000000);

        retranslateUi(choseWaveToExtract);

        QMetaObject::connectSlotsByName(choseWaveToExtract);
    } // setupUi

    void retranslateUi(QDialog *choseWaveToExtract)
    {
        choseWaveToExtract->setWindowTitle(QCoreApplication::translate("choseWaveToExtract", "Chose wavelength to extract", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableOptions->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("choseWaveToExtract", "Options", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableChoises->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("choseWaveToExtract", "Choises", nullptr));
        pbAdd->setText(QCoreApplication::translate("choseWaveToExtract", "Add       ", nullptr));
        pbRemove->setText(QCoreApplication::translate("choseWaveToExtract", "Remove", nullptr));
        pbAddAll->setText(QCoreApplication::translate("choseWaveToExtract", "Add all", nullptr));
        pbRemoveAll->setText(QCoreApplication::translate("choseWaveToExtract", "Remove all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choseWaveToExtract: public Ui_choseWaveToExtract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOSEWAVETOEXTRACT_H
