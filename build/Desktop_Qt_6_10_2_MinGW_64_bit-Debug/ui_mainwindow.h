/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionRect;
    QAction *actionCircle;
    QAction *actionHorizontalLine;
    QAction *actionVerticalLine;
    QAction *actionClear;
    QAction *actionSelection;
    QAction *actionDrawToolbar;
    QAction *actionDoubAxisDiff;
    QAction *actionRotateImg;
    QAction *actionLoadCanvas;
    QAction *actionApplyThreshold;
    QAction *actionLoadSquareRectangle;
    QAction *actionLoadRegOfInteres;
    QAction *actionToolPenArea;
    QAction *actionSaveCanvas;
    QAction *actionSend_to_XYZ;
    QAction *actionExportPixelsSelected;
    QAction *actionGenHypercube;
    QAction *actionValidCal;
    QAction *actionValCal;
    QAction *actionSquareUsable;
    QAction *actionChoseWavelength;
    QAction *actionFittFunction;
    QAction *actionShow_hypercube;
    QAction *actionBilinear_interpolation;
    QAction *actionslideHypCam;
    QAction *pbDrawSlide;
    QAction *actionSlide_settings;
    QAction *actionsquareSettings;
    QAction *actionvideoToFrames;
    QAction *actionframesToCube;
    QAction *actionNDVI;
    QAction *actionRGB_to_XY;
    QAction *actionNDVI_Algorithm;
    QAction *actionFull_Screen;
    QAction *actionDisplay_Original;
    QAction *actionFull_photo;
    QAction *actionDiffraction;
    QAction *actionAperture;
    QAction *actionSlideDiffraction;
    QAction *actionVideo;
    QAction *actionTimelapse;
    QAction *actionSave;
    QAction *actionComposed;
    QAction *actionObtain_Folder;
    QAction *actionObtain_File;
    QAction *actionSlide_Build_Hypercube;
    QAction *actionVideo_2;
    QAction *actionTimelapse_2;
    QAction *actionSnapshot;
    QAction *actionSnapvideos;
    QAction *actionSynchronize;
    QAction *actionAbout_this;
    QAction *actionTechnical_Support;
    QAction *actionSync_Folder;
    QAction *actionFull_Video;
    QAction *actionMultiImageAverage;
    QAction *actionMultiImageMinimum;
    QAction *actionMultiImageMaximum;
    QAction *actionSlide_Settings;
    QAction *actionSquare_Location;
    QAction *actionLinear_Regression;
    QAction *actionDiffraction_Origin;
    QAction *openLine;
    QAction *actionSlide_Linear_Regression;
    QAction *actionarcLine;
    QAction *actionPlot_Calculated_Line;
    QAction *actionPlot_Upper_Line_Rotation;
    QAction *actionOrigin;
    QAction *actionBuld_HypImg;
    QAction *actionMerge_Calibration;
    QAction *actionPlot_over_Real;
    QAction *actionPlot_Line_at_Wavelength;
    QAction *actionSlide_Calibration_File;
    QAction *actionMerge_into_RGB;
    QAction *actionTesting;
    QAction *actionApply_Rotation;
    QAction *actionApply_Transformation;
    QAction *actionRestore_Original;
    QAction *actionExtract_frames_2;
    QAction *actionBuild_HypCube;
    QAction *actionSlide_Max_Wavelength;
    QAction *actionBuild_HypCube_2;
    QAction *actionSlide_HypCube_Building;
    QAction *actionCamera_Sensitivities;
    QAction *actionCalc_Sensitivities;
    QAction *actionSlide_Min_Wavelength;
    QAction *actionHypCube_From_H264;
    QAction *actionCube_Analysis;
    QAction *actionApply_Affine_Transformation;
    QAction *actionApply_Optical_Correction;
    QAction *actionExtract_ROI;
    QAction *actionApply_Region_of_Interes;
    QWidget *centralWidget;
    QTabWidget *pbExpPixs;
    QWidget *tab;
    QTableWidget *tableLstCams;
    QFrame *frame;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *labelIP;
    QLineEdit *txtIp;
    QPushButton *pbAddIp;
    QPushButton *pbSearchAll;
    QFrame *frame_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QPushButton *pbSendComm;
    QCheckBox *checkBlind;
    QLabel *labelCommand;
    QLineEdit *txtCommand;
    QPushButton *pbShutdown;
    QTextEdit *txtCommRes;
    QPushButton *pbConnect;
    QPushButton *pbLANConnect;
    QPushButton *pbLANTestConn;
    QWidget *tab_2;
    QLabel *labelVideo;
    QFrame *frame_3;
    QLabel *labelSquareShuterSpeed_4;
    QSpinBox *spinBoxTimelapse;
    QLabel *labelSquareShuterSpeed_3;
    QSpinBox *spinBoxTimelapseDuration;
    QLabel *labelSquareShuterSpeed_6;
    QLabel *labelSquareShuterSpeed_7;
    QFrame *frame_4;
    QSpinBox *spinBoxVideoDuration;
    QComboBox *cbAWB;
    QLabel *labelSquareShuterSpeed;
    QLabel *label_3;
    QSpinBox *spinBoxShuterSpeed;
    QLabel *label_2;
    QLabel *labelSquareShuterSpeed_2;
    QSpinBox *spinBoxSquareShuterSpeed;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbColorBalance;
    QCheckBox *cbDenoise;
    QCheckBox *cbFlipped;
    QComboBox *cbExposure;
    QGroupBox *groupResolution;
    QRadioButton *radioRes5Mp;
    QRadioButton *radioRes8Mp;
    QLabel *labelSquareShuterSpeed_5;
    QLabel *labelISO;
    QSlider *slideISO;
    QLabel *labelSquareShuterSpeed_8;
    QLabel *labelSquareShuterSpeed_9;
    QLabel *labelSquareShuterSpeed_10;
    QFrame *frame_5;
    QPushButton *pbSaveImage;
    QPushButton *pbSnapshot;
    QPushButton *pbSnapVid;
    QPushButton *pbTimeLapse;
    QPushButton *pbOneShotSnapshot;
    QPushButton *pbSnapshotSquare;
    QFrame *frame_6;
    QLineEdit *txtCamParamXMLName;
    QPushButton *pbSaveRaspParam;
    QPushButton *pbCopyShutter;
    QPushButton *pbObtPar;
    QFrame *frame_7;
    QSlider *slideTriggerTime;
    QLabel *labelTriggerTime;
    QWidget *tab_6;
    QWidget *tabShowPixels;
    QPushButton *pbSelectFolder;
    QGraphicsView *graphViewPlot;
    QSlider *slideChangeImage;
    QLabel *labelCubeImageName;
    QWidget *tab_5;
    QWidget *layoutWidget4;
    QGridLayout *gridColors;
    QSlider *slideRedLen;
    QSlider *slideBlueLen;
    QSlider *slideGreenLen;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_5;
    QCheckBox *chbGreen;
    QPushButton *pbSpecSnapshot;
    QCheckBox *chbRed;
    QSpinBox *sbSpecUsb;
    QCheckBox *chbBlue;
    QLabel *label_4;
    QPushButton *pbViewBack;
    QPushButton *pbSnapCal;
    QPushButton *pbSpecCut;
    QPushButton *pbSpecLoadSnap;
    QProgressBar *progBar;
    QLabel *labelProgBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImage;
    QMenu *menuFilter;
    QMenu *menuMultiselected;
    QMenu *menuMerge;
    QMenu *menuAnalysis;
    QMenu *menuSettings;
    QMenu *menuSet;
    QMenu *menuCamera;
    QMenu *menuDouble_Axis;
    QMenu *menuSlide;
    QMenu *menuCompute;
    QMenu *menuObtain;
    QMenu *menuSend;
    QMenu *menuStart;
    QMenu *menuHelp;
    QMenu *menuMake;
    QMenu *menuPlot;
    QMenu *menuCalib_Edition;
    QMenu *menuLocal;
    QMenu *menuSlide_2;
    QMenu *menuStep_by_Step;
    QMenu *menuSquare;
    QToolBar *toolBarDraw;
    QToolBar *mainToolbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1141, 769);
        MainWindow->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/imagenInte/hypCube.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionRect = new QAction(MainWindow);
        actionRect->setObjectName("actionRect");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenInte/rectOn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRect->setIcon(icon1);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName("actionCircle");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenInte/circleOff.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCircle->setIcon(icon2);
        actionHorizontalLine = new QAction(MainWindow);
        actionHorizontalLine->setObjectName("actionHorizontalLine");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagenInte/HorizLineOn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionHorizontalLine->setIcon(icon3);
        actionVerticalLine = new QAction(MainWindow);
        actionVerticalLine->setObjectName("actionVerticalLine");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagenInte/VerticalLineOn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVerticalLine->setIcon(icon4);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName("actionClear");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icons/imagenInte/edit-clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClear->setIcon(icon5);
        actionSelection = new QAction(MainWindow);
        actionSelection->setObjectName("actionSelection");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagenInte/MouseSelOn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSelection->setIcon(icon6);
        actionDrawToolbar = new QAction(MainWindow);
        actionDrawToolbar->setObjectName("actionDrawToolbar");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/icons/imagenInte/categorias1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDrawToolbar->setIcon(icon7);
        actionDoubAxisDiff = new QAction(MainWindow);
        actionDoubAxisDiff->setObjectName("actionDoubAxisDiff");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/icons/imagenInte/DoubleAxisDiff.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDoubAxisDiff->setIcon(icon8);
        actionRotateImg = new QAction(MainWindow);
        actionRotateImg->setObjectName("actionRotateImg");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/icons/imagenInte/actualizar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRotateImg->setIcon(icon9);
        actionLoadCanvas = new QAction(MainWindow);
        actionLoadCanvas->setObjectName("actionLoadCanvas");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/icons/imagenInte/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLoadCanvas->setIcon(icon10);
        actionApplyThreshold = new QAction(MainWindow);
        actionApplyThreshold->setObjectName("actionApplyThreshold");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/icons/imagenInte/FiltroActualizar.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionApplyThreshold->setIcon(icon11);
        actionLoadSquareRectangle = new QAction(MainWindow);
        actionLoadSquareRectangle->setObjectName("actionLoadSquareRectangle");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/icons/imagenInte/squareSmall.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLoadSquareRectangle->setIcon(icon12);
        actionLoadRegOfInteres = new QAction(MainWindow);
        actionLoadRegOfInteres->setObjectName("actionLoadRegOfInteres");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/icons/imagenInte/squareBig.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLoadRegOfInteres->setIcon(icon13);
        actionToolPenArea = new QAction(MainWindow);
        actionToolPenArea->setObjectName("actionToolPenArea");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/imagenInte/toolSelect.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionToolPenArea->setIcon(icon14);
        actionSaveCanvas = new QAction(MainWindow);
        actionSaveCanvas->setObjectName("actionSaveCanvas");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/icons/imagenInte/snapshot"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveCanvas->setIcon(icon15);
        actionSend_to_XYZ = new QAction(MainWindow);
        actionSend_to_XYZ->setObjectName("actionSend_to_XYZ");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/icons/imagenInte/calRight.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSend_to_XYZ->setIcon(icon16);
        actionExportPixelsSelected = new QAction(MainWindow);
        actionExportPixelsSelected->setObjectName("actionExportPixelsSelected");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/icons/imagenInte/add-221.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExportPixelsSelected->setIcon(icon17);
        actionGenHypercube = new QAction(MainWindow);
        actionGenHypercube->setObjectName("actionGenHypercube");
        actionGenHypercube->setIcon(icon);
        actionValidCal = new QAction(MainWindow);
        actionValidCal->setObjectName("actionValidCal");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/icons/imagenInte/validCal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionValidCal->setIcon(icon18);
        actionValCal = new QAction(MainWindow);
        actionValCal->setObjectName("actionValCal");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/new/icons/imagenInte/ojo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionValCal->setIcon(icon19);
        actionSquareUsable = new QAction(MainWindow);
        actionSquareUsable->setObjectName("actionSquareUsable");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/new/icons/imagenInte/squareUsable.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSquareUsable->setIcon(icon20);
        actionChoseWavelength = new QAction(MainWindow);
        actionChoseWavelength->setObjectName("actionChoseWavelength");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/new/icons/imagenInte/hypChose.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionChoseWavelength->setIcon(icon21);
        actionFittFunction = new QAction(MainWindow);
        actionFittFunction->setObjectName("actionFittFunction");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/new/icons/imagenInte/fitt.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFittFunction->setIcon(icon22);
        actionShow_hypercube = new QAction(MainWindow);
        actionShow_hypercube->setObjectName("actionShow_hypercube");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/new/icons/imagenInte/newProject.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShow_hypercube->setIcon(icon23);
        actionBilinear_interpolation = new QAction(MainWindow);
        actionBilinear_interpolation->setObjectName("actionBilinear_interpolation");
        actionslideHypCam = new QAction(MainWindow);
        actionslideHypCam->setObjectName("actionslideHypCam");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/new/icons/imagenInte/slideForm.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionslideHypCam->setIcon(icon24);
        pbDrawSlide = new QAction(MainWindow);
        pbDrawSlide->setObjectName("pbDrawSlide");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/new/icons/imagenInte/slideArea.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbDrawSlide->setIcon(icon25);
        actionSlide_settings = new QAction(MainWindow);
        actionSlide_settings->setObjectName("actionSlide_settings");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/new/icons/imagenInte/slideConfig.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSlide_settings->setIcon(icon26);
        actionsquareSettings = new QAction(MainWindow);
        actionsquareSettings->setObjectName("actionsquareSettings");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/new/icons/imagenInte/document-properties.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionsquareSettings->setIcon(icon27);
        actionvideoToFrames = new QAction(MainWindow);
        actionvideoToFrames->setObjectName("actionvideoToFrames");
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/new/icons/imagenInte/videoToFrames.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionvideoToFrames->setIcon(icon28);
        actionframesToCube = new QAction(MainWindow);
        actionframesToCube->setObjectName("actionframesToCube");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/new/icons/imagenInte/framesToCube.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionframesToCube->setIcon(icon29);
        actionNDVI = new QAction(MainWindow);
        actionNDVI->setObjectName("actionNDVI");
        actionRGB_to_XY = new QAction(MainWindow);
        actionRGB_to_XY->setObjectName("actionRGB_to_XY");
        actionNDVI_Algorithm = new QAction(MainWindow);
        actionNDVI_Algorithm->setObjectName("actionNDVI_Algorithm");
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName("actionFull_Screen");
        actionDisplay_Original = new QAction(MainWindow);
        actionDisplay_Original->setObjectName("actionDisplay_Original");
        actionFull_photo = new QAction(MainWindow);
        actionFull_photo->setObjectName("actionFull_photo");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/new/icons/imagenInte/snapshot.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFull_photo->setIcon(icon30);
        actionDiffraction = new QAction(MainWindow);
        actionDiffraction->setObjectName("actionDiffraction");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/new/icons/imagenInte/oneShotSnap.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDiffraction->setIcon(icon31);
        actionAperture = new QAction(MainWindow);
        actionAperture->setObjectName("actionAperture");
        actionSlideDiffraction = new QAction(MainWindow);
        actionSlideDiffraction->setObjectName("actionSlideDiffraction");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/new/icons/imagenInte/slideDiff.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSlideDiffraction->setIcon(icon32);
        actionVideo = new QAction(MainWindow);
        actionVideo->setObjectName("actionVideo");
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/new/icons/imagenInte/dragonplayer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVideo->setIcon(icon33);
        actionTimelapse = new QAction(MainWindow);
        actionTimelapse->setObjectName("actionTimelapse");
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/new/icons/imagenInte/slide.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTimelapse->setIcon(icon34);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/new/icons/imagenInte/download-icon.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon35);
        actionComposed = new QAction(MainWindow);
        actionComposed->setObjectName("actionComposed");
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/new/icons/imagenInte/takeSquare.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionComposed->setIcon(icon36);
        actionObtain_Folder = new QAction(MainWindow);
        actionObtain_Folder->setObjectName("actionObtain_Folder");
        actionObtain_File = new QAction(MainWindow);
        actionObtain_File->setObjectName("actionObtain_File");
        actionSlide_Build_Hypercube = new QAction(MainWindow);
        actionSlide_Build_Hypercube->setObjectName("actionSlide_Build_Hypercube");
        actionSlide_Build_Hypercube->setIcon(icon22);
        actionVideo_2 = new QAction(MainWindow);
        actionVideo_2->setObjectName("actionVideo_2");
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/new/icons/imagenInte/startVideo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionVideo_2->setIcon(icon37);
        actionTimelapse_2 = new QAction(MainWindow);
        actionTimelapse_2->setObjectName("actionTimelapse_2");
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/new/icons/imagenInte/timelapse.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionTimelapse_2->setIcon(icon38);
        actionSnapshot = new QAction(MainWindow);
        actionSnapshot->setObjectName("actionSnapshot");
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/new/icons/imagenInte/digikam.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSnapshot->setIcon(icon39);
        actionSnapvideos = new QAction(MainWindow);
        actionSnapvideos->setObjectName("actionSnapvideos");
        actionSnapvideos->setIcon(icon34);
        actionSynchronize = new QAction(MainWindow);
        actionSynchronize->setObjectName("actionSynchronize");
        actionSynchronize->setIcon(icon9);
        actionAbout_this = new QAction(MainWindow);
        actionAbout_this->setObjectName("actionAbout_this");
        actionTechnical_Support = new QAction(MainWindow);
        actionTechnical_Support->setObjectName("actionTechnical_Support");
        actionSync_Folder = new QAction(MainWindow);
        actionSync_Folder->setObjectName("actionSync_Folder");
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/new/icons/imagenInte/folder-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSync_Folder->setIcon(icon40);
        actionFull_Video = new QAction(MainWindow);
        actionFull_Video->setObjectName("actionFull_Video");
        actionFull_Video->setIcon(icon33);
        actionMultiImageAverage = new QAction(MainWindow);
        actionMultiImageAverage->setObjectName("actionMultiImageAverage");
        actionMultiImageMinimum = new QAction(MainWindow);
        actionMultiImageMinimum->setObjectName("actionMultiImageMinimum");
        actionMultiImageMaximum = new QAction(MainWindow);
        actionMultiImageMaximum->setObjectName("actionMultiImageMaximum");
        actionSlide_Settings = new QAction(MainWindow);
        actionSlide_Settings->setObjectName("actionSlide_Settings");
        actionSquare_Location = new QAction(MainWindow);
        actionSquare_Location->setObjectName("actionSquare_Location");
        actionLinear_Regression = new QAction(MainWindow);
        actionLinear_Regression->setObjectName("actionLinear_Regression");
        actionDiffraction_Origin = new QAction(MainWindow);
        actionDiffraction_Origin->setObjectName("actionDiffraction_Origin");
        openLine = new QAction(MainWindow);
        openLine->setObjectName("openLine");
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/new/icons/imagenInte/lineOpen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        openLine->setIcon(icon41);
        actionSlide_Linear_Regression = new QAction(MainWindow);
        actionSlide_Linear_Regression->setObjectName("actionSlide_Linear_Regression");
        actionarcLine = new QAction(MainWindow);
        actionarcLine->setObjectName("actionarcLine");
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/new/icons/imagenInte/bezierLine.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionarcLine->setIcon(icon42);
        actionPlot_Calculated_Line = new QAction(MainWindow);
        actionPlot_Calculated_Line->setObjectName("actionPlot_Calculated_Line");
        actionPlot_Upper_Line_Rotation = new QAction(MainWindow);
        actionPlot_Upper_Line_Rotation->setObjectName("actionPlot_Upper_Line_Rotation");
        actionOrigin = new QAction(MainWindow);
        actionOrigin->setObjectName("actionOrigin");
        actionBuld_HypImg = new QAction(MainWindow);
        actionBuld_HypImg->setObjectName("actionBuld_HypImg");
        actionMerge_Calibration = new QAction(MainWindow);
        actionMerge_Calibration->setObjectName("actionMerge_Calibration");
        actionPlot_over_Real = new QAction(MainWindow);
        actionPlot_over_Real->setObjectName("actionPlot_over_Real");
        actionPlot_Line_at_Wavelength = new QAction(MainWindow);
        actionPlot_Line_at_Wavelength->setObjectName("actionPlot_Line_at_Wavelength");
        actionSlide_Calibration_File = new QAction(MainWindow);
        actionSlide_Calibration_File->setObjectName("actionSlide_Calibration_File");
        actionMerge_into_RGB = new QAction(MainWindow);
        actionMerge_into_RGB->setObjectName("actionMerge_into_RGB");
        actionTesting = new QAction(MainWindow);
        actionTesting->setObjectName("actionTesting");
        actionApply_Rotation = new QAction(MainWindow);
        actionApply_Rotation->setObjectName("actionApply_Rotation");
        actionApply_Transformation = new QAction(MainWindow);
        actionApply_Transformation->setObjectName("actionApply_Transformation");
        actionRestore_Original = new QAction(MainWindow);
        actionRestore_Original->setObjectName("actionRestore_Original");
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/new/icons/imagenInte/add-66.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRestore_Original->setIcon(icon43);
        actionExtract_frames_2 = new QAction(MainWindow);
        actionExtract_frames_2->setObjectName("actionExtract_frames_2");
        actionBuild_HypCube = new QAction(MainWindow);
        actionBuild_HypCube->setObjectName("actionBuild_HypCube");
        actionSlide_Max_Wavelength = new QAction(MainWindow);
        actionSlide_Max_Wavelength->setObjectName("actionSlide_Max_Wavelength");
        actionBuild_HypCube_2 = new QAction(MainWindow);
        actionBuild_HypCube_2->setObjectName("actionBuild_HypCube_2");
        actionSlide_HypCube_Building = new QAction(MainWindow);
        actionSlide_HypCube_Building->setObjectName("actionSlide_HypCube_Building");
        actionCamera_Sensitivities = new QAction(MainWindow);
        actionCamera_Sensitivities->setObjectName("actionCamera_Sensitivities");
        actionCalc_Sensitivities = new QAction(MainWindow);
        actionCalc_Sensitivities->setObjectName("actionCalc_Sensitivities");
        actionSlide_Min_Wavelength = new QAction(MainWindow);
        actionSlide_Min_Wavelength->setObjectName("actionSlide_Min_Wavelength");
        actionHypCube_From_H264 = new QAction(MainWindow);
        actionHypCube_From_H264->setObjectName("actionHypCube_From_H264");
        actionCube_Analysis = new QAction(MainWindow);
        actionCube_Analysis->setObjectName("actionCube_Analysis");
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/new/icons/imagenInte/plotSignature.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCube_Analysis->setIcon(icon44);
        actionApply_Affine_Transformation = new QAction(MainWindow);
        actionApply_Affine_Transformation->setObjectName("actionApply_Affine_Transformation");
        actionApply_Optical_Correction = new QAction(MainWindow);
        actionApply_Optical_Correction->setObjectName("actionApply_Optical_Correction");
        actionExtract_ROI = new QAction(MainWindow);
        actionExtract_ROI->setObjectName("actionExtract_ROI");
        actionApply_Region_of_Interes = new QAction(MainWindow);
        actionApply_Region_of_Interes->setObjectName("actionApply_Region_of_Interes");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pbExpPixs = new QTabWidget(centralWidget);
        pbExpPixs->setObjectName("pbExpPixs");
        pbExpPixs->setGeometry(QRect(-1, 15, 1041, 621));
        tab = new QWidget();
        tab->setObjectName("tab");
        tableLstCams = new QTableWidget(tab);
        if (tableLstCams->columnCount() < 2)
            tableLstCams->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableLstCams->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableLstCams->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableLstCams->setObjectName("tableLstCams");
        tableLstCams->setGeometry(QRect(10, 100, 321, 231));
        frame = new QFrame(tab);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 321, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 14, 275, 36));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelIP = new QLabel(layoutWidget1);
        labelIP->setObjectName("labelIP");

        gridLayout->addWidget(labelIP, 0, 0, 1, 1);

        txtIp = new QLineEdit(layoutWidget1);
        txtIp->setObjectName("txtIp");

        gridLayout->addWidget(txtIp, 0, 1, 1, 1);

        pbAddIp = new QPushButton(layoutWidget1);
        pbAddIp->setObjectName("pbAddIp");
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/new/icons/imagenInte/list-add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbAddIp->setIcon(icon45);

        gridLayout->addWidget(pbAddIp, 0, 2, 1, 1);

        pbSearchAll = new QPushButton(layoutWidget1);
        pbSearchAll->setObjectName("pbSearchAll");
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/new/icons/imagenInte/zoom-in.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSearchAll->setIcon(icon46);

        gridLayout->addWidget(pbSearchAll, 0, 3, 1, 1);

        pbAddIp->raise();
        labelIP->raise();
        txtIp->raise();
        pbSearchAll->raise();
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(380, 20, 531, 61));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget2 = new QWidget(frame_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(9, 14, 421, 35));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pbSendComm = new QPushButton(layoutWidget2);
        pbSendComm->setObjectName("pbSendComm");
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/new/icons/imagenInte/gtk-media-play-ltr.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSendComm->setIcon(icon47);
        pbSendComm->setIconSize(QSize(15, 15));

        gridLayout_2->addWidget(pbSendComm, 0, 2, 1, 1);

        checkBlind = new QCheckBox(layoutWidget2);
        checkBlind->setObjectName("checkBlind");

        gridLayout_2->addWidget(checkBlind, 0, 4, 1, 1);

        labelCommand = new QLabel(layoutWidget2);
        labelCommand->setObjectName("labelCommand");

        gridLayout_2->addWidget(labelCommand, 0, 0, 1, 1);

        txtCommand = new QLineEdit(layoutWidget2);
        txtCommand->setObjectName("txtCommand");

        gridLayout_2->addWidget(txtCommand, 0, 1, 1, 1);

        pbShutdown = new QPushButton(layoutWidget2);
        pbShutdown->setObjectName("pbShutdown");
        pbShutdown->setEnabled(true);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/new/icons/imagenInte/salir.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbShutdown->setIcon(icon48);
        pbShutdown->setIconSize(QSize(15, 15));

        gridLayout_2->addWidget(pbShutdown, 0, 3, 1, 1);

        txtCommRes = new QTextEdit(tab);
        txtCommRes->setObjectName("txtCommRes");
        txtCommRes->setGeometry(QRect(380, 100, 531, 231));
        pbConnect = new QPushButton(tab);
        pbConnect->setObjectName("pbConnect");
        pbConnect->setGeometry(QRect(340, 100, 31, 31));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/new/icons/imagenInte/right.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbConnect->setIcon(icon49);
        pbLANConnect = new QPushButton(tab);
        pbLANConnect->setObjectName("pbLANConnect");
        pbLANConnect->setGeometry(QRect(340, 140, 31, 31));
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/new/icons/imagenInte/WiFi.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbLANConnect->setIcon(icon50);
        pbLANTestConn = new QPushButton(tab);
        pbLANTestConn->setObjectName("pbLANTestConn");
        pbLANTestConn->setGeometry(QRect(340, 180, 31, 31));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/new/icons/imagenInte/question.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbLANTestConn->setIcon(icon51);
        pbExpPixs->addTab(tab, QString());
        tableLstCams->raise();
        frame->raise();
        frame_2->raise();
        txtCommRes->raise();
        pbLANConnect->raise();
        pbLANTestConn->raise();
        pbConnect->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        labelVideo = new QLabel(tab_2);
        labelVideo->setObjectName("labelVideo");
        labelVideo->setGeometry(QRect(380, 20, 391, 311));
        labelVideo->setFrameShape(QFrame::Box);
        labelVideo->setLineWidth(1);
        labelVideo->setMidLineWidth(0);
        labelVideo->setMargin(0);
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(10, 399, 351, 71));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        labelSquareShuterSpeed_4 = new QLabel(frame_3);
        labelSquareShuterSpeed_4->setObjectName("labelSquareShuterSpeed_4");
        labelSquareShuterSpeed_4->setGeometry(QRect(270, 45, 21, 19));
        spinBoxTimelapse = new QSpinBox(frame_3);
        spinBoxTimelapse->setObjectName("spinBoxTimelapse");
        spinBoxTimelapse->setGeometry(QRect(160, 41, 101, 29));
        spinBoxTimelapse->setMinimum(100);
        spinBoxTimelapse->setMaximum(5000);
        labelSquareShuterSpeed_3 = new QLabel(frame_3);
        labelSquareShuterSpeed_3->setObjectName("labelSquareShuterSpeed_3");
        labelSquareShuterSpeed_3->setGeometry(QRect(10, 45, 151, 19));
        spinBoxTimelapseDuration = new QSpinBox(frame_3);
        spinBoxTimelapseDuration->setObjectName("spinBoxTimelapseDuration");
        spinBoxTimelapseDuration->setGeometry(QRect(160, 5, 101, 29));
        spinBoxTimelapseDuration->setMinimum(2);
        spinBoxTimelapseDuration->setMaximum(86400);
        labelSquareShuterSpeed_6 = new QLabel(frame_3);
        labelSquareShuterSpeed_6->setObjectName("labelSquareShuterSpeed_6");
        labelSquareShuterSpeed_6->setGeometry(QRect(10, 9, 151, 19));
        labelSquareShuterSpeed_7 = new QLabel(frame_3);
        labelSquareShuterSpeed_7->setObjectName("labelSquareShuterSpeed_7");
        labelSquareShuterSpeed_7->setGeometry(QRect(270, 9, 41, 19));
        frame_4 = new QFrame(tab_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 73, 351, 321));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        spinBoxVideoDuration = new QSpinBox(frame_4);
        spinBoxVideoDuration->setObjectName("spinBoxVideoDuration");
        spinBoxVideoDuration->setGeometry(QRect(158, 250, 101, 29));
        spinBoxVideoDuration->setMinimum(2);
        spinBoxVideoDuration->setMaximum(180);
        cbAWB = new QComboBox(frame_4);
        cbAWB->setObjectName("cbAWB");
        cbAWB->setEnabled(true);
        cbAWB->setGeometry(QRect(158, 103, 159, 29));
        labelSquareShuterSpeed = new QLabel(frame_4);
        labelSquareShuterSpeed->setObjectName("labelSquareShuterSpeed");
        labelSquareShuterSpeed->setGeometry(QRect(10, 180, 91, 19));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(11, 107, 121, 21));
        spinBoxShuterSpeed = new QSpinBox(frame_4);
        spinBoxShuterSpeed->setObjectName("spinBoxShuterSpeed");
        spinBoxShuterSpeed->setGeometry(QRect(158, 176, 101, 29));
        spinBoxShuterSpeed->setMaximum(3000000);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 141, 111, 21));
        labelSquareShuterSpeed_2 = new QLabel(frame_4);
        labelSquareShuterSpeed_2->setObjectName("labelSquareShuterSpeed_2");
        labelSquareShuterSpeed_2->setGeometry(QRect(8, 216, 151, 19));
        spinBoxSquareShuterSpeed = new QSpinBox(frame_4);
        spinBoxSquareShuterSpeed->setObjectName("spinBoxSquareShuterSpeed");
        spinBoxSquareShuterSpeed->setGeometry(QRect(158, 212, 101, 29));
        spinBoxSquareShuterSpeed->setMaximum(3000000);
        layoutWidget3 = new QWidget(frame_4);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(9, 6, 122, 92));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        cbColorBalance = new QCheckBox(layoutWidget3);
        cbColorBalance->setObjectName("cbColorBalance");

        verticalLayout->addWidget(cbColorBalance);

        cbDenoise = new QCheckBox(layoutWidget3);
        cbDenoise->setObjectName("cbDenoise");

        verticalLayout->addWidget(cbDenoise);

        cbFlipped = new QCheckBox(layoutWidget3);
        cbFlipped->setObjectName("cbFlipped");

        verticalLayout->addWidget(cbFlipped);

        cbExposure = new QComboBox(frame_4);
        cbExposure->setObjectName("cbExposure");
        cbExposure->setGeometry(QRect(158, 139, 159, 29));
        groupResolution = new QGroupBox(frame_4);
        groupResolution->setObjectName("groupResolution");
        groupResolution->setGeometry(QRect(158, 6, 131, 61));
        radioRes5Mp = new QRadioButton(groupResolution);
        radioRes5Mp->setObjectName("radioRes5Mp");
        radioRes5Mp->setGeometry(QRect(10, 29, 51, 26));
        radioRes8Mp = new QRadioButton(groupResolution);
        radioRes8Mp->setObjectName("radioRes8Mp");
        radioRes8Mp->setGeometry(QRect(70, 29, 51, 26));
        labelSquareShuterSpeed_5 = new QLabel(frame_4);
        labelSquareShuterSpeed_5->setObjectName("labelSquareShuterSpeed_5");
        labelSquareShuterSpeed_5->setGeometry(QRect(8, 254, 151, 19));
        labelISO = new QLabel(frame_4);
        labelISO->setObjectName("labelISO");
        labelISO->setGeometry(QRect(8, 280, 219, 21));
        slideISO = new QSlider(frame_4);
        slideISO->setObjectName("slideISO");
        slideISO->setGeometry(QRect(8, 300, 331, 20));
        slideISO->setMinimum(0);
        slideISO->setMaximum(3000);
        slideISO->setOrientation(Qt::Horizontal);
        labelSquareShuterSpeed_8 = new QLabel(frame_4);
        labelSquareShuterSpeed_8->setObjectName("labelSquareShuterSpeed_8");
        labelSquareShuterSpeed_8->setGeometry(QRect(264, 254, 41, 19));
        labelSquareShuterSpeed_9 = new QLabel(frame_4);
        labelSquareShuterSpeed_9->setObjectName("labelSquareShuterSpeed_9");
        labelSquareShuterSpeed_9->setGeometry(QRect(264, 217, 41, 19));
        labelSquareShuterSpeed_10 = new QLabel(frame_4);
        labelSquareShuterSpeed_10->setObjectName("labelSquareShuterSpeed_10");
        labelSquareShuterSpeed_10->setGeometry(QRect(264, 181, 41, 19));
        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 21, 351, 41));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pbSaveImage = new QPushButton(frame_5);
        pbSaveImage->setObjectName("pbSaveImage");
        pbSaveImage->setEnabled(true);
        pbSaveImage->setGeometry(QRect(287, 5, 31, 31));
        pbSaveImage->setIcon(icon35);
        pbSnapshot = new QPushButton(frame_5);
        pbSnapshot->setObjectName("pbSnapshot");
        pbSnapshot->setEnabled(false);
        pbSnapshot->setGeometry(QRect(7, 5, 31, 31));
        pbSnapshot->setIcon(icon15);
        pbSnapVid = new QPushButton(frame_5);
        pbSnapVid->setObjectName("pbSnapVid");
        pbSnapVid->setEnabled(true);
        pbSnapVid->setGeometry(QRect(127, 5, 31, 31));
        pbSnapVid->setIcon(icon33);
        pbTimeLapse = new QPushButton(frame_5);
        pbTimeLapse->setObjectName("pbTimeLapse");
        pbTimeLapse->setEnabled(true);
        pbTimeLapse->setGeometry(QRect(167, 5, 31, 31));
        pbTimeLapse->setIcon(icon34);
        pbOneShotSnapshot = new QPushButton(frame_5);
        pbOneShotSnapshot->setObjectName("pbOneShotSnapshot");
        pbOneShotSnapshot->setEnabled(true);
        pbOneShotSnapshot->setGeometry(QRect(47, 5, 31, 31));
        pbOneShotSnapshot->setIcon(icon31);
        pbSnapshotSquare = new QPushButton(frame_5);
        pbSnapshotSquare->setObjectName("pbSnapshotSquare");
        pbSnapshotSquare->setEnabled(true);
        pbSnapshotSquare->setGeometry(QRect(87, 5, 31, 31));
        pbSnapshotSquare->setIcon(icon36);
        frame_6 = new QFrame(tab_2);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(10, 521, 351, 41));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        txtCamParamXMLName = new QLineEdit(frame_6);
        txtCamParamXMLName->setObjectName("txtCamParamXMLName");
        txtCamParamXMLName->setGeometry(QRect(3, 4, 221, 33));
        pbSaveRaspParam = new QPushButton(frame_6);
        pbSaveRaspParam->setObjectName("pbSaveRaspParam");
        pbSaveRaspParam->setEnabled(true);
        pbSaveRaspParam->setGeometry(QRect(233, 4, 31, 31));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/new/icons/imagenInte/add-484.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSaveRaspParam->setIcon(icon52);
        pbCopyShutter = new QPushButton(frame_6);
        pbCopyShutter->setObjectName("pbCopyShutter");
        pbCopyShutter->setEnabled(true);
        pbCopyShutter->setGeometry(QRect(316, 4, 31, 31));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/new/icons/imagenInte/anterior.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbCopyShutter->setIcon(icon53);
        pbObtPar = new QPushButton(frame_6);
        pbObtPar->setObjectName("pbObtPar");
        pbObtPar->setEnabled(true);
        pbObtPar->setGeometry(QRect(274, 4, 31, 31));
        frame_7 = new QFrame(tab_2);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 475, 351, 41));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        slideTriggerTime = new QSlider(frame_7);
        slideTriggerTime->setObjectName("slideTriggerTime");
        slideTriggerTime->setGeometry(QRect(10, 22, 331, 19));
        slideTriggerTime->setMinimum(0);
        slideTriggerTime->setMaximum(500);
        slideTriggerTime->setValue(3);
        slideTriggerTime->setOrientation(Qt::Horizontal);
        slideTriggerTime->setTickInterval(1);
        labelTriggerTime = new QLabel(frame_7);
        labelTriggerTime->setObjectName("labelTriggerTime");
        labelTriggerTime->setGeometry(QRect(10, 2, 219, 21));
        pbExpPixs->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        pbExpPixs->addTab(tab_6, QString());
        tabShowPixels = new QWidget();
        tabShowPixels->setObjectName("tabShowPixels");
        pbSelectFolder = new QPushButton(tabShowPixels);
        pbSelectFolder->setObjectName("pbSelectFolder");
        pbSelectFolder->setEnabled(true);
        pbSelectFolder->setGeometry(QRect(20, 10, 31, 31));
        pbSelectFolder->setIcon(icon40);
        graphViewPlot = new QGraphicsView(tabShowPixels);
        graphViewPlot->setObjectName("graphViewPlot");
        graphViewPlot->setGeometry(QRect(20, 110, 1000, 270));
        slideChangeImage = new QSlider(tabShowPixels);
        slideChangeImage->setObjectName("slideChangeImage");
        slideChangeImage->setEnabled(false);
        slideChangeImage->setGeometry(QRect(20, 80, 251, 16));
        slideChangeImage->setOrientation(Qt::Horizontal);
        labelCubeImageName = new QLabel(tabShowPixels);
        labelCubeImageName->setObjectName("labelCubeImageName");
        labelCubeImageName->setGeometry(QRect(20, 50, 251, 20));
        pbExpPixs->addTab(tabShowPixels, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        layoutWidget4 = new QWidget(tab_5);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(2, 438, 851, 71));
        gridColors = new QGridLayout(layoutWidget4);
        gridColors->setSpacing(6);
        gridColors->setContentsMargins(11, 11, 11, 11);
        gridColors->setObjectName("gridColors");
        gridColors->setContentsMargins(0, 0, 0, 0);
        slideRedLen = new QSlider(layoutWidget4);
        slideRedLen->setObjectName("slideRedLen");
        slideRedLen->setEnabled(false);
        slideRedLen->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #F00, stop:1 #F00);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #F00, stop:1 #F00);\n"
