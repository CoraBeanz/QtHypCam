/********************************************************************************
** Form generated from reading UI file 'slidehypcam.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDEHYPCAM_H
#define UI_SLIDEHYPCAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_slideHypCam
{
public:
    QAction *actionpbGetSlideCube;
    QAction *actionSlide_settings;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *slideHypCam)
    {
        if (slideHypCam->objectName().isEmpty())
            slideHypCam->setObjectName("slideHypCam");
        slideHypCam->resize(800, 600);
        actionpbGetSlideCube = new QAction(slideHypCam);
        actionpbGetSlideCube->setObjectName("actionpbGetSlideCube");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/slide.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionpbGetSlideCube->setIcon(icon);
        actionSlide_settings = new QAction(slideHypCam);
        actionSlide_settings->setObjectName("actionSlide_settings");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/imagenInte/document-properties.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSlide_settings->setIcon(icon1);
        centralwidget = new QWidget(slideHypCam);
        centralwidget->setObjectName("centralwidget");
        slideHypCam->setCentralWidget(centralwidget);
        menubar = new QMenuBar(slideHypCam);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        slideHypCam->setMenuBar(menubar);
        statusbar = new QStatusBar(slideHypCam);
        statusbar->setObjectName("statusbar");
        slideHypCam->setStatusBar(statusbar);
        toolBar = new QToolBar(slideHypCam);
        toolBar->setObjectName("toolBar");
        slideHypCam->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionpbGetSlideCube);
        toolBar->addAction(actionSlide_settings);

        retranslateUi(slideHypCam);

        QMetaObject::connectSlotsByName(slideHypCam);
    } // setupUi

    void retranslateUi(QMainWindow *slideHypCam)
    {
        slideHypCam->setWindowTitle(QCoreApplication::translate("slideHypCam", "MainWindow", nullptr));
        actionpbGetSlideCube->setText(QCoreApplication::translate("slideHypCam", "pbGetSlideCube", nullptr));
#if QT_CONFIG(tooltip)
        actionpbGetSlideCube->setToolTip(QCoreApplication::translate("slideHypCam", "Get Slide-Cube", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlide_settings->setText(QCoreApplication::translate("slideHypCam", "Slide settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSlide_settings->setToolTip(QCoreApplication::translate("slideHypCam", "Slide settings", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("slideHypCam", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class slideHypCam: public Ui_slideHypCam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDEHYPCAM_H
