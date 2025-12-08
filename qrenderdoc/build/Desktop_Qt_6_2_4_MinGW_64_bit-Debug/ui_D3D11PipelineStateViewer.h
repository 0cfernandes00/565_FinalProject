/********************************************************************************
** Form generated from reading UI file 'D3D11PipelineStateViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3D11PIPELINESTATEVIEWER_H
#define UI_D3D11PIPELINESTATEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/CollapseGroupBox.h"
#include "Widgets/Extended/RDLabel.h"
#include "Widgets/Extended/RDTreeWidget.h"
#include "Widgets/PipelineFlowChart.h"

QT_BEGIN_NAMESPACE

class Ui_D3D11PipelineStateViewer
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *toolbar;
    QHBoxLayout *toolbarLayout;
    QLabel *controlsLabel;
    QFrame *controlsLine;
    QToolButton *showUnused;
    QToolButton *showEmpty;
    QToolButton *exportHTML;
    QToolButton *extensions;
    QSpacerItem *horizontalSpacer;
    PipelineFlowChart *pipeFlow;
    QTabWidget *stagesTabs;
    QWidget *IA;
    QGridLayout *gridLayout;
    QScrollArea *iaScroll;
    QWidget *iaScrollContents;
    QGridLayout *gridLayout_3;
    QGroupBox *attribGroup;
    QHBoxLayout *horizontalLayout_2;
    RDTreeWidget *iaLayouts;
    QGroupBox *iaBytecodeGroup;
    QHBoxLayout *horizontalLayout_40;
    RDLabel *iaBytecode;
    QToolButton *iaBytecodeViewButton;
    QLabel *iaBytecodeMismatch;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *buffersGroup;
    QHBoxLayout *horizontalLayout;
    RDTreeWidget *iaBuffers;
    QGroupBox *meshViewGroup;
    QVBoxLayout *verticalLayout_3;
    RDLabel *meshView;
    QGroupBox *topologyGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *topology;
    QLabel *topologyDiagram;
    QWidget *VS;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *vsShaderGroup;
    QHBoxLayout *horizontalLayout_3;
    RDLabel *vsShader;
    RDLabel *vsShaderDebug;
    QToolButton *vsShaderViewButton;
    QToolButton *vsShaderEditButton;
    QToolButton *vsShaderSaveButton;
    QSpacerItem *vsShaderSpacer;
    QScrollArea *vsScroll;
    QWidget *vsScrollContents;
    QVBoxLayout *verticalLayout_10;
    CollapseGroupBox *vsResGroup;
    QHBoxLayout *horizontalLayout_4;
    RDTreeWidget *vsResources;
    CollapseGroupBox *vsSamplerGroup;
    QHBoxLayout *horizontalLayout_5;
    RDTreeWidget *vsSamplers;
    CollapseGroupBox *vsCBufferGroup;
    QHBoxLayout *horizontalLayout_27;
    RDTreeWidget *vsCBuffers;
    CollapseGroupBox *vsSubroutineGroup;
    QHBoxLayout *horizontalLayout_1;
    RDTreeWidget *vsClasses;
    QSpacerItem *verticalSpacer;
    QWidget *HS;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *hsShaderGroup;
    QHBoxLayout *horizontalLayout_7;
    RDLabel *hsShader;
    RDLabel *hsShaderDebug;
    QToolButton *hsShaderViewButton;
    QToolButton *hsShaderEditButton;
    QToolButton *hsShaderSaveButton;
    QSpacerItem *hsShaderSpacer;
    QScrollArea *hsScroll;
    QWidget *hsScrollContents;
    QVBoxLayout *verticalLayout_11;
    CollapseGroupBox *hsResGroup;
    QHBoxLayout *horizontalLayout_23;
    RDTreeWidget *hsResources;
    CollapseGroupBox *hsSamplerGroup;
    QHBoxLayout *horizontalLayout_26;
    RDTreeWidget *hsSamplers;
    CollapseGroupBox *hsCBufferGroup;
    QHBoxLayout *horizontalLayout_6;
    RDTreeWidget *hsCBuffers;
    CollapseGroupBox *hsSubroutineGroup;
    QHBoxLayout *horizontalLayout_8;
    RDTreeWidget *hsClasses;
    QSpacerItem *verticalSpacer_2;
    QWidget *DS;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *dsShaderGroup;
    QHBoxLayout *horizontalLayout_10;
    RDLabel *dsShader;
    RDLabel *dsShaderDebug;
    QToolButton *dsShaderViewButton;
    QToolButton *dsShaderEditButton;
    QToolButton *dsShaderSaveButton;
    QSpacerItem *dsShaderSpacer;
    QScrollArea *dsScroll;
    QWidget *dsScrollContents;
    QVBoxLayout *verticalLayout_12;
    CollapseGroupBox *dsResGroup;
    QHBoxLayout *horizontalLayout_12;
    RDTreeWidget *dsResources;
    CollapseGroupBox *dsSamplerGroup;
    QHBoxLayout *horizontalLayout_14;
    RDTreeWidget *dsSamplers;
    CollapseGroupBox *dsCBufferGroup;
    QHBoxLayout *horizontalLayout_9;
    RDTreeWidget *dsCBuffers;
    CollapseGroupBox *dsSubroutineGroup;
    QHBoxLayout *horizontalLayout_11;
    RDTreeWidget *dsClasses;
    QSpacerItem *verticalSpacer_3;
    QWidget *GS;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *gsShaderGroup;
    QHBoxLayout *horizontalLayout_13;
    RDLabel *gsShader;
    RDLabel *gsShaderDebug;
    QToolButton *gsShaderViewButton;
    QToolButton *gsShaderEditButton;
    QToolButton *gsShaderSaveButton;
    QSpacerItem *gsShaderSpacer;
    QScrollArea *gsScroll;
    QWidget *gsScrollContents;
    QVBoxLayout *verticalLayout_13;
    CollapseGroupBox *gsResGroup;
    QHBoxLayout *horizontalLayout_20;
    RDTreeWidget *gsResources;
    CollapseGroupBox *gsSamplerGroup;
    QHBoxLayout *horizontalLayout_28;
    RDTreeWidget *gsSamplers;
    CollapseGroupBox *gsCBufferGroup;
    QHBoxLayout *horizontalLayout_17;
    RDTreeWidget *gsCBuffers;
    CollapseGroupBox *soGroup;
    QHBoxLayout *soLayout_3;
    RDTreeWidget *gsStreamOut;
    CollapseGroupBox *gsSubroutineGroup;
    QHBoxLayout *horizontalLayout_18;
    RDTreeWidget *gsClasses;
    QSpacerItem *verticalSpacer_4;
    QWidget *RS;
    QGridLayout *gridLayout_2;
    QGroupBox *rasterizerGroup;
    QGridLayout *gridLayout_7;
    RDLabel *rastState;
    QGridLayout *rasterizerGridLayout;
    QLabel *fillModeLabel;
    QLabel *fillMode;
    QLabel *cullModeLabel;
    QLabel *cullMode;
    QLabel *frontCCWLabel;
    QLabel *frontCCW;
    QLabel *conservativeRasterLabel;
    QLabel *conservativeRaster;
    QLabel *depthBiasLabel;
    QLabel *depthBias;
    QLabel *depthBiasClampLabel;
    QLabel *depthBiasClamp;
    QLabel *slopeScaledBiasLabel;
    QLabel *slopeScaledBias;
    QLabel *forcedSampleCountLabel;
    QLabel *forcedSampleCount;
    QLabel *depthClipLabel;
    QLabel *depthClip;
    QLabel *scissorLabel;
    QLabel *scissorEnabled;
    QLabel *multisampleLabel;
    QLabel *multisample;
    QLabel *lineAALabel;
    QLabel *lineAA;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *predicateGroup;
    QHBoxLayout *horizontalLayout_41;
    RDLabel *predicate;
    QLabel *label_2;
    QLabel *predicateValue;
    QLabel *label;
    QLabel *predicatePassing;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *viewportsGroup;
    QHBoxLayout *horizontalLayout_21;
    RDTreeWidget *viewports;
    QGroupBox *scissorGroup;
    QHBoxLayout *horizontalLayout_22;
    RDTreeWidget *scissors;
    QWidget *PS;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *psShaderGroup;
    QHBoxLayout *horizontalLayout_16;
    RDLabel *psShader;
    RDLabel *psShaderDebug;
    QToolButton *psShaderViewButton;
    QToolButton *psShaderEditButton;
    QToolButton *psShaderSaveButton;
    QSpacerItem *psShaderSpacer;
    QScrollArea *psScroll;
    QWidget *psScrollContents;
    QVBoxLayout *verticalLayout_14;
    CollapseGroupBox *psResGroup;
    QHBoxLayout *horizontalLayout_32;
    RDTreeWidget *psResources;
    CollapseGroupBox *psSamplerGroup;
    QHBoxLayout *horizontalLayout_33;
    RDTreeWidget *psSamplers;
    CollapseGroupBox *psCBufferGroup;
    QHBoxLayout *horizontalLayout_30;
    RDTreeWidget *psCBuffers;
    CollapseGroupBox *psSubroutineGroup;
    QHBoxLayout *horizontalLayout_31;
    RDTreeWidget *psClasses;
    QSpacerItem *verticalSpacer_5;
    QWidget *OM;
    QGridLayout *gridLayout_5;
    QScrollArea *omScroll;
    QWidget *omScrollContents;
    QGridLayout *gridLayout_9;
    QGroupBox *outputsGroup;
    QHBoxLayout *horizontalLayout_24;
    RDTreeWidget *targetOutputs;
    QGroupBox *blendsGroup;
    QHBoxLayout *horizontalLayout_25;
    RDTreeWidget *blends;
    QGroupBox *blendStateGroup;
    QGridLayout *gridLayout_8;
    RDLabel *blendState;
    QGridLayout *blendStateGridLayout;
    QLabel *blendFactorLabel;
    QLabel *blendFactor;
    QLabel *independentBlendLabel;
    QLabel *independentBlend;
    QLabel *sampleMaskLabel;
    QLabel *sampleMask;
    QLabel *alphaToCoverageLabel;
    QLabel *alphaToCoverage;
    QGroupBox *depthStateGroup;
    QGridLayout *gridLayout_6;
    RDLabel *depthState;
    QGridLayout *depthStateGridLayout;
    QLabel *depthEnabledLabel;
    QLabel *depthEnabled;
    QLabel *depthWriteLabel;
    QLabel *depthWrite;
    QLabel *depthFuncLabel;
    QLabel *depthFunc;
    QGroupBox *stencilStateGroup;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *stencilEnabledLabel;
    QLabel *stencilEnabled;
    QLabel *stencilWriteMaskLabel;
    QLabel *stencilWriteMask;
    QLabel *stenciReadMaskLabel;
    QLabel *stencilReadMask;
    QLabel *stenciRefLabel;
    QLabel *stencilRef;
    QSpacerItem *horizontalSpacer_3;
    RDTreeWidget *stencils;
    QWidget *CS;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *csShaderGroup;
    QHBoxLayout *horizontalLayout_19;
    RDLabel *csShader;
    RDLabel *csShaderDebug;
    QToolButton *csShaderViewButton;
    QToolButton *csShaderEditButton;
    QToolButton *csShaderSaveButton;
    QToolButton *computeDebugSelector;
    QSpacerItem *horizontalSpacer_4;
    QScrollArea *csScroll;
    QWidget *csScrollContents;
    QVBoxLayout *verticalLayout_15;
    CollapseGroupBox *csResGroup;
    QHBoxLayout *horizontalLayout_37;
    RDTreeWidget *csResources;
    CollapseGroupBox *csUAVGroup;
    QHBoxLayout *horizontalLayout_39;
    RDTreeWidget *csUAVs;
    CollapseGroupBox *csSamplerGroup;
    QHBoxLayout *horizontalLayout_38;
    RDTreeWidget *csSamplers;
    CollapseGroupBox *csCBufferGroup;
    QHBoxLayout *horizontalLayout_35;
    RDTreeWidget *csCBuffers;
    CollapseGroupBox *csSubroutineGroup;
    QHBoxLayout *horizontalLayout_36;
    RDTreeWidget *csClasses;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QFrame *D3D11PipelineStateViewer)
    {
        if (D3D11PipelineStateViewer->objectName().isEmpty())
            D3D11PipelineStateViewer->setObjectName(QString::fromUtf8("D3D11PipelineStateViewer"));
        D3D11PipelineStateViewer->resize(1000, 635);
        verticalLayout = new QVBoxLayout(D3D11PipelineStateViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolbar = new QFrame(D3D11PipelineStateViewer);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        toolbar->setFrameShape(QFrame::Panel);
        toolbar->setFrameShadow(QFrame::Raised);
        toolbarLayout = new QHBoxLayout(toolbar);
        toolbarLayout->setSpacing(2);
        toolbarLayout->setObjectName(QString::fromUtf8("toolbarLayout"));
        toolbarLayout->setContentsMargins(6, 2, 6, 2);
        controlsLabel = new QLabel(toolbar);
        controlsLabel->setObjectName(QString::fromUtf8("controlsLabel"));
        controlsLabel->setMargin(4);

        toolbarLayout->addWidget(controlsLabel);

        controlsLine = new QFrame(toolbar);
        controlsLine->setObjectName(QString::fromUtf8("controlsLine"));
        controlsLine->setFrameShape(QFrame::VLine);
        controlsLine->setFrameShadow(QFrame::Sunken);

        toolbarLayout->addWidget(controlsLine);

        showUnused = new QToolButton(toolbar);
        showUnused->setObjectName(QString::fromUtf8("showUnused"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/page_white_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        showUnused->setIcon(icon);
        showUnused->setCheckable(true);
        showUnused->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showUnused->setAutoRaise(true);

        toolbarLayout->addWidget(showUnused);

        showEmpty = new QToolButton(toolbar);
        showEmpty->setObjectName(QString::fromUtf8("showEmpty"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/page_white_database.png"), QSize(), QIcon::Normal, QIcon::Off);
        showEmpty->setIcon(icon1);
        showEmpty->setCheckable(true);
        showEmpty->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        showEmpty->setAutoRaise(true);

        toolbarLayout->addWidget(showEmpty);

        exportHTML = new QToolButton(toolbar);
        exportHTML->setObjectName(QString::fromUtf8("exportHTML"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportHTML->setIcon(icon2);
        exportHTML->setCheckable(false);
        exportHTML->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        exportHTML->setAutoRaise(true);

        toolbarLayout->addWidget(exportHTML);

        extensions = new QToolButton(toolbar);
        extensions->setObjectName(QString::fromUtf8("extensions"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/plugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        extensions->setIcon(icon3);
        extensions->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        extensions->setAutoRaise(true);

        toolbarLayout->addWidget(extensions);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(toolbar);

        pipeFlow = new PipelineFlowChart(D3D11PipelineStateViewer);
        pipeFlow->setObjectName(QString::fromUtf8("pipeFlow"));
        QFont font;
        font.setPointSize(12);
        pipeFlow->setFont(font);

        verticalLayout->addWidget(pipeFlow);

        stagesTabs = new QTabWidget(D3D11PipelineStateViewer);
        stagesTabs->setObjectName(QString::fromUtf8("stagesTabs"));
        stagesTabs->setDocumentMode(true);
        IA = new QWidget();
        IA->setObjectName(QString::fromUtf8("IA"));
        gridLayout = new QGridLayout(IA);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        iaScroll = new QScrollArea(IA);
        iaScroll->setObjectName(QString::fromUtf8("iaScroll"));
        iaScroll->setFrameShape(QFrame::NoFrame);
        iaScroll->setWidgetResizable(true);
        iaScrollContents = new QWidget();
        iaScrollContents->setObjectName(QString::fromUtf8("iaScrollContents"));
        iaScrollContents->setGeometry(QRect(0, 0, 454, 245));
        gridLayout_3 = new QGridLayout(iaScrollContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        attribGroup = new QGroupBox(iaScrollContents);
        attribGroup->setObjectName(QString::fromUtf8("attribGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attribGroup->sizePolicy().hasHeightForWidth());
        attribGroup->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(attribGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        iaLayouts = new RDTreeWidget(attribGroup);
        iaLayouts->setObjectName(QString::fromUtf8("iaLayouts"));
        iaLayouts->setFrameShape(QFrame::Box);
        iaLayouts->setFrameShadow(QFrame::Plain);
        iaLayouts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        iaLayouts->setProperty("showDropIndicator", QVariant(false));
        iaLayouts->setIndentation(0);
        iaLayouts->setRootIsDecorated(false);
        iaLayouts->setItemsExpandable(false);
        iaLayouts->setAllColumnsShowFocus(true);
        iaLayouts->setExpandsOnDoubleClick(false);
        iaLayouts->header()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(iaLayouts);


        gridLayout_3->addWidget(attribGroup, 0, 0, 1, 3);

        iaBytecodeGroup = new QGroupBox(iaScrollContents);
        iaBytecodeGroup->setObjectName(QString::fromUtf8("iaBytecodeGroup"));
        horizontalLayout_40 = new QHBoxLayout(iaBytecodeGroup);
        horizontalLayout_40->setSpacing(0);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        horizontalLayout_40->setContentsMargins(2, 2, 2, 2);
        iaBytecode = new RDLabel(iaBytecodeGroup);
        iaBytecode->setObjectName(QString::fromUtf8("iaBytecode"));
        iaBytecode->setFrameShape(QFrame::Box);

        horizontalLayout_40->addWidget(iaBytecode);

        iaBytecodeViewButton = new QToolButton(iaBytecodeGroup);
        iaBytecodeViewButton->setObjectName(QString::fromUtf8("iaBytecodeViewButton"));
        iaBytecodeViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/action.png"), QSize(), QIcon::Normal, QIcon::Off);
        iaBytecodeViewButton->setIcon(icon4);
        iaBytecodeViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        iaBytecodeViewButton->setAutoRaise(true);

        horizontalLayout_40->addWidget(iaBytecodeViewButton);

        iaBytecodeMismatch = new QLabel(iaBytecodeGroup);
        iaBytecodeMismatch->setObjectName(QString::fromUtf8("iaBytecodeMismatch"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        iaBytecodeMismatch->setPalette(palette);
        iaBytecodeMismatch->setCursor(QCursor(Qt::PointingHandCursor));
        iaBytecodeMismatch->setFrameShape(QFrame::Box);

        horizontalLayout_40->addWidget(iaBytecodeMismatch);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_2);


        gridLayout_3->addWidget(iaBytecodeGroup, 1, 0, 1, 3);

        buffersGroup = new QGroupBox(iaScrollContents);
        buffersGroup->setObjectName(QString::fromUtf8("buffersGroup"));
        sizePolicy.setHeightForWidth(buffersGroup->sizePolicy().hasHeightForWidth());
        buffersGroup->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(buffersGroup);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        iaBuffers = new RDTreeWidget(buffersGroup);
        iaBuffers->setObjectName(QString::fromUtf8("iaBuffers"));
        iaBuffers->setFrameShape(QFrame::Box);
        iaBuffers->setFrameShadow(QFrame::Plain);
        iaBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        iaBuffers->setProperty("showDropIndicator", QVariant(false));
        iaBuffers->setIndentation(0);
        iaBuffers->setRootIsDecorated(false);
        iaBuffers->setItemsExpandable(false);
        iaBuffers->setAllColumnsShowFocus(true);
        iaBuffers->setExpandsOnDoubleClick(false);
        iaBuffers->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(iaBuffers);


        gridLayout_3->addWidget(buffersGroup, 2, 0, 1, 1);

        meshViewGroup = new QGroupBox(iaScrollContents);
        meshViewGroup->setObjectName(QString::fromUtf8("meshViewGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(meshViewGroup->sizePolicy().hasHeightForWidth());
        meshViewGroup->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(meshViewGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        meshView = new RDLabel(meshViewGroup);
        meshView->setObjectName(QString::fromUtf8("meshView"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(meshView->sizePolicy().hasHeightForWidth());
        meshView->setSizePolicy(sizePolicy2);
        meshView->setMinimumSize(QSize(75, 75));
        meshView->setCursor(QCursor(Qt::PointingHandCursor));
        meshView->setPixmap(QPixmap(QString::fromUtf8(":/wireframe_mesh.png")));
        meshView->setScaledContents(true);

        verticalLayout_3->addWidget(meshView);


        gridLayout_3->addWidget(meshViewGroup, 2, 1, 1, 1);

        topologyGroup = new QGroupBox(iaScrollContents);
        topologyGroup->setObjectName(QString::fromUtf8("topologyGroup"));
        sizePolicy1.setHeightForWidth(topologyGroup->sizePolicy().hasHeightForWidth());
        topologyGroup->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(topologyGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        topology = new QLabel(topologyGroup);
        topology->setObjectName(QString::fromUtf8("topology"));
        QFont font1;
        font1.setPointSize(14);
        topology->setFont(font1);
        topology->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(topology);

        topologyDiagram = new QLabel(topologyGroup);
        topologyDiagram->setObjectName(QString::fromUtf8("topologyDiagram"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(topologyDiagram->sizePolicy().hasHeightForWidth());
        topologyDiagram->setSizePolicy(sizePolicy3);
        topologyDiagram->setMinimumSize(QSize(256, 0));
        topologyDiagram->setPixmap(QPixmap(QString::fromUtf8(":/topologies/topo_trilist.svg")));
        topologyDiagram->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(topologyDiagram);


        gridLayout_3->addWidget(topologyGroup, 2, 2, 1, 1);

        iaScroll->setWidget(iaScrollContents);

        gridLayout->addWidget(iaScroll, 0, 0, 1, 1);

        stagesTabs->addTab(IA, QString());
        VS = new QWidget();
        VS->setObjectName(QString::fromUtf8("VS"));
        verticalLayout_4 = new QVBoxLayout(VS);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        vsShaderGroup = new QGroupBox(VS);
        vsShaderGroup->setObjectName(QString::fromUtf8("vsShaderGroup"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(vsShaderGroup->sizePolicy().hasHeightForWidth());
        vsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_3 = new QHBoxLayout(vsShaderGroup);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 4);
        vsShader = new RDLabel(vsShaderGroup);
        vsShader->setObjectName(QString::fromUtf8("vsShader"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(vsShader->sizePolicy().hasHeightForWidth());
        vsShader->setSizePolicy(sizePolicy5);
        vsShader->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsShader);

        vsShaderDebug = new RDLabel(vsShaderGroup);
        vsShaderDebug->setObjectName(QString::fromUtf8("vsShaderDebug"));
        sizePolicy5.setHeightForWidth(vsShaderDebug->sizePolicy().hasHeightForWidth());
        vsShaderDebug->setSizePolicy(sizePolicy5);
        vsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsShaderDebug);

        vsShaderViewButton = new QToolButton(vsShaderGroup);
        vsShaderViewButton->setObjectName(QString::fromUtf8("vsShaderViewButton"));
        vsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        vsShaderViewButton->setIcon(icon4);
        vsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vsShaderViewButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(vsShaderViewButton);

        vsShaderEditButton = new QToolButton(vsShaderGroup);
        vsShaderEditButton->setObjectName(QString::fromUtf8("vsShaderEditButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/page_white_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        vsShaderEditButton->setIcon(icon5);
        vsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        vsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vsShaderEditButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(vsShaderEditButton);

        vsShaderSaveButton = new QToolButton(vsShaderGroup);
        vsShaderSaveButton->setObjectName(QString::fromUtf8("vsShaderSaveButton"));
        vsShaderSaveButton->setIcon(icon2);
        vsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(vsShaderSaveButton);

        vsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(vsShaderSpacer);


        verticalLayout_4->addWidget(vsShaderGroup);

        vsScroll = new QScrollArea(VS);
        vsScroll->setObjectName(QString::fromUtf8("vsScroll"));
        vsScroll->setFrameShape(QFrame::NoFrame);
        vsScroll->setFrameShadow(QFrame::Plain);
        vsScroll->setWidgetResizable(true);
        vsScrollContents = new QWidget();
        vsScrollContents->setObjectName(QString::fromUtf8("vsScrollContents"));
        vsScrollContents->setGeometry(QRect(0, 0, 101, 344));
        verticalLayout_10 = new QVBoxLayout(vsScrollContents);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        vsResGroup = new CollapseGroupBox(vsScrollContents);
        vsResGroup->setObjectName(QString::fromUtf8("vsResGroup"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(vsResGroup->sizePolicy().hasHeightForWidth());
        vsResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_4 = new QHBoxLayout(vsResGroup);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        vsResources = new RDTreeWidget(vsResGroup);
        vsResources->setObjectName(QString::fromUtf8("vsResources"));
        vsResources->setFrameShape(QFrame::Box);
        vsResources->setFrameShadow(QFrame::Plain);
        vsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsResources->setProperty("showDropIndicator", QVariant(false));
        vsResources->setRootIsDecorated(false);
        vsResources->setAllColumnsShowFocus(true);
        vsResources->header()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(vsResources);


        verticalLayout_10->addWidget(vsResGroup);

        vsSamplerGroup = new CollapseGroupBox(vsScrollContents);
        vsSamplerGroup->setObjectName(QString::fromUtf8("vsSamplerGroup"));
        sizePolicy6.setHeightForWidth(vsSamplerGroup->sizePolicy().hasHeightForWidth());
        vsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_5 = new QHBoxLayout(vsSamplerGroup);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        vsSamplers = new RDTreeWidget(vsSamplerGroup);
        vsSamplers->setObjectName(QString::fromUtf8("vsSamplers"));
        vsSamplers->setFrameShape(QFrame::Box);
        vsSamplers->setFrameShadow(QFrame::Plain);
        vsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsSamplers->setProperty("showDropIndicator", QVariant(false));
        vsSamplers->setRootIsDecorated(false);
        vsSamplers->setAllColumnsShowFocus(true);
        vsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(vsSamplers);


        verticalLayout_10->addWidget(vsSamplerGroup);

        vsCBufferGroup = new CollapseGroupBox(vsScrollContents);
        vsCBufferGroup->setObjectName(QString::fromUtf8("vsCBufferGroup"));
        sizePolicy6.setHeightForWidth(vsCBufferGroup->sizePolicy().hasHeightForWidth());
        vsCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_27 = new QHBoxLayout(vsCBufferGroup);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(2, 2, 2, 2);
        vsCBuffers = new RDTreeWidget(vsCBufferGroup);
        vsCBuffers->setObjectName(QString::fromUtf8("vsCBuffers"));
        vsCBuffers->setFrameShape(QFrame::Box);
        vsCBuffers->setFrameShadow(QFrame::Plain);
        vsCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsCBuffers->setProperty("showDropIndicator", QVariant(false));
        vsCBuffers->setRootIsDecorated(false);
        vsCBuffers->setAllColumnsShowFocus(true);
        vsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_27->addWidget(vsCBuffers);


        verticalLayout_10->addWidget(vsCBufferGroup);

        vsSubroutineGroup = new CollapseGroupBox(vsScrollContents);
        vsSubroutineGroup->setObjectName(QString::fromUtf8("vsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(vsSubroutineGroup->sizePolicy().hasHeightForWidth());
        vsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_1 = new QHBoxLayout(vsSubroutineGroup);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(2, 2, 2, 2);
        vsClasses = new RDTreeWidget(vsSubroutineGroup);
        vsClasses->setObjectName(QString::fromUtf8("vsClasses"));
        vsClasses->setFrameShape(QFrame::Box);
        vsClasses->setFrameShadow(QFrame::Plain);
        vsClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsClasses->setProperty("showDropIndicator", QVariant(false));
        vsClasses->setRootIsDecorated(false);
        vsClasses->setAllColumnsShowFocus(true);
        vsClasses->header()->setStretchLastSection(false);

        horizontalLayout_1->addWidget(vsClasses);


        verticalLayout_10->addWidget(vsSubroutineGroup);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_10->addItem(verticalSpacer);

        vsScroll->setWidget(vsScrollContents);

        verticalLayout_4->addWidget(vsScroll);

        stagesTabs->addTab(VS, QString());
        HS = new QWidget();
        HS->setObjectName(QString::fromUtf8("HS"));
        verticalLayout_5 = new QVBoxLayout(HS);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        hsShaderGroup = new QGroupBox(HS);
        hsShaderGroup->setObjectName(QString::fromUtf8("hsShaderGroup"));
        sizePolicy4.setHeightForWidth(hsShaderGroup->sizePolicy().hasHeightForWidth());
        hsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_7 = new QHBoxLayout(hsShaderGroup);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 4);
        hsShader = new RDLabel(hsShaderGroup);
        hsShader->setObjectName(QString::fromUtf8("hsShader"));
        sizePolicy5.setHeightForWidth(hsShader->sizePolicy().hasHeightForWidth());
        hsShader->setSizePolicy(sizePolicy5);
        hsShader->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(hsShader);

        hsShaderDebug = new RDLabel(hsShaderGroup);
        hsShaderDebug->setObjectName(QString::fromUtf8("hsShaderDebug"));
        sizePolicy5.setHeightForWidth(hsShaderDebug->sizePolicy().hasHeightForWidth());
        hsShaderDebug->setSizePolicy(sizePolicy5);
        hsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(hsShaderDebug);

        hsShaderViewButton = new QToolButton(hsShaderGroup);
        hsShaderViewButton->setObjectName(QString::fromUtf8("hsShaderViewButton"));
        hsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        hsShaderViewButton->setIcon(icon4);
        hsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hsShaderViewButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(hsShaderViewButton);

        hsShaderEditButton = new QToolButton(hsShaderGroup);
        hsShaderEditButton->setObjectName(QString::fromUtf8("hsShaderEditButton"));
        hsShaderEditButton->setIcon(icon5);
        hsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        hsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hsShaderEditButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(hsShaderEditButton);

        hsShaderSaveButton = new QToolButton(hsShaderGroup);
        hsShaderSaveButton->setObjectName(QString::fromUtf8("hsShaderSaveButton"));
        hsShaderSaveButton->setIcon(icon2);
        hsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(hsShaderSaveButton);

        hsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(hsShaderSpacer);


        verticalLayout_5->addWidget(hsShaderGroup);

        hsScroll = new QScrollArea(HS);
        hsScroll->setObjectName(QString::fromUtf8("hsScroll"));
        hsScroll->setFrameShape(QFrame::NoFrame);
        hsScroll->setWidgetResizable(true);
        hsScrollContents = new QWidget();
        hsScrollContents->setObjectName(QString::fromUtf8("hsScrollContents"));
        hsScrollContents->setGeometry(QRect(0, 0, 101, 344));
        verticalLayout_11 = new QVBoxLayout(hsScrollContents);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        hsResGroup = new CollapseGroupBox(hsScrollContents);
        hsResGroup->setObjectName(QString::fromUtf8("hsResGroup"));
        sizePolicy6.setHeightForWidth(hsResGroup->sizePolicy().hasHeightForWidth());
        hsResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_23 = new QHBoxLayout(hsResGroup);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(2, 2, 2, 2);
        hsResources = new RDTreeWidget(hsResGroup);
        hsResources->setObjectName(QString::fromUtf8("hsResources"));
        hsResources->setFrameShape(QFrame::Box);
        hsResources->setFrameShadow(QFrame::Plain);
        hsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hsResources->setProperty("showDropIndicator", QVariant(false));
        hsResources->setRootIsDecorated(false);
        hsResources->setAllColumnsShowFocus(true);
        hsResources->header()->setStretchLastSection(false);

        horizontalLayout_23->addWidget(hsResources);


        verticalLayout_11->addWidget(hsResGroup);

        hsSamplerGroup = new CollapseGroupBox(hsScrollContents);
        hsSamplerGroup->setObjectName(QString::fromUtf8("hsSamplerGroup"));
        sizePolicy6.setHeightForWidth(hsSamplerGroup->sizePolicy().hasHeightForWidth());
        hsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_26 = new QHBoxLayout(hsSamplerGroup);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(2, 2, 2, 2);
        hsSamplers = new RDTreeWidget(hsSamplerGroup);
        hsSamplers->setObjectName(QString::fromUtf8("hsSamplers"));
        hsSamplers->setFrameShape(QFrame::Box);
        hsSamplers->setFrameShadow(QFrame::Plain);
        hsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hsSamplers->setProperty("showDropIndicator", QVariant(false));
        hsSamplers->setRootIsDecorated(false);
        hsSamplers->setAllColumnsShowFocus(true);
        hsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_26->addWidget(hsSamplers);


        verticalLayout_11->addWidget(hsSamplerGroup);

        hsCBufferGroup = new CollapseGroupBox(hsScrollContents);
        hsCBufferGroup->setObjectName(QString::fromUtf8("hsCBufferGroup"));
        sizePolicy6.setHeightForWidth(hsCBufferGroup->sizePolicy().hasHeightForWidth());
        hsCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_6 = new QHBoxLayout(hsCBufferGroup);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        hsCBuffers = new RDTreeWidget(hsCBufferGroup);
        hsCBuffers->setObjectName(QString::fromUtf8("hsCBuffers"));
        hsCBuffers->setFrameShape(QFrame::Box);
        hsCBuffers->setFrameShadow(QFrame::Plain);
        hsCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hsCBuffers->setProperty("showDropIndicator", QVariant(false));
        hsCBuffers->setRootIsDecorated(false);
        hsCBuffers->setAllColumnsShowFocus(true);
        hsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(hsCBuffers);


        verticalLayout_11->addWidget(hsCBufferGroup);

        hsSubroutineGroup = new CollapseGroupBox(hsScrollContents);
        hsSubroutineGroup->setObjectName(QString::fromUtf8("hsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(hsSubroutineGroup->sizePolicy().hasHeightForWidth());
        hsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_8 = new QHBoxLayout(hsSubroutineGroup);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(2, 2, 2, 2);
        hsClasses = new RDTreeWidget(hsSubroutineGroup);
        hsClasses->setObjectName(QString::fromUtf8("hsClasses"));
        hsClasses->setFrameShape(QFrame::Box);
        hsClasses->setFrameShadow(QFrame::Plain);
        hsClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hsClasses->setProperty("showDropIndicator", QVariant(false));
        hsClasses->setRootIsDecorated(false);
        hsClasses->setAllColumnsShowFocus(true);
        hsClasses->header()->setStretchLastSection(false);

        horizontalLayout_8->addWidget(hsClasses);


        verticalLayout_11->addWidget(hsSubroutineGroup);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        hsScroll->setWidget(hsScrollContents);

        verticalLayout_5->addWidget(hsScroll);

        stagesTabs->addTab(HS, QString());
        DS = new QWidget();
        DS->setObjectName(QString::fromUtf8("DS"));
        verticalLayout_6 = new QVBoxLayout(DS);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        dsShaderGroup = new QGroupBox(DS);
        dsShaderGroup->setObjectName(QString::fromUtf8("dsShaderGroup"));
        sizePolicy4.setHeightForWidth(dsShaderGroup->sizePolicy().hasHeightForWidth());
        dsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_10 = new QHBoxLayout(dsShaderGroup);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 4);
        dsShader = new RDLabel(dsShaderGroup);
        dsShader->setObjectName(QString::fromUtf8("dsShader"));
        sizePolicy5.setHeightForWidth(dsShader->sizePolicy().hasHeightForWidth());
        dsShader->setSizePolicy(sizePolicy5);
        dsShader->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(dsShader);

        dsShaderDebug = new RDLabel(dsShaderGroup);
        dsShaderDebug->setObjectName(QString::fromUtf8("dsShaderDebug"));
        sizePolicy5.setHeightForWidth(dsShaderDebug->sizePolicy().hasHeightForWidth());
        dsShaderDebug->setSizePolicy(sizePolicy5);
        dsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(dsShaderDebug);

        dsShaderViewButton = new QToolButton(dsShaderGroup);
        dsShaderViewButton->setObjectName(QString::fromUtf8("dsShaderViewButton"));
        dsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        dsShaderViewButton->setIcon(icon4);
        dsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        dsShaderViewButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(dsShaderViewButton);

        dsShaderEditButton = new QToolButton(dsShaderGroup);
        dsShaderEditButton->setObjectName(QString::fromUtf8("dsShaderEditButton"));
        dsShaderEditButton->setIcon(icon5);
        dsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        dsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        dsShaderEditButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(dsShaderEditButton);

        dsShaderSaveButton = new QToolButton(dsShaderGroup);
        dsShaderSaveButton->setObjectName(QString::fromUtf8("dsShaderSaveButton"));
        dsShaderSaveButton->setIcon(icon2);
        dsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        dsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(dsShaderSaveButton);

        dsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(dsShaderSpacer);


        verticalLayout_6->addWidget(dsShaderGroup);

        dsScroll = new QScrollArea(DS);
        dsScroll->setObjectName(QString::fromUtf8("dsScroll"));
        dsScroll->setFrameShape(QFrame::NoFrame);
        dsScroll->setWidgetResizable(true);
        dsScrollContents = new QWidget();
        dsScrollContents->setObjectName(QString::fromUtf8("dsScrollContents"));
        dsScrollContents->setGeometry(QRect(0, 0, 101, 344));
        verticalLayout_12 = new QVBoxLayout(dsScrollContents);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        dsResGroup = new CollapseGroupBox(dsScrollContents);
        dsResGroup->setObjectName(QString::fromUtf8("dsResGroup"));
        sizePolicy6.setHeightForWidth(dsResGroup->sizePolicy().hasHeightForWidth());
        dsResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_12 = new QHBoxLayout(dsResGroup);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(2, 2, 2, 2);
        dsResources = new RDTreeWidget(dsResGroup);
        dsResources->setObjectName(QString::fromUtf8("dsResources"));
        dsResources->setFrameShape(QFrame::Box);
        dsResources->setFrameShadow(QFrame::Plain);
        dsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dsResources->setProperty("showDropIndicator", QVariant(false));
        dsResources->setRootIsDecorated(false);
        dsResources->setAllColumnsShowFocus(true);
        dsResources->header()->setStretchLastSection(false);

        horizontalLayout_12->addWidget(dsResources);


        verticalLayout_12->addWidget(dsResGroup);

        dsSamplerGroup = new CollapseGroupBox(dsScrollContents);
        dsSamplerGroup->setObjectName(QString::fromUtf8("dsSamplerGroup"));
        sizePolicy6.setHeightForWidth(dsSamplerGroup->sizePolicy().hasHeightForWidth());
        dsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_14 = new QHBoxLayout(dsSamplerGroup);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(2, 2, 2, 2);
        dsSamplers = new RDTreeWidget(dsSamplerGroup);
        dsSamplers->setObjectName(QString::fromUtf8("dsSamplers"));
        dsSamplers->setFrameShape(QFrame::Box);
        dsSamplers->setFrameShadow(QFrame::Plain);
        dsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dsSamplers->setProperty("showDropIndicator", QVariant(false));
        dsSamplers->setRootIsDecorated(false);
        dsSamplers->setAllColumnsShowFocus(true);
        dsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_14->addWidget(dsSamplers);


        verticalLayout_12->addWidget(dsSamplerGroup);

        dsCBufferGroup = new CollapseGroupBox(dsScrollContents);
        dsCBufferGroup->setObjectName(QString::fromUtf8("dsCBufferGroup"));
        sizePolicy6.setHeightForWidth(dsCBufferGroup->sizePolicy().hasHeightForWidth());
        dsCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_9 = new QHBoxLayout(dsCBufferGroup);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(2, 2, 2, 2);
        dsCBuffers = new RDTreeWidget(dsCBufferGroup);
        dsCBuffers->setObjectName(QString::fromUtf8("dsCBuffers"));
        dsCBuffers->setFrameShape(QFrame::Box);
        dsCBuffers->setFrameShadow(QFrame::Plain);
        dsCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dsCBuffers->setProperty("showDropIndicator", QVariant(false));
        dsCBuffers->setRootIsDecorated(false);
        dsCBuffers->setAllColumnsShowFocus(true);
        dsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_9->addWidget(dsCBuffers);


        verticalLayout_12->addWidget(dsCBufferGroup);

        dsSubroutineGroup = new CollapseGroupBox(dsScrollContents);
        dsSubroutineGroup->setObjectName(QString::fromUtf8("dsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(dsSubroutineGroup->sizePolicy().hasHeightForWidth());
        dsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_11 = new QHBoxLayout(dsSubroutineGroup);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        dsClasses = new RDTreeWidget(dsSubroutineGroup);
        dsClasses->setObjectName(QString::fromUtf8("dsClasses"));
        dsClasses->setFrameShape(QFrame::Box);
        dsClasses->setFrameShadow(QFrame::Plain);
        dsClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dsClasses->setProperty("showDropIndicator", QVariant(false));
        dsClasses->setRootIsDecorated(false);
        dsClasses->setAllColumnsShowFocus(true);
        dsClasses->header()->setStretchLastSection(false);

        horizontalLayout_11->addWidget(dsClasses);


        verticalLayout_12->addWidget(dsSubroutineGroup);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_12->addItem(verticalSpacer_3);

        dsScroll->setWidget(dsScrollContents);

        verticalLayout_6->addWidget(dsScroll);

        stagesTabs->addTab(DS, QString());
        GS = new QWidget();
        GS->setObjectName(QString::fromUtf8("GS"));
        verticalLayout_7 = new QVBoxLayout(GS);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gsShaderGroup = new QGroupBox(GS);
        gsShaderGroup->setObjectName(QString::fromUtf8("gsShaderGroup"));
        sizePolicy4.setHeightForWidth(gsShaderGroup->sizePolicy().hasHeightForWidth());
        gsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_13 = new QHBoxLayout(gsShaderGroup);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, 4);
        gsShader = new RDLabel(gsShaderGroup);
        gsShader->setObjectName(QString::fromUtf8("gsShader"));
        sizePolicy5.setHeightForWidth(gsShader->sizePolicy().hasHeightForWidth());
        gsShader->setSizePolicy(sizePolicy5);
        gsShader->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsShader);

        gsShaderDebug = new RDLabel(gsShaderGroup);
        gsShaderDebug->setObjectName(QString::fromUtf8("gsShaderDebug"));
        sizePolicy5.setHeightForWidth(gsShaderDebug->sizePolicy().hasHeightForWidth());
        gsShaderDebug->setSizePolicy(sizePolicy5);
        gsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsShaderDebug);

        gsShaderViewButton = new QToolButton(gsShaderGroup);
        gsShaderViewButton->setObjectName(QString::fromUtf8("gsShaderViewButton"));
        gsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        gsShaderViewButton->setIcon(icon4);
        gsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        gsShaderViewButton->setAutoRaise(true);

        horizontalLayout_13->addWidget(gsShaderViewButton);

        gsShaderEditButton = new QToolButton(gsShaderGroup);
        gsShaderEditButton->setObjectName(QString::fromUtf8("gsShaderEditButton"));
        gsShaderEditButton->setIcon(icon5);
        gsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        gsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        gsShaderEditButton->setAutoRaise(true);

        horizontalLayout_13->addWidget(gsShaderEditButton);

        gsShaderSaveButton = new QToolButton(gsShaderGroup);
        gsShaderSaveButton->setObjectName(QString::fromUtf8("gsShaderSaveButton"));
        gsShaderSaveButton->setIcon(icon2);
        gsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        gsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_13->addWidget(gsShaderSaveButton);

        gsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(gsShaderSpacer);


        verticalLayout_7->addWidget(gsShaderGroup);

        gsScroll = new QScrollArea(GS);
        gsScroll->setObjectName(QString::fromUtf8("gsScroll"));
        gsScroll->setFrameShape(QFrame::NoFrame);
        gsScroll->setWidgetResizable(true);
        gsScrollContents = new QWidget();
        gsScrollContents->setObjectName(QString::fromUtf8("gsScrollContents"));
        gsScrollContents->setGeometry(QRect(0, 0, 101, 430));
        verticalLayout_13 = new QVBoxLayout(gsScrollContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        gsResGroup = new CollapseGroupBox(gsScrollContents);
        gsResGroup->setObjectName(QString::fromUtf8("gsResGroup"));
        sizePolicy6.setHeightForWidth(gsResGroup->sizePolicy().hasHeightForWidth());
        gsResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_20 = new QHBoxLayout(gsResGroup);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(2, 2, 2, 2);
        gsResources = new RDTreeWidget(gsResGroup);
        gsResources->setObjectName(QString::fromUtf8("gsResources"));
        gsResources->setFrameShape(QFrame::Box);
        gsResources->setFrameShadow(QFrame::Plain);
        gsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsResources->setProperty("showDropIndicator", QVariant(false));
        gsResources->setRootIsDecorated(false);
        gsResources->setAllColumnsShowFocus(true);
        gsResources->header()->setStretchLastSection(false);

        horizontalLayout_20->addWidget(gsResources);


        verticalLayout_13->addWidget(gsResGroup);

        gsSamplerGroup = new CollapseGroupBox(gsScrollContents);
        gsSamplerGroup->setObjectName(QString::fromUtf8("gsSamplerGroup"));
        sizePolicy6.setHeightForWidth(gsSamplerGroup->sizePolicy().hasHeightForWidth());
        gsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_28 = new QHBoxLayout(gsSamplerGroup);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(2, 2, 2, 2);
        gsSamplers = new RDTreeWidget(gsSamplerGroup);
        gsSamplers->setObjectName(QString::fromUtf8("gsSamplers"));
        gsSamplers->setFrameShape(QFrame::Box);
        gsSamplers->setFrameShadow(QFrame::Plain);
        gsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsSamplers->setProperty("showDropIndicator", QVariant(false));
        gsSamplers->setRootIsDecorated(false);
        gsSamplers->setAllColumnsShowFocus(true);
        gsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_28->addWidget(gsSamplers);


        verticalLayout_13->addWidget(gsSamplerGroup);

        gsCBufferGroup = new CollapseGroupBox(gsScrollContents);
        gsCBufferGroup->setObjectName(QString::fromUtf8("gsCBufferGroup"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(5);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(gsCBufferGroup->sizePolicy().hasHeightForWidth());
        gsCBufferGroup->setSizePolicy(sizePolicy7);
        horizontalLayout_17 = new QHBoxLayout(gsCBufferGroup);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(2, 2, 2, 2);
        gsCBuffers = new RDTreeWidget(gsCBufferGroup);
        gsCBuffers->setObjectName(QString::fromUtf8("gsCBuffers"));
        gsCBuffers->setFrameShape(QFrame::Box);
        gsCBuffers->setFrameShadow(QFrame::Plain);
        gsCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsCBuffers->setProperty("showDropIndicator", QVariant(false));
        gsCBuffers->setRootIsDecorated(false);
        gsCBuffers->setAllColumnsShowFocus(true);
        gsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_17->addWidget(gsCBuffers);


        verticalLayout_13->addWidget(gsCBufferGroup);

        soGroup = new CollapseGroupBox(gsScrollContents);
        soGroup->setObjectName(QString::fromUtf8("soGroup"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(4);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(soGroup->sizePolicy().hasHeightForWidth());
        soGroup->setSizePolicy(sizePolicy8);
        soLayout_3 = new QHBoxLayout(soGroup);
        soLayout_3->setObjectName(QString::fromUtf8("soLayout_3"));
        soLayout_3->setContentsMargins(2, 2, 2, 2);
        gsStreamOut = new RDTreeWidget(soGroup);
        gsStreamOut->setObjectName(QString::fromUtf8("gsStreamOut"));
        gsStreamOut->setFrameShape(QFrame::Box);
        gsStreamOut->setFrameShadow(QFrame::Plain);
        gsStreamOut->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsStreamOut->setProperty("showDropIndicator", QVariant(false));
        gsStreamOut->setRootIsDecorated(false);
        gsStreamOut->setAllColumnsShowFocus(true);
        gsStreamOut->header()->setStretchLastSection(false);

        soLayout_3->addWidget(gsStreamOut);


        verticalLayout_13->addWidget(soGroup);

        gsSubroutineGroup = new CollapseGroupBox(gsScrollContents);
        gsSubroutineGroup->setObjectName(QString::fromUtf8("gsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(gsSubroutineGroup->sizePolicy().hasHeightForWidth());
        gsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_18 = new QHBoxLayout(gsSubroutineGroup);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(2, 2, 2, 2);
        gsClasses = new RDTreeWidget(gsSubroutineGroup);
        gsClasses->setObjectName(QString::fromUtf8("gsClasses"));
        gsClasses->setFrameShape(QFrame::Box);
        gsClasses->setFrameShadow(QFrame::Plain);
        gsClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsClasses->setProperty("showDropIndicator", QVariant(false));
        gsClasses->setRootIsDecorated(false);
        gsClasses->setAllColumnsShowFocus(true);
        gsClasses->header()->setStretchLastSection(false);

        horizontalLayout_18->addWidget(gsClasses);


        verticalLayout_13->addWidget(gsSubroutineGroup);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_13->addItem(verticalSpacer_4);

        gsScroll->setWidget(gsScrollContents);

        verticalLayout_7->addWidget(gsScroll);

        stagesTabs->addTab(GS, QString());
        RS = new QWidget();
        RS->setObjectName(QString::fromUtf8("RS"));
        gridLayout_2 = new QGridLayout(RS);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rasterizerGroup = new QGroupBox(RS);
        rasterizerGroup->setObjectName(QString::fromUtf8("rasterizerGroup"));
        gridLayout_7 = new QGridLayout(rasterizerGroup);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(2);
        gridLayout_7->setVerticalSpacing(3);
        gridLayout_7->setContentsMargins(2, 2, 2, 2);
        rastState = new RDLabel(rasterizerGroup);
        rastState->setObjectName(QString::fromUtf8("rastState"));
        rastState->setFrameShape(QFrame::Box);
        rastState->setMargin(4);

        gridLayout_7->addWidget(rastState, 0, 0, 1, 2);

        rasterizerGridLayout = new QGridLayout();
        rasterizerGridLayout->setSpacing(0);
        rasterizerGridLayout->setObjectName(QString::fromUtf8("rasterizerGridLayout"));
        rasterizerGridLayout->setContentsMargins(2, 2, 2, 2);
        fillModeLabel = new QLabel(rasterizerGroup);
        fillModeLabel->setObjectName(QString::fromUtf8("fillModeLabel"));
        fillModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        fillModeLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(fillModeLabel, 0, 0, 1, 1);

        fillMode = new QLabel(rasterizerGroup);
        fillMode->setObjectName(QString::fromUtf8("fillMode"));
        fillMode->setFont(font);
        fillMode->setAlignment(Qt::AlignCenter);
        fillMode->setMargin(4);

        rasterizerGridLayout->addWidget(fillMode, 0, 1, 1, 1);

        cullModeLabel = new QLabel(rasterizerGroup);
        cullModeLabel->setObjectName(QString::fromUtf8("cullModeLabel"));
        cullModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cullModeLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(cullModeLabel, 0, 2, 1, 1);

        cullMode = new QLabel(rasterizerGroup);
        cullMode->setObjectName(QString::fromUtf8("cullMode"));
        cullMode->setFont(font);
        cullMode->setAlignment(Qt::AlignCenter);
        cullMode->setMargin(4);

        rasterizerGridLayout->addWidget(cullMode, 0, 3, 1, 1);

        frontCCWLabel = new QLabel(rasterizerGroup);
        frontCCWLabel->setObjectName(QString::fromUtf8("frontCCWLabel"));
        frontCCWLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frontCCWLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(frontCCWLabel, 0, 4, 1, 1);

        frontCCW = new QLabel(rasterizerGroup);
        frontCCW->setObjectName(QString::fromUtf8("frontCCW"));
        frontCCW->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        frontCCW->setAlignment(Qt::AlignCenter);
        frontCCW->setMargin(4);

        rasterizerGridLayout->addWidget(frontCCW, 0, 5, 1, 1);

        conservativeRasterLabel = new QLabel(rasterizerGroup);
        conservativeRasterLabel->setObjectName(QString::fromUtf8("conservativeRasterLabel"));
        conservativeRasterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        conservativeRasterLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(conservativeRasterLabel, 0, 6, 1, 1);

        conservativeRaster = new QLabel(rasterizerGroup);
        conservativeRaster->setObjectName(QString::fromUtf8("conservativeRaster"));
        conservativeRaster->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        conservativeRaster->setAlignment(Qt::AlignCenter);
        conservativeRaster->setMargin(4);

        rasterizerGridLayout->addWidget(conservativeRaster, 0, 7, 1, 1);

        depthBiasLabel = new QLabel(rasterizerGroup);
        depthBiasLabel->setObjectName(QString::fromUtf8("depthBiasLabel"));
        depthBiasLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depthBiasLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(depthBiasLabel, 1, 0, 1, 1);

        depthBias = new QLabel(rasterizerGroup);
        depthBias->setObjectName(QString::fromUtf8("depthBias"));
        depthBias->setFont(font);
        depthBias->setAlignment(Qt::AlignCenter);
        depthBias->setMargin(4);

        rasterizerGridLayout->addWidget(depthBias, 1, 1, 1, 1);

        depthBiasClampLabel = new QLabel(rasterizerGroup);
        depthBiasClampLabel->setObjectName(QString::fromUtf8("depthBiasClampLabel"));
        depthBiasClampLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depthBiasClampLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(depthBiasClampLabel, 1, 2, 1, 1);

        depthBiasClamp = new QLabel(rasterizerGroup);
        depthBiasClamp->setObjectName(QString::fromUtf8("depthBiasClamp"));
        depthBiasClamp->setFont(font);
        depthBiasClamp->setAlignment(Qt::AlignCenter);
        depthBiasClamp->setMargin(4);

        rasterizerGridLayout->addWidget(depthBiasClamp, 1, 3, 1, 1);

        slopeScaledBiasLabel = new QLabel(rasterizerGroup);
        slopeScaledBiasLabel->setObjectName(QString::fromUtf8("slopeScaledBiasLabel"));
        slopeScaledBiasLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slopeScaledBiasLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(slopeScaledBiasLabel, 1, 4, 1, 1);

        slopeScaledBias = new QLabel(rasterizerGroup);
        slopeScaledBias->setObjectName(QString::fromUtf8("slopeScaledBias"));
        slopeScaledBias->setFont(font);
        slopeScaledBias->setAlignment(Qt::AlignCenter);
        slopeScaledBias->setMargin(4);

        rasterizerGridLayout->addWidget(slopeScaledBias, 1, 5, 1, 1);

        forcedSampleCountLabel = new QLabel(rasterizerGroup);
        forcedSampleCountLabel->setObjectName(QString::fromUtf8("forcedSampleCountLabel"));
        forcedSampleCountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        forcedSampleCountLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(forcedSampleCountLabel, 1, 6, 1, 1);

        forcedSampleCount = new QLabel(rasterizerGroup);
        forcedSampleCount->setObjectName(QString::fromUtf8("forcedSampleCount"));
        forcedSampleCount->setFont(font);
        forcedSampleCount->setAlignment(Qt::AlignCenter);
        forcedSampleCount->setMargin(4);

        rasterizerGridLayout->addWidget(forcedSampleCount, 1, 7, 1, 1);

        depthClipLabel = new QLabel(rasterizerGroup);
        depthClipLabel->setObjectName(QString::fromUtf8("depthClipLabel"));
        depthClipLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depthClipLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(depthClipLabel, 2, 0, 1, 1);

        depthClip = new QLabel(rasterizerGroup);
        depthClip->setObjectName(QString::fromUtf8("depthClip"));
        depthClip->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthClip->setAlignment(Qt::AlignCenter);
        depthClip->setMargin(4);

        rasterizerGridLayout->addWidget(depthClip, 2, 1, 1, 1);

        scissorLabel = new QLabel(rasterizerGroup);
        scissorLabel->setObjectName(QString::fromUtf8("scissorLabel"));
        scissorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scissorLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(scissorLabel, 2, 2, 1, 1);

        scissorEnabled = new QLabel(rasterizerGroup);
        scissorEnabled->setObjectName(QString::fromUtf8("scissorEnabled"));
        scissorEnabled->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        scissorEnabled->setAlignment(Qt::AlignCenter);
        scissorEnabled->setMargin(4);

        rasterizerGridLayout->addWidget(scissorEnabled, 2, 3, 1, 1);

        multisampleLabel = new QLabel(rasterizerGroup);
        multisampleLabel->setObjectName(QString::fromUtf8("multisampleLabel"));
        multisampleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        multisampleLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(multisampleLabel, 2, 4, 1, 1);

        multisample = new QLabel(rasterizerGroup);
        multisample->setObjectName(QString::fromUtf8("multisample"));
        multisample->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        multisample->setAlignment(Qt::AlignCenter);
        multisample->setMargin(4);

        rasterizerGridLayout->addWidget(multisample, 2, 5, 1, 1);

        lineAALabel = new QLabel(rasterizerGroup);
        lineAALabel->setObjectName(QString::fromUtf8("lineAALabel"));
        lineAALabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineAALabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(lineAALabel, 2, 6, 1, 1);

        lineAA = new QLabel(rasterizerGroup);
        lineAA->setObjectName(QString::fromUtf8("lineAA"));
        lineAA->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        lineAA->setAlignment(Qt::AlignCenter);
        lineAA->setMargin(4);

        rasterizerGridLayout->addWidget(lineAA, 2, 7, 1, 1);


        gridLayout_7->addLayout(rasterizerGridLayout, 1, 0, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 1, 2, 1, 1);


        gridLayout_2->addWidget(rasterizerGroup, 0, 0, 1, 2);

        predicateGroup = new QGroupBox(RS);
        predicateGroup->setObjectName(QString::fromUtf8("predicateGroup"));
        horizontalLayout_41 = new QHBoxLayout(predicateGroup);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        predicate = new RDLabel(predicateGroup);
        predicate->setObjectName(QString::fromUtf8("predicate"));
        predicate->setFrameShape(QFrame::Box);
        predicate->setMargin(4);

        horizontalLayout_41->addWidget(predicate);

        label_2 = new QLabel(predicateGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_41->addWidget(label_2);

        predicateValue = new QLabel(predicateGroup);
        predicateValue->setObjectName(QString::fromUtf8("predicateValue"));
        predicateValue->setFont(font);

        horizontalLayout_41->addWidget(predicateValue);

        label = new QLabel(predicateGroup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_41->addWidget(label);

        predicatePassing = new QLabel(predicateGroup);
        predicatePassing->setObjectName(QString::fromUtf8("predicatePassing"));

        horizontalLayout_41->addWidget(predicatePassing);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_5);


        gridLayout_2->addWidget(predicateGroup, 1, 0, 1, 2);

        viewportsGroup = new QGroupBox(RS);
        viewportsGroup->setObjectName(QString::fromUtf8("viewportsGroup"));
        sizePolicy.setHeightForWidth(viewportsGroup->sizePolicy().hasHeightForWidth());
        viewportsGroup->setSizePolicy(sizePolicy);
        horizontalLayout_21 = new QHBoxLayout(viewportsGroup);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(2, 2, 2, 2);
        viewports = new RDTreeWidget(viewportsGroup);
        viewports->setObjectName(QString::fromUtf8("viewports"));
        viewports->setFrameShape(QFrame::Box);
        viewports->setFrameShadow(QFrame::Plain);
        viewports->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewports->setProperty("showDropIndicator", QVariant(false));
        viewports->setIndentation(0);
        viewports->setRootIsDecorated(false);
        viewports->setAllColumnsShowFocus(true);
        viewports->header()->setMinimumSectionSize(50);

        horizontalLayout_21->addWidget(viewports);


        gridLayout_2->addWidget(viewportsGroup, 2, 0, 1, 1);

        scissorGroup = new QGroupBox(RS);
        scissorGroup->setObjectName(QString::fromUtf8("scissorGroup"));
        sizePolicy.setHeightForWidth(scissorGroup->sizePolicy().hasHeightForWidth());
        scissorGroup->setSizePolicy(sizePolicy);
        horizontalLayout_22 = new QHBoxLayout(scissorGroup);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(2, 2, 2, 2);
        scissors = new RDTreeWidget(scissorGroup);
        scissors->setObjectName(QString::fromUtf8("scissors"));
        scissors->setFrameShape(QFrame::Box);
        scissors->setFrameShadow(QFrame::Plain);
        scissors->setEditTriggers(QAbstractItemView::NoEditTriggers);
        scissors->setProperty("showDropIndicator", QVariant(false));
        scissors->setIndentation(0);
        scissors->setRootIsDecorated(false);
        scissors->setAllColumnsShowFocus(true);
        scissors->header()->setMinimumSectionSize(50);

        horizontalLayout_22->addWidget(scissors);


        gridLayout_2->addWidget(scissorGroup, 2, 1, 1, 1);

        stagesTabs->addTab(RS, QString());
        PS = new QWidget();
        PS->setObjectName(QString::fromUtf8("PS"));
        verticalLayout_8 = new QVBoxLayout(PS);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        psShaderGroup = new QGroupBox(PS);
        psShaderGroup->setObjectName(QString::fromUtf8("psShaderGroup"));
        sizePolicy4.setHeightForWidth(psShaderGroup->sizePolicy().hasHeightForWidth());
        psShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_16 = new QHBoxLayout(psShaderGroup);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, -1, 4);
        psShader = new RDLabel(psShaderGroup);
        psShader->setObjectName(QString::fromUtf8("psShader"));
        sizePolicy5.setHeightForWidth(psShader->sizePolicy().hasHeightForWidth());
        psShader->setSizePolicy(sizePolicy5);
        psShader->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(psShader);

        psShaderDebug = new RDLabel(psShaderGroup);
        psShaderDebug->setObjectName(QString::fromUtf8("psShaderDebug"));
        sizePolicy5.setHeightForWidth(psShaderDebug->sizePolicy().hasHeightForWidth());
        psShaderDebug->setSizePolicy(sizePolicy5);
        psShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(psShaderDebug);

        psShaderViewButton = new QToolButton(psShaderGroup);
        psShaderViewButton->setObjectName(QString::fromUtf8("psShaderViewButton"));
        psShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        psShaderViewButton->setIcon(icon4);
        psShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        psShaderViewButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(psShaderViewButton);

        psShaderEditButton = new QToolButton(psShaderGroup);
        psShaderEditButton->setObjectName(QString::fromUtf8("psShaderEditButton"));
        psShaderEditButton->setIcon(icon5);
        psShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        psShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        psShaderEditButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(psShaderEditButton);

        psShaderSaveButton = new QToolButton(psShaderGroup);
        psShaderSaveButton->setObjectName(QString::fromUtf8("psShaderSaveButton"));
        psShaderSaveButton->setIcon(icon2);
        psShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        psShaderSaveButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(psShaderSaveButton);

        psShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(psShaderSpacer);


        verticalLayout_8->addWidget(psShaderGroup);

        psScroll = new QScrollArea(PS);
        psScroll->setObjectName(QString::fromUtf8("psScroll"));
        psScroll->setFrameShape(QFrame::NoFrame);
        psScroll->setWidgetResizable(true);
        psScrollContents = new QWidget();
        psScrollContents->setObjectName(QString::fromUtf8("psScrollContents"));
        psScrollContents->setGeometry(QRect(0, 0, 101, 344));
        verticalLayout_14 = new QVBoxLayout(psScrollContents);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        psResGroup = new CollapseGroupBox(psScrollContents);
        psResGroup->setObjectName(QString::fromUtf8("psResGroup"));
        sizePolicy6.setHeightForWidth(psResGroup->sizePolicy().hasHeightForWidth());
        psResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_32 = new QHBoxLayout(psResGroup);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(2, 2, 2, 2);
        psResources = new RDTreeWidget(psResGroup);
        psResources->setObjectName(QString::fromUtf8("psResources"));
        psResources->setFrameShape(QFrame::Box);
        psResources->setFrameShadow(QFrame::Plain);
        psResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        psResources->setProperty("showDropIndicator", QVariant(false));
        psResources->setRootIsDecorated(false);
        psResources->setAllColumnsShowFocus(true);
        psResources->header()->setStretchLastSection(false);

        horizontalLayout_32->addWidget(psResources);


        verticalLayout_14->addWidget(psResGroup);

        psSamplerGroup = new CollapseGroupBox(psScrollContents);
        psSamplerGroup->setObjectName(QString::fromUtf8("psSamplerGroup"));
        sizePolicy6.setHeightForWidth(psSamplerGroup->sizePolicy().hasHeightForWidth());
        psSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_33 = new QHBoxLayout(psSamplerGroup);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(2, 2, 2, 2);
        psSamplers = new RDTreeWidget(psSamplerGroup);
        psSamplers->setObjectName(QString::fromUtf8("psSamplers"));
        psSamplers->setFrameShape(QFrame::Box);
        psSamplers->setFrameShadow(QFrame::Plain);
        psSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        psSamplers->setProperty("showDropIndicator", QVariant(false));
        psSamplers->setRootIsDecorated(false);
        psSamplers->setAllColumnsShowFocus(true);
        psSamplers->header()->setStretchLastSection(false);

        horizontalLayout_33->addWidget(psSamplers);


        verticalLayout_14->addWidget(psSamplerGroup);

        psCBufferGroup = new CollapseGroupBox(psScrollContents);
        psCBufferGroup->setObjectName(QString::fromUtf8("psCBufferGroup"));
        sizePolicy6.setHeightForWidth(psCBufferGroup->sizePolicy().hasHeightForWidth());
        psCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_30 = new QHBoxLayout(psCBufferGroup);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(2, 2, 2, 2);
        psCBuffers = new RDTreeWidget(psCBufferGroup);
        psCBuffers->setObjectName(QString::fromUtf8("psCBuffers"));
        psCBuffers->setFrameShape(QFrame::Box);
        psCBuffers->setFrameShadow(QFrame::Plain);
        psCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        psCBuffers->setProperty("showDropIndicator", QVariant(false));
        psCBuffers->setRootIsDecorated(false);
        psCBuffers->setAllColumnsShowFocus(true);
        psCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_30->addWidget(psCBuffers);


        verticalLayout_14->addWidget(psCBufferGroup);

        psSubroutineGroup = new CollapseGroupBox(psScrollContents);
        psSubroutineGroup->setObjectName(QString::fromUtf8("psSubroutineGroup"));
        sizePolicy6.setHeightForWidth(psSubroutineGroup->sizePolicy().hasHeightForWidth());
        psSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_31 = new QHBoxLayout(psSubroutineGroup);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(2, 2, 2, 2);
        psClasses = new RDTreeWidget(psSubroutineGroup);
        psClasses->setObjectName(QString::fromUtf8("psClasses"));
        psClasses->setFrameShape(QFrame::Box);
        psClasses->setFrameShadow(QFrame::Plain);
        psClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        psClasses->setProperty("showDropIndicator", QVariant(false));
        psClasses->setRootIsDecorated(false);
        psClasses->setAllColumnsShowFocus(true);
        psClasses->header()->setStretchLastSection(false);

        horizontalLayout_31->addWidget(psClasses);


        verticalLayout_14->addWidget(psSubroutineGroup);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_14->addItem(verticalSpacer_5);

        psScroll->setWidget(psScrollContents);

        verticalLayout_8->addWidget(psScroll);

        stagesTabs->addTab(PS, QString());
        OM = new QWidget();
        OM->setObjectName(QString::fromUtf8("OM"));
        gridLayout_5 = new QGridLayout(OM);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        omScroll = new QScrollArea(OM);
        omScroll->setObjectName(QString::fromUtf8("omScroll"));
        omScroll->setFrameShape(QFrame::NoFrame);
        omScroll->setWidgetResizable(true);
        omScrollContents = new QWidget();
        omScrollContents->setObjectName(QString::fromUtf8("omScrollContents"));
        omScrollContents->setGeometry(QRect(0, 0, 829, 311));
        gridLayout_9 = new QGridLayout(omScrollContents);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        outputsGroup = new QGroupBox(omScrollContents);
        outputsGroup->setObjectName(QString::fromUtf8("outputsGroup"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(outputsGroup->sizePolicy().hasHeightForWidth());
        outputsGroup->setSizePolicy(sizePolicy9);
        horizontalLayout_24 = new QHBoxLayout(outputsGroup);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(2, 2, 2, 2);
        targetOutputs = new RDTreeWidget(outputsGroup);
        targetOutputs->setObjectName(QString::fromUtf8("targetOutputs"));
        targetOutputs->setFrameShape(QFrame::Box);
        targetOutputs->setFrameShadow(QFrame::Plain);
        targetOutputs->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        targetOutputs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        targetOutputs->setProperty("showDropIndicator", QVariant(false));
        targetOutputs->setIndentation(0);
        targetOutputs->setRootIsDecorated(false);
        targetOutputs->setItemsExpandable(false);
        targetOutputs->setAllColumnsShowFocus(true);
        targetOutputs->setExpandsOnDoubleClick(false);
        targetOutputs->header()->setStretchLastSection(false);

        horizontalLayout_24->addWidget(targetOutputs);


        gridLayout_9->addWidget(outputsGroup, 0, 0, 1, 3);

        blendsGroup = new QGroupBox(omScrollContents);
        blendsGroup->setObjectName(QString::fromUtf8("blendsGroup"));
        sizePolicy9.setHeightForWidth(blendsGroup->sizePolicy().hasHeightForWidth());
        blendsGroup->setSizePolicy(sizePolicy9);
        horizontalLayout_25 = new QHBoxLayout(blendsGroup);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(2, 2, 2, 2);
        blends = new RDTreeWidget(blendsGroup);
        blends->setObjectName(QString::fromUtf8("blends"));
        blends->setFrameShape(QFrame::Box);
        blends->setFrameShadow(QFrame::Plain);
        blends->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        blends->setEditTriggers(QAbstractItemView::NoEditTriggers);
        blends->setProperty("showDropIndicator", QVariant(false));
        blends->setIndentation(0);
        blends->setRootIsDecorated(false);
        blends->setItemsExpandable(false);
        blends->setAllColumnsShowFocus(true);
        blends->setExpandsOnDoubleClick(false);

        horizontalLayout_25->addWidget(blends);


        gridLayout_9->addWidget(blendsGroup, 1, 0, 1, 3);

        blendStateGroup = new QGroupBox(omScrollContents);
        blendStateGroup->setObjectName(QString::fromUtf8("blendStateGroup"));
        sizePolicy1.setHeightForWidth(blendStateGroup->sizePolicy().hasHeightForWidth());
        blendStateGroup->setSizePolicy(sizePolicy1);
        gridLayout_8 = new QGridLayout(blendStateGroup);
        gridLayout_8->setSpacing(4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(2, 2, 2, 2);
        blendState = new RDLabel(blendStateGroup);
        blendState->setObjectName(QString::fromUtf8("blendState"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(blendState->sizePolicy().hasHeightForWidth());
        blendState->setSizePolicy(sizePolicy10);
        blendState->setFrameShape(QFrame::Box);
        blendState->setMargin(4);

        gridLayout_8->addWidget(blendState, 0, 0, 1, 2);

        blendStateGridLayout = new QGridLayout();
        blendStateGridLayout->setSpacing(0);
        blendStateGridLayout->setObjectName(QString::fromUtf8("blendStateGridLayout"));
        blendStateGridLayout->setContentsMargins(2, 2, 2, 2);
        blendFactorLabel = new QLabel(blendStateGroup);
        blendFactorLabel->setObjectName(QString::fromUtf8("blendFactorLabel"));
        blendFactorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        blendFactorLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(blendFactorLabel, 0, 0, 1, 1);

        blendFactor = new QLabel(blendStateGroup);
        blendFactor->setObjectName(QString::fromUtf8("blendFactor"));
        blendFactor->setFont(font);
        blendFactor->setAlignment(Qt::AlignCenter);
        blendFactor->setMargin(4);

        blendStateGridLayout->addWidget(blendFactor, 0, 1, 1, 1);

        independentBlendLabel = new QLabel(blendStateGroup);
        independentBlendLabel->setObjectName(QString::fromUtf8("independentBlendLabel"));
        independentBlendLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        independentBlendLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(independentBlendLabel, 0, 2, 1, 1);

        independentBlend = new QLabel(blendStateGroup);
        independentBlend->setObjectName(QString::fromUtf8("independentBlend"));
        independentBlend->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        independentBlend->setAlignment(Qt::AlignCenter);
        independentBlend->setMargin(4);

        blendStateGridLayout->addWidget(independentBlend, 0, 3, 1, 1);

        sampleMaskLabel = new QLabel(blendStateGroup);
        sampleMaskLabel->setObjectName(QString::fromUtf8("sampleMaskLabel"));
        sampleMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleMaskLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(sampleMaskLabel, 1, 0, 1, 1);

        sampleMask = new QLabel(blendStateGroup);
        sampleMask->setObjectName(QString::fromUtf8("sampleMask"));
        sampleMask->setFont(font);
        sampleMask->setAlignment(Qt::AlignCenter);
        sampleMask->setMargin(4);

        blendStateGridLayout->addWidget(sampleMask, 1, 1, 1, 1);

        alphaToCoverageLabel = new QLabel(blendStateGroup);
        alphaToCoverageLabel->setObjectName(QString::fromUtf8("alphaToCoverageLabel"));
        alphaToCoverageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToCoverageLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(alphaToCoverageLabel, 1, 2, 1, 1);

        alphaToCoverage = new QLabel(blendStateGroup);
        alphaToCoverage->setObjectName(QString::fromUtf8("alphaToCoverage"));
        alphaToCoverage->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToCoverage->setAlignment(Qt::AlignCenter);
        alphaToCoverage->setMargin(4);

        blendStateGridLayout->addWidget(alphaToCoverage, 1, 3, 1, 1);


        gridLayout_8->addLayout(blendStateGridLayout, 1, 0, 1, 2);


        gridLayout_9->addWidget(blendStateGroup, 2, 0, 1, 1);

        depthStateGroup = new QGroupBox(omScrollContents);
        depthStateGroup->setObjectName(QString::fromUtf8("depthStateGroup"));
        sizePolicy1.setHeightForWidth(depthStateGroup->sizePolicy().hasHeightForWidth());
        depthStateGroup->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(depthStateGroup);
        gridLayout_6->setSpacing(4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(2, 2, 2, 2);
        depthState = new RDLabel(depthStateGroup);
        depthState->setObjectName(QString::fromUtf8("depthState"));
        QSizePolicy sizePolicy11(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(depthState->sizePolicy().hasHeightForWidth());
        depthState->setSizePolicy(sizePolicy11);
        depthState->setFrameShape(QFrame::Box);
        depthState->setMargin(4);

        gridLayout_6->addWidget(depthState, 0, 0, 1, 2);

        depthStateGridLayout = new QGridLayout();
        depthStateGridLayout->setSpacing(0);
        depthStateGridLayout->setObjectName(QString::fromUtf8("depthStateGridLayout"));
        depthStateGridLayout->setContentsMargins(2, 2, 2, 2);
        depthEnabledLabel = new QLabel(depthStateGroup);
        depthEnabledLabel->setObjectName(QString::fromUtf8("depthEnabledLabel"));
        depthEnabledLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthEnabledLabel, 0, 0, 1, 1);

        depthEnabled = new QLabel(depthStateGroup);
        depthEnabled->setObjectName(QString::fromUtf8("depthEnabled"));
        depthEnabled->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthEnabled->setAlignment(Qt::AlignCenter);
        depthEnabled->setMargin(4);

        depthStateGridLayout->addWidget(depthEnabled, 0, 1, 1, 1);

        depthWriteLabel = new QLabel(depthStateGroup);
        depthWriteLabel->setObjectName(QString::fromUtf8("depthWriteLabel"));
        depthWriteLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthWriteLabel, 1, 0, 1, 1);

        depthWrite = new QLabel(depthStateGroup);
        depthWrite->setObjectName(QString::fromUtf8("depthWrite"));
        depthWrite->setFont(font);
        depthWrite->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthWrite->setAlignment(Qt::AlignCenter);
        depthWrite->setMargin(4);

        depthStateGridLayout->addWidget(depthWrite, 1, 1, 1, 1);

        depthFuncLabel = new QLabel(depthStateGroup);
        depthFuncLabel->setObjectName(QString::fromUtf8("depthFuncLabel"));
        depthFuncLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthFuncLabel, 2, 0, 1, 1);

        depthFunc = new QLabel(depthStateGroup);
        depthFunc->setObjectName(QString::fromUtf8("depthFunc"));
        depthFunc->setFont(font);
        depthFunc->setAlignment(Qt::AlignCenter);
        depthFunc->setMargin(4);

        depthStateGridLayout->addWidget(depthFunc, 2, 1, 1, 1);


        gridLayout_6->addLayout(depthStateGridLayout, 1, 0, 1, 2);


        gridLayout_9->addWidget(depthStateGroup, 2, 1, 1, 1);

        stencilStateGroup = new QGroupBox(omScrollContents);
        stencilStateGroup->setObjectName(QString::fromUtf8("stencilStateGroup"));
        sizePolicy1.setHeightForWidth(stencilStateGroup->sizePolicy().hasHeightForWidth());
        stencilStateGroup->setSizePolicy(sizePolicy1);
        stencilStateGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        gridLayout_4 = new QGridLayout(stencilStateGroup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        stencilEnabledLabel = new QLabel(stencilStateGroup);
        stencilEnabledLabel->setObjectName(QString::fromUtf8("stencilEnabledLabel"));
        sizePolicy10.setHeightForWidth(stencilEnabledLabel->sizePolicy().hasHeightForWidth());
        stencilEnabledLabel->setSizePolicy(sizePolicy10);
        stencilEnabledLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(stencilEnabledLabel);

        stencilEnabled = new QLabel(stencilStateGroup);
        stencilEnabled->setObjectName(QString::fromUtf8("stencilEnabled"));
        sizePolicy10.setHeightForWidth(stencilEnabled->sizePolicy().hasHeightForWidth());
        stencilEnabled->setSizePolicy(sizePolicy10);
        stencilEnabled->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        stencilEnabled->setAlignment(Qt::AlignCenter);
        stencilEnabled->setMargin(4);

        horizontalLayout_15->addWidget(stencilEnabled);

        stencilWriteMaskLabel = new QLabel(stencilStateGroup);
        stencilWriteMaskLabel->setObjectName(QString::fromUtf8("stencilWriteMaskLabel"));
        sizePolicy10.setHeightForWidth(stencilWriteMaskLabel->sizePolicy().hasHeightForWidth());
        stencilWriteMaskLabel->setSizePolicy(sizePolicy10);
        stencilWriteMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(stencilWriteMaskLabel);

        stencilWriteMask = new QLabel(stencilStateGroup);
        stencilWriteMask->setObjectName(QString::fromUtf8("stencilWriteMask"));
        sizePolicy10.setHeightForWidth(stencilWriteMask->sizePolicy().hasHeightForWidth());
        stencilWriteMask->setSizePolicy(sizePolicy10);
        stencilWriteMask->setFont(font);
        stencilWriteMask->setAlignment(Qt::AlignCenter);
        stencilWriteMask->setMargin(4);

        horizontalLayout_15->addWidget(stencilWriteMask);

        stenciReadMaskLabel = new QLabel(stencilStateGroup);
        stenciReadMaskLabel->setObjectName(QString::fromUtf8("stenciReadMaskLabel"));
        sizePolicy10.setHeightForWidth(stenciReadMaskLabel->sizePolicy().hasHeightForWidth());
        stenciReadMaskLabel->setSizePolicy(sizePolicy10);
        stenciReadMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(stenciReadMaskLabel);

        stencilReadMask = new QLabel(stencilStateGroup);
        stencilReadMask->setObjectName(QString::fromUtf8("stencilReadMask"));
        sizePolicy10.setHeightForWidth(stencilReadMask->sizePolicy().hasHeightForWidth());
        stencilReadMask->setSizePolicy(sizePolicy10);
        stencilReadMask->setFont(font);
        stencilReadMask->setAlignment(Qt::AlignCenter);
        stencilReadMask->setMargin(4);

        horizontalLayout_15->addWidget(stencilReadMask);

        stenciRefLabel = new QLabel(stencilStateGroup);
        stenciRefLabel->setObjectName(QString::fromUtf8("stenciRefLabel"));
        sizePolicy10.setHeightForWidth(stenciRefLabel->sizePolicy().hasHeightForWidth());
        stenciRefLabel->setSizePolicy(sizePolicy10);
        stenciRefLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(stenciRefLabel);

        stencilRef = new QLabel(stencilStateGroup);
        stencilRef->setObjectName(QString::fromUtf8("stencilRef"));
        sizePolicy10.setHeightForWidth(stencilRef->sizePolicy().hasHeightForWidth());
        stencilRef->setSizePolicy(sizePolicy10);
        stencilRef->setFont(font);
        stencilRef->setAlignment(Qt::AlignCenter);
        stencilRef->setMargin(4);

        horizontalLayout_15->addWidget(stencilRef);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout_15, 0, 0, 1, 1);

        stencils = new RDTreeWidget(stencilStateGroup);
        stencils->setObjectName(QString::fromUtf8("stencils"));
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(stencils->sizePolicy().hasHeightForWidth());
        stencils->setSizePolicy(sizePolicy12);
        stencils->setFrameShape(QFrame::Box);
        stencils->setFrameShadow(QFrame::Plain);
        stencils->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stencils->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        stencils->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        stencils->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stencils->setProperty("showDropIndicator", QVariant(false));
        stencils->setSelectionMode(QAbstractItemView::SingleSelection);
        stencils->setIndentation(0);
        stencils->setRootIsDecorated(false);
        stencils->setItemsExpandable(false);
        stencils->setAllColumnsShowFocus(true);
        stencils->setExpandsOnDoubleClick(false);
        stencils->header()->setStretchLastSection(false);

        gridLayout_4->addWidget(stencils, 1, 0, 1, 1);


        gridLayout_9->addWidget(stencilStateGroup, 2, 2, 1, 1);

        omScroll->setWidget(omScrollContents);

        gridLayout_5->addWidget(omScroll, 0, 0, 1, 1);

        stagesTabs->addTab(OM, QString());
        CS = new QWidget();
        CS->setObjectName(QString::fromUtf8("CS"));
        verticalLayout_9 = new QVBoxLayout(CS);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        csShaderGroup = new QGroupBox(CS);
        csShaderGroup->setObjectName(QString::fromUtf8("csShaderGroup"));
        sizePolicy4.setHeightForWidth(csShaderGroup->sizePolicy().hasHeightForWidth());
        csShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_19 = new QHBoxLayout(csShaderGroup);
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(-1, 0, -1, 4);
        csShader = new RDLabel(csShaderGroup);
        csShader->setObjectName(QString::fromUtf8("csShader"));
        sizePolicy5.setHeightForWidth(csShader->sizePolicy().hasHeightForWidth());
        csShader->setSizePolicy(sizePolicy5);
        csShader->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csShader);

        csShaderDebug = new RDLabel(csShaderGroup);
        csShaderDebug->setObjectName(QString::fromUtf8("csShaderDebug"));
        sizePolicy5.setHeightForWidth(csShaderDebug->sizePolicy().hasHeightForWidth());
        csShaderDebug->setSizePolicy(sizePolicy5);
        csShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csShaderDebug);

        csShaderViewButton = new QToolButton(csShaderGroup);
        csShaderViewButton->setObjectName(QString::fromUtf8("csShaderViewButton"));
        csShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        csShaderViewButton->setIcon(icon4);
        csShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderViewButton->setAutoRaise(true);

        horizontalLayout_19->addWidget(csShaderViewButton);

        csShaderEditButton = new QToolButton(csShaderGroup);
        csShaderEditButton->setObjectName(QString::fromUtf8("csShaderEditButton"));
        csShaderEditButton->setIcon(icon5);
        csShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        csShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderEditButton->setAutoRaise(true);

        horizontalLayout_19->addWidget(csShaderEditButton);

        csShaderSaveButton = new QToolButton(csShaderGroup);
        csShaderSaveButton->setObjectName(QString::fromUtf8("csShaderSaveButton"));
        csShaderSaveButton->setIcon(icon2);
        csShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderSaveButton->setAutoRaise(true);

        horizontalLayout_19->addWidget(csShaderSaveButton);

        computeDebugSelector = new QToolButton(csShaderGroup);
        computeDebugSelector->setObjectName(QString::fromUtf8("computeDebugSelector"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        computeDebugSelector->setIcon(icon6);
        computeDebugSelector->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        computeDebugSelector->setAutoRaise(true);

        horizontalLayout_19->addWidget(computeDebugSelector);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_4);


        verticalLayout_9->addWidget(csShaderGroup);

        csScroll = new QScrollArea(CS);
        csScroll->setObjectName(QString::fromUtf8("csScroll"));
        csScroll->setFrameShape(QFrame::NoFrame);
        csScroll->setWidgetResizable(true);
        csScrollContents = new QWidget();
        csScrollContents->setObjectName(QString::fromUtf8("csScrollContents"));
        csScrollContents->setGeometry(QRect(0, 0, 1000, 527));
        verticalLayout_15 = new QVBoxLayout(csScrollContents);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        csResGroup = new CollapseGroupBox(csScrollContents);
        csResGroup->setObjectName(QString::fromUtf8("csResGroup"));
        sizePolicy6.setHeightForWidth(csResGroup->sizePolicy().hasHeightForWidth());
        csResGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_37 = new QHBoxLayout(csResGroup);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(2, 2, 2, 2);
        csResources = new RDTreeWidget(csResGroup);
        csResources->setObjectName(QString::fromUtf8("csResources"));
        csResources->setFrameShape(QFrame::Box);
        csResources->setFrameShadow(QFrame::Plain);
        csResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csResources->setProperty("showDropIndicator", QVariant(false));
        csResources->setRootIsDecorated(false);
        csResources->setAllColumnsShowFocus(true);
        csResources->header()->setStretchLastSection(false);

        horizontalLayout_37->addWidget(csResources);


        verticalLayout_15->addWidget(csResGroup);

        csUAVGroup = new CollapseGroupBox(csScrollContents);
        csUAVGroup->setObjectName(QString::fromUtf8("csUAVGroup"));
        sizePolicy6.setHeightForWidth(csUAVGroup->sizePolicy().hasHeightForWidth());
        csUAVGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_39 = new QHBoxLayout(csUAVGroup);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        horizontalLayout_39->setContentsMargins(2, 2, 2, 2);
        csUAVs = new RDTreeWidget(csUAVGroup);
        csUAVs->setObjectName(QString::fromUtf8("csUAVs"));
        csUAVs->setFrameShape(QFrame::Box);
        csUAVs->setFrameShadow(QFrame::Plain);
        csUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csUAVs->setProperty("showDropIndicator", QVariant(false));
        csUAVs->setRootIsDecorated(false);
        csUAVs->setAllColumnsShowFocus(true);
        csUAVs->header()->setStretchLastSection(false);

        horizontalLayout_39->addWidget(csUAVs);


        verticalLayout_15->addWidget(csUAVGroup);

        csSamplerGroup = new CollapseGroupBox(csScrollContents);
        csSamplerGroup->setObjectName(QString::fromUtf8("csSamplerGroup"));
        sizePolicy6.setHeightForWidth(csSamplerGroup->sizePolicy().hasHeightForWidth());
        csSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_38 = new QHBoxLayout(csSamplerGroup);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        horizontalLayout_38->setContentsMargins(2, 2, 2, 2);
        csSamplers = new RDTreeWidget(csSamplerGroup);
        csSamplers->setObjectName(QString::fromUtf8("csSamplers"));
        csSamplers->setFrameShape(QFrame::Box);
        csSamplers->setFrameShadow(QFrame::Plain);
        csSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csSamplers->setProperty("showDropIndicator", QVariant(false));
        csSamplers->setRootIsDecorated(false);
        csSamplers->setAllColumnsShowFocus(true);
        csSamplers->header()->setStretchLastSection(false);

        horizontalLayout_38->addWidget(csSamplers);


        verticalLayout_15->addWidget(csSamplerGroup);

        csCBufferGroup = new CollapseGroupBox(csScrollContents);
        csCBufferGroup->setObjectName(QString::fromUtf8("csCBufferGroup"));
        sizePolicy6.setHeightForWidth(csCBufferGroup->sizePolicy().hasHeightForWidth());
        csCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_35 = new QHBoxLayout(csCBufferGroup);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(2, 2, 2, 2);
        csCBuffers = new RDTreeWidget(csCBufferGroup);
        csCBuffers->setObjectName(QString::fromUtf8("csCBuffers"));
        csCBuffers->setFrameShape(QFrame::Box);
        csCBuffers->setFrameShadow(QFrame::Plain);
        csCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csCBuffers->setProperty("showDropIndicator", QVariant(false));
        csCBuffers->setRootIsDecorated(false);
        csCBuffers->setAllColumnsShowFocus(true);
        csCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_35->addWidget(csCBuffers);


        verticalLayout_15->addWidget(csCBufferGroup);

        csSubroutineGroup = new CollapseGroupBox(csScrollContents);
        csSubroutineGroup->setObjectName(QString::fromUtf8("csSubroutineGroup"));
        sizePolicy6.setHeightForWidth(csSubroutineGroup->sizePolicy().hasHeightForWidth());
        csSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_36 = new QHBoxLayout(csSubroutineGroup);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(2, 2, 2, 2);
        csClasses = new RDTreeWidget(csSubroutineGroup);
        csClasses->setObjectName(QString::fromUtf8("csClasses"));
        csClasses->setFrameShape(QFrame::Box);
        csClasses->setFrameShadow(QFrame::Plain);
        csClasses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csClasses->setProperty("showDropIndicator", QVariant(false));
        csClasses->setRootIsDecorated(false);
        csClasses->setAllColumnsShowFocus(true);
        csClasses->header()->setStretchLastSection(false);

        horizontalLayout_36->addWidget(csClasses);


        verticalLayout_15->addWidget(csSubroutineGroup);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_6);

        csScroll->setWidget(csScrollContents);

        verticalLayout_9->addWidget(csScroll);

        stagesTabs->addTab(CS, QString());

        verticalLayout->addWidget(stagesTabs);


        retranslateUi(D3D11PipelineStateViewer);

        stagesTabs->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(D3D11PipelineStateViewer);
    } // setupUi

    void retranslateUi(QFrame *D3D11PipelineStateViewer)
    {
        controlsLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        showUnused->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Show items that are bound but not currently used by the pipeline.", nullptr));
#endif // QT_CONFIG(tooltip)
        showUnused->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Show Unused Items", nullptr));
#if QT_CONFIG(tooltip)
        showEmpty->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Show pipeline bindings which are completely empty and have nothing bound", nullptr));
#endif // QT_CONFIG(tooltip)
        showEmpty->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Show Empty Items", nullptr));
#if QT_CONFIG(tooltip)
        exportHTML->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Export the current pipeline state to an HTML file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportHTML->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Export", nullptr));
        extensions->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Extensions", nullptr));
        attribGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Input Layouts", nullptr));
        iaBytecodeGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Input Layout Bytecode", nullptr));
#if QT_CONFIG(tooltip)
        iaBytecodeViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        iaBytecodeViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
        iaBytecodeMismatch->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Mismatch of Input Layout and Vertex Shader signatures", nullptr));
        buffersGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Buffers", nullptr));
        meshViewGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Mesh View", nullptr));
#if QT_CONFIG(tooltip)
        meshView->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "View the mesh input data", nullptr));
#endif // QT_CONFIG(tooltip)
        topologyGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Primitive Topology", nullptr));
        topology->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Triangle List", nullptr));
        topologyDiagram->setText(QString());
        stagesTabs->setTabText(stagesTabs->indexOf(IA), QCoreApplication::translate("D3D11PipelineStateViewer", "Input Assembly", nullptr));
        vsShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        vsResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        vsSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        vsCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        vsSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VS), QCoreApplication::translate("D3D11PipelineStateViewer", "Vertex Shader", nullptr));
        hsShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        hsResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        hsSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        hsCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        hsSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(HS), QCoreApplication::translate("D3D11PipelineStateViewer", "Hull Shader", nullptr));
        dsShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        dsResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        dsSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        dsCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        dsSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(DS), QCoreApplication::translate("D3D11PipelineStateViewer", "Domain Shader", nullptr));
        gsShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        gsResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        gsSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        gsCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        soGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Stream Out", nullptr));
        gsSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(GS), QCoreApplication::translate("D3D11PipelineStateViewer", "Geometry Shader", nullptr));
        rasterizerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Rasterizer State", nullptr));
        fillModeLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Fill Mode:", nullptr));
        fillMode->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Solid", nullptr));
        cullModeLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Cull Mode:", nullptr));
        cullMode->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "None", nullptr));
        frontCCWLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Front CCW:", nullptr));
        frontCCW->setText(QString());
        conservativeRasterLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Conservative Raster:", nullptr));
        conservativeRaster->setText(QString());
        depthBiasLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Depth Bias:", nullptr));
        depthBias->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "0.00", nullptr));
        depthBiasClampLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Depth Bias Clamp:", nullptr));
        depthBiasClamp->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "0.00", nullptr));
        slopeScaledBiasLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Slope-Scaled Bias:", nullptr));
        slopeScaledBias->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "0.00", nullptr));
        forcedSampleCountLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Forced Sample Count:", nullptr));
        forcedSampleCount->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "0", nullptr));
        depthClipLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Depth Clip:", nullptr));
        depthClip->setText(QString());
        scissorLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Scissor:", nullptr));
        scissorEnabled->setText(QString());
        multisampleLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Multisample:", nullptr));
        multisample->setText(QString());
        lineAALabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Line AA:", nullptr));
        lineAA->setText(QString());
        predicateGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Predication", nullptr));
        label_2->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Value:", nullptr));
        predicateValue->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "FALSE", nullptr));
        label->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Passing:", nullptr));
        viewportsGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Viewports", nullptr));
        scissorGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Scissor Regions", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(RS), QCoreApplication::translate("D3D11PipelineStateViewer", "Rasterizer", nullptr));
        psShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        psShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        psShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        psShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        psResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        psSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        psCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        psSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(PS), QCoreApplication::translate("D3D11PipelineStateViewer", "Pixel Shader", nullptr));
        outputsGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Render Targets && UAVs", nullptr));
        blendsGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Target Blends", nullptr));
        blendStateGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Blend State", nullptr));
        blendFactorLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Blend Factor:", nullptr));
        blendFactor->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "0.00, 0.00, 0.00, 0.00", nullptr));
        independentBlendLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Independent Blend:", nullptr));
        independentBlend->setText(QString());
        sampleMaskLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Sample Mask:", nullptr));
        sampleMask->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "FFFFFFFF", nullptr));
        alphaToCoverageLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Alpha to Coverage:", nullptr));
        alphaToCoverage->setText(QString());
        depthStateGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Depth State", nullptr));
        depthEnabledLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Enabled:", nullptr));
        depthEnabled->setText(QString());
        depthWriteLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Write:", nullptr));
        depthWrite->setText(QString());
        depthFuncLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Func:", nullptr));
        depthFunc->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "GREATER_EQUAL", nullptr));
        stencilStateGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Stencil State", nullptr));
        stencilEnabledLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Enabled:", nullptr));
        stencilEnabled->setText(QString());
        stencilWriteMaskLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Write Mask:", nullptr));
        stencilWriteMask->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "FF", nullptr));
        stenciReadMaskLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Read Mask:", nullptr));
        stencilReadMask->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "FF", nullptr));
        stenciRefLabel->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Ref:", nullptr));
        stencilRef->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "FF", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(OM), QCoreApplication::translate("D3D11PipelineStateViewer", "Output Merger", nullptr));
        csShaderGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        csShaderViewButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderViewButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        csShaderEditButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderEditButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        csShaderSaveButton->setToolTip(QCoreApplication::translate("D3D11PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderSaveButton->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Save", nullptr));
        computeDebugSelector->setText(QCoreApplication::translate("D3D11PipelineStateViewer", "Debug", nullptr));
        csResGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Resources", nullptr));
        csUAVGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "UAVs", nullptr));
        csSamplerGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Samplers", nullptr));
        csCBufferGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Constant Buffers", nullptr));
        csSubroutineGroup->setTitle(QCoreApplication::translate("D3D11PipelineStateViewer", "Class Instances", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(CS), QCoreApplication::translate("D3D11PipelineStateViewer", "Compute Shader", nullptr));
        (void)D3D11PipelineStateViewer;
    } // retranslateUi

};

namespace Ui {
    class D3D11PipelineStateViewer: public Ui_D3D11PipelineStateViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3D11PIPELINESTATEVIEWER_H