"    border: 2px solid #F00;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideRedLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideRedLen, 0, 0, 1, 1);

        slideBlueLen = new QSlider(layoutWidget4);
        slideBlueLen->setObjectName("slideBlueLen");
        slideBlueLen->setEnabled(false);
        slideBlueLen->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #00F, stop:1 #00F);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #00F, stop:1 #00F);\n"
"    border: 2px solid #00F;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideBlueLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideBlueLen, 2, 0, 1, 1);

        slideGreenLen = new QSlider(layoutWidget4);
        slideGreenLen->setObjectName("slideGreenLen");
        slideGreenLen->setEnabled(false);
        slideGreenLen->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 1px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #0F0, stop:1 #0F0);\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #0F0, stop:1 #0F0);\n"
"    border: 2px solid #0F0;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        slideGreenLen->setOrientation(Qt::Horizontal);

        gridColors->addWidget(slideGreenLen, 1, 0, 1, 1);

        layoutWidget5 = new QWidget(tab_5);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(100, 510, 587, 36));
        gridLayout_5 = new QGridLayout(layoutWidget5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        chbGreen = new QCheckBox(layoutWidget5);
        chbGreen->setObjectName("chbGreen");

        gridLayout_5->addWidget(chbGreen, 0, 6, 1, 1);

        pbSpecSnapshot = new QPushButton(layoutWidget5);
        pbSpecSnapshot->setObjectName("pbSpecSnapshot");
        pbSpecSnapshot->setEnabled(true);
        pbSpecSnapshot->setIcon(icon15);

        gridLayout_5->addWidget(pbSpecSnapshot, 0, 2, 1, 1);

        chbRed = new QCheckBox(layoutWidget5);
        chbRed->setObjectName("chbRed");

        gridLayout_5->addWidget(chbRed, 0, 5, 1, 1);

        sbSpecUsb = new QSpinBox(layoutWidget5);
        sbSpecUsb->setObjectName("sbSpecUsb");
        sbSpecUsb->setMaximum(9);
        sbSpecUsb->setValue(1);

        gridLayout_5->addWidget(sbSpecUsb, 0, 1, 1, 1);

        chbBlue = new QCheckBox(layoutWidget5);
        chbBlue->setObjectName("chbBlue");

        gridLayout_5->addWidget(chbBlue, 0, 7, 1, 1);

        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName("label_4");

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        pbViewBack = new QPushButton(layoutWidget5);
        pbViewBack->setObjectName("pbViewBack");
        pbViewBack->setEnabled(false);
        pbViewBack->setIcon(icon19);

        gridLayout_5->addWidget(pbViewBack, 0, 9, 1, 1);

        pbSnapCal = new QPushButton(layoutWidget5);
        pbSnapCal->setObjectName("pbSnapCal");
        pbSnapCal->setEnabled(false);
        pbSnapCal->setIcon(icon39);

        gridLayout_5->addWidget(pbSnapCal, 0, 8, 1, 1);

        pbSpecCut = new QPushButton(layoutWidget5);
        pbSpecCut->setObjectName("pbSpecCut");
        pbSpecCut->setEnabled(false);
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/new/icons/imagenInte/tijeras.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pbSpecCut->setIcon(icon54);

        gridLayout_5->addWidget(pbSpecCut, 0, 4, 1, 1);

        pbSpecLoadSnap = new QPushButton(layoutWidget5);
        pbSpecLoadSnap->setObjectName("pbSpecLoadSnap");

        gridLayout_5->addWidget(pbSpecLoadSnap, 0, 3, 1, 1);

        pbExpPixs->addTab(tab_5, QString());
        progBar = new QProgressBar(centralWidget);
        progBar->setObjectName("progBar");
        progBar->setGeometry(QRect(600, 5, 371, 16));
        progBar->setValue(0);
        labelProgBar = new QLabel(centralWidget);
        labelProgBar->setObjectName("labelProgBar");
        labelProgBar->setGeometry(QRect(600, 20, 371, 20));
        labelProgBar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralWidget);
        progBar->raise();
        pbExpPixs->raise();
        labelProgBar->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1141, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName("menuImage");
        menuFilter = new QMenu(menuImage);
        menuFilter->setObjectName("menuFilter");
        menuMultiselected = new QMenu(menuImage);
        menuMultiselected->setObjectName("menuMultiselected");
        menuMerge = new QMenu(menuMultiselected);
        menuMerge->setObjectName("menuMerge");
        menuAnalysis = new QMenu(menuBar);
        menuAnalysis->setObjectName("menuAnalysis");
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName("menuSettings");
        menuSet = new QMenu(menuSettings);
        menuSet->setObjectName("menuSet");
        menuCamera = new QMenu(menuBar);
        menuCamera->setObjectName("menuCamera");
        menuDouble_Axis = new QMenu(menuCamera);
        menuDouble_Axis->setObjectName("menuDouble_Axis");
        menuSlide = new QMenu(menuCamera);
        menuSlide->setObjectName("menuSlide");
        menuCompute = new QMenu(menuSlide);
        menuCompute->setObjectName("menuCompute");
        menuObtain = new QMenu(menuCamera);
        menuObtain->setObjectName("menuObtain");
        menuSend = new QMenu(menuCamera);
        menuSend->setObjectName("menuSend");
        menuStart = new QMenu(menuBar);
        menuStart->setObjectName("menuStart");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuMake = new QMenu(menuBar);
        menuMake->setObjectName("menuMake");
        menuPlot = new QMenu(menuMake);
        menuPlot->setObjectName("menuPlot");
        menuCalib_Edition = new QMenu(menuMake);
        menuCalib_Edition->setObjectName("menuCalib_Edition");
        menuLocal = new QMenu(menuBar);
        menuLocal->setObjectName("menuLocal");
        menuSlide_2 = new QMenu(menuLocal);
        menuSlide_2->setObjectName("menuSlide_2");
        menuStep_by_Step = new QMenu(menuSlide_2);
        menuStep_by_Step->setObjectName("menuStep_by_Step");
        menuSquare = new QMenu(menuLocal);
        menuSquare->setObjectName("menuSquare");
        MainWindow->setMenuBar(menuBar);
        toolBarDraw = new QToolBar(MainWindow);
        toolBarDraw->setObjectName("toolBarDraw");
        toolBarDraw->setMovable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBarDraw);
        mainToolbar = new QToolBar(MainWindow);
        mainToolbar->setObjectName("mainToolbar");
        mainToolbar->setMovable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolbar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuBar->addAction(menuAnalysis->menuAction());
        menuBar->addAction(menuMake->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuCamera->menuAction());
        menuBar->addAction(menuLocal->menuAction());
        menuBar->addAction(menuStart->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuImage->addAction(menuFilter->menuAction());
        menuImage->addAction(menuMultiselected->menuAction());
        menuImage->addAction(actionMerge_into_RGB);
        menuFilter->addAction(actionBilinear_interpolation);
        menuMultiselected->addAction(menuMerge->menuAction());
        menuMerge->addAction(actionMultiImageAverage);
        menuMerge->addAction(actionMultiImageMinimum);
        menuMerge->addAction(actionMultiImageMaximum);
        menuAnalysis->addAction(actionNDVI);
        menuAnalysis->addAction(actionRGB_to_XY);
        menuAnalysis->addAction(actionFull_Screen);
        menuAnalysis->addAction(actionDisplay_Original);
        menuSettings->addAction(actionNDVI_Algorithm);
        menuSettings->addAction(actionSync_Folder);
        menuSettings->addAction(menuSet->menuAction());
        menuSet->addAction(actionDiffraction_Origin);
        menuSet->addAction(actionSlide_Calibration_File);
        menuSet->addAction(actionSlide_Max_Wavelength);
        menuSet->addAction(actionSlide_Min_Wavelength);
        menuSet->addAction(actionSlide_HypCube_Building);
        menuCamera->addAction(actionFull_photo);
        menuCamera->addAction(menuDouble_Axis->menuAction());
        menuCamera->addAction(menuSlide->menuAction());
        menuCamera->addAction(actionVideo);
        menuCamera->addAction(menuObtain->menuAction());
        menuCamera->addAction(menuSend->menuAction());
        menuCamera->addSeparator();
        menuCamera->addAction(actionSave);
        menuDouble_Axis->addAction(actionDiffraction);
        menuDouble_Axis->addAction(actionAperture);
        menuDouble_Axis->addAction(actionComposed);
        menuSlide->addAction(actionSlideDiffraction);
        menuSlide->addAction(actionTimelapse);
        menuSlide->addAction(actionSlide_Build_Hypercube);
        menuSlide->addAction(actionFull_Video);
        menuSlide->addSeparator();
        menuSlide->addAction(menuCompute->menuAction());
        menuSlide->addSeparator();
        menuCompute->addAction(actionBuld_HypImg);
        menuObtain->addSeparator();
        menuObtain->addSeparator();
        menuObtain->addAction(actionObtain_Folder);
        menuObtain->addAction(actionObtain_File);
        menuSend->addAction(actionSlide_Settings);
        menuSend->addAction(actionSquare_Location);
        menuStart->addAction(actionVideo_2);
        menuStart->addAction(actionTimelapse_2);
        menuStart->addAction(actionSnapshot);
        menuStart->addAction(actionSnapvideos);
        menuStart->addSeparator();
        menuStart->addAction(actionSynchronize);
        menuStart->addAction(actionTesting);
        menuHelp->addAction(actionAbout_this);
        menuHelp->addAction(actionTechnical_Support);
        menuMake->addAction(actionLinear_Regression);
        menuMake->addSeparator();
        menuMake->addAction(actionSlide_Linear_Regression);
        menuMake->addAction(actionMerge_Calibration);
        menuMake->addAction(actionCalc_Sensitivities);
        menuMake->addSeparator();
        menuMake->addAction(menuPlot->menuAction());
        menuMake->addSeparator();
        menuMake->addAction(actionPlot_over_Real);
        menuMake->addAction(actionPlot_Line_at_Wavelength);
        menuMake->addSeparator();
        menuMake->addAction(menuCalib_Edition->menuAction());
        menuMake->addSeparator();
        menuPlot->addAction(actionPlot_Upper_Line_Rotation);
        menuPlot->addAction(actionPlot_Calculated_Line);
        menuPlot->addAction(actionOrigin);
        menuCalib_Edition->addAction(actionApply_Rotation);
        menuCalib_Edition->addAction(actionApply_Transformation);
        menuCalib_Edition->addAction(actionApply_Affine_Transformation);
        menuCalib_Edition->addAction(actionApply_Optical_Correction);
        menuLocal->addAction(menuSlide_2->menuAction());
        menuLocal->addAction(menuSquare->menuAction());
        menuSlide_2->addAction(menuStep_by_Step->menuAction());
        menuSlide_2->addAction(actionHypCube_From_H264);
        menuStep_by_Step->addAction(actionExtract_frames_2);
        menuStep_by_Step->addAction(actionExtract_ROI);
        menuStep_by_Step->addAction(actionBuild_HypCube);
        menuStep_by_Step->addAction(actionBuild_HypCube_2);
        menuSquare->addAction(actionApply_Region_of_Interes);
        toolBarDraw->addAction(actionSelection);
        toolBarDraw->addSeparator();
        toolBarDraw->addAction(actionRestore_Original);
        toolBarDraw->addAction(actionRect);
        toolBarDraw->addAction(actionHorizontalLine);
        toolBarDraw->addAction(actionVerticalLine);
        toolBarDraw->addAction(openLine);
        toolBarDraw->addAction(actionToolPenArea);
        toolBarDraw->addAction(actionarcLine);
        toolBarDraw->addAction(actionRotateImg);
        toolBarDraw->addAction(actionApplyThreshold);
        toolBarDraw->addAction(actionLoadRegOfInteres);
        toolBarDraw->addAction(actionLoadSquareRectangle);
        toolBarDraw->addAction(actionSquareUsable);
        toolBarDraw->addAction(pbDrawSlide);
        toolBarDraw->addAction(actionSend_to_XYZ);
        toolBarDraw->addAction(actionSaveCanvas);
        toolBarDraw->addAction(actionExportPixelsSelected);
        toolBarDraw->addSeparator();
        toolBarDraw->addAction(actionClear);
        mainToolbar->addAction(actionLoadCanvas);
        mainToolbar->addAction(actionDrawToolbar);
        mainToolbar->addAction(actionDoubAxisDiff);
        mainToolbar->addAction(actionValCal);
        mainToolbar->addAction(actionFittFunction);
        mainToolbar->addAction(actionShow_hypercube);
        mainToolbar->addAction(actionChoseWavelength);
        mainToolbar->addAction(actionGenHypercube);
        mainToolbar->addAction(actionsquareSettings);
        mainToolbar->addAction(actionvideoToFrames);
        mainToolbar->addAction(actionframesToCube);
        mainToolbar->addAction(actionCube_Analysis);

        retranslateUi(MainWindow);

        pbExpPixs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hyperspectral Image Sensor (Beta 0.1)", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionRect->setText(QCoreApplication::translate("MainWindow", "Rect", nullptr));
#if QT_CONFIG(tooltip)
        actionRect->setToolTip(QCoreApplication::translate("MainWindow", "Add rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
#if QT_CONFIG(tooltip)
        actionCircle->setToolTip(QCoreApplication::translate("MainWindow", "Add circle", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHorizontalLine->setText(QCoreApplication::translate("MainWindow", "HorizontalLine", nullptr));
#if QT_CONFIG(tooltip)
        actionHorizontalLine->setToolTip(QCoreApplication::translate("MainWindow", "Add horizontal line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVerticalLine->setText(QCoreApplication::translate("MainWindow", "VerticalLine", nullptr));
#if QT_CONFIG(tooltip)
        actionVerticalLine->setToolTip(QCoreApplication::translate("MainWindow", "Add vertical line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("MainWindow", "Clear scene", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelection->setText(QCoreApplication::translate("MainWindow", "Selection", nullptr));
#if QT_CONFIG(tooltip)
        actionSelection->setToolTip(QCoreApplication::translate("MainWindow", "Selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDrawToolbar->setText(QCoreApplication::translate("MainWindow", "DrawToolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionDrawToolbar->setToolTip(QCoreApplication::translate("MainWindow", "Draw toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDoubAxisDiff->setText(QCoreApplication::translate("MainWindow", "DoubAxisDiff", nullptr));
#if QT_CONFIG(tooltip)
        actionDoubAxisDiff->setToolTip(QCoreApplication::translate("MainWindow", "Generate calibration .XML", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRotateImg->setText(QCoreApplication::translate("MainWindow", "rotateImg", nullptr));
#if QT_CONFIG(tooltip)
        actionRotateImg->setToolTip(QCoreApplication::translate("MainWindow", "Rotate the image", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoadCanvas->setText(QCoreApplication::translate("MainWindow", "loadCanvas", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadCanvas->setToolTip(QCoreApplication::translate("MainWindow", "Load canvas", nullptr));
#endif // QT_CONFIG(tooltip)
        actionApplyThreshold->setText(QCoreApplication::translate("MainWindow", "applyThreshold", nullptr));
#if QT_CONFIG(tooltip)
        actionApplyThreshold->setToolTip(QCoreApplication::translate("MainWindow", "Apply threshold", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoadSquareRectangle->setText(QCoreApplication::translate("MainWindow", "loadSquareRectangle", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadSquareRectangle->setToolTip(QCoreApplication::translate("MainWindow", "Load square aperture rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoadRegOfInteres->setText(QCoreApplication::translate("MainWindow", "loadRegOfInteres", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadRegOfInteres->setToolTip(QCoreApplication::translate("MainWindow", "Load region of interes rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolPenArea->setText(QCoreApplication::translate("MainWindow", "toolPenArea", nullptr));
#if QT_CONFIG(tooltip)
        actionToolPenArea->setToolTip(QCoreApplication::translate("MainWindow", "Pen selection tool", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveCanvas->setText(QCoreApplication::translate("MainWindow", "SaveCanvas", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveCanvas->setToolTip(QCoreApplication::translate("MainWindow", "Save canvas", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSend_to_XYZ->setText(QCoreApplication::translate("MainWindow", "Send to XYZ", nullptr));
#if QT_CONFIG(tooltip)
        actionSend_to_XYZ->setToolTip(QCoreApplication::translate("MainWindow", "Send to XYZ", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportPixelsSelected->setText(QCoreApplication::translate("MainWindow", "ExportPixelsSelected", nullptr));
#if QT_CONFIG(tooltip)
        actionExportPixelsSelected->setToolTip(QCoreApplication::translate("MainWindow", "Export pixels selected", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGenHypercube->setText(QCoreApplication::translate("MainWindow", "genHypercube", nullptr));
#if QT_CONFIG(tooltip)
        actionGenHypercube->setToolTip(QCoreApplication::translate("MainWindow", "Generate hypercube", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidCal->setText(QCoreApplication::translate("MainWindow", "validCal", nullptr));
#if QT_CONFIG(tooltip)
        actionValidCal->setToolTip(QCoreApplication::translate("MainWindow", "Validate calibration", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValCal->setText(QCoreApplication::translate("MainWindow", "valCal", nullptr));
#if QT_CONFIG(tooltip)
        actionValCal->setToolTip(QCoreApplication::translate("MainWindow", "Check calibration points and lines", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSquareUsable->setText(QCoreApplication::translate("MainWindow", "squareUsable", nullptr));
#if QT_CONFIG(tooltip)
        actionSquareUsable->setToolTip(QCoreApplication::translate("MainWindow", "Select square aperture usable", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChoseWavelength->setText(QCoreApplication::translate("MainWindow", "choseWavelength", nullptr));
#if QT_CONFIG(tooltip)
        actionChoseWavelength->setToolTip(QCoreApplication::translate("MainWindow", "Chose wavelengths to extract", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFittFunction->setText(QCoreApplication::translate("MainWindow", "FittFunction", nullptr));
#if QT_CONFIG(tooltip)
        actionFittFunction->setToolTip(QCoreApplication::translate("MainWindow", "Select an image and fits its line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_hypercube->setText(QCoreApplication::translate("MainWindow", "Show hypercube", nullptr));
#if QT_CONFIG(tooltip)
        actionShow_hypercube->setToolTip(QCoreApplication::translate("MainWindow", "Show hypercube", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBilinear_interpolation->setText(QCoreApplication::translate("MainWindow", "Bilinear interpolation", nullptr));
        actionslideHypCam->setText(QCoreApplication::translate("MainWindow", "slideHypCam", nullptr));
#if QT_CONFIG(tooltip)
        actionslideHypCam->setToolTip(QCoreApplication::translate("MainWindow", "Open Slide HypCam", nullptr));
#endif // QT_CONFIG(tooltip)
        pbDrawSlide->setText(QCoreApplication::translate("MainWindow", "Draw slide area", nullptr));
#if QT_CONFIG(tooltip)
        pbDrawSlide->setToolTip(QCoreApplication::translate("MainWindow", "Draw slide area", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlide_settings->setText(QCoreApplication::translate("MainWindow", "Slide settings", nullptr));
#if QT_CONFIG(tooltip)
        actionSlide_settings->setToolTip(QCoreApplication::translate("MainWindow", "Slide settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionsquareSettings->setText(QCoreApplication::translate("MainWindow", "squareSettings", nullptr));
#if QT_CONFIG(tooltip)
        actionsquareSettings->setToolTip(QCoreApplication::translate("MainWindow", "Square Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionvideoToFrames->setText(QCoreApplication::translate("MainWindow", "videoToFrames", nullptr));
#if QT_CONFIG(tooltip)
        actionvideoToFrames->setToolTip(QCoreApplication::translate("MainWindow", "Video to Frames", nullptr));
#endif // QT_CONFIG(tooltip)
        actionframesToCube->setText(QCoreApplication::translate("MainWindow", "framesToCube", nullptr));
#if QT_CONFIG(tooltip)
        actionframesToCube->setToolTip(QCoreApplication::translate("MainWindow", "Frames to Cuve", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNDVI->setText(QCoreApplication::translate("MainWindow", "NDVI", nullptr));
        actionRGB_to_XY->setText(QCoreApplication::translate("MainWindow", "RGB to XY", nullptr));
        actionNDVI_Algorithm->setText(QCoreApplication::translate("MainWindow", "NDVI Algorithm", nullptr));
        actionFull_Screen->setText(QCoreApplication::translate("MainWindow", "Full Screen", nullptr));
        actionDisplay_Original->setText(QCoreApplication::translate("MainWindow", "Display Original", nullptr));
        actionFull_photo->setText(QCoreApplication::translate("MainWindow", "Full photo", nullptr));
#if QT_CONFIG(shortcut)
        actionFull_photo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDiffraction->setText(QCoreApplication::translate("MainWindow", "Diffraction", nullptr));
#if QT_CONFIG(shortcut)
        actionDiffraction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAperture->setText(QCoreApplication::translate("MainWindow", "Aperture", nullptr));
        actionSlideDiffraction->setText(QCoreApplication::translate("MainWindow", "SlideDiffraction", nullptr));
#if QT_CONFIG(shortcut)
        actionSlideDiffraction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVideo->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(shortcut)
        actionVideo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimelapse->setText(QCoreApplication::translate("MainWindow", "Timelapse", nullptr));
#if QT_CONFIG(shortcut)
        actionTimelapse->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComposed->setText(QCoreApplication::translate("MainWindow", "Composed", nullptr));
#if QT_CONFIG(shortcut)
        actionComposed->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionObtain_Folder->setText(QCoreApplication::translate("MainWindow", "Obtain Folder", nullptr));
        actionObtain_File->setText(QCoreApplication::translate("MainWindow", "Obtain File", nullptr));
        actionSlide_Build_Hypercube->setText(QCoreApplication::translate("MainWindow", "HypImg Simulator", nullptr));
#if QT_CONFIG(shortcut)
        actionSlide_Build_Hypercube->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVideo_2->setText(QCoreApplication::translate("MainWindow", "Video", nullptr));
#if QT_CONFIG(tooltip)
        actionVideo_2->setToolTip(QCoreApplication::translate("MainWindow", "Start Remote Video", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTimelapse_2->setText(QCoreApplication::translate("MainWindow", "Timelapse", nullptr));
        actionSnapshot->setText(QCoreApplication::translate("MainWindow", "Snapshot", nullptr));
        actionSnapvideos->setText(QCoreApplication::translate("MainWindow", "Snapvideos", nullptr));
        actionSynchronize->setText(QCoreApplication::translate("MainWindow", "Synchronize", nullptr));
        actionAbout_this->setText(QCoreApplication::translate("MainWindow", "About HypCam Beta 1.0", nullptr));
        actionTechnical_Support->setText(QCoreApplication::translate("MainWindow", "Technical Support", nullptr));
        actionSync_Folder->setText(QCoreApplication::translate("MainWindow", "Sync Folder", nullptr));
        actionFull_Video->setText(QCoreApplication::translate("MainWindow", "Full Video", nullptr));
        actionMultiImageAverage->setText(QCoreApplication::translate("MainWindow", "Average", nullptr));
        actionMultiImageMinimum->setText(QCoreApplication::translate("MainWindow", "Minimum", nullptr));
        actionMultiImageMaximum->setText(QCoreApplication::translate("MainWindow", "Maximum", nullptr));
        actionSlide_Settings->setText(QCoreApplication::translate("MainWindow", "Slide Location", nullptr));
        actionSquare_Location->setText(QCoreApplication::translate("MainWindow", "Square Location", nullptr));
        actionLinear_Regression->setText(QCoreApplication::translate("MainWindow", "Spectrometer Linear Regression", nullptr));
        actionDiffraction_Origin->setText(QCoreApplication::translate("MainWindow", "Diffraction Origin", nullptr));
        openLine->setText(QCoreApplication::translate("MainWindow", "Open Line", nullptr));
#if QT_CONFIG(tooltip)
        openLine->setToolTip(QCoreApplication::translate("MainWindow", "Open Line", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSlide_Linear_Regression->setText(QCoreApplication::translate("MainWindow", "Slide Linear Regression", nullptr));
        actionarcLine->setText(QCoreApplication::translate("MainWindow", "arcLine", nullptr));
#if QT_CONFIG(tooltip)
        actionarcLine->setToolTip(QCoreApplication::translate("MainWindow", "arcLine", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlot_Calculated_Line->setText(QCoreApplication::translate("MainWindow", "Horizontal", nullptr));
        actionPlot_Upper_Line_Rotation->setText(QCoreApplication::translate("MainWindow", "Vertical", nullptr));
        actionOrigin->setText(QCoreApplication::translate("MainWindow", "Origin", nullptr));
        actionBuld_HypImg->setText(QCoreApplication::translate("MainWindow", "Extract HypImg", nullptr));
        actionMerge_Calibration->setText(QCoreApplication::translate("MainWindow", "Merge Slide Calibration", nullptr));
        actionPlot_over_Real->setText(QCoreApplication::translate("MainWindow", "Plot over Real", nullptr));
        actionPlot_Line_at_Wavelength->setText(QCoreApplication::translate("MainWindow", "Plot Line at Wavelength", nullptr));
        actionSlide_Calibration_File->setText(QCoreApplication::translate("MainWindow", "Slide Calibration File", nullptr));
        actionMerge_into_RGB->setText(QCoreApplication::translate("MainWindow", "Merge into RGB", nullptr));
        actionTesting->setText(QCoreApplication::translate("MainWindow", "Testing", nullptr));
        actionApply_Rotation->setText(QCoreApplication::translate("MainWindow", "Apply Rotation", nullptr));
        actionApply_Transformation->setText(QCoreApplication::translate("MainWindow", "Apply Transformation", nullptr));
        actionRestore_Original->setText(QCoreApplication::translate("MainWindow", "Restore Original", nullptr));
#if QT_CONFIG(tooltip)
        actionRestore_Original->setToolTip(QCoreApplication::translate("MainWindow", "Restore Original", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRestore_Original->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExtract_frames_2->setText(QCoreApplication::translate("MainWindow", "Extract frames", nullptr));
        actionBuild_HypCube->setText(QCoreApplication::translate("MainWindow", "Optical Correction", nullptr));
        actionSlide_Max_Wavelength->setText(QCoreApplication::translate("MainWindow", "Slide Max Wavelength", nullptr));
        actionBuild_HypCube_2->setText(QCoreApplication::translate("MainWindow", "Build HypCube", nullptr));
        actionSlide_HypCube_Building->setText(QCoreApplication::translate("MainWindow", "Slide HypCube Building", nullptr));
        actionCamera_Sensitivities->setText(QCoreApplication::translate("MainWindow", "Camera Sensitivities", nullptr));
        actionCalc_Sensitivities->setText(QCoreApplication::translate("MainWindow", "Calc Sensitivities", nullptr));
        actionSlide_Min_Wavelength->setText(QCoreApplication::translate("MainWindow", "Slide Min Wavelength", nullptr));
        actionHypCube_From_H264->setText(QCoreApplication::translate("MainWindow", "HypCube From H264", nullptr));
        actionCube_Analysis->setText(QCoreApplication::translate("MainWindow", "Cube Analysis", nullptr));
        actionApply_Affine_Transformation->setText(QCoreApplication::translate("MainWindow", "Apply Affine Transformation", nullptr));
        actionApply_Optical_Correction->setText(QCoreApplication::translate("MainWindow", "Apply Optical Correction", nullptr));
        actionExtract_ROI->setText(QCoreApplication::translate("MainWindow", "Extract ROI", nullptr));
        actionApply_Region_of_Interes->setText(QCoreApplication::translate("MainWindow", "Apply Region of Interes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableLstCams->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableLstCams->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        labelIP->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        txtIp->setInputMask(QCoreApplication::translate("MainWindow", "999.999.999.999", nullptr));
        txtIp->setText(QCoreApplication::translate("MainWindow", "172.24.1.1", nullptr));
#if QT_CONFIG(tooltip)
        pbAddIp->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ping to IP typed</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbAddIp->setText(QString());
#if QT_CONFIG(tooltip)
        pbSearchAll->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Search and add all cameras in the network</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSearchAll->setText(QString());
#if QT_CONFIG(tooltip)
        pbSendComm->setToolTip(QCoreApplication::translate("MainWindow", "Send command", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSendComm->setText(QString());
        checkBlind->setText(QCoreApplication::translate("MainWindow", "blind", nullptr));
        labelCommand->setText(QCoreApplication::translate("MainWindow", "Command", nullptr));
        txtCommand->setText(QString());
#if QT_CONFIG(tooltip)
        pbShutdown->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Shutdown remote camera</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbShutdown->setText(QString());
#if QT_CONFIG(tooltip)
        pbConnect->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbConnect->setText(QString());
#if QT_CONFIG(tooltip)
        pbLANConnect->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLANConnect->setText(QString());
#if QT_CONFIG(tooltip)
        pbLANTestConn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Connect</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLANTestConn->setText(QString());
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab), QCoreApplication::translate("MainWindow", "Cameras", nullptr));
        labelVideo->setText(QString());
#if QT_CONFIG(tooltip)
        labelSquareShuterSpeed_4->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>milliseconds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSquareShuterSpeed_4->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        labelSquareShuterSpeed_3->setText(QCoreApplication::translate("MainWindow", "Timelapse interval", nullptr));
        labelSquareShuterSpeed_6->setText(QCoreApplication::translate("MainWindow", "Timelapse duration", nullptr));
#if QT_CONFIG(tooltip)
        labelSquareShuterSpeed_7->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Seconds</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSquareShuterSpeed_7->setText(QCoreApplication::translate("MainWindow", "secs", nullptr));
        labelSquareShuterSpeed->setText(QCoreApplication::translate("MainWindow", "Shuter Speed", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "AWB mode", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Exposure mode", nullptr));
        labelSquareShuterSpeed_2->setText(QCoreApplication::translate("MainWindow", "Square Shuter Speed", nullptr));
        cbColorBalance->setText(QCoreApplication::translate("MainWindow", "Color balance", nullptr));
        cbDenoise->setText(QCoreApplication::translate("MainWindow", "Denoise", nullptr));
        cbFlipped->setText(QCoreApplication::translate("MainWindow", "Vertical Flip", nullptr));
        groupResolution->setTitle(QCoreApplication::translate("MainWindow", "Camera Resolution", nullptr));
#if QT_CONFIG(tooltip)
        radioRes5Mp->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Megapixels</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioRes5Mp->setText(QCoreApplication::translate("MainWindow", "5Mp", nullptr));
#if QT_CONFIG(tooltip)
        radioRes8Mp->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Megapixels</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        radioRes8Mp->setText(QCoreApplication::translate("MainWindow", "8Mp", nullptr));
        labelSquareShuterSpeed_5->setText(QCoreApplication::translate("MainWindow", "Video Duration", nullptr));
        labelISO->setText(QCoreApplication::translate("MainWindow", "ISO", nullptr));
#if QT_CONFIG(tooltip)
        labelSquareShuterSpeed_8->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Seconds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSquareShuterSpeed_8->setText(QCoreApplication::translate("MainWindow", "secs", nullptr));
#if QT_CONFIG(tooltip)
        labelSquareShuterSpeed_9->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Microseconds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSquareShuterSpeed_9->setText(QCoreApplication::translate("MainWindow", "Ms", nullptr));
#if QT_CONFIG(tooltip)
        labelSquareShuterSpeed_10->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Microseconds</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSquareShuterSpeed_10->setText(QCoreApplication::translate("MainWindow", "Ms", nullptr));
#if QT_CONFIG(tooltip)
        pbSaveImage->setToolTip(QCoreApplication::translate("MainWindow", "Save Snapshot", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSaveImage->setText(QString());
#if QT_CONFIG(tooltip)
        pbSnapshot->setToolTip(QCoreApplication::translate("MainWindow", "One Shot", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSnapshot->setText(QString());
#if QT_CONFIG(tooltip)
        pbSnapVid->setToolTip(QCoreApplication::translate("MainWindow", "Record Video", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSnapVid->setText(QString());
#if QT_CONFIG(tooltip)
        pbTimeLapse->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Timelapse</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbTimeLapse->setText(QString());
#if QT_CONFIG(tooltip)
        pbOneShotSnapshot->setToolTip(QCoreApplication::translate("MainWindow", "Take One-Shot Snapshot", nullptr));
#endif // QT_CONFIG(tooltip)
        pbOneShotSnapshot->setText(QString());
#if QT_CONFIG(tooltip)
        pbSnapshotSquare->setToolTip(QCoreApplication::translate("MainWindow", "Take Square", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSnapshotSquare->setText(QString());
#if QT_CONFIG(tooltip)
        pbSaveRaspParam->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save parameters into XML</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSaveRaspParam->setText(QString());
#if QT_CONFIG(tooltip)
        pbCopyShutter->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load last snap-settings</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbCopyShutter->setText(QString());
#if QT_CONFIG(tooltip)
        pbObtPar->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Obtain parameters from XML</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbObtPar->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        labelTriggerTime->setText(QCoreApplication::translate("MainWindow", "Triggering time", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Streaming", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Graphic tools", nullptr));
#if QT_CONFIG(tooltip)
        pbSelectFolder->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Select Directory</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSelectFolder->setText(QString());
        labelCubeImageName->setText(QCoreApplication::translate("MainWindow", "Image name", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tabShowPixels), QCoreApplication::translate("MainWindow", "Pixels", nullptr));
#if QT_CONFIG(tooltip)
        slideRedLen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>611.3</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        slideBlueLen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>435.7</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        slideGreenLen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>546.1</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        chbGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
#if QT_CONFIG(tooltip)
        pbSpecSnapshot->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Take snapshot</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSpecSnapshot->setText(QString());
        chbRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        chbBlue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "USB", nullptr));
#if QT_CONFIG(tooltip)
        pbViewBack->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide background</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbViewBack->setText(QString());
#if QT_CONFIG(tooltip)
        pbSnapCal->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Meassure</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSnapCal->setText(QString());
#if QT_CONFIG(tooltip)
        pbSpecCut->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Cut selected area</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSpecCut->setText(QString());
        pbSpecLoadSnap->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pbExpPixs->setTabText(pbExpPixs->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Spectrometer", nullptr));
        labelProgBar->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuImage->setTitle(QCoreApplication::translate("MainWindow", "Image", nullptr));
        menuFilter->setTitle(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        menuMultiselected->setTitle(QCoreApplication::translate("MainWindow", "Multiselected", nullptr));
        menuMerge->setTitle(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        menuAnalysis->setTitle(QCoreApplication::translate("MainWindow", "Analysis", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuSet->setTitle(QCoreApplication::translate("MainWindow", "Set", nullptr));
        menuCamera->setTitle(QCoreApplication::translate("MainWindow", "Camera", nullptr));
        menuDouble_Axis->setTitle(QCoreApplication::translate("MainWindow", "Double Axis", nullptr));
        menuSlide->setTitle(QCoreApplication::translate("MainWindow", "Slide", nullptr));
        menuCompute->setTitle(QCoreApplication::translate("MainWindow", "Compute", nullptr));
        menuObtain->setTitle(QCoreApplication::translate("MainWindow", "Obtain", nullptr));
        menuSend->setTitle(QCoreApplication::translate("MainWindow", "Send", nullptr));
        menuStart->setTitle(QCoreApplication::translate("MainWindow", "Start Remote", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuMake->setTitle(QCoreApplication::translate("MainWindow", "One Axis LR", nullptr));
        menuPlot->setTitle(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        menuCalib_Edition->setTitle(QCoreApplication::translate("MainWindow", "Calib Edition", nullptr));
        menuLocal->setTitle(QCoreApplication::translate("MainWindow", "Local", nullptr));
        menuSlide_2->setTitle(QCoreApplication::translate("MainWindow", "Slide", nullptr));
        menuStep_by_Step->setTitle(QCoreApplication::translate("MainWindow", "Step by Step", nullptr));
        menuSquare->setTitle(QCoreApplication::translate("MainWindow", "Square", nullptr));
        toolBarDraw->setWindowTitle(QCoreApplication::translate("MainWindow", "Draw toolbar", nullptr));
        mainToolbar->setWindowTitle(QCoreApplication::translate("MainWindow", "Main toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
