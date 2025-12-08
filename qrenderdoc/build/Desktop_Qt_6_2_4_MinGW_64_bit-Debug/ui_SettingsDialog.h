/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/Extended/RDTableWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *pages;
    QTabWidget *tabWidget;
    QWidget *general;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *UIStyle_label;
    QComboBox *UIStyle;
    QLabel *label_20;
    QComboBox *Font_Family;
    QLabel *label_21;
    QComboBox *Font_MonoFamily;
    QLabel *label_27;
    QComboBox *Font_GlobalScale;
    QLabel *label_9;
    QCheckBox *Font_PreferMonospaced;
    QFrame *line;
    QLabel *label;
    QSpinBox *Formatter_MinFigures;
    QLabel *label_2;
    QSpinBox *Formatter_MaxFigures;
    QLabel *label_3;
    QSpinBox *Formatter_NegExp;
    QLabel *label_4;
    QSpinBox *Formatter_PosExp;
    QLabel *label_41;
    QComboBox *Formatter_OffsetSizeDisplayMode;
    QLabel *label_5;
    QLineEdit *tempDirectory;
    QPushButton *browseTempCaptureDirectory;
    QLabel *label_6;
    QLineEdit *saveDirectory;
    QPushButton *browseSaveCaptureDirectory;
    QLabel *globalHookLabel;
    QCheckBox *AllowGlobalHook;
    QLabel *injectProcLabel;
    QCheckBox *AllowProcessInject;
    QLabel *label_8;
    QCheckBox *CheckUpdate_AllowChecks;
    QLabel *label_10;
    QCheckBox *AlwaysReplayLocally;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_4;
    QLabel *analyticsDescribeLabel;
    QRadioButton *analyticsAutoSubmit;
    QRadioButton *analyticsManualCheck;
    QRadioButton *analyticsOptOut;
    QWidget *core;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_28;
    QPushButton *configEditor;
    QLabel *chooseIgnoresLabel;
    QPushButton *chooseIgnores;
    QLabel *label_31;
    QPushButton *chooseSearchPaths;
    QLabel *label_18;
    QCheckBox *ExternalTool_RGPIntegration;
    QLabel *label_17;
    QLineEdit *ExternalTool_RadeonGPUProfiler;
    QPushButton *browseRGPPath;
    QSpacerItem *verticalSpacer_2;
    QWidget *replayTab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_10;
    QVBoxLayout *replayOptionsLayout;
    QSpacerItem *verticalSpacer_8;
    QWidget *textureTab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QCheckBox *TextureViewer_ResetRange;
    QLabel *label_13;
    QCheckBox *TextureViewer_PerTexSettings;
    QLabel *label_26;
    QCheckBox *TextureViewer_PerTexYFlip;
    QLabel *label_29;
    QPushButton *TextureViewer_ChooseShaderDirectories;
    QSpacerItem *verticalSpacer_3;
    QWidget *shaderTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QCheckBox *ShaderViewer_FriendlyNaming;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *label_16;
    RDTableWidget *shaderTools;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *addShaderTool;
    QPushButton *editShaderTool;
    QPushButton *deleteShaderTool;
    QSpacerItem *verticalSpacer_4;
    QWidget *eventTab;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QLabel *label_19;
    QComboBox *EventBrowser_TimeUnit;
    QLabel *label_15;
    QCheckBox *EventBrowser_AddFake;
    QLabel *label_22;
    QCheckBox *EventBrowser_ApplyColors;
    QLabel *label_23;
    QCheckBox *EventBrowser_ColorEventRow;
    QSpacerItem *verticalSpacer_5;
    QWidget *commentsTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QLabel *label_32;
    QCheckBox *Comments_ShowOnLoad;
    QSpacerItem *verticalSpacer_7;
    QWidget *androidTab;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_8;
    QLabel *label_24;
    QLineEdit *Android_SDKPath;
    QPushButton *browseAndroidSDKPath;
    QLabel *label_7;
    QLineEdit *Android_JDKPath;
    QPushButton *browseJDKPath;
    QLabel *label_25;
    QDoubleSpinBox *Android_MaxConnectTimeout;
    QSpacerItem *verticalSpacer_6;
    QDialogButtonBox *okButton;

    void setupUi(QWidget *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(564, 580);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        pages = new QListWidget(SettingsDialog);
        pages->setObjectName(QString::fromUtf8("pages"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pages->sizePolicy().hasHeightForWidth());
        pages->setSizePolicy(sizePolicy);
        pages->setFrameShape(QFrame::Panel);
        pages->setFrameShadow(QFrame::Plain);
        pages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pages->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        pages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pages->setSelectionBehavior(QAbstractItemView::SelectRows);
        pages->setTextElideMode(Qt::ElideNone);
        pages->setResizeMode(QListView::Adjust);

        gridLayout->addWidget(pages, 0, 0, 1, 1);

        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setDocumentMode(true);
        general = new QWidget();
        general->setObjectName(QString::fromUtf8("general"));
        verticalLayout_3 = new QVBoxLayout(general);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(general);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        UIStyle_label = new QLabel(groupBox);
        UIStyle_label->setObjectName(QString::fromUtf8("UIStyle_label"));

        gridLayout_5->addWidget(UIStyle_label, 0, 0, 1, 1);

        UIStyle = new QComboBox(groupBox);
        UIStyle->setObjectName(QString::fromUtf8("UIStyle"));
        UIStyle->setInsertPolicy(QComboBox::NoInsert);
        UIStyle->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_5->addWidget(UIStyle, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 1, 0, 1, 1);

        Font_Family = new QComboBox(groupBox);
        Font_Family->setObjectName(QString::fromUtf8("Font_Family"));

        gridLayout_5->addWidget(Font_Family, 1, 1, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 2, 0, 1, 1);

        Font_MonoFamily = new QComboBox(groupBox);
        Font_MonoFamily->setObjectName(QString::fromUtf8("Font_MonoFamily"));

        gridLayout_5->addWidget(Font_MonoFamily, 2, 1, 1, 1);

        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_5->addWidget(label_27, 3, 0, 1, 1);

        Font_GlobalScale = new QComboBox(groupBox);
        Font_GlobalScale->setObjectName(QString::fromUtf8("Font_GlobalScale"));
        Font_GlobalScale->setEditable(true);

        gridLayout_5->addWidget(Font_GlobalScale, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 4, 0, 1, 1);

        Font_PreferMonospaced = new QCheckBox(groupBox);
        Font_PreferMonospaced->setObjectName(QString::fromUtf8("Font_PreferMonospaced"));

        gridLayout_5->addWidget(Font_PreferMonospaced, 4, 1, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 5, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 6, 0, 1, 1);

        Formatter_MinFigures = new QSpinBox(groupBox);
        Formatter_MinFigures->setObjectName(QString::fromUtf8("Formatter_MinFigures"));
        Formatter_MinFigures->setValue(2);

        gridLayout_5->addWidget(Formatter_MinFigures, 6, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 7, 0, 1, 1);

        Formatter_MaxFigures = new QSpinBox(groupBox);
        Formatter_MaxFigures->setObjectName(QString::fromUtf8("Formatter_MaxFigures"));
        Formatter_MaxFigures->setValue(5);

        gridLayout_5->addWidget(Formatter_MaxFigures, 7, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 8, 0, 1, 1);

        Formatter_NegExp = new QSpinBox(groupBox);
        Formatter_NegExp->setObjectName(QString::fromUtf8("Formatter_NegExp"));
        Formatter_NegExp->setValue(5);

        gridLayout_5->addWidget(Formatter_NegExp, 8, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 9, 0, 1, 1);

        Formatter_PosExp = new QSpinBox(groupBox);
        Formatter_PosExp->setObjectName(QString::fromUtf8("Formatter_PosExp"));
        Formatter_PosExp->setValue(7);
        Formatter_PosExp->setDisplayIntegerBase(10);

        gridLayout_5->addWidget(Formatter_PosExp, 9, 1, 1, 1);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_5->addWidget(label_41, 10, 0, 1, 1);

        Formatter_OffsetSizeDisplayMode = new QComboBox(groupBox);
        Formatter_OffsetSizeDisplayMode->setObjectName(QString::fromUtf8("Formatter_OffsetSizeDisplayMode"));

        gridLayout_5->addWidget(Formatter_OffsetSizeDisplayMode, 10, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 11, 0, 1, 1);

        tempDirectory = new QLineEdit(groupBox);
        tempDirectory->setObjectName(QString::fromUtf8("tempDirectory"));

        gridLayout_5->addWidget(tempDirectory, 12, 0, 1, 1);

        browseTempCaptureDirectory = new QPushButton(groupBox);
        browseTempCaptureDirectory->setObjectName(QString::fromUtf8("browseTempCaptureDirectory"));

        gridLayout_5->addWidget(browseTempCaptureDirectory, 12, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 13, 0, 1, 1);

        saveDirectory = new QLineEdit(groupBox);
        saveDirectory->setObjectName(QString::fromUtf8("saveDirectory"));

        gridLayout_5->addWidget(saveDirectory, 14, 0, 1, 1);

        browseSaveCaptureDirectory = new QPushButton(groupBox);
        browseSaveCaptureDirectory->setObjectName(QString::fromUtf8("browseSaveCaptureDirectory"));

        gridLayout_5->addWidget(browseSaveCaptureDirectory, 14, 1, 1, 1);

        globalHookLabel = new QLabel(groupBox);
        globalHookLabel->setObjectName(QString::fromUtf8("globalHookLabel"));

        gridLayout_5->addWidget(globalHookLabel, 15, 0, 1, 1);

        AllowGlobalHook = new QCheckBox(groupBox);
        AllowGlobalHook->setObjectName(QString::fromUtf8("AllowGlobalHook"));

        gridLayout_5->addWidget(AllowGlobalHook, 15, 1, 1, 1);

        injectProcLabel = new QLabel(groupBox);
        injectProcLabel->setObjectName(QString::fromUtf8("injectProcLabel"));

        gridLayout_5->addWidget(injectProcLabel, 16, 0, 1, 1);

        AllowProcessInject = new QCheckBox(groupBox);
        AllowProcessInject->setObjectName(QString::fromUtf8("AllowProcessInject"));

        gridLayout_5->addWidget(AllowProcessInject, 16, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 17, 0, 1, 1);

        CheckUpdate_AllowChecks = new QCheckBox(groupBox);
        CheckUpdate_AllowChecks->setObjectName(QString::fromUtf8("CheckUpdate_AllowChecks"));

        gridLayout_5->addWidget(CheckUpdate_AllowChecks, 17, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 18, 0, 1, 1);

        AlwaysReplayLocally = new QCheckBox(groupBox);
        AlwaysReplayLocally->setObjectName(QString::fromUtf8("AlwaysReplayLocally"));

        gridLayout_5->addWidget(AlwaysReplayLocally, 18, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 19, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_9 = new QGroupBox(general);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_4 = new QVBoxLayout(groupBox_9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        analyticsDescribeLabel = new QLabel(groupBox_9);
        analyticsDescribeLabel->setObjectName(QString::fromUtf8("analyticsDescribeLabel"));

        verticalLayout_4->addWidget(analyticsDescribeLabel);

        analyticsAutoSubmit = new QRadioButton(groupBox_9);
        analyticsAutoSubmit->setObjectName(QString::fromUtf8("analyticsAutoSubmit"));
        analyticsAutoSubmit->setChecked(true);

        verticalLayout_4->addWidget(analyticsAutoSubmit);

        analyticsManualCheck = new QRadioButton(groupBox_9);
        analyticsManualCheck->setObjectName(QString::fromUtf8("analyticsManualCheck"));

        verticalLayout_4->addWidget(analyticsManualCheck);

        analyticsOptOut = new QRadioButton(groupBox_9);
        analyticsOptOut->setObjectName(QString::fromUtf8("analyticsOptOut"));

        verticalLayout_4->addWidget(analyticsOptOut);


        verticalLayout_3->addWidget(groupBox_9);

        tabWidget->addTab(general, QString());
        core = new QWidget();
        core->setObjectName(QString::fromUtf8("core"));
        horizontalLayout_2 = new QHBoxLayout(core);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(core);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 0, 0, 1, 1);

        configEditor = new QPushButton(groupBox_2);
        configEditor->setObjectName(QString::fromUtf8("configEditor"));

        gridLayout_2->addWidget(configEditor, 0, 1, 1, 1);

        chooseIgnoresLabel = new QLabel(groupBox_2);
        chooseIgnoresLabel->setObjectName(QString::fromUtf8("chooseIgnoresLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chooseIgnoresLabel->sizePolicy().hasHeightForWidth());
        chooseIgnoresLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(chooseIgnoresLabel, 1, 0, 1, 1);

        chooseIgnores = new QPushButton(groupBox_2);
        chooseIgnores->setObjectName(QString::fromUtf8("chooseIgnores"));

        gridLayout_2->addWidget(chooseIgnores, 1, 1, 1, 1);

        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_31, 2, 0, 1, 1);

        chooseSearchPaths = new QPushButton(groupBox_2);
        chooseSearchPaths->setObjectName(QString::fromUtf8("chooseSearchPaths"));

        gridLayout_2->addWidget(chooseSearchPaths, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 3, 0, 1, 1);

        ExternalTool_RGPIntegration = new QCheckBox(groupBox_2);
        ExternalTool_RGPIntegration->setObjectName(QString::fromUtf8("ExternalTool_RGPIntegration"));

        gridLayout_2->addWidget(ExternalTool_RGPIntegration, 3, 1, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 4, 0, 1, 2);

        ExternalTool_RadeonGPUProfiler = new QLineEdit(groupBox_2);
        ExternalTool_RadeonGPUProfiler->setObjectName(QString::fromUtf8("ExternalTool_RadeonGPUProfiler"));

        gridLayout_2->addWidget(ExternalTool_RadeonGPUProfiler, 5, 0, 1, 1);

        browseRGPPath = new QPushButton(groupBox_2);
        browseRGPPath->setObjectName(QString::fromUtf8("browseRGPPath"));

        gridLayout_2->addWidget(browseRGPPath, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 387, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 2);


        horizontalLayout_2->addWidget(groupBox_2);

        tabWidget->addTab(core, QString());
        replayTab = new QWidget();
        replayTab->setObjectName(QString::fromUtf8("replayTab"));
        horizontalLayout = new QHBoxLayout(replayTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_10 = new QGroupBox(replayTab);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        replayOptionsLayout = new QVBoxLayout(groupBox_10);
        replayOptionsLayout->setObjectName(QString::fromUtf8("replayOptionsLayout"));
        verticalSpacer_8 = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        replayOptionsLayout->addItem(verticalSpacer_8);


        horizontalLayout->addWidget(groupBox_10);

        tabWidget->addTab(replayTab, QString());
        textureTab = new QWidget();
        textureTab->setObjectName(QString::fromUtf8("textureTab"));
        horizontalLayout_3 = new QHBoxLayout(textureTab);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(textureTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        TextureViewer_ResetRange = new QCheckBox(groupBox_3);
        TextureViewer_ResetRange->setObjectName(QString::fromUtf8("TextureViewer_ResetRange"));
        TextureViewer_ResetRange->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(TextureViewer_ResetRange, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        TextureViewer_PerTexSettings = new QCheckBox(groupBox_3);
        TextureViewer_PerTexSettings->setObjectName(QString::fromUtf8("TextureViewer_PerTexSettings"));
        TextureViewer_PerTexSettings->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(TextureViewer_PerTexSettings, 1, 1, 1, 1);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_26, 2, 0, 1, 1);

        TextureViewer_PerTexYFlip = new QCheckBox(groupBox_3);
        TextureViewer_PerTexYFlip->setObjectName(QString::fromUtf8("TextureViewer_PerTexYFlip"));
        TextureViewer_PerTexYFlip->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(TextureViewer_PerTexYFlip, 2, 1, 1, 1);

        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 3, 0, 1, 1);

        TextureViewer_ChooseShaderDirectories = new QPushButton(groupBox_3);
        TextureViewer_ChooseShaderDirectories->setObjectName(QString::fromUtf8("TextureViewer_ChooseShaderDirectories"));

        gridLayout_3->addWidget(TextureViewer_ChooseShaderDirectories, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 378, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 4, 1, 1, 1);


        horizontalLayout_3->addWidget(groupBox_3);

        tabWidget->addTab(textureTab, QString());
        shaderTab = new QWidget();
        shaderTab->setObjectName(QString::fromUtf8("shaderTab"));
        verticalLayout = new QVBoxLayout(shaderTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(shaderTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        ShaderViewer_FriendlyNaming = new QCheckBox(groupBox_4);
        ShaderViewer_FriendlyNaming->setObjectName(QString::fromUtf8("ShaderViewer_FriendlyNaming"));
        ShaderViewer_FriendlyNaming->setMinimumSize(QSize(50, 0));

        gridLayout_6->addWidget(ShaderViewer_FriendlyNaming, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(shaderTab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setWordWrap(true);

        gridLayout_4->addWidget(label_16, 0, 0, 1, 2);

        shaderTools = new RDTableWidget(groupBox_5);
        shaderTools->setObjectName(QString::fromUtf8("shaderTools"));
        shaderTools->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shaderTools->setAlternatingRowColors(true);
        shaderTools->setSelectionMode(QAbstractItemView::SingleSelection);
        shaderTools->setSelectionBehavior(QAbstractItemView::SelectRows);
        shaderTools->setTextElideMode(Qt::ElideMiddle);
        shaderTools->setCornerButtonEnabled(false);
        shaderTools->horizontalHeader()->setHighlightSections(false);
        shaderTools->verticalHeader()->setHighlightSections(false);

        gridLayout_4->addWidget(shaderTools, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        addShaderTool = new QPushButton(groupBox_5);
        addShaderTool->setObjectName(QString::fromUtf8("addShaderTool"));

        horizontalLayout_6->addWidget(addShaderTool);

        editShaderTool = new QPushButton(groupBox_5);
        editShaderTool->setObjectName(QString::fromUtf8("editShaderTool"));

        horizontalLayout_6->addWidget(editShaderTool);

        deleteShaderTool = new QPushButton(groupBox_5);
        deleteShaderTool->setObjectName(QString::fromUtf8("deleteShaderTool"));

        horizontalLayout_6->addWidget(deleteShaderTool);


        gridLayout_4->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 0, 1, 2);


        verticalLayout->addWidget(groupBox_5);

        tabWidget->addTab(shaderTab, QString());
        eventTab = new QWidget();
        eventTab->setObjectName(QString::fromUtf8("eventTab"));
        horizontalLayout_4 = new QHBoxLayout(eventTab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(eventTab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);

        gridLayout_7->addWidget(label_19, 0, 0, 1, 1);

        EventBrowser_TimeUnit = new QComboBox(groupBox_6);
        EventBrowser_TimeUnit->setObjectName(QString::fromUtf8("EventBrowser_TimeUnit"));

        gridLayout_7->addWidget(EventBrowser_TimeUnit, 0, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setWordWrap(true);

        gridLayout_7->addWidget(label_15, 1, 0, 1, 1);

        EventBrowser_AddFake = new QCheckBox(groupBox_6);
        EventBrowser_AddFake->setObjectName(QString::fromUtf8("EventBrowser_AddFake"));

        gridLayout_7->addWidget(EventBrowser_AddFake, 1, 1, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_7->addWidget(label_22, 2, 0, 1, 1);

        EventBrowser_ApplyColors = new QCheckBox(groupBox_6);
        EventBrowser_ApplyColors->setObjectName(QString::fromUtf8("EventBrowser_ApplyColors"));

        gridLayout_7->addWidget(EventBrowser_ApplyColors, 2, 1, 1, 1);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_7->addWidget(label_23, 3, 0, 1, 1);

        EventBrowser_ColorEventRow = new QCheckBox(groupBox_6);
        EventBrowser_ColorEventRow->setObjectName(QString::fromUtf8("EventBrowser_ColorEventRow"));

        gridLayout_7->addWidget(EventBrowser_ColorEventRow, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 297, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_5, 7, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_6);

        tabWidget->addTab(eventTab, QString());
        commentsTab = new QWidget();
        commentsTab->setObjectName(QString::fromUtf8("commentsTab"));
        verticalLayout_2 = new QVBoxLayout(commentsTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(commentsTab);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_32 = new QLabel(groupBox_8);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);
        label_32->setWordWrap(true);

        gridLayout_9->addWidget(label_32, 0, 0, 1, 1);

        Comments_ShowOnLoad = new QCheckBox(groupBox_8);
        Comments_ShowOnLoad->setObjectName(QString::fromUtf8("Comments_ShowOnLoad"));

        gridLayout_9->addWidget(Comments_ShowOnLoad, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 297, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_7, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_8);

        tabWidget->addTab(commentsTab, QString());
        androidTab = new QWidget();
        androidTab->setObjectName(QString::fromUtf8("androidTab"));
        horizontalLayout_5 = new QHBoxLayout(androidTab);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(androidTab);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_8 = new QGridLayout(groupBox_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_8->addWidget(label_24, 0, 0, 1, 1);

        Android_SDKPath = new QLineEdit(groupBox_7);
        Android_SDKPath->setObjectName(QString::fromUtf8("Android_SDKPath"));

        gridLayout_8->addWidget(Android_SDKPath, 1, 0, 1, 1);

        browseAndroidSDKPath = new QPushButton(groupBox_7);
        browseAndroidSDKPath->setObjectName(QString::fromUtf8("browseAndroidSDKPath"));

        gridLayout_8->addWidget(browseAndroidSDKPath, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_8->addWidget(label_7, 2, 0, 1, 1);

        Android_JDKPath = new QLineEdit(groupBox_7);
        Android_JDKPath->setObjectName(QString::fromUtf8("Android_JDKPath"));

        gridLayout_8->addWidget(Android_JDKPath, 3, 0, 1, 1);

        browseJDKPath = new QPushButton(groupBox_7);
        browseJDKPath->setObjectName(QString::fromUtf8("browseJDKPath"));

        gridLayout_8->addWidget(browseJDKPath, 3, 1, 1, 1);

        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_8->addWidget(label_25, 4, 0, 1, 1);

        Android_MaxConnectTimeout = new QDoubleSpinBox(groupBox_7);
        Android_MaxConnectTimeout->setObjectName(QString::fromUtf8("Android_MaxConnectTimeout"));
        Android_MaxConnectTimeout->setDecimals(0);
        Android_MaxConnectTimeout->setMaximum(120.000000000000000);

        gridLayout_8->addWidget(Android_MaxConnectTimeout, 4, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 325, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 5, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_7);

        tabWidget->addTab(androidTab, QString());

        gridLayout->addWidget(tabWidget, 0, 2, 1, 1);

        okButton = new QDialogButtonBox(SettingsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(okButton, 1, 2, 1, 1);


        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        UIStyle_label->setText(QCoreApplication::translate("SettingsDialog", "Visual theme of the UI", nullptr));
#if QT_CONFIG(tooltip)
        UIStyle->setToolTip(QCoreApplication::translate("SettingsDialog", "Selects the theme to display the UI in. These themes are available:<br>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_20->setToolTip(QCoreApplication::translate("SettingsDialog", "The default font family to be used for text. This will be overridden by the default monospace font if the below option for monospace override is chosen.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_20->setText(QCoreApplication::translate("SettingsDialog", "Default font family (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        Font_Family->setToolTip(QCoreApplication::translate("SettingsDialog", "The default font family to be used for text. This will be overridden by the default monospace font if the below option for monospace override is chosen.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_21->setToolTip(QCoreApplication::translate("SettingsDialog", "The default font family to be used for monospaced text, typically code display or tables of buffer data. If the below option for monospace override is chosen this font will be used for those extra places.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_21->setText(QCoreApplication::translate("SettingsDialog", "Monospaced font family (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        Font_MonoFamily->setToolTip(QCoreApplication::translate("SettingsDialog", "The default font family to be used for monospaced text, typically code display or tables of buffer data. If the below option for monospace override is chosen this font will be used for those extra places.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QCoreApplication::translate("SettingsDialog", "A global scale for all fonts in the program. This will only scale text, icons and other UI elements will be scaled according to DPI settings as normal.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_27->setText(QCoreApplication::translate("SettingsDialog", "Global font scale (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        Font_GlobalScale->setToolTip(QCoreApplication::translate("SettingsDialog", "A global scale for all fonts in the program. This will only scale text, icons and other UI elements will be scaled according to DPI settings as normal.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("SettingsDialog", "Prefer using a monospace font instead of the default font for places where resource names, action and marker names, and similar pieces of information are displayed.</p><p><br/></p><p>By default a monospaced font will only be used for places where fixed width is important such as code and numerical data displays.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Prefer monospaced fonts in UI (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        Font_PreferMonospaced->setToolTip(QCoreApplication::translate("SettingsDialog", "Prefer using a monospace font instead of the default font for places where resource names, action and marker names, and similar pieces of information are displayed.</p><p><br/></p><p>By default a monospaced font will only be used for places where fixed width is important such as code and numerical data displays.", nullptr));
#endif // QT_CONFIG(tooltip)
        Font_PreferMonospaced->setText(QString());
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("SettingsDialog", "At least this many decimal places will be displayed on floats.\n"
"e.g. a value of 2 means 0 will display as 0.00, 0.5 as 0.50. A value of 5 would display them as 0.00000 and 0.50000 respectively.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SettingsDialog", "Minimum decimal places on float values", nullptr));
#if QT_CONFIG(tooltip)
        Formatter_MinFigures->setToolTip(QCoreApplication::translate("SettingsDialog", "Decimals will display at least this many digits.\n"
"e.g. a value of 2 means 0 will display as 0.00, 0.5 as 0.50", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("SettingsDialog", "No more decimal places than this will be displayed on floats.\n"
"e.g. a value of 5 means 0.123456789 will display as 0.12345", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SettingsDialog", "Maximum decimal places on float values", nullptr));
#if QT_CONFIG(tooltip)
        Formatter_MaxFigures->setToolTip(QCoreApplication::translate("SettingsDialog", "No more decimal places than this will be displayed on floats.\n"
"e.g. a value of 5 means 0.123456789 will display as 0.12345 and 123.123456789 will display as 123.12345", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("SettingsDialog", "Any numbers smaller than this exponent will be displayed in scientific notation.\n"
"E.g. a value of 3 means 0.005 / 10 = 5E-4", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("SettingsDialog", "Negative exponential cutoff value", nullptr));
#if QT_CONFIG(tooltip)
        Formatter_NegExp->setToolTip(QCoreApplication::translate("SettingsDialog", "Any numbers smaller than this exponent will be displayed in scientific notation.\n"
"E.g. a value of 3 means 0.005 / 10 = 5E-4", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("SettingsDialog", "Any numbers larger than this exponent will be displayed in scientific notation.\n"
"e.g. 1000 * 10 = 1e4", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("SettingsDialog", "Positive exponential cutoff value", nullptr));
#if QT_CONFIG(tooltip)
        Formatter_PosExp->setToolTip(QCoreApplication::translate("SettingsDialog", "Any numbers larger than this exponent will be displayed in scientific notation.\n"
"e.g. 1000 * 10 = 1e4", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_41->setToolTip(QCoreApplication::translate("SettingsDialog", "Formatting mode to use for fields marked as a byte offset or a byte size", nullptr));
#endif // QT_CONFIG(tooltip)
        label_41->setText(QCoreApplication::translate("SettingsDialog", "Offset or size fields format mode", nullptr));
#if QT_CONFIG(tooltip)
        Formatter_OffsetSizeDisplayMode->setToolTip(QCoreApplication::translate("SettingsDialog", "Auto: decimal by default and hexadecimal if above a certain threshold, Decimal: always use decimal, Hexadecimal: always use hexadecimal.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the directory where capture files are saved after being created, until saved manually or deleted.\n"
"\n"
"Defaults to %TEMP%.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Directory for temporary capture files", nullptr));
#if QT_CONFIG(tooltip)
        tempDirectory->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the directory where capture files are saved after being created, until saved manually or deleted.\n"
"\n"
"Defaults to %TEMP%.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        browseTempCaptureDirectory->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the directory where capture files are saved after being created, until saved manually or deleted.\n"
"\n"
"Defaults to %TEMP%.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseTempCaptureDirectory->setText(QCoreApplication::translate("SettingsDialog", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the default directory for the save dialog when saving capture files.\n"
"\n"
"Defaults to blank, which follows system default behaviour.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("SettingsDialog", "Default save directory for captures", nullptr));
#if QT_CONFIG(tooltip)
        saveDirectory->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the default directory for the save dialog when saving capture files.\n"
"\n"
"Defaults to blank, which follows system default behaviour.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        browseSaveCaptureDirectory->setToolTip(QCoreApplication::translate("SettingsDialog", "Changes the default directory for the save dialog when saving capture files.\n"
"\n"
"Defaults to blank, which follows system default behaviour.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseSaveCaptureDirectory->setText(QCoreApplication::translate("SettingsDialog", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        globalHookLabel->setToolTip(QCoreApplication::translate("SettingsDialog", "Enables functionality on the capture application window that will insert RenderDoc automatically\n"
"into all new processes created - then inject into the target (matching) executable.\n"
"\n"
"Useful for capturing programs indirectly that can't easily be launched directly by RenderDoc\n"
"\n"
"Since this is a global system hook it must be used carefully and only when necessary!", nullptr));
#endif // QT_CONFIG(tooltip)
        globalHookLabel->setText(QCoreApplication::translate("SettingsDialog", "Allow global process hooking - be careful!", nullptr));
#if QT_CONFIG(tooltip)
        AllowGlobalHook->setToolTip(QCoreApplication::translate("SettingsDialog", "Enables functionality on the capture application window that will insert RenderDoc automatically\n"
"into all new processes created - then inject into the target (matching) executable.\n"
"\n"
"Useful for capturing programs indirectly that can't easily be launched directly by RenderDoc\n"
"\n"
"Since this is a global system hook it must be used carefully and only when necessary!", nullptr));
#endif // QT_CONFIG(tooltip)
        AllowGlobalHook->setText(QString());
#if QT_CONFIG(tooltip)
        injectProcLabel->setToolTip(QCoreApplication::translate("SettingsDialog", "Enables the ability to inject into processes on windows.\n"
"\n"
"Injecting into processes can be unreliable and should only be used as a last resort when no other\n"
"methods succeed, it should not be used as a primary method of launching applications. Instead the\n"
"program should be launched through RenderDoc via the Launch Process panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        injectProcLabel->setText(QCoreApplication::translate("SettingsDialog", "Enable process injection (restart required)", nullptr));
#if QT_CONFIG(tooltip)
        AllowProcessInject->setToolTip(QCoreApplication::translate("SettingsDialog", "Enables the ability to inject into processes on windows.\n"
"\n"
"Injecting into processes can be unreliable and should only be used as a last resort when no other\n"
"methods succeed, it should not be used as a primary method of launching applications. Instead the\n"
"program should be launched through RenderDoc via the Launch Process panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        AllowProcessInject->setText(QString());
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("SettingsDialog", "Allows RenderDoc to phone home to https://renderdoc.org to anonymously check for new versions.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Allow periodic anonymous update checks", nullptr));
#if QT_CONFIG(tooltip)
        CheckUpdate_AllowChecks->setToolTip(QCoreApplication::translate("SettingsDialog", "Allows RenderDoc to phone home to https://renderdoc.org to anonymously check for new versions.", nullptr));
#endif // QT_CONFIG(tooltip)
        CheckUpdate_AllowChecks->setText(QString());
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("SettingsDialog", "If a capture is marked as being created on a significantly different system (different OS or platform)\n"
"as is currently running, then by default the UI will prompt to ask if you want to replay on a remote context.\n"
"\n"
"This option overrides that and will always replay locally if the local context is selected.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Always replay captures locally, never prompt about it", nullptr));
#if QT_CONFIG(tooltip)
        AlwaysReplayLocally->setToolTip(QCoreApplication::translate("SettingsDialog", "If a capture is marked as being created on a significantly different system (different OS or platform)\n"
"as is currently running, then by default the UI will prompt to ask if you want to replay on a remote context.\n"
"\n"
"This option overrides that and will always replay locally if the local context is selected.", nullptr));
#endif // QT_CONFIG(tooltip)
        AlwaysReplayLocally->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("SettingsDialog", "Anonymous Analytics", nullptr));
        analyticsDescribeLabel->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"#analyticsDescribe\">Click here</a> to see currently reported data.</p></body></html>", nullptr));
        analyticsAutoSubmit->setText(QCoreApplication::translate("SettingsDialog", "Gather anonymous low-detail statistics and submit automatically.", nullptr));
        analyticsManualCheck->setText(QCoreApplication::translate("SettingsDialog", "Gather anonymous low-detail statistics, but manually verify before submitting.", nullptr));
        analyticsOptOut->setText(QCoreApplication::translate("SettingsDialog", "Do not gather or submit any statistics.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(general), QCoreApplication::translate("SettingsDialog", "General", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingsDialog", "Core", nullptr));
        label_28->setText(QCoreApplication::translate("SettingsDialog", "Open Advanced Config Editor", nullptr));
        configEditor->setText(QCoreApplication::translate("SettingsDialog", "Config Editor", nullptr));
        chooseIgnoresLabel->setText(QCoreApplication::translate("SettingsDialog", "Ignored DLLs for callstack symbol resolution", nullptr));
        chooseIgnores->setText(QCoreApplication::translate("SettingsDialog", "Ignored DLLs list", nullptr));
        label_31->setText(QCoreApplication::translate("SettingsDialog", "Shader debug search paths", nullptr));
        chooseSearchPaths->setText(QCoreApplication::translate("SettingsDialog", "Choose paths", nullptr));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("SettingsDialog", "RenderDoc can optionally have integration with AMD's Radeon GPU Profiler, to allow capturing RGP from RenderDoc and allowing interop between the two.\n"
"\n"
"After interop is enabled you will need to reload any capture.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("SettingsDialog", "Enable Radeon GPU Profiler integration (requires capture reload)", nullptr));
#if QT_CONFIG(tooltip)
        ExternalTool_RGPIntegration->setToolTip(QCoreApplication::translate("SettingsDialog", "RenderDoc can optionally have integration with AMD's Radeon GPU Profiler, to allow capturing RGP from RenderDoc and allowing interop between the two.\n"
"\n"
"After interop is enabled you will need to reload any capture.", nullptr));
#endif // QT_CONFIG(tooltip)
        ExternalTool_RGPIntegration->setText(QString());
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("SettingsDialog", "Locates the RadeonGPUProfiler.exe which will be used to interop with when generating and opening RGP profiles.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("SettingsDialog", "Path to Radeon GPU Profiler executable", nullptr));
#if QT_CONFIG(tooltip)
        ExternalTool_RadeonGPUProfiler->setToolTip(QCoreApplication::translate("SettingsDialog", "Locates the RadeonGPUProfiler.exe which will be used to interop with when generating and opening RGP profiles.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        browseRGPPath->setToolTip(QCoreApplication::translate("SettingsDialog", "Locates the RadeonGPUProfiler.exe which will be used to interop with when generating and opening RGP profiles.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseRGPPath->setText(QCoreApplication::translate("SettingsDialog", "Browse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(core), QCoreApplication::translate("SettingsDialog", "Core", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("SettingsDialog", "Default Replay Options", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(replayTab), QCoreApplication::translate("SettingsDialog", "Replay", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SettingsDialog", "Texture Viewer", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("SettingsDialog", "Reset visible range when changing event or texture", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("SettingsDialog", "Reset Range on changing selection", nullptr));
#if QT_CONFIG(tooltip)
        TextureViewer_ResetRange->setToolTip(QCoreApplication::translate("SettingsDialog", "Reset visible range when changing event or texture", nullptr));
#endif // QT_CONFIG(tooltip)
        TextureViewer_ResetRange->setText(QString());
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("SettingsDialog", "The visible channels (RGBA) and selected mip/slice are remembered and restored per-texture.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("SettingsDialog", "Visible channels & mip/slice saved per-texture", nullptr));
#if QT_CONFIG(tooltip)
        TextureViewer_PerTexSettings->setToolTip(QCoreApplication::translate("SettingsDialog", "Settings such as visible channels (RGBA) and selected mip/slice are remembered and restored per-texture.", nullptr));
#endif // QT_CONFIG(tooltip)
        TextureViewer_PerTexSettings->setText(QString());
#if QT_CONFIG(tooltip)
        label_26->setToolTip(QCoreApplication::translate("SettingsDialog", "Y-flipping state is remembered and restored per-texture, rather than treated as a global toggle.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_26->setText(QCoreApplication::translate("SettingsDialog", "Y-flipping state saved per-texture", nullptr));
#if QT_CONFIG(tooltip)
        TextureViewer_PerTexYFlip->setToolTip(QCoreApplication::translate("SettingsDialog", "Y-flipping state is remembered and restored per-texture, rather than treated as a global toggle.", nullptr));
#endif // QT_CONFIG(tooltip)
        TextureViewer_PerTexYFlip->setText(QString());
#if QT_CONFIG(tooltip)
        label_29->setToolTip(QCoreApplication::translate("SettingsDialog", "List of the directories with custom shaders", nullptr));
#endif // QT_CONFIG(tooltip)
        label_29->setText(QCoreApplication::translate("SettingsDialog", "Custom shader directories", nullptr));
#if QT_CONFIG(tooltip)
        TextureViewer_ChooseShaderDirectories->setToolTip(QCoreApplication::translate("SettingsDialog", "Choose custom shader search directories.", nullptr));
#endif // QT_CONFIG(tooltip)
        TextureViewer_ChooseShaderDirectories->setText(QCoreApplication::translate("SettingsDialog", "Choose directories", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(textureTab), QCoreApplication::translate("SettingsDialog", "Texture Viewer", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SettingsDialog", "Shader Viewer", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("SettingsDialog", "In disassembly view, rename constant registers to their names from shader reflection data", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("SettingsDialog", "Rename disassembly registers", nullptr));
#if QT_CONFIG(tooltip)
        ShaderViewer_FriendlyNaming->setToolTip(QCoreApplication::translate("SettingsDialog", "In disassembly view, rename constant registers to their names from shader reflection data", nullptr));
#endif // QT_CONFIG(tooltip)
        ShaderViewer_FriendlyNaming->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("SettingsDialog", "Shader Processing Tools", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Available Shader processing tools. These tools can be configured to translate from one form to another. Typically to e.g. disassemble from SPIR-V to GLSL or canonical assembly, or to compile from HLSL back to SPIR-V or DXBC.</p><p>Double click items to edit, drag row header to change relative priority.</p></body></html>", nullptr));
        addShaderTool->setText(QCoreApplication::translate("SettingsDialog", "Add", nullptr));
        editShaderTool->setText(QCoreApplication::translate("SettingsDialog", "Edit", nullptr));
        deleteShaderTool->setText(QCoreApplication::translate("SettingsDialog", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(shaderTab), QCoreApplication::translate("SettingsDialog", "Shader Viewer", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SettingsDialog", "Event Browser", nullptr));
#if QT_CONFIG(tooltip)
        label_19->setToolTip(QCoreApplication::translate("SettingsDialog", "The time unit to use when displaying the duration column in the event browser", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("SettingsDialog", "Time unit used for action durations", nullptr));
#if QT_CONFIG(tooltip)
        EventBrowser_TimeUnit->setToolTip(QCoreApplication::translate("SettingsDialog", "The time unit to use when displaying the duration column in the event browser", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QCoreApplication::translate("SettingsDialog", "In the Event Browser, add fake markers if none are found in the capture.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("SettingsDialog", "Add fake markers if none present (requires capture reload)", nullptr));
#if QT_CONFIG(tooltip)
        EventBrowser_AddFake->setToolTip(QCoreApplication::translate("SettingsDialog", "In the Event Browser, add fake markers if none are found in the capture.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QCoreApplication::translate("SettingsDialog", "In the Event Browser and Timeline Bar, marker sections and marker labels will be colored with an API-specified color.\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("SettingsDialog", "Apply marker colors", nullptr));
#if QT_CONFIG(tooltip)
        EventBrowser_ApplyColors->setToolTip(QCoreApplication::translate("SettingsDialog", "In the Event Browser and Timeline Bar, marker sections and marker labels will be colored with an API-specified color.\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        EventBrowser_ApplyColors->setText(QString());
#if QT_CONFIG(tooltip)
        label_23->setToolTip(QCoreApplication::translate("SettingsDialog", "When coloring marker sections in the Event Browser, the whole row of a marker region will be colored, not just a bar to the left of its children.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_23->setText(QCoreApplication::translate("SettingsDialog", "    - Colorise whole row for marker regions", nullptr));
#if QT_CONFIG(tooltip)
        EventBrowser_ColorEventRow->setToolTip(QCoreApplication::translate("SettingsDialog", "When coloring marker sections in the Event Browser, the whole row of a marker region will be colored, not just a bar to the left of its children.", nullptr));
#endif // QT_CONFIG(tooltip)
        EventBrowser_ColorEventRow->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(eventTab), QCoreApplication::translate("SettingsDialog", "Event Browser", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("SettingsDialog", "Capture Comments", nullptr));
#if QT_CONFIG(tooltip)
        label_32->setToolTip(QCoreApplication::translate("SettingsDialog", "When loading a capture with comments in it, show the comments viewer and focus it when the capture is loaded.\n"
"\n"
"Only happens if the capture is not in the recent files list.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_32->setText(QCoreApplication::translate("SettingsDialog", "Show capture comments on load", nullptr));
#if QT_CONFIG(tooltip)
        Comments_ShowOnLoad->setToolTip(QCoreApplication::translate("SettingsDialog", "When loading a capture with comments in it, show the comments viewer and focus it when the capture is loaded.\n"
"\n"
"Only happens if the capture is not in the recent files list.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(commentsTab), QCoreApplication::translate("SettingsDialog", "Comments", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("SettingsDialog", "Android", nullptr));
#if QT_CONFIG(tooltip)
        label_24->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Android SDK. This path should contain folders such as build-tools and platform-tools.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_24->setText(QCoreApplication::translate("SettingsDialog", "Android SDK root path", nullptr));
#if QT_CONFIG(tooltip)
        Android_SDKPath->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Android SDK. This path should contain folders such as build-tools and platform-tools.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        browseAndroidSDKPath->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Android SDK. This path should contain folders such as build-tools and platform-tools.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseAndroidSDKPath->setText(QCoreApplication::translate("SettingsDialog", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Java JDK. This path should contain folders such as bin and lib.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("SettingsDialog", "Java JDK path", nullptr));
#if QT_CONFIG(tooltip)
        Android_JDKPath->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Java JDK. This path should contain folders such as bin and lib.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        browseJDKPath->setToolTip(QCoreApplication::translate("SettingsDialog", "The location of the root of the Java JDK. This path should contain folders such as bin and lib.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseJDKPath->setText(QCoreApplication::translate("SettingsDialog", "Browse", nullptr));
#if QT_CONFIG(tooltip)
        label_25->setToolTip(QCoreApplication::translate("SettingsDialog", "Maximum time to try connecting to the target app.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_25->setText(QCoreApplication::translate("SettingsDialog", "Max Connection Timeout (seconds)", nullptr));
#if QT_CONFIG(tooltip)
        Android_MaxConnectTimeout->setToolTip(QCoreApplication::translate("SettingsDialog", "Maximum time to try connecting to the target app.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(androidTab), QCoreApplication::translate("SettingsDialog", "Android", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
