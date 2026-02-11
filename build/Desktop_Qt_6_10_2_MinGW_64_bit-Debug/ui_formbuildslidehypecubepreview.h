/********************************************************************************
** Form generated from reading UI file 'formbuildslidehypecubepreview.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H
#define UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formBuildSlideHypeCubePreview
{
public:
    QGraphicsView *gvSlideHypCubePreview;
    QPushButton *pbApply;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *spinBoxWavelen;
    QLineEdit *txtFolder;
    QLabel *label_4;
    QPushButton *pbFolder;
    QPushButton *pbUploadImages;
    QLabel *labelProgBar;
    QProgressBar *progBar;
    QPushButton *pbSettings;
    QPushButton *pbSave;
    QPushButton *pbExportCube;
    QPushButton *pbExportImages;

    void setupUi(QDialog *formBuildSlideHypeCubePreview)
    {
        if (formBuildSlideHypeCubePreview->objectName().isEmpty())
            formBuildSlideHypeCubePreview->setObjectName("formBuildSlideHypeCubePreview");
        formBuildSlideHypeCubePreview->resize(1161, 435);
        gvSlideHypCubePreview = new QGraphicsView(formBuildSlideHypeCubePreview);
        gvSlideHypCubePreview->setObjectName("gvSlideHypCubePreview");
        gvSlideHypCubePreview->setGeometry(QRect(15, 80, 911, 281));
        pbApply = new QPushButton(formBuildSlideHypeCubePreview);
        pbApply->setObjectName("pbApply");
        pbApply->setGeometry(QRect(630, 40, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/FiltroActualizar.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbApply->setIcon(icon);
        layoutWidget = new QWidget(formBuildSlideHypeCubePreview);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 111, 57));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        spinBoxWavelen = new QDoubleSpinBox(layoutWidget);
        spinBoxWavelen->setObjectName("spinBoxWavelen");
        spinBoxWavelen->setMinimum(100.000000000000000);
        spinBoxWavelen->setMaximum(2400.000000000000000);
        spinBoxWavelen->setValue(475.000000000000000);

        gridLayout_2->addWidget(spinBoxWavelen, 1, 0, 1, 1);

        txtFolder = new QLineEdit(formBuildSlideHypeCubePreview);
        txtFolder->setObjectName("txtFolder");
        txtFolder->setGeometry(QRect(135, 40, 201, 28));
        label_4 = new QLabel(formBuildSlideHypeCubePreview);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(175, 10, 75, 20));
        pbFolder = new QPushButton(formBuildSlideHypeCubePreview);
        pbFolder->setObjectName("pbFolder");
        pbFolder->setGeometry(QRect(335, 40, 31, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbFolder->setIcon(icon1);
        pbUploadImages = new QPushButton(formBuildSlideHypeCubePreview);
        pbUploadImages->setObjectName("pbUploadImages");
        pbUploadImages->setGeometry(QRect(500, 40, 111, 28));
        labelProgBar = new QLabel(formBuildSlideHypeCubePreview);
        labelProgBar->setObjectName("labelProgBar");
        labelProgBar->setGeometry(QRect(760, 55, 371, 20));
        labelProgBar->setStyleSheet(QString::fromUtf8(""));
        progBar = new QProgressBar(formBuildSlideHypeCubePreview);
        progBar->setObjectName("progBar");
        progBar->setGeometry(QRect(760, 40, 371, 16));
        progBar->setValue(0);
        pbSettings = new QPushButton(formBuildSlideHypeCubePreview);
        pbSettings->setObjectName("pbSettings");
        pbSettings->setGeometry(QRect(430, 40, 61, 28));
        pbSave = new QPushButton(formBuildSlideHypeCubePreview);
        pbSave->setObjectName("pbSave");
        pbSave->setGeometry(QRect(390, 40, 31, 28));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/imagenInte/document-save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSave->setIcon(icon2);
        pbExportCube = new QPushButton(formBuildSlideHypeCubePreview);
        pbExportCube->setObjectName("pbExportCube");
        pbExportCube->setGeometry(QRect(710, 40, 31, 28));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/imagenInte/hypCube.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbExportCube->setIcon(icon3);
        pbExportImages = new QPushButton(formBuildSlideHypeCubePreview);
        pbExportImages->setObjectName("pbExportImages");
        pbExportImages->setGeometry(QRect(670, 40, 31, 28));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icons/imagenInte/newProject.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbExportImages->setIcon(icon4);

        retranslateUi(formBuildSlideHypeCubePreview);

        QMetaObject::connectSlotsByName(formBuildSlideHypeCubePreview);
    } // setupUi

    void retranslateUi(QDialog *formBuildSlideHypeCubePreview)
    {
        formBuildSlideHypeCubePreview->setWindowTitle(QCoreApplication::translate("formBuildSlideHypeCubePreview", "Build Slide Hypercube Preview", nullptr));
        pbApply->setText(QString());
        label_3->setText(QCoreApplication::translate("formBuildSlideHypeCubePreview", "Wavelength nm", nullptr));
        label_4->setText(QCoreApplication::translate("formBuildSlideHypeCubePreview", "Folder", nullptr));
        pbFolder->setText(QString());
        pbUploadImages->setText(QCoreApplication::translate("formBuildSlideHypeCubePreview", "Upload Images", nullptr));
        labelProgBar->setText(QString());
        pbSettings->setText(QCoreApplication::translate("formBuildSlideHypeCubePreview", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        pbSave->setToolTip(QCoreApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Save Last Layer Exported</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSave->setText(QString());
#if QT_CONFIG(tooltip)
        pbExportCube->setToolTip(QCoreApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Export Slide HypCube</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbExportCube->setText(QString());
#if QT_CONFIG(tooltip)
        pbExportImages->setToolTip(QCoreApplication::translate("formBuildSlideHypeCubePreview", "<html><head/><body><p>Export to Images</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbExportImages->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class formBuildSlideHypeCubePreview: public Ui_formBuildSlideHypeCubePreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBUILDSLIDEHYPECUBEPREVIEW_H
