/********************************************************************************
** Form generated from reading UI file 'CaptureDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREDIALOG_H
#define UI_CAPTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLabel.h"
#include "Widgets/Extended/RDLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_CaptureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *exeGroup;
    QGridLayout *gridLayout;
    QLabel *exePathLabel;
    RDLineEdit *exePath;
    QToolButton *exePathBrowse;
    QLabel *workDirLabel;
    RDLineEdit *workDirPath;
    QToolButton *workDirBrowse;
    QLabel *cmdLineLabel;
    RDLineEdit *cmdline;
    QLabel *envVarLabel;
    QLineEdit *envVar;
    QToolButton *envVarEdit;
    QGroupBox *injectGroup;
    QGridLayout *gridLayout_2;
    QLabel *processWarning;
    QTreeView *processList;
    QLineEdit *processFilter;
    QPushButton *processRefesh;
    RDLabel *vulkanLayerWarn;
    RDLabel *androidScan;
    RDLabel *androidWarn;
    QGroupBox *optionsGroup;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *AllowFullscreen;
    QCheckBox *AllowVSync;
    QFrame *DebuggerDelayFrame;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *DelayForDebugger;
    QLabel *DebuggerDelayLabel;
    QCheckBox *CaptureCallstacks;
    QCheckBox *CaptureCallstacksOnlyActions;
    QCheckBox *APIValidation;
    QCheckBox *HookIntoChildren;
    QCheckBox *RefAllResources;
    QCheckBox *CaptureAllCmdLists;
    QCheckBox *VerifyBufferAccess;
    QFrame *SoftMemoryLimitFrame;
    QHBoxLayout *SoftMemoryLimitLayout;
    QDoubleSpinBox *SoftMemoryLimit;
    QLabel *SoftMemoryLimitLabel;
    QCheckBox *AutoStart;
    QGroupBox *actionGroup;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *queueFrameCap;
    QDoubleSpinBox *queuedFrame;
    QLabel *numFramesLabel;
    QDoubleSpinBox *numFrames;
    QSpacerItem *ActionsSpacer;
    QGroupBox *globalGroup;
    QHBoxLayout *horizontalLayout_2;
    QLabel *globalLabel;
    QPushButton *toggleGlobal;
    QSpacerItem *globalSpacer;
    QFrame *buttonsFrame;
    QHBoxLayout *horizontalLayout;
    QPushButton *saveSettings;
    QPushButton *loadSettings;
    QPushButton *loadLastCapture;
    QSpacerItem *buttonsSpace;
    QPushButton *launch;
    QSpacerItem *topVerticalSpacer;

    void setupUi(QFrame *CaptureDialog)
    {
        if (CaptureDialog->objectName().isEmpty())
            CaptureDialog->setObjectName(QString::fromUtf8("CaptureDialog"));
        CaptureDialog->resize(578, 1025);
        verticalLayout = new QVBoxLayout(CaptureDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        exeGroup = new QGroupBox(CaptureDialog);
        exeGroup->setObjectName(QString::fromUtf8("exeGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exeGroup->sizePolicy().hasHeightForWidth());
        exeGroup->setSizePolicy(sizePolicy);
        exeGroup->setMinimumSize(QSize(250, 130));
        gridLayout = new QGridLayout(exeGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 4, -1, -1);
        exePathLabel = new QLabel(exeGroup);
        exePathLabel->setObjectName(QString::fromUtf8("exePathLabel"));

        gridLayout->addWidget(exePathLabel, 0, 0, 1, 1);

        exePath = new RDLineEdit(exeGroup);
        exePath->setObjectName(QString::fromUtf8("exePath"));
        exePath->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(exePath, 0, 2, 1, 1);

        exePathBrowse = new QToolButton(exeGroup);
        exePathBrowse->setObjectName(QString::fromUtf8("exePathBrowse"));

        gridLayout->addWidget(exePathBrowse, 0, 3, 1, 1);

        workDirLabel = new QLabel(exeGroup);
        workDirLabel->setObjectName(QString::fromUtf8("workDirLabel"));

        gridLayout->addWidget(workDirLabel, 1, 0, 1, 1);

        workDirPath = new RDLineEdit(exeGroup);
        workDirPath->setObjectName(QString::fromUtf8("workDirPath"));
        workDirPath->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(workDirPath, 1, 2, 1, 1);

        workDirBrowse = new QToolButton(exeGroup);
        workDirBrowse->setObjectName(QString::fromUtf8("workDirBrowse"));

        gridLayout->addWidget(workDirBrowse, 1, 3, 1, 1);

        cmdLineLabel = new QLabel(exeGroup);
        cmdLineLabel->setObjectName(QString::fromUtf8("cmdLineLabel"));

        gridLayout->addWidget(cmdLineLabel, 2, 0, 1, 1);

        cmdline = new RDLineEdit(exeGroup);
        cmdline->setObjectName(QString::fromUtf8("cmdline"));
        cmdline->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(cmdline, 2, 2, 1, 2);

        envVarLabel = new QLabel(exeGroup);
        envVarLabel->setObjectName(QString::fromUtf8("envVarLabel"));

        gridLayout->addWidget(envVarLabel, 3, 0, 1, 1);

        envVar = new QLineEdit(exeGroup);
        envVar->setObjectName(QString::fromUtf8("envVar"));
        envVar->setReadOnly(true);

        gridLayout->addWidget(envVar, 3, 2, 1, 1);

        envVarEdit = new QToolButton(exeGroup);
        envVarEdit->setObjectName(QString::fromUtf8("envVarEdit"));

        gridLayout->addWidget(envVarEdit, 3, 3, 1, 1);


        verticalLayout->addWidget(exeGroup);

        injectGroup = new QGroupBox(CaptureDialog);
        injectGroup->setObjectName(QString::fromUtf8("injectGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(injectGroup->sizePolicy().hasHeightForWidth());
        injectGroup->setSizePolicy(sizePolicy1);
        injectGroup->setMinimumSize(QSize(250, 260));
        gridLayout_2 = new QGridLayout(injectGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        processWarning = new QLabel(injectGroup);
        processWarning->setObjectName(QString::fromUtf8("processWarning"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        processWarning->setPalette(palette);
        QFont font;
        font.setPointSize(18);
        processWarning->setFont(font);
        processWarning->setWordWrap(true);

        gridLayout_2->addWidget(processWarning, 0, 0, 1, 2);

        processList = new QTreeView(injectGroup);
        processList->setObjectName(QString::fromUtf8("processList"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(processList->sizePolicy().hasHeightForWidth());
        processList->setSizePolicy(sizePolicy2);
        processList->setMinimumSize(QSize(0, 100));
        processList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        processList->setIndentation(0);
        processList->setRootIsDecorated(false);
        processList->setItemsExpandable(false);
        processList->setSortingEnabled(true);

        gridLayout_2->addWidget(processList, 1, 0, 1, 2);

        processFilter = new QLineEdit(injectGroup);
        processFilter->setObjectName(QString::fromUtf8("processFilter"));

        gridLayout_2->addWidget(processFilter, 2, 0, 1, 1);

        processRefesh = new QPushButton(injectGroup);
        processRefesh->setObjectName(QString::fromUtf8("processRefesh"));

        gridLayout_2->addWidget(processRefesh, 2, 1, 1, 1);


        verticalLayout->addWidget(injectGroup);

        vulkanLayerWarn = new RDLabel(CaptureDialog);
        vulkanLayerWarn->setObjectName(QString::fromUtf8("vulkanLayerWarn"));
        vulkanLayerWarn->setCursor(QCursor(Qt::PointingHandCursor));
        vulkanLayerWarn->setFrameShape(QFrame::Box);
        vulkanLayerWarn->setTextFormat(Qt::RichText);
        vulkanLayerWarn->setMargin(3);

        verticalLayout->addWidget(vulkanLayerWarn);

        androidScan = new RDLabel(CaptureDialog);
        androidScan->setObjectName(QString::fromUtf8("androidScan"));
        androidScan->setCursor(QCursor(Qt::PointingHandCursor));
        androidScan->setFrameShape(QFrame::Box);
        androidScan->setTextFormat(Qt::RichText);
        androidScan->setMargin(3);

        verticalLayout->addWidget(androidScan);

        androidWarn = new RDLabel(CaptureDialog);
        androidWarn->setObjectName(QString::fromUtf8("androidWarn"));
        androidWarn->setCursor(QCursor(Qt::PointingHandCursor));
        androidWarn->setFrameShape(QFrame::Box);
        androidWarn->setTextFormat(Qt::RichText);
        androidWarn->setMargin(3);

        verticalLayout->addWidget(androidWarn);

        optionsGroup = new QGroupBox(CaptureDialog);
        optionsGroup->setObjectName(QString::fromUtf8("optionsGroup"));
        sizePolicy.setHeightForWidth(optionsGroup->sizePolicy().hasHeightForWidth());
        optionsGroup->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(optionsGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AllowFullscreen = new QCheckBox(optionsGroup);
        AllowFullscreen->setObjectName(QString::fromUtf8("AllowFullscreen"));

        verticalLayout_2->addWidget(AllowFullscreen);

        AllowVSync = new QCheckBox(optionsGroup);
        AllowVSync->setObjectName(QString::fromUtf8("AllowVSync"));

        verticalLayout_2->addWidget(AllowVSync);

        DebuggerDelayFrame = new QFrame(optionsGroup);
        DebuggerDelayFrame->setObjectName(QString::fromUtf8("DebuggerDelayFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DebuggerDelayFrame->sizePolicy().hasHeightForWidth());
        DebuggerDelayFrame->setSizePolicy(sizePolicy3);
        DebuggerDelayFrame->setFrameShape(QFrame::NoFrame);
        DebuggerDelayFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(DebuggerDelayFrame);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        DelayForDebugger = new QDoubleSpinBox(DebuggerDelayFrame);
        DelayForDebugger->setObjectName(QString::fromUtf8("DelayForDebugger"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(DelayForDebugger->sizePolicy().hasHeightForWidth());
        DelayForDebugger->setSizePolicy(sizePolicy4);
        DelayForDebugger->setMinimumSize(QSize(40, 0));
        DelayForDebugger->setDecimals(0);
        DelayForDebugger->setMaximum(120.000000000000000);
        DelayForDebugger->setValue(0.000000000000000);

        horizontalLayout_3->addWidget(DelayForDebugger);

        DebuggerDelayLabel = new QLabel(DebuggerDelayFrame);
        DebuggerDelayLabel->setObjectName(QString::fromUtf8("DebuggerDelayLabel"));
        sizePolicy3.setHeightForWidth(DebuggerDelayLabel->sizePolicy().hasHeightForWidth());
        DebuggerDelayLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(DebuggerDelayLabel);


        verticalLayout_2->addWidget(DebuggerDelayFrame);

        CaptureCallstacks = new QCheckBox(optionsGroup);
        CaptureCallstacks->setObjectName(QString::fromUtf8("CaptureCallstacks"));

        verticalLayout_2->addWidget(CaptureCallstacks);

        CaptureCallstacksOnlyActions = new QCheckBox(optionsGroup);
        CaptureCallstacksOnlyActions->setObjectName(QString::fromUtf8("CaptureCallstacksOnlyActions"));

        verticalLayout_2->addWidget(CaptureCallstacksOnlyActions);

        APIValidation = new QCheckBox(optionsGroup);
        APIValidation->setObjectName(QString::fromUtf8("APIValidation"));

        verticalLayout_2->addWidget(APIValidation);

        HookIntoChildren = new QCheckBox(optionsGroup);
        HookIntoChildren->setObjectName(QString::fromUtf8("HookIntoChildren"));

        verticalLayout_2->addWidget(HookIntoChildren);

        RefAllResources = new QCheckBox(optionsGroup);
        RefAllResources->setObjectName(QString::fromUtf8("RefAllResources"));

        verticalLayout_2->addWidget(RefAllResources);

        CaptureAllCmdLists = new QCheckBox(optionsGroup);
        CaptureAllCmdLists->setObjectName(QString::fromUtf8("CaptureAllCmdLists"));

        verticalLayout_2->addWidget(CaptureAllCmdLists);

        VerifyBufferAccess = new QCheckBox(optionsGroup);
        VerifyBufferAccess->setObjectName(QString::fromUtf8("VerifyBufferAccess"));

        verticalLayout_2->addWidget(VerifyBufferAccess);

        SoftMemoryLimitFrame = new QFrame(optionsGroup);
        SoftMemoryLimitFrame->setObjectName(QString::fromUtf8("SoftMemoryLimitFrame"));
        sizePolicy3.setHeightForWidth(SoftMemoryLimitFrame->sizePolicy().hasHeightForWidth());
        SoftMemoryLimitFrame->setSizePolicy(sizePolicy3);
        SoftMemoryLimitFrame->setFrameShape(QFrame::NoFrame);
        SoftMemoryLimitFrame->setFrameShadow(QFrame::Plain);
        SoftMemoryLimitLayout = new QHBoxLayout(SoftMemoryLimitFrame);
        SoftMemoryLimitLayout->setSpacing(4);
        SoftMemoryLimitLayout->setObjectName(QString::fromUtf8("SoftMemoryLimitLayout"));
        SoftMemoryLimitLayout->setContentsMargins(0, 0, 0, 0);
        SoftMemoryLimit = new QDoubleSpinBox(SoftMemoryLimitFrame);
        SoftMemoryLimit->setObjectName(QString::fromUtf8("SoftMemoryLimit"));
        sizePolicy4.setHeightForWidth(SoftMemoryLimit->sizePolicy().hasHeightForWidth());
        SoftMemoryLimit->setSizePolicy(sizePolicy4);
        SoftMemoryLimit->setMinimumSize(QSize(40, 0));
        SoftMemoryLimit->setDecimals(0);
        SoftMemoryLimit->setMaximum(99999.000000000000000);
        SoftMemoryLimit->setValue(0.000000000000000);

        SoftMemoryLimitLayout->addWidget(SoftMemoryLimit);

        SoftMemoryLimitLabel = new QLabel(SoftMemoryLimitFrame);
        SoftMemoryLimitLabel->setObjectName(QString::fromUtf8("SoftMemoryLimitLabel"));
        sizePolicy3.setHeightForWidth(SoftMemoryLimitLabel->sizePolicy().hasHeightForWidth());
        SoftMemoryLimitLabel->setSizePolicy(sizePolicy3);

        SoftMemoryLimitLayout->addWidget(SoftMemoryLimitLabel);


        verticalLayout_2->addWidget(SoftMemoryLimitFrame);

        AutoStart = new QCheckBox(optionsGroup);
        AutoStart->setObjectName(QString::fromUtf8("AutoStart"));

        verticalLayout_2->addWidget(AutoStart);


        verticalLayout->addWidget(optionsGroup);

        actionGroup = new QGroupBox(CaptureDialog);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        sizePolicy.setHeightForWidth(actionGroup->sizePolicy().hasHeightForWidth());
        actionGroup->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(actionGroup);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        queueFrameCap = new QCheckBox(actionGroup);
        queueFrameCap->setObjectName(QString::fromUtf8("queueFrameCap"));

        horizontalLayout_5->addWidget(queueFrameCap);

        queuedFrame = new QDoubleSpinBox(actionGroup);
        queuedFrame->setObjectName(QString::fromUtf8("queuedFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(queuedFrame->sizePolicy().hasHeightForWidth());
        queuedFrame->setSizePolicy(sizePolicy5);
        queuedFrame->setDecimals(0);
        queuedFrame->setMinimum(0.000000000000000);
        queuedFrame->setMaximum(4294967296.000000000000000);

        horizontalLayout_5->addWidget(queuedFrame);

        numFramesLabel = new QLabel(actionGroup);
        numFramesLabel->setObjectName(QString::fromUtf8("numFramesLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(numFramesLabel->sizePolicy().hasHeightForWidth());
        numFramesLabel->setSizePolicy(sizePolicy6);

        horizontalLayout_5->addWidget(numFramesLabel);

        numFrames = new QDoubleSpinBox(actionGroup);
        numFrames->setObjectName(QString::fromUtf8("numFrames"));
        numFrames->setMinimumSize(QSize(45, 0));
        numFrames->setDecimals(0);
        numFrames->setMinimum(1.000000000000000);
        numFrames->setMaximum(10.000000000000000);

        horizontalLayout_5->addWidget(numFrames);

        ActionsSpacer = new QSpacerItem(596, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(ActionsSpacer);


        verticalLayout->addWidget(actionGroup);

        globalGroup = new QGroupBox(CaptureDialog);
        globalGroup->setObjectName(QString::fromUtf8("globalGroup"));
        sizePolicy.setHeightForWidth(globalGroup->sizePolicy().hasHeightForWidth());
        globalGroup->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(globalGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        globalLabel = new QLabel(globalGroup);
        globalLabel->setObjectName(QString::fromUtf8("globalLabel"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        globalLabel->setPalette(palette1);

        horizontalLayout_2->addWidget(globalLabel);

        toggleGlobal = new QPushButton(globalGroup);
        toggleGlobal->setObjectName(QString::fromUtf8("toggleGlobal"));
        toggleGlobal->setCheckable(true);
        toggleGlobal->setChecked(false);

        horizontalLayout_2->addWidget(toggleGlobal);

        globalSpacer = new QSpacerItem(587, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(globalSpacer);


        verticalLayout->addWidget(globalGroup);

        buttonsFrame = new QFrame(CaptureDialog);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        sizePolicy.setHeightForWidth(buttonsFrame->sizePolicy().hasHeightForWidth());
        buttonsFrame->setSizePolicy(sizePolicy);
        buttonsFrame->setFrameShape(QFrame::NoFrame);
        buttonsFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(buttonsFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        saveSettings = new QPushButton(buttonsFrame);
        saveSettings->setObjectName(QString::fromUtf8("saveSettings"));

        horizontalLayout->addWidget(saveSettings);

        loadSettings = new QPushButton(buttonsFrame);
        loadSettings->setObjectName(QString::fromUtf8("loadSettings"));
        sizePolicy4.setHeightForWidth(loadSettings->sizePolicy().hasHeightForWidth());
        loadSettings->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(loadSettings);

        loadLastCapture = new QPushButton(buttonsFrame);
        loadLastCapture->setObjectName(QString::fromUtf8("loadLastCapture"));
        sizePolicy4.setHeightForWidth(loadLastCapture->sizePolicy().hasHeightForWidth());
        loadLastCapture->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(loadLastCapture);

        buttonsSpace = new QSpacerItem(556, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(buttonsSpace);

        launch = new QPushButton(buttonsFrame);
        launch->setObjectName(QString::fromUtf8("launch"));

        horizontalLayout->addWidget(launch);


        verticalLayout->addWidget(buttonsFrame);

        topVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(topVerticalSpacer);


        retranslateUi(CaptureDialog);

        QMetaObject::connectSlotsByName(CaptureDialog);
    } // setupUi

    void retranslateUi(QFrame *CaptureDialog)
    {
        CaptureDialog->setWindowTitle(QCoreApplication::translate("CaptureDialog", "Launch Application", nullptr));
        exeGroup->setTitle(QCoreApplication::translate("CaptureDialog", "Program", nullptr));
#if QT_CONFIG(tooltip)
        exePathLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for an executable file", nullptr));
#endif // QT_CONFIG(tooltip)
        exePathLabel->setText(QCoreApplication::translate("CaptureDialog", "Executable Path", nullptr));
#if QT_CONFIG(tooltip)
        exePath->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for an executable file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exePathBrowse->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for an executable file", nullptr));
#endif // QT_CONFIG(tooltip)
        exePathBrowse->setText(QCoreApplication::translate("CaptureDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        workDirLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for a working directory", nullptr));
#endif // QT_CONFIG(tooltip)
        workDirLabel->setText(QCoreApplication::translate("CaptureDialog", "Working Directory", nullptr));
#if QT_CONFIG(tooltip)
        workDirPath->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for a working directory", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        workDirBrowse->setToolTip(QCoreApplication::translate("CaptureDialog", "Browse for a working directory", nullptr));
#endif // QT_CONFIG(tooltip)
        workDirBrowse->setText(QCoreApplication::translate("CaptureDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        cmdLineLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "The command-line that will be passed to the executable on launch", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLineLabel->setText(QCoreApplication::translate("CaptureDialog", "Command-line Arguments", nullptr));
#if QT_CONFIG(tooltip)
        cmdline->setToolTip(QCoreApplication::translate("CaptureDialog", "The command-line that will be passed to the executable on launch", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        envVarLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "The environment variables for the executable", nullptr));
#endif // QT_CONFIG(tooltip)
        envVarLabel->setText(QCoreApplication::translate("CaptureDialog", "Environment Variables", nullptr));
#if QT_CONFIG(tooltip)
        envVar->setToolTip(QCoreApplication::translate("CaptureDialog", "The environment variables for the executable", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        envVarEdit->setToolTip(QCoreApplication::translate("CaptureDialog", "The environment variables for the executable", nullptr));
#endif // QT_CONFIG(tooltip)
        envVarEdit->setText(QCoreApplication::translate("CaptureDialog", "...", nullptr));
        injectGroup->setTitle(QCoreApplication::translate("CaptureDialog", "Process", nullptr));
        processWarning->setText(QCoreApplication::translate("CaptureDialog", "NOTE: Injection must happen <b>immediately</b> after the process starts, before any graphics API has been initialized.", nullptr));
        processFilter->setPlaceholderText(QCoreApplication::translate("CaptureDialog", "Filter process list by PID or name", nullptr));
        processRefesh->setText(QCoreApplication::translate("CaptureDialog", "Refresh", nullptr));
        vulkanLayerWarn->setText(QCoreApplication::translate("CaptureDialog", "<html><head/><body><table><tr><td valign=\"middle\"><img width=\"16\" src=\":/information.png\"/></td><td><p>Warning: Vulkan capture is not configured.<br/>Click here to set up Vulkan capture.</p></td></tr></table></body></html>", nullptr));
        androidScan->setText(QCoreApplication::translate("CaptureDialog", "<html><head/><body><table><tr><td valign=\"middle\"><img width=\"16\" src=\":/information.png\"/></td><td valign=\"middle\"><p>Scanning Android application for RenderDoc support...<br/></p></td></tr></table></body></html>", nullptr));
        androidWarn->setText(QCoreApplication::translate("CaptureDialog", "<html><head/><body><table><tr><td valign=\"middle\"><img width=\"16\" src=\":/information.png\"/></td><td><p>Warning: Android application not set up for RenderDoc capture.<br/>Click here for ways to fix this.</p></td></tr></table></body></html>", nullptr));
        optionsGroup->setTitle(QCoreApplication::translate("CaptureDialog", "Capture Options", nullptr));
#if QT_CONFIG(tooltip)
        AllowFullscreen->setToolTip(QCoreApplication::translate("CaptureDialog", "Allows the application to switch to full-screen mode", nullptr));
#endif // QT_CONFIG(tooltip)
        AllowFullscreen->setText(QCoreApplication::translate("CaptureDialog", "Allow Fullscreen", nullptr));
#if QT_CONFIG(tooltip)
        AllowVSync->setToolTip(QCoreApplication::translate("CaptureDialog", "Allows the application to enable v-sync", nullptr));
#endif // QT_CONFIG(tooltip)
        AllowVSync->setText(QCoreApplication::translate("CaptureDialog", "Allow VSync", nullptr));
#if QT_CONFIG(tooltip)
        DelayForDebugger->setToolTip(QCoreApplication::translate("CaptureDialog", "Pauses for N seconds after launching the process, to allow a debugger to attach", nullptr));
#endif // QT_CONFIG(tooltip)
        DelayForDebugger->setSuffix(QCoreApplication::translate("CaptureDialog", " secs", "seconds"));
#if QT_CONFIG(tooltip)
        DebuggerDelayLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "Pauses for N seconds after launching the process, to allow a debugger to attach", nullptr));
#endif // QT_CONFIG(tooltip)
        DebuggerDelayLabel->setText(QCoreApplication::translate("CaptureDialog", "Debugger Delay", nullptr));
#if QT_CONFIG(tooltip)
        CaptureCallstacks->setToolTip(QCoreApplication::translate("CaptureDialog", "Collect a callstack on every API call", nullptr));
#endif // QT_CONFIG(tooltip)
        CaptureCallstacks->setText(QCoreApplication::translate("CaptureDialog", "Collect Callstacks", nullptr));
#if QT_CONFIG(tooltip)
        CaptureCallstacksOnlyActions->setToolTip(QCoreApplication::translate("CaptureDialog", "Only collect callstacks on actions (draws, dispatches, clears, copies, etc)", nullptr));
#endif // QT_CONFIG(tooltip)
        CaptureCallstacksOnlyActions->setText(QCoreApplication::translate("CaptureDialog", "Only Action stacks", nullptr));
#if QT_CONFIG(tooltip)
        APIValidation->setToolTip(QCoreApplication::translate("CaptureDialog", "Initialise the graphics API with built-in validation enabled - allows capturing and reading of errors and warnings generated by the API's own debugging system", nullptr));
#endif // QT_CONFIG(tooltip)
        APIValidation->setText(QCoreApplication::translate("CaptureDialog", "Enable API Validation", nullptr));
#if QT_CONFIG(tooltip)
        HookIntoChildren->setToolTip(QCoreApplication::translate("CaptureDialog", "Hook into child processes - useful with launchers or similar intermediate processes", nullptr));
#endif // QT_CONFIG(tooltip)
        HookIntoChildren->setText(QCoreApplication::translate("CaptureDialog", "Capture Child Processes", nullptr));
#if QT_CONFIG(tooltip)
        RefAllResources->setToolTip(QCoreApplication::translate("CaptureDialog", "Consider all resources to be included, even if unused in the capture frame", nullptr));
#endif // QT_CONFIG(tooltip)
        RefAllResources->setText(QCoreApplication::translate("CaptureDialog", "Ref all Resources", nullptr));
#if QT_CONFIG(tooltip)
        CaptureAllCmdLists->setToolTip(QCoreApplication::translate("CaptureDialog", "When enabled, all deferred command lists will be saved even while idling. This has an overhead but ensures if you hold onto a list it will be captured.", nullptr));
#endif // QT_CONFIG(tooltip)
        CaptureAllCmdLists->setText(QCoreApplication::translate("CaptureDialog", "Capture all Cmd Lists", nullptr));
#if QT_CONFIG(tooltip)
        VerifyBufferAccess->setToolTip(QCoreApplication::translate("CaptureDialog", "When enabled, verify some buffer access on OpenGL and D3D11. This initialises buffers with undefined contents on creation to 0xdddddddd instead of 0x0, and verifies that Map() bounds are not overrun.", nullptr));
#endif // QT_CONFIG(tooltip)
        VerifyBufferAccess->setText(QCoreApplication::translate("CaptureDialog", "Verify Buffer Access", nullptr));
#if QT_CONFIG(tooltip)
        SoftMemoryLimit->setToolTip(QCoreApplication::translate("CaptureDialog", "Specifies a soft memory limit which some APIs may use to limit graphics memory use and use disk space instead for storing temporary data.", nullptr));
#endif // QT_CONFIG(tooltip)
        SoftMemoryLimit->setSuffix(QCoreApplication::translate("CaptureDialog", " MB", "seconds"));
#if QT_CONFIG(tooltip)
        SoftMemoryLimitLabel->setToolTip(QCoreApplication::translate("CaptureDialog", "Specifies a soft memory limit which some APIs may use to limit graphics memory use and use disk space instead for storing temporary data.", nullptr));
#endif // QT_CONFIG(tooltip)
        SoftMemoryLimitLabel->setText(QCoreApplication::translate("CaptureDialog", "Soft Mem Limit", nullptr));
#if QT_CONFIG(tooltip)
        AutoStart->setToolTip(QCoreApplication::translate("CaptureDialog", "If these capture settings are saved & run, auto start the capture instantly on load", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoStart->setText(QCoreApplication::translate("CaptureDialog", "Auto Start", nullptr));
        actionGroup->setTitle(QCoreApplication::translate("CaptureDialog", "Actions", nullptr));
        queueFrameCap->setText(QCoreApplication::translate("CaptureDialog", "Queue Capture", nullptr));
        queuedFrame->setPrefix(QCoreApplication::translate("CaptureDialog", "Frame ", "Frame number"));
        queuedFrame->setSuffix(QString());
        numFramesLabel->setText(QCoreApplication::translate("CaptureDialog", "# Frames:", nullptr));
        globalGroup->setTitle(QCoreApplication::translate("CaptureDialog", "Global Process Hook", nullptr));
        globalLabel->setText(QCoreApplication::translate("CaptureDialog", "Text Set by Code", nullptr));
        toggleGlobal->setText(QCoreApplication::translate("CaptureDialog", "Enable Global Hook", nullptr));
#if QT_CONFIG(tooltip)
        saveSettings->setToolTip(QCoreApplication::translate("CaptureDialog", "Save these capture settings to file to load later", nullptr));
#endif // QT_CONFIG(tooltip)
        saveSettings->setText(QCoreApplication::translate("CaptureDialog", "Save Settings", nullptr));
#if QT_CONFIG(tooltip)
        loadSettings->setToolTip(QCoreApplication::translate("CaptureDialog", "Load a saved set of capture settings", nullptr));
#endif // QT_CONFIG(tooltip)
        loadSettings->setText(QCoreApplication::translate("CaptureDialog", "Load Settings", nullptr));
#if QT_CONFIG(tooltip)
        loadLastCapture->setToolTip(QCoreApplication::translate("CaptureDialog", "Load the most recently used capture settings", nullptr));
#endif // QT_CONFIG(tooltip)
        loadLastCapture->setText(QCoreApplication::translate("CaptureDialog", "Load Last Settings", nullptr));
#if QT_CONFIG(tooltip)
        launch->setToolTip(QCoreApplication::translate("CaptureDialog", "Launch the selected program with RenderDoc enabled for capture", nullptr));
#endif // QT_CONFIG(tooltip)
        launch->setText(QCoreApplication::translate("CaptureDialog", "Launch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptureDialog: public Ui_CaptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREDIALOG_H
