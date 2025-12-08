/********************************************************************************
** Form generated from reading UI file 'VulkanPipelineStateViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VULKANPIPELINESTATEVIEWER_H
#define UI_VULKANPIPELINESTATEVIEWER_H

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

class Ui_VulkanPipelineStateViewer
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *toolbar;
    QHBoxLayout *toolbarLayout;
    QLabel *controlsLabel;
    QFrame *controlsLine;
    QToolButton *showUnused;
    QToolButton *showEmpty;
    QToolButton *exportDrop;
    QToolButton *extensions;
    QSpacerItem *horizontalSpacer;
    PipelineFlowChart *pipeFlow;
    QTabWidget *stagesTabs;
    QWidget *VTX;
    QGridLayout *gridLayout;
    QScrollArea *vtxScroll;
    QWidget *vtxScrollContents;
    QGridLayout *gridLayout_3;
    QGroupBox *attribGroup;
    QHBoxLayout *horizontalLayout_2;
    RDTreeWidget *viAttrs;
    QGroupBox *buffersGroup;
    QHBoxLayout *horizontalLayout;
    RDTreeWidget *viBuffers;
    QGroupBox *meshViewGroup;
    QVBoxLayout *verticalLayout_3;
    RDLabel *meshView;
    QGroupBox *topologyGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *topology;
    QLabel *topologyDiagram;
    QLabel *primRestart;
    QWidget *VS;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *vsShaderGroup;
    QHBoxLayout *horizontalLayout_3;
    RDLabel *vsPipeline;
    RDLabel *vsShader;
    RDLabel *vsShaderDebug;
    QToolButton *vsShaderViewButton;
    QToolButton *vsShaderEditButton;
    QToolButton *vsShaderSaveButton;
    QToolButton *vsShaderMessagesButton;
    QSpacerItem *vsShaderSpacer;
    CollapseGroupBox *vsDescGroup;
    QVBoxLayout *vsDescGroupVLayout;
    RDLabel *vsPipeLayout;
    RDTreeWidget *vsDescSets;
    QScrollArea *vsScroll;
    QWidget *vsScrollContents;
    QVBoxLayout *verticalLayout_12;
    CollapseGroupBox *vsResGroup;
    QHBoxLayout *horizontalLayout_4;
    RDTreeWidget *vsResources;
    CollapseGroupBox *vsUBOGroup;
    QHBoxLayout *horizontalLayout_5;
    RDTreeWidget *vsUBOs;
    QSpacerItem *verticalSpacer;
    QWidget *TCS;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *tcsShaderGroup;
    QHBoxLayout *horizontalLayout_7;
    RDLabel *tcsPipeline;
    RDLabel *tcsShader;
    RDLabel *tcsShaderDebug;
    QToolButton *tcsShaderViewButton;
    QToolButton *tcsShaderEditButton;
    QToolButton *tcsShaderSaveButton;
    QToolButton *tcsShaderMessagesButton;
    QSpacerItem *tcsShaderSpacer;
    CollapseGroupBox *tcsDescGroup;
    QVBoxLayout *tcsDescGroupVLayout;
    RDLabel *tcsPipeLayout;
    RDTreeWidget *tcsDescSets;
    QScrollArea *tcsScroll;
    QWidget *tcsScrollContents;
    QVBoxLayout *verticalLayout_11;
    CollapseGroupBox *tcsResGroup;
    QHBoxLayout *horizontalLayout_6;
    RDTreeWidget *tcsResources;
    CollapseGroupBox *tcsUBOGroup;
    QHBoxLayout *horizontalLayout_8;
    RDTreeWidget *tcsUBOs;
    QSpacerItem *verticalSpacer_2;
    QWidget *TES;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *tesShaderGroup;
    QHBoxLayout *horizontalLayout_10;
    RDLabel *tesPipeline;
    RDLabel *tesShader;
    RDLabel *tesShaderDebug;
    QToolButton *tesShaderViewButton;
    QToolButton *tesShaderEditButton;
    QToolButton *tesShaderSaveButton;
    QToolButton *tesShaderMessagesButton;
    QSpacerItem *tesShaderSpacer;
    CollapseGroupBox *tesDescGroup;
    QVBoxLayout *tesDescGroupVLayout;
    RDLabel *tesPipeLayout;
    RDTreeWidget *tesDescSets;
    QScrollArea *tesScroll;
    QWidget *tesScrollContents;
    QVBoxLayout *verticalLayout_13;
    CollapseGroupBox *tesResGroup;
    QHBoxLayout *horizontalLayout_9;
    RDTreeWidget *tesResources;
    CollapseGroupBox *tesUBOGroup;
    QHBoxLayout *horizontalLayout_11;
    RDTreeWidget *tesUBOs;
    QSpacerItem *verticalSpacer_3;
    QWidget *GS;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *gsShaderGroup;
    QHBoxLayout *horizontalLayout_13;
    RDLabel *gsPipeline;
    RDLabel *gsShader;
    RDLabel *gsShaderDebug;
    QToolButton *gsShaderViewButton;
    QToolButton *gsShaderEditButton;
    QToolButton *gsShaderSaveButton;
    QToolButton *gsShaderMessagesButton;
    QSpacerItem *gsShaderSpacer;
    CollapseGroupBox *gsDescGroup;
    QVBoxLayout *gsDescGroupVLayout;
    RDLabel *gsPipeLayout;
    RDTreeWidget *gsDescSets;
    QScrollArea *gsScroll;
    QWidget *gsScrollContents;
    QVBoxLayout *verticalLayout_14;
    CollapseGroupBox *gsResGroup;
    QHBoxLayout *horizontalLayout_12;
    RDTreeWidget *gsResources;
    CollapseGroupBox *gsUBOGroup;
    QHBoxLayout *horizontalLayout_14;
    RDTreeWidget *gsUBOs;
    QGroupBox *xfbGroup;
    QHBoxLayout *horizontalLayout_26;
    RDTreeWidget *xfbBuffers;
    QSpacerItem *verticalSpacer_4;
    QWidget *RS;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_24;
    QGroupBox *rasterizerGroup;
    QGridLayout *rasterizerGridLayout;
    QLabel *fillModeLabel;
    QLabel *fillMode;
    QLabel *cullModeLabel;
    QLabel *cullMode;
    QLabel *frontCCWLabel;
    QLabel *frontCCW;
    QLabel *label;
    QLabel *conservativeRaster;
    QLabel *depthBiasLabel;
    QLabel *depthBias;
    QLabel *depthBiasClampLabel;
    QLabel *depthBiasClamp;
    QLabel *slopeScaledBiasLabel;
    QLabel *slopeScaledBias;
    QLabel *label_3;
    QLabel *multiview;
    QSpacerItem *rastHSpacer;
    QLabel *depthClampLabel;
    QLabel *depthClamp;
    QLabel *label_4;
    QLabel *depthClip;
    QLabel *lineWidthLabel;
    QLabel *lineWidth;
    QLabel *label_9;
    QLabel *pipelineShadingRate;
    QLabel *stippleFactorLabel;
    QLabel *stippleFactor;
    QLabel *stipplePatternLabel;
    QLabel *stipplePattern;
    QLabel *rasterizerDiscardLabel;
    QLabel *rasterizerDiscard;
    QLabel *label_2;
    QLabel *shadingRateCombiners;
    QLabel *label_10;
    QLabel *provokingVertex;
    QSpacerItem *rastVSpacer;
    QGroupBox *MSAAGroup;
    QGridLayout *MSAAGridLayout;
    QLabel *sampleCountLabel;
    QLabel *sampleCount;
    QLabel *sampleShadingLabel;
    QLabel *sampleShading;
    QLabel *minSampleShadingLabel;
    QLabel *minSampleShading;
    QLabel *sampleMaskLabel;
    QLabel *sampleMask;
    QSpacerItem *MSAAHSpacer;
    QLabel *alphaToOneLabel;
    QLabel *alphaToOne;
    QLabel *alphaToCoverageLabel;
    QLabel *alphaToCoverage;
    QGroupBox *conditionalRenderingGroup;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_5;
    QLabel *predicatePassing;
    QLabel *label_6;
    QLabel *predicateInverted;
    RDLabel *predicateBuffer;
    QToolButton *predicateBufferViewButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *viewportsGroup;
    QHBoxLayout *horizontalLayout_21;
    RDTreeWidget *viewports;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *scissorGroup;
    QHBoxLayout *horizontalLayout_22;
    RDTreeWidget *scissors;
    QGroupBox *discardGroup;
    QVBoxLayout *verticalLayout_19;
    QLabel *discardMode;
    RDTreeWidget *discards;
    QWidget *FS;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *fsShaderGroup;
    QHBoxLayout *horizontalLayout_16;
    RDLabel *fsPipeline;
    RDLabel *fsShader;
    RDLabel *fsShaderDebug;
    QToolButton *fsShaderViewButton;
    QToolButton *fsShaderEditButton;
    QToolButton *fsShaderSaveButton;
    QToolButton *fsShaderMessagesButton;
    QSpacerItem *fsShaderSpacer;
    CollapseGroupBox *fsDescGroup;
    QVBoxLayout *fsDescGroupVLayout;
    RDLabel *fsPipeLayout;
    RDTreeWidget *fsDescSets;
    QScrollArea *fsScroll;
    QWidget *fsScrollContents;
    QVBoxLayout *verticalLayout_15;
    CollapseGroupBox *fsResGroup;
    QHBoxLayout *horizontalLayout_15;
    RDTreeWidget *fsResources;
    CollapseGroupBox *fsUBOGroup;
    QHBoxLayout *horizontalLayout_17;
    RDTreeWidget *fsUBOs;
    QSpacerItem *verticalSpacer_5;
    QWidget *FB;
    QGridLayout *gridLayout_5;
    QScrollArea *fbScroll;
    QWidget *fbScrollContents;
    QGridLayout *gridLayout_4;
    QGroupBox *framebufferGroup;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_23;
    RDLabel *renderpass;
    RDLabel *framebuffer;
    QSpacerItem *horizontalSpacer_2;
    RDTreeWidget *fbAttach;
    QGroupBox *blendsGroup;
    QHBoxLayout *horizontalLayout_25;
    RDTreeWidget *blends;
    QGroupBox *blendStateGroup;
    QGridLayout *blendStateGridLayout;
    QLabel *blendFactorLabel;
    QLabel *blendFactor;
    QLabel *logicOpLabel;
    QLabel *logicOp;
    QGroupBox *depthStateGroup;
    QGridLayout *depthStateGridLayout;
    QLabel *depthEnabledLabel;
    QLabel *depthEnabled;
    QLabel *depthFuncLabel;
    QLabel *depthFunc;
    QLabel *depthWriteLabel;
    QLabel *depthWrite;
    QLabel *depthBoundsLabel;
    QLabel *depthBounds;
    QGroupBox *stencilStateGroup;
    QVBoxLayout *verticalLayout_10;
    RDTreeWidget *stencils;
    QWidget *CS;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *csShaderGroup;
    QHBoxLayout *horizontalLayout_19;
    RDLabel *csPipeline;
    RDLabel *csShader;
    RDLabel *csShaderDebug;
    QToolButton *csShaderViewButton;
    QToolButton *csShaderEditButton;
    QToolButton *csShaderSaveButton;
    QToolButton *csShaderMessagesButton;
    QToolButton *computeDebugSelector;
    QSpacerItem *horizontalSpacer_4;
    CollapseGroupBox *csDescGroup;
    QVBoxLayout *csDescGroupVLayout;
    RDLabel *csPipeLayout;
    RDTreeWidget *csDescSets;
    QGroupBox *csConditionalRenderingGroup;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_7;
    QLabel *csPredicatePassing;
    QLabel *label_8;
    QLabel *csPredicateInverted;
    RDLabel *csPredicateBuffer;
    QToolButton *csPredicateBufferViewButton;
    QSpacerItem *horizontalSpacer_6;
    QScrollArea *csScroll;
    QWidget *csScrollContents;
    QVBoxLayout *verticalLayout_16;
    CollapseGroupBox *csResGroup;
    QHBoxLayout *horizontalLayout_18;
    RDTreeWidget *csResources;
    CollapseGroupBox *csUBOGroup;
    QHBoxLayout *horizontalLayout_20;
    RDTreeWidget *csUBOs;
    QSpacerItem *verticalSpacer_6;
    QWidget *TS;
    QVBoxLayout *tsShaderVerticalLayout;
    QGroupBox *tsShaderGroup;
    QHBoxLayout *tsShaderHorizontalLayout;
    RDLabel *tsPipeline;
    RDLabel *tsShader;
    RDLabel *tsShaderDebug;
    QToolButton *tsShaderViewButton;
    QToolButton *tsShaderEditButton;
    QToolButton *tsShaderSaveButton;
    QToolButton *tsShaderMessagesButton;
    QSpacerItem *tsShaderSpacer;
    CollapseGroupBox *tsDescGroup;
    QVBoxLayout *tsDescGroupVLayout;
    RDLabel *tsPipeLayout;
    RDTreeWidget *tsDescSets;
    QScrollArea *tsScroll;
    QWidget *tsScrollContents;
    QVBoxLayout *tsShaderVerticalLayout2;
    CollapseGroupBox *tsResGroup;
    QHBoxLayout *tsShaderHorizontalLayout2;
    RDTreeWidget *tsResources;
    CollapseGroupBox *tsUBOGroup;
    QHBoxLayout *tsShaderHorizontalLayout3;
    RDTreeWidget *tsUBOs;
    QSpacerItem *tsVerticalSpacer;
    QWidget *MS;
    QVBoxLayout *msShaderVerticalLayout;
    QGroupBox *msShaderGroup;
    QHBoxLayout *msShaderHorizontalLayout;
    RDLabel *msPipeline;
    RDLabel *msShader;
    RDLabel *msShaderDebug;
    QToolButton *msShaderViewButton;
    QToolButton *msShaderEditButton;
    QToolButton *msShaderSaveButton;
    QToolButton *msShaderMessagesButton;
    QToolButton *msMeshButton;
    QLabel *msTopoLabel;
    QLabel *msTopology;
    QSpacerItem *msShaderSpacer;
    CollapseGroupBox *msDescGroup;
    QVBoxLayout *msDescGroupVLayout;
    RDLabel *msPipeLayout;
    RDTreeWidget *msDescSets;
    QScrollArea *msScroll;
    QWidget *msScrollContents;
    QVBoxLayout *msShaderVerticalLayout2;
    CollapseGroupBox *msResGroup;
    QHBoxLayout *msShaderHorizontalLayout2;
    RDTreeWidget *msResources;
    CollapseGroupBox *msUBOGroup;
    QHBoxLayout *msShaderHorizontalLayout3;
    RDTreeWidget *msUBOs;
    QSpacerItem *msVerticalSpacer;

    void setupUi(QFrame *VulkanPipelineStateViewer)
    {
        if (VulkanPipelineStateViewer->objectName().isEmpty())
            VulkanPipelineStateViewer->setObjectName(QString::fromUtf8("VulkanPipelineStateViewer"));
        VulkanPipelineStateViewer->resize(911, 566);
        verticalLayout = new QVBoxLayout(VulkanPipelineStateViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolbar = new QFrame(VulkanPipelineStateViewer);
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

        exportDrop = new QToolButton(toolbar);
        exportDrop->setObjectName(QString::fromUtf8("exportDrop"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportDrop->setIcon(icon2);
        exportDrop->setCheckable(false);
        exportDrop->setPopupMode(QToolButton::MenuButtonPopup);
        exportDrop->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        exportDrop->setAutoRaise(true);

        toolbarLayout->addWidget(exportDrop);

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

        pipeFlow = new PipelineFlowChart(VulkanPipelineStateViewer);
        pipeFlow->setObjectName(QString::fromUtf8("pipeFlow"));
        QFont font;
        font.setPointSize(12);
        pipeFlow->setFont(font);

        verticalLayout->addWidget(pipeFlow);

        stagesTabs = new QTabWidget(VulkanPipelineStateViewer);
        stagesTabs->setObjectName(QString::fromUtf8("stagesTabs"));
        stagesTabs->setDocumentMode(true);
        VTX = new QWidget();
        VTX->setObjectName(QString::fromUtf8("VTX"));
        gridLayout = new QGridLayout(VTX);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        vtxScroll = new QScrollArea(VTX);
        vtxScroll->setObjectName(QString::fromUtf8("vtxScroll"));
        vtxScroll->setFrameShape(QFrame::NoFrame);
        vtxScroll->setWidgetResizable(true);
        vtxScrollContents = new QWidget();
        vtxScrollContents->setObjectName(QString::fromUtf8("vtxScrollContents"));
        vtxScrollContents->setGeometry(QRect(0, 0, 911, 507));
        gridLayout_3 = new QGridLayout(vtxScrollContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        attribGroup = new QGroupBox(vtxScrollContents);
        attribGroup->setObjectName(QString::fromUtf8("attribGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attribGroup->sizePolicy().hasHeightForWidth());
        attribGroup->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(attribGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        viAttrs = new RDTreeWidget(attribGroup);
        viAttrs->setObjectName(QString::fromUtf8("viAttrs"));
        viAttrs->setFrameShape(QFrame::Box);
        viAttrs->setFrameShadow(QFrame::Plain);
        viAttrs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viAttrs->setProperty("showDropIndicator", QVariant(false));
        viAttrs->setIndentation(0);
        viAttrs->setRootIsDecorated(false);
        viAttrs->setItemsExpandable(false);
        viAttrs->setAllColumnsShowFocus(true);
        viAttrs->setExpandsOnDoubleClick(false);
        viAttrs->header()->setStretchLastSection(false);

        horizontalLayout_2->addWidget(viAttrs);


        gridLayout_3->addWidget(attribGroup, 0, 0, 1, 3);

        buffersGroup = new QGroupBox(vtxScrollContents);
        buffersGroup->setObjectName(QString::fromUtf8("buffersGroup"));
        sizePolicy.setHeightForWidth(buffersGroup->sizePolicy().hasHeightForWidth());
        buffersGroup->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(buffersGroup);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        viBuffers = new RDTreeWidget(buffersGroup);
        viBuffers->setObjectName(QString::fromUtf8("viBuffers"));
        viBuffers->setFrameShape(QFrame::Box);
        viBuffers->setFrameShadow(QFrame::Plain);
        viBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viBuffers->setProperty("showDropIndicator", QVariant(false));
        viBuffers->setIndentation(0);
        viBuffers->setRootIsDecorated(false);
        viBuffers->setItemsExpandable(false);
        viBuffers->setAllColumnsShowFocus(true);
        viBuffers->setExpandsOnDoubleClick(false);
        viBuffers->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(viBuffers);


        gridLayout_3->addWidget(buffersGroup, 1, 0, 1, 1);

        meshViewGroup = new QGroupBox(vtxScrollContents);
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
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(meshView->sizePolicy().hasHeightForWidth());
        meshView->setSizePolicy(sizePolicy2);
        meshView->setMinimumSize(QSize(75, 75));
        meshView->setCursor(QCursor(Qt::PointingHandCursor));
        meshView->setPixmap(QPixmap(QString::fromUtf8(":/wireframe_mesh.png")));
        meshView->setScaledContents(true);

        verticalLayout_3->addWidget(meshView);


        gridLayout_3->addWidget(meshViewGroup, 1, 1, 1, 1);

        topologyGroup = new QGroupBox(vtxScrollContents);
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

        primRestart = new QLabel(topologyGroup);
        primRestart->setObjectName(QString::fromUtf8("primRestart"));
        primRestart->setFont(font1);
        primRestart->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(primRestart);


        gridLayout_3->addWidget(topologyGroup, 1, 2, 1, 1);

        vtxScroll->setWidget(vtxScrollContents);

        gridLayout->addWidget(vtxScroll, 0, 0, 1, 1);

        stagesTabs->addTab(VTX, QString());
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
        vsPipeline = new RDLabel(vsShaderGroup);
        vsPipeline->setObjectName(QString::fromUtf8("vsPipeline"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(vsPipeline->sizePolicy().hasHeightForWidth());
        vsPipeline->setSizePolicy(sizePolicy5);
        vsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsPipeline);

        vsShader = new RDLabel(vsShaderGroup);
        vsShader->setObjectName(QString::fromUtf8("vsShader"));
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/action.png"), QSize(), QIcon::Normal, QIcon::Off);
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

        vsShaderMessagesButton = new QToolButton(vsShaderGroup);
        vsShaderMessagesButton->setObjectName(QString::fromUtf8("vsShaderMessagesButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/text_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        vsShaderMessagesButton->setIcon(icon6);
        vsShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vsShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(vsShaderMessagesButton);

        vsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(vsShaderSpacer);


        verticalLayout_4->addWidget(vsShaderGroup);

        vsDescGroup = new CollapseGroupBox(VS);
        vsDescGroup->setObjectName(QString::fromUtf8("vsDescGroup"));
        sizePolicy4.setHeightForWidth(vsDescGroup->sizePolicy().hasHeightForWidth());
        vsDescGroup->setSizePolicy(sizePolicy4);
        vsDescGroupVLayout = new QVBoxLayout(vsDescGroup);
        vsDescGroupVLayout->setObjectName(QString::fromUtf8("vsDescGroupVLayout"));
        vsDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        vsPipeLayout = new RDLabel(vsDescGroup);
        vsPipeLayout->setObjectName(QString::fromUtf8("vsPipeLayout"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(vsPipeLayout->sizePolicy().hasHeightForWidth());
        vsPipeLayout->setSizePolicy(sizePolicy6);
        vsPipeLayout->setFrameShape(QFrame::Box);

        vsDescGroupVLayout->addWidget(vsPipeLayout);

        vsDescSets = new RDTreeWidget(vsDescGroup);
        vsDescSets->setObjectName(QString::fromUtf8("vsDescSets"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(vsDescSets->sizePolicy().hasHeightForWidth());
        vsDescSets->setSizePolicy(sizePolicy7);
        vsDescSets->setFrameShape(QFrame::Box);
        vsDescSets->setFrameShadow(QFrame::Plain);
        vsDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsDescSets->setProperty("showDropIndicator", QVariant(false));
        vsDescSets->setRootIsDecorated(false);
        vsDescSets->setUniformRowHeights(true);
        vsDescSets->setAllColumnsShowFocus(true);
        vsDescSets->header()->setStretchLastSection(false);

        vsDescGroupVLayout->addWidget(vsDescSets);


        verticalLayout_4->addWidget(vsDescGroup);

        vsScroll = new QScrollArea(VS);
        vsScroll->setObjectName(QString::fromUtf8("vsScroll"));
        vsScroll->setFrameShape(QFrame::NoFrame);
        vsScroll->setWidgetResizable(true);
        vsScrollContents = new QWidget();
        vsScrollContents->setObjectName(QString::fromUtf8("vsScrollContents"));
        vsScrollContents->setGeometry(QRect(0, 0, 96, 172));
        verticalLayout_12 = new QVBoxLayout(vsScrollContents);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        vsResGroup = new CollapseGroupBox(vsScrollContents);
        vsResGroup->setObjectName(QString::fromUtf8("vsResGroup"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(vsResGroup->sizePolicy().hasHeightForWidth());
        vsResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_4 = new QHBoxLayout(vsResGroup);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        vsResources = new RDTreeWidget(vsResGroup);
        vsResources->setObjectName(QString::fromUtf8("vsResources"));
        vsResources->setFrameShape(QFrame::Box);
        vsResources->setFrameShadow(QFrame::Plain);
        vsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsResources->setProperty("showDropIndicator", QVariant(false));
        vsResources->setRootIsDecorated(true);
        vsResources->setUniformRowHeights(true);
        vsResources->setAllColumnsShowFocus(true);
        vsResources->header()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(vsResources);


        verticalLayout_12->addWidget(vsResGroup);

        vsUBOGroup = new CollapseGroupBox(vsScrollContents);
        vsUBOGroup->setObjectName(QString::fromUtf8("vsUBOGroup"));
        sizePolicy8.setHeightForWidth(vsUBOGroup->sizePolicy().hasHeightForWidth());
        vsUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_5 = new QHBoxLayout(vsUBOGroup);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        vsUBOs = new RDTreeWidget(vsUBOGroup);
        vsUBOs->setObjectName(QString::fromUtf8("vsUBOs"));
        vsUBOs->setFrameShape(QFrame::Box);
        vsUBOs->setFrameShadow(QFrame::Plain);
        vsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsUBOs->setProperty("showDropIndicator", QVariant(false));
        vsUBOs->setRootIsDecorated(true);
        vsUBOs->setUniformRowHeights(true);
        vsUBOs->setAllColumnsShowFocus(true);
        vsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(vsUBOs);


        verticalLayout_12->addWidget(vsUBOGroup);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_12->addItem(verticalSpacer);

        vsScroll->setWidget(vsScrollContents);

        verticalLayout_4->addWidget(vsScroll);

        stagesTabs->addTab(VS, QString());
        TCS = new QWidget();
        TCS->setObjectName(QString::fromUtf8("TCS"));
        verticalLayout_5 = new QVBoxLayout(TCS);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tcsShaderGroup = new QGroupBox(TCS);
        tcsShaderGroup->setObjectName(QString::fromUtf8("tcsShaderGroup"));
        sizePolicy4.setHeightForWidth(tcsShaderGroup->sizePolicy().hasHeightForWidth());
        tcsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_7 = new QHBoxLayout(tcsShaderGroup);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 4);
        tcsPipeline = new RDLabel(tcsShaderGroup);
        tcsPipeline->setObjectName(QString::fromUtf8("tcsPipeline"));
        sizePolicy5.setHeightForWidth(tcsPipeline->sizePolicy().hasHeightForWidth());
        tcsPipeline->setSizePolicy(sizePolicy5);
        tcsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsPipeline);

        tcsShader = new RDLabel(tcsShaderGroup);
        tcsShader->setObjectName(QString::fromUtf8("tcsShader"));
        sizePolicy5.setHeightForWidth(tcsShader->sizePolicy().hasHeightForWidth());
        tcsShader->setSizePolicy(sizePolicy5);
        tcsShader->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsShader);

        tcsShaderDebug = new RDLabel(tcsShaderGroup);
        tcsShaderDebug->setObjectName(QString::fromUtf8("tcsShaderDebug"));
        sizePolicy5.setHeightForWidth(tcsShaderDebug->sizePolicy().hasHeightForWidth());
        tcsShaderDebug->setSizePolicy(sizePolicy5);
        tcsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsShaderDebug);

        tcsShaderViewButton = new QToolButton(tcsShaderGroup);
        tcsShaderViewButton->setObjectName(QString::fromUtf8("tcsShaderViewButton"));
        tcsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        tcsShaderViewButton->setIcon(icon4);
        tcsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tcsShaderViewButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(tcsShaderViewButton);

        tcsShaderEditButton = new QToolButton(tcsShaderGroup);
        tcsShaderEditButton->setObjectName(QString::fromUtf8("tcsShaderEditButton"));
        tcsShaderEditButton->setIcon(icon5);
        tcsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        tcsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tcsShaderEditButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(tcsShaderEditButton);

        tcsShaderSaveButton = new QToolButton(tcsShaderGroup);
        tcsShaderSaveButton->setObjectName(QString::fromUtf8("tcsShaderSaveButton"));
        tcsShaderSaveButton->setIcon(icon2);
        tcsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tcsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(tcsShaderSaveButton);

        tcsShaderMessagesButton = new QToolButton(tcsShaderGroup);
        tcsShaderMessagesButton->setObjectName(QString::fromUtf8("tcsShaderMessagesButton"));
        tcsShaderMessagesButton->setIcon(icon6);
        tcsShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tcsShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(tcsShaderMessagesButton);

        tcsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(tcsShaderSpacer);


        verticalLayout_5->addWidget(tcsShaderGroup);

        tcsDescGroup = new CollapseGroupBox(TCS);
        tcsDescGroup->setObjectName(QString::fromUtf8("tcsDescGroup"));
        sizePolicy4.setHeightForWidth(tcsDescGroup->sizePolicy().hasHeightForWidth());
        tcsDescGroup->setSizePolicy(sizePolicy4);
        tcsDescGroupVLayout = new QVBoxLayout(tcsDescGroup);
        tcsDescGroupVLayout->setObjectName(QString::fromUtf8("tcsDescGroupVLayout"));
        tcsDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        tcsPipeLayout = new RDLabel(tcsDescGroup);
        tcsPipeLayout->setObjectName(QString::fromUtf8("tcsPipeLayout"));
        sizePolicy6.setHeightForWidth(tcsPipeLayout->sizePolicy().hasHeightForWidth());
        tcsPipeLayout->setSizePolicy(sizePolicy6);
        tcsPipeLayout->setFrameShape(QFrame::Box);

        tcsDescGroupVLayout->addWidget(tcsPipeLayout);

        tcsDescSets = new RDTreeWidget(tcsDescGroup);
        tcsDescSets->setObjectName(QString::fromUtf8("tcsDescSets"));
        sizePolicy7.setHeightForWidth(tcsDescSets->sizePolicy().hasHeightForWidth());
        tcsDescSets->setSizePolicy(sizePolicy7);
        tcsDescSets->setFrameShape(QFrame::Box);
        tcsDescSets->setFrameShadow(QFrame::Plain);
        tcsDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsDescSets->setProperty("showDropIndicator", QVariant(false));
        tcsDescSets->setRootIsDecorated(false);
        tcsDescSets->setUniformRowHeights(true);
        tcsDescSets->setAllColumnsShowFocus(true);
        tcsDescSets->header()->setStretchLastSection(false);

        tcsDescGroupVLayout->addWidget(tcsDescSets);


        verticalLayout_5->addWidget(tcsDescGroup);

        tcsScroll = new QScrollArea(TCS);
        tcsScroll->setObjectName(QString::fromUtf8("tcsScroll"));
        tcsScroll->setFrameShape(QFrame::NoFrame);
        tcsScroll->setWidgetResizable(true);
        tcsScrollContents = new QWidget();
        tcsScrollContents->setObjectName(QString::fromUtf8("tcsScrollContents"));
        tcsScrollContents->setGeometry(QRect(0, 0, 96, 172));
        verticalLayout_11 = new QVBoxLayout(tcsScrollContents);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        tcsResGroup = new CollapseGroupBox(tcsScrollContents);
        tcsResGroup->setObjectName(QString::fromUtf8("tcsResGroup"));
        sizePolicy8.setHeightForWidth(tcsResGroup->sizePolicy().hasHeightForWidth());
        tcsResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_6 = new QHBoxLayout(tcsResGroup);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        tcsResources = new RDTreeWidget(tcsResGroup);
        tcsResources->setObjectName(QString::fromUtf8("tcsResources"));
        tcsResources->setFrameShape(QFrame::Box);
        tcsResources->setFrameShadow(QFrame::Plain);
        tcsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsResources->setProperty("showDropIndicator", QVariant(false));
        tcsResources->setRootIsDecorated(true);
        tcsResources->setUniformRowHeights(true);
        tcsResources->setAllColumnsShowFocus(true);
        tcsResources->header()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(tcsResources);


        verticalLayout_11->addWidget(tcsResGroup);

        tcsUBOGroup = new CollapseGroupBox(tcsScrollContents);
        tcsUBOGroup->setObjectName(QString::fromUtf8("tcsUBOGroup"));
        sizePolicy8.setHeightForWidth(tcsUBOGroup->sizePolicy().hasHeightForWidth());
        tcsUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_8 = new QHBoxLayout(tcsUBOGroup);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(2, 2, 2, 2);
        tcsUBOs = new RDTreeWidget(tcsUBOGroup);
        tcsUBOs->setObjectName(QString::fromUtf8("tcsUBOs"));
        tcsUBOs->setFrameShape(QFrame::Box);
        tcsUBOs->setFrameShadow(QFrame::Plain);
        tcsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsUBOs->setProperty("showDropIndicator", QVariant(false));
        tcsUBOs->setRootIsDecorated(true);
        tcsUBOs->setUniformRowHeights(true);
        tcsUBOs->setAllColumnsShowFocus(true);
        tcsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_8->addWidget(tcsUBOs);


        verticalLayout_11->addWidget(tcsUBOGroup);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        tcsScroll->setWidget(tcsScrollContents);

        verticalLayout_5->addWidget(tcsScroll);

        stagesTabs->addTab(TCS, QString());
        TES = new QWidget();
        TES->setObjectName(QString::fromUtf8("TES"));
        verticalLayout_6 = new QVBoxLayout(TES);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tesShaderGroup = new QGroupBox(TES);
        tesShaderGroup->setObjectName(QString::fromUtf8("tesShaderGroup"));
        sizePolicy4.setHeightForWidth(tesShaderGroup->sizePolicy().hasHeightForWidth());
        tesShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_10 = new QHBoxLayout(tesShaderGroup);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 4);
        tesPipeline = new RDLabel(tesShaderGroup);
        tesPipeline->setObjectName(QString::fromUtf8("tesPipeline"));
        sizePolicy5.setHeightForWidth(tesPipeline->sizePolicy().hasHeightForWidth());
        tesPipeline->setSizePolicy(sizePolicy5);
        tesPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesPipeline);

        tesShader = new RDLabel(tesShaderGroup);
        tesShader->setObjectName(QString::fromUtf8("tesShader"));
        sizePolicy5.setHeightForWidth(tesShader->sizePolicy().hasHeightForWidth());
        tesShader->setSizePolicy(sizePolicy5);
        tesShader->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesShader);

        tesShaderDebug = new RDLabel(tesShaderGroup);
        tesShaderDebug->setObjectName(QString::fromUtf8("tesShaderDebug"));
        sizePolicy5.setHeightForWidth(tesShaderDebug->sizePolicy().hasHeightForWidth());
        tesShaderDebug->setSizePolicy(sizePolicy5);
        tesShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesShaderDebug);

        tesShaderViewButton = new QToolButton(tesShaderGroup);
        tesShaderViewButton->setObjectName(QString::fromUtf8("tesShaderViewButton"));
        tesShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        tesShaderViewButton->setIcon(icon4);
        tesShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tesShaderViewButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(tesShaderViewButton);

        tesShaderEditButton = new QToolButton(tesShaderGroup);
        tesShaderEditButton->setObjectName(QString::fromUtf8("tesShaderEditButton"));
        tesShaderEditButton->setIcon(icon5);
        tesShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        tesShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tesShaderEditButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(tesShaderEditButton);

        tesShaderSaveButton = new QToolButton(tesShaderGroup);
        tesShaderSaveButton->setObjectName(QString::fromUtf8("tesShaderSaveButton"));
        tesShaderSaveButton->setIcon(icon2);
        tesShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tesShaderSaveButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(tesShaderSaveButton);

        tesShaderMessagesButton = new QToolButton(tesShaderGroup);
        tesShaderMessagesButton->setObjectName(QString::fromUtf8("tesShaderMessagesButton"));
        tesShaderMessagesButton->setIcon(icon6);
        tesShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tesShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(tesShaderMessagesButton);

        tesShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(tesShaderSpacer);


        verticalLayout_6->addWidget(tesShaderGroup);

        tesDescGroup = new CollapseGroupBox(TES);
        tesDescGroup->setObjectName(QString::fromUtf8("tesDescGroup"));
        sizePolicy4.setHeightForWidth(tesDescGroup->sizePolicy().hasHeightForWidth());
        tesDescGroup->setSizePolicy(sizePolicy4);
        tesDescGroupVLayout = new QVBoxLayout(tesDescGroup);
        tesDescGroupVLayout->setObjectName(QString::fromUtf8("tesDescGroupVLayout"));
        tesDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        tesPipeLayout = new RDLabel(tesDescGroup);
        tesPipeLayout->setObjectName(QString::fromUtf8("tesPipeLayout"));
        sizePolicy6.setHeightForWidth(tesPipeLayout->sizePolicy().hasHeightForWidth());
        tesPipeLayout->setSizePolicy(sizePolicy6);
        tesPipeLayout->setFrameShape(QFrame::Box);

        tesDescGroupVLayout->addWidget(tesPipeLayout);

        tesDescSets = new RDTreeWidget(tesDescGroup);
        tesDescSets->setObjectName(QString::fromUtf8("tesDescSets"));
        sizePolicy7.setHeightForWidth(tesDescSets->sizePolicy().hasHeightForWidth());
        tesDescSets->setSizePolicy(sizePolicy7);
        tesDescSets->setFrameShape(QFrame::Box);
        tesDescSets->setFrameShadow(QFrame::Plain);
        tesDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesDescSets->setProperty("showDropIndicator", QVariant(false));
        tesDescSets->setRootIsDecorated(false);
        tesDescSets->setUniformRowHeights(true);
        tesDescSets->setAllColumnsShowFocus(true);
        tesDescSets->header()->setStretchLastSection(false);

        tesDescGroupVLayout->addWidget(tesDescSets);


        verticalLayout_6->addWidget(tesDescGroup);

        tesScroll = new QScrollArea(TES);
        tesScroll->setObjectName(QString::fromUtf8("tesScroll"));
        tesScroll->setFrameShape(QFrame::NoFrame);
        tesScroll->setWidgetResizable(true);
        tesScrollContents = new QWidget();
        tesScrollContents->setObjectName(QString::fromUtf8("tesScrollContents"));
        tesScrollContents->setGeometry(QRect(0, 0, 96, 172));
        verticalLayout_13 = new QVBoxLayout(tesScrollContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        tesResGroup = new CollapseGroupBox(tesScrollContents);
        tesResGroup->setObjectName(QString::fromUtf8("tesResGroup"));
        sizePolicy8.setHeightForWidth(tesResGroup->sizePolicy().hasHeightForWidth());
        tesResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_9 = new QHBoxLayout(tesResGroup);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(2, 2, 2, 2);
        tesResources = new RDTreeWidget(tesResGroup);
        tesResources->setObjectName(QString::fromUtf8("tesResources"));
        tesResources->setFrameShape(QFrame::Box);
        tesResources->setFrameShadow(QFrame::Plain);
        tesResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesResources->setProperty("showDropIndicator", QVariant(false));
        tesResources->setRootIsDecorated(true);
        tesResources->setUniformRowHeights(true);
        tesResources->setAllColumnsShowFocus(true);
        tesResources->header()->setStretchLastSection(false);

        horizontalLayout_9->addWidget(tesResources);


        verticalLayout_13->addWidget(tesResGroup);

        tesUBOGroup = new CollapseGroupBox(tesScrollContents);
        tesUBOGroup->setObjectName(QString::fromUtf8("tesUBOGroup"));
        sizePolicy8.setHeightForWidth(tesUBOGroup->sizePolicy().hasHeightForWidth());
        tesUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_11 = new QHBoxLayout(tesUBOGroup);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        tesUBOs = new RDTreeWidget(tesUBOGroup);
        tesUBOs->setObjectName(QString::fromUtf8("tesUBOs"));
        tesUBOs->setFrameShape(QFrame::Box);
        tesUBOs->setFrameShadow(QFrame::Plain);
        tesUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesUBOs->setProperty("showDropIndicator", QVariant(false));
        tesUBOs->setRootIsDecorated(true);
        tesUBOs->setUniformRowHeights(true);
        tesUBOs->setAllColumnsShowFocus(true);
        tesUBOs->header()->setStretchLastSection(false);

        horizontalLayout_11->addWidget(tesUBOs);


        verticalLayout_13->addWidget(tesUBOGroup);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_13->addItem(verticalSpacer_3);

        tesScroll->setWidget(tesScrollContents);

        verticalLayout_6->addWidget(tesScroll);

        stagesTabs->addTab(TES, QString());
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
        gsPipeline = new RDLabel(gsShaderGroup);
        gsPipeline->setObjectName(QString::fromUtf8("gsPipeline"));
        sizePolicy5.setHeightForWidth(gsPipeline->sizePolicy().hasHeightForWidth());
        gsPipeline->setSizePolicy(sizePolicy5);
        gsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsPipeline);

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

        gsShaderMessagesButton = new QToolButton(gsShaderGroup);
        gsShaderMessagesButton->setObjectName(QString::fromUtf8("gsShaderMessagesButton"));
        gsShaderMessagesButton->setIcon(icon6);
        gsShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        gsShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_13->addWidget(gsShaderMessagesButton);

        gsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(gsShaderSpacer);


        verticalLayout_7->addWidget(gsShaderGroup);

        gsDescGroup = new CollapseGroupBox(GS);
        gsDescGroup->setObjectName(QString::fromUtf8("gsDescGroup"));
        sizePolicy4.setHeightForWidth(gsDescGroup->sizePolicy().hasHeightForWidth());
        gsDescGroup->setSizePolicy(sizePolicy4);
        gsDescGroupVLayout = new QVBoxLayout(gsDescGroup);
        gsDescGroupVLayout->setObjectName(QString::fromUtf8("gsDescGroupVLayout"));
        gsDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        gsPipeLayout = new RDLabel(gsDescGroup);
        gsPipeLayout->setObjectName(QString::fromUtf8("gsPipeLayout"));
        sizePolicy6.setHeightForWidth(gsPipeLayout->sizePolicy().hasHeightForWidth());
        gsPipeLayout->setSizePolicy(sizePolicy6);
        gsPipeLayout->setFrameShape(QFrame::Box);

        gsDescGroupVLayout->addWidget(gsPipeLayout);

        gsDescSets = new RDTreeWidget(gsDescGroup);
        gsDescSets->setObjectName(QString::fromUtf8("gsDescSets"));
        sizePolicy7.setHeightForWidth(gsDescSets->sizePolicy().hasHeightForWidth());
        gsDescSets->setSizePolicy(sizePolicy7);
        gsDescSets->setFrameShape(QFrame::Box);
        gsDescSets->setFrameShadow(QFrame::Plain);
        gsDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsDescSets->setProperty("showDropIndicator", QVariant(false));
        gsDescSets->setRootIsDecorated(false);
        gsDescSets->setUniformRowHeights(true);
        gsDescSets->setAllColumnsShowFocus(true);
        gsDescSets->header()->setStretchLastSection(false);

        gsDescGroupVLayout->addWidget(gsDescSets);


        verticalLayout_7->addWidget(gsDescGroup);

        gsScroll = new QScrollArea(GS);
        gsScroll->setObjectName(QString::fromUtf8("gsScroll"));
        gsScroll->setFrameShape(QFrame::NoFrame);
        gsScroll->setWidgetResizable(true);
        gsScrollContents = new QWidget();
        gsScrollContents->setObjectName(QString::fromUtf8("gsScrollContents"));
        gsScrollContents->setGeometry(QRect(0, 0, 117, 258));
        verticalLayout_14 = new QVBoxLayout(gsScrollContents);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        gsResGroup = new CollapseGroupBox(gsScrollContents);
        gsResGroup->setObjectName(QString::fromUtf8("gsResGroup"));
        sizePolicy8.setHeightForWidth(gsResGroup->sizePolicy().hasHeightForWidth());
        gsResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_12 = new QHBoxLayout(gsResGroup);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(2, 2, 2, 2);
        gsResources = new RDTreeWidget(gsResGroup);
        gsResources->setObjectName(QString::fromUtf8("gsResources"));
        gsResources->setFrameShape(QFrame::Box);
        gsResources->setFrameShadow(QFrame::Plain);
        gsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsResources->setProperty("showDropIndicator", QVariant(false));
        gsResources->setRootIsDecorated(true);
        gsResources->setUniformRowHeights(true);
        gsResources->setAllColumnsShowFocus(true);
        gsResources->header()->setStretchLastSection(false);

        horizontalLayout_12->addWidget(gsResources);


        verticalLayout_14->addWidget(gsResGroup);

        gsUBOGroup = new CollapseGroupBox(gsScrollContents);
        gsUBOGroup->setObjectName(QString::fromUtf8("gsUBOGroup"));
        sizePolicy8.setHeightForWidth(gsUBOGroup->sizePolicy().hasHeightForWidth());
        gsUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_14 = new QHBoxLayout(gsUBOGroup);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(2, 2, 2, 2);
        gsUBOs = new RDTreeWidget(gsUBOGroup);
        gsUBOs->setObjectName(QString::fromUtf8("gsUBOs"));
        gsUBOs->setFrameShape(QFrame::Box);
        gsUBOs->setFrameShadow(QFrame::Plain);
        gsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsUBOs->setProperty("showDropIndicator", QVariant(false));
        gsUBOs->setRootIsDecorated(true);
        gsUBOs->setUniformRowHeights(true);
        gsUBOs->setAllColumnsShowFocus(true);
        gsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_14->addWidget(gsUBOs);


        verticalLayout_14->addWidget(gsUBOGroup);

        xfbGroup = new QGroupBox(gsScrollContents);
        xfbGroup->setObjectName(QString::fromUtf8("xfbGroup"));
        sizePolicy8.setHeightForWidth(xfbGroup->sizePolicy().hasHeightForWidth());
        xfbGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_26 = new QHBoxLayout(xfbGroup);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(2, 2, 2, 2);
        xfbBuffers = new RDTreeWidget(xfbGroup);
        xfbBuffers->setObjectName(QString::fromUtf8("xfbBuffers"));
        xfbBuffers->setFrameShape(QFrame::Box);
        xfbBuffers->setFrameShadow(QFrame::Plain);
        xfbBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        xfbBuffers->setProperty("showDropIndicator", QVariant(false));
        xfbBuffers->setIndentation(0);
        xfbBuffers->setRootIsDecorated(false);
        xfbBuffers->setAllColumnsShowFocus(true);
        xfbBuffers->header()->setStretchLastSection(false);

        horizontalLayout_26->addWidget(xfbBuffers);


        verticalLayout_14->addWidget(xfbGroup);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        gsScroll->setWidget(gsScrollContents);

        verticalLayout_7->addWidget(gsScroll);

        stagesTabs->addTab(GS, QString());
        RS = new QWidget();
        RS->setObjectName(QString::fromUtf8("RS"));
        gridLayout_2 = new QGridLayout(RS);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        rasterizerGroup = new QGroupBox(RS);
        rasterizerGroup->setObjectName(QString::fromUtf8("rasterizerGroup"));
        rasterizerGridLayout = new QGridLayout(rasterizerGroup);
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

        label = new QLabel(rasterizerGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(true);

        rasterizerGridLayout->addWidget(label, 0, 6, 1, 1);

        conservativeRaster = new QLabel(rasterizerGroup);
        conservativeRaster->setObjectName(QString::fromUtf8("conservativeRaster"));
        conservativeRaster->setFont(font);
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

        label_3 = new QLabel(rasterizerGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setWordWrap(true);

        rasterizerGridLayout->addWidget(label_3, 1, 6, 1, 1);

        multiview = new QLabel(rasterizerGroup);
        multiview->setObjectName(QString::fromUtf8("multiview"));
        multiview->setFont(font);
        multiview->setAlignment(Qt::AlignCenter);
        multiview->setMargin(4);

        rasterizerGridLayout->addWidget(multiview, 1, 7, 1, 1);

        rastHSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        rasterizerGridLayout->addItem(rastHSpacer, 1, 10, 1, 1);

        depthClampLabel = new QLabel(rasterizerGroup);
        depthClampLabel->setObjectName(QString::fromUtf8("depthClampLabel"));
        depthClampLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depthClampLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(depthClampLabel, 2, 0, 1, 1);

        depthClamp = new QLabel(rasterizerGroup);
        depthClamp->setObjectName(QString::fromUtf8("depthClamp"));
        depthClamp->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthClamp->setAlignment(Qt::AlignCenter);
        depthClamp->setMargin(4);

        rasterizerGridLayout->addWidget(depthClamp, 2, 1, 1, 1);

        label_4 = new QLabel(rasterizerGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4->setWordWrap(true);

        rasterizerGridLayout->addWidget(label_4, 2, 2, 1, 1);

        depthClip = new QLabel(rasterizerGroup);
        depthClip->setObjectName(QString::fromUtf8("depthClip"));
        depthClip->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthClip->setAlignment(Qt::AlignCenter);
        depthClip->setMargin(4);

        rasterizerGridLayout->addWidget(depthClip, 2, 3, 1, 1);

        lineWidthLabel = new QLabel(rasterizerGroup);
        lineWidthLabel->setObjectName(QString::fromUtf8("lineWidthLabel"));
        lineWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineWidthLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(lineWidthLabel, 2, 4, 1, 1);

        lineWidth = new QLabel(rasterizerGroup);
        lineWidth->setObjectName(QString::fromUtf8("lineWidth"));
        lineWidth->setFont(font);
        lineWidth->setAlignment(Qt::AlignCenter);
        lineWidth->setMargin(4);

        rasterizerGridLayout->addWidget(lineWidth, 2, 5, 1, 1);

        label_9 = new QLabel(rasterizerGroup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9->setWordWrap(true);

        rasterizerGridLayout->addWidget(label_9, 2, 6, 1, 1);

        pipelineShadingRate = new QLabel(rasterizerGroup);
        pipelineShadingRate->setObjectName(QString::fromUtf8("pipelineShadingRate"));
        pipelineShadingRate->setFont(font);
        pipelineShadingRate->setAlignment(Qt::AlignCenter);
        pipelineShadingRate->setMargin(4);

        rasterizerGridLayout->addWidget(pipelineShadingRate, 2, 7, 1, 1);

        stippleFactorLabel = new QLabel(rasterizerGroup);
        stippleFactorLabel->setObjectName(QString::fromUtf8("stippleFactorLabel"));
        stippleFactorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stippleFactorLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(stippleFactorLabel, 3, 0, 1, 1);

        stippleFactor = new QLabel(rasterizerGroup);
        stippleFactor->setObjectName(QString::fromUtf8("stippleFactor"));
        stippleFactor->setFont(font);
        stippleFactor->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        stippleFactor->setAlignment(Qt::AlignCenter);
        stippleFactor->setMargin(4);

        rasterizerGridLayout->addWidget(stippleFactor, 3, 1, 1, 1);

        stipplePatternLabel = new QLabel(rasterizerGroup);
        stipplePatternLabel->setObjectName(QString::fromUtf8("stipplePatternLabel"));
        stipplePatternLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stipplePatternLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(stipplePatternLabel, 3, 2, 1, 1);

        stipplePattern = new QLabel(rasterizerGroup);
        stipplePattern->setObjectName(QString::fromUtf8("stipplePattern"));
        stipplePattern->setFont(font);
        stipplePattern->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        stipplePattern->setAlignment(Qt::AlignCenter);
        stipplePattern->setMargin(4);

        rasterizerGridLayout->addWidget(stipplePattern, 3, 3, 1, 1);

        rasterizerDiscardLabel = new QLabel(rasterizerGroup);
        rasterizerDiscardLabel->setObjectName(QString::fromUtf8("rasterizerDiscardLabel"));
        rasterizerDiscardLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rasterizerDiscardLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(rasterizerDiscardLabel, 3, 4, 1, 1);

        rasterizerDiscard = new QLabel(rasterizerGroup);
        rasterizerDiscard->setObjectName(QString::fromUtf8("rasterizerDiscard"));
        rasterizerDiscard->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        rasterizerDiscard->setAlignment(Qt::AlignCenter);
        rasterizerDiscard->setMargin(4);

        rasterizerGridLayout->addWidget(rasterizerDiscard, 3, 5, 1, 1);

        label_2 = new QLabel(rasterizerGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2->setWordWrap(true);

        rasterizerGridLayout->addWidget(label_2, 3, 6, 1, 1);

        shadingRateCombiners = new QLabel(rasterizerGroup);
        shadingRateCombiners->setObjectName(QString::fromUtf8("shadingRateCombiners"));
        shadingRateCombiners->setFont(font);
        shadingRateCombiners->setAlignment(Qt::AlignCenter);
        shadingRateCombiners->setMargin(4);

        rasterizerGridLayout->addWidget(shadingRateCombiners, 3, 7, 1, 1);

        label_10 = new QLabel(rasterizerGroup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10->setWordWrap(true);

        rasterizerGridLayout->addWidget(label_10, 4, 0, 1, 1);

        provokingVertex = new QLabel(rasterizerGroup);
        provokingVertex->setObjectName(QString::fromUtf8("provokingVertex"));
        provokingVertex->setFont(font);
        provokingVertex->setAlignment(Qt::AlignCenter);
        provokingVertex->setMargin(4);

        rasterizerGridLayout->addWidget(provokingVertex, 4, 1, 1, 1);

        rastVSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        rasterizerGridLayout->addItem(rastVSpacer, 5, 0, 1, 1);


        horizontalLayout_24->addWidget(rasterizerGroup);

        MSAAGroup = new QGroupBox(RS);
        MSAAGroup->setObjectName(QString::fromUtf8("MSAAGroup"));
        MSAAGridLayout = new QGridLayout(MSAAGroup);
        MSAAGridLayout->setSpacing(0);
        MSAAGridLayout->setObjectName(QString::fromUtf8("MSAAGridLayout"));
        MSAAGridLayout->setContentsMargins(2, 2, 2, 2);
        sampleCountLabel = new QLabel(MSAAGroup);
        sampleCountLabel->setObjectName(QString::fromUtf8("sampleCountLabel"));
        sampleCountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleCountLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(sampleCountLabel, 0, 0, 1, 1);

        sampleCount = new QLabel(MSAAGroup);
        sampleCount->setObjectName(QString::fromUtf8("sampleCount"));
        sampleCount->setFont(font);
        sampleCount->setAlignment(Qt::AlignCenter);
        sampleCount->setMargin(4);

        MSAAGridLayout->addWidget(sampleCount, 0, 1, 1, 1);

        sampleShadingLabel = new QLabel(MSAAGroup);
        sampleShadingLabel->setObjectName(QString::fromUtf8("sampleShadingLabel"));
        sampleShadingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleShadingLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(sampleShadingLabel, 0, 2, 1, 1);

        sampleShading = new QLabel(MSAAGroup);
        sampleShading->setObjectName(QString::fromUtf8("sampleShading"));
        sampleShading->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        sampleShading->setAlignment(Qt::AlignCenter);
        sampleShading->setMargin(4);

        MSAAGridLayout->addWidget(sampleShading, 0, 3, 1, 1);

        minSampleShadingLabel = new QLabel(MSAAGroup);
        minSampleShadingLabel->setObjectName(QString::fromUtf8("minSampleShadingLabel"));
        minSampleShadingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minSampleShadingLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(minSampleShadingLabel, 1, 0, 1, 1);

        minSampleShading = new QLabel(MSAAGroup);
        minSampleShading->setObjectName(QString::fromUtf8("minSampleShading"));
        minSampleShading->setFont(font);
        minSampleShading->setAlignment(Qt::AlignCenter);
        minSampleShading->setMargin(4);

        MSAAGridLayout->addWidget(minSampleShading, 1, 1, 1, 1);

        sampleMaskLabel = new QLabel(MSAAGroup);
        sampleMaskLabel->setObjectName(QString::fromUtf8("sampleMaskLabel"));
        sampleMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleMaskLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(sampleMaskLabel, 1, 2, 1, 1);

        sampleMask = new QLabel(MSAAGroup);
        sampleMask->setObjectName(QString::fromUtf8("sampleMask"));
        sampleMask->setFont(font);
        sampleMask->setAlignment(Qt::AlignCenter);
        sampleMask->setMargin(4);

        MSAAGridLayout->addWidget(sampleMask, 1, 3, 1, 1);

        MSAAHSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        MSAAGridLayout->addItem(MSAAHSpacer, 1, 4, 1, 1);

        alphaToOneLabel = new QLabel(MSAAGroup);
        alphaToOneLabel->setObjectName(QString::fromUtf8("alphaToOneLabel"));
        alphaToOneLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToOneLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(alphaToOneLabel, 2, 0, 1, 1);

        alphaToOne = new QLabel(MSAAGroup);
        alphaToOne->setObjectName(QString::fromUtf8("alphaToOne"));
        alphaToOne->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToOne->setAlignment(Qt::AlignCenter);
        alphaToOne->setMargin(4);

        MSAAGridLayout->addWidget(alphaToOne, 2, 1, 1, 1);

        alphaToCoverageLabel = new QLabel(MSAAGroup);
        alphaToCoverageLabel->setObjectName(QString::fromUtf8("alphaToCoverageLabel"));
        alphaToCoverageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToCoverageLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(alphaToCoverageLabel, 2, 2, 1, 1);

        alphaToCoverage = new QLabel(MSAAGroup);
        alphaToCoverage->setObjectName(QString::fromUtf8("alphaToCoverage"));
        alphaToCoverage->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToCoverage->setAlignment(Qt::AlignCenter);
        alphaToCoverage->setMargin(4);

        MSAAGridLayout->addWidget(alphaToCoverage, 2, 3, 1, 1);


        horizontalLayout_24->addWidget(MSAAGroup);


        gridLayout_2->addLayout(horizontalLayout_24, 1, 0, 1, 2);

        conditionalRenderingGroup = new QGroupBox(RS);
        conditionalRenderingGroup->setObjectName(QString::fromUtf8("conditionalRenderingGroup"));
        horizontalLayout_41 = new QHBoxLayout(conditionalRenderingGroup);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        label_5 = new QLabel(conditionalRenderingGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_41->addWidget(label_5);

        predicatePassing = new QLabel(conditionalRenderingGroup);
        predicatePassing->setObjectName(QString::fromUtf8("predicatePassing"));

        horizontalLayout_41->addWidget(predicatePassing);

        label_6 = new QLabel(conditionalRenderingGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_41->addWidget(label_6);

        predicateInverted = new QLabel(conditionalRenderingGroup);
        predicateInverted->setObjectName(QString::fromUtf8("predicateInverted"));

        horizontalLayout_41->addWidget(predicateInverted);

        predicateBuffer = new RDLabel(conditionalRenderingGroup);
        predicateBuffer->setObjectName(QString::fromUtf8("predicateBuffer"));
        predicateBuffer->setFrameShape(QFrame::Box);
        predicateBuffer->setMargin(4);

        horizontalLayout_41->addWidget(predicateBuffer);

        predicateBufferViewButton = new QToolButton(conditionalRenderingGroup);
        predicateBufferViewButton->setObjectName(QString::fromUtf8("predicateBufferViewButton"));
        predicateBufferViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        predicateBufferViewButton->setIcon(icon4);
        predicateBufferViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        predicateBufferViewButton->setAutoRaise(true);

        horizontalLayout_41->addWidget(predicateBufferViewButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_5);


        gridLayout_2->addWidget(conditionalRenderingGroup, 2, 0, 1, 2);

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


        gridLayout_2->addWidget(viewportsGroup, 3, 0, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, -1, -1, 0);
        scissorGroup = new QGroupBox(RS);
        scissorGroup->setObjectName(QString::fromUtf8("scissorGroup"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(1);
        sizePolicy9.setHeightForWidth(scissorGroup->sizePolicy().hasHeightForWidth());
        scissorGroup->setSizePolicy(sizePolicy9);
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


        verticalLayout_18->addWidget(scissorGroup);

        discardGroup = new QGroupBox(RS);
        discardGroup->setObjectName(QString::fromUtf8("discardGroup"));
        sizePolicy9.setHeightForWidth(discardGroup->sizePolicy().hasHeightForWidth());
        discardGroup->setSizePolicy(sizePolicy9);
        verticalLayout_19 = new QVBoxLayout(discardGroup);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(2, 2, 2, 2);
        discardMode = new QLabel(discardGroup);
        discardMode->setObjectName(QString::fromUtf8("discardMode"));
        discardMode->setFont(font);

        verticalLayout_19->addWidget(discardMode);

        discards = new RDTreeWidget(discardGroup);
        discards->setObjectName(QString::fromUtf8("discards"));
        discards->setFrameShape(QFrame::Box);
        discards->setFrameShadow(QFrame::Plain);
        discards->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        discards->setEditTriggers(QAbstractItemView::NoEditTriggers);
        discards->setProperty("showDropIndicator", QVariant(false));
        discards->setIndentation(0);
        discards->setRootIsDecorated(false);
        discards->header()->setMinimumSectionSize(50);

        verticalLayout_19->addWidget(discards);


        verticalLayout_18->addWidget(discardGroup);


        gridLayout_2->addLayout(verticalLayout_18, 3, 1, 1, 1);

        stagesTabs->addTab(RS, QString());
        FS = new QWidget();
        FS->setObjectName(QString::fromUtf8("FS"));
        verticalLayout_8 = new QVBoxLayout(FS);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        fsShaderGroup = new QGroupBox(FS);
        fsShaderGroup->setObjectName(QString::fromUtf8("fsShaderGroup"));
        sizePolicy4.setHeightForWidth(fsShaderGroup->sizePolicy().hasHeightForWidth());
        fsShaderGroup->setSizePolicy(sizePolicy4);
        horizontalLayout_16 = new QHBoxLayout(fsShaderGroup);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, -1, 4);
        fsPipeline = new RDLabel(fsShaderGroup);
        fsPipeline->setObjectName(QString::fromUtf8("fsPipeline"));
        sizePolicy5.setHeightForWidth(fsPipeline->sizePolicy().hasHeightForWidth());
        fsPipeline->setSizePolicy(sizePolicy5);
        fsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsPipeline);

        fsShader = new RDLabel(fsShaderGroup);
        fsShader->setObjectName(QString::fromUtf8("fsShader"));
        sizePolicy5.setHeightForWidth(fsShader->sizePolicy().hasHeightForWidth());
        fsShader->setSizePolicy(sizePolicy5);
        fsShader->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsShader);

        fsShaderDebug = new RDLabel(fsShaderGroup);
        fsShaderDebug->setObjectName(QString::fromUtf8("fsShaderDebug"));
        sizePolicy5.setHeightForWidth(fsShaderDebug->sizePolicy().hasHeightForWidth());
        fsShaderDebug->setSizePolicy(sizePolicy5);
        fsShaderDebug->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsShaderDebug);

        fsShaderViewButton = new QToolButton(fsShaderGroup);
        fsShaderViewButton->setObjectName(QString::fromUtf8("fsShaderViewButton"));
        fsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        fsShaderViewButton->setIcon(icon4);
        fsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        fsShaderViewButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(fsShaderViewButton);

        fsShaderEditButton = new QToolButton(fsShaderGroup);
        fsShaderEditButton->setObjectName(QString::fromUtf8("fsShaderEditButton"));
        fsShaderEditButton->setIcon(icon5);
        fsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        fsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        fsShaderEditButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(fsShaderEditButton);

        fsShaderSaveButton = new QToolButton(fsShaderGroup);
        fsShaderSaveButton->setObjectName(QString::fromUtf8("fsShaderSaveButton"));
        fsShaderSaveButton->setIcon(icon2);
        fsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        fsShaderSaveButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(fsShaderSaveButton);

        fsShaderMessagesButton = new QToolButton(fsShaderGroup);
        fsShaderMessagesButton->setObjectName(QString::fromUtf8("fsShaderMessagesButton"));
        fsShaderMessagesButton->setIcon(icon6);
        fsShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        fsShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(fsShaderMessagesButton);

        fsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(fsShaderSpacer);


        verticalLayout_8->addWidget(fsShaderGroup);

        fsDescGroup = new CollapseGroupBox(FS);
        fsDescGroup->setObjectName(QString::fromUtf8("fsDescGroup"));
        sizePolicy4.setHeightForWidth(fsDescGroup->sizePolicy().hasHeightForWidth());
        fsDescGroup->setSizePolicy(sizePolicy4);
        fsDescGroupVLayout = new QVBoxLayout(fsDescGroup);
        fsDescGroupVLayout->setObjectName(QString::fromUtf8("fsDescGroupVLayout"));
        fsDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        fsPipeLayout = new RDLabel(fsDescGroup);
        fsPipeLayout->setObjectName(QString::fromUtf8("fsPipeLayout"));
        sizePolicy6.setHeightForWidth(fsPipeLayout->sizePolicy().hasHeightForWidth());
        fsPipeLayout->setSizePolicy(sizePolicy6);
        fsPipeLayout->setFrameShape(QFrame::Box);

        fsDescGroupVLayout->addWidget(fsPipeLayout);

        fsDescSets = new RDTreeWidget(fsDescGroup);
        fsDescSets->setObjectName(QString::fromUtf8("fsDescSets"));
        sizePolicy7.setHeightForWidth(fsDescSets->sizePolicy().hasHeightForWidth());
        fsDescSets->setSizePolicy(sizePolicy7);
        fsDescSets->setFrameShape(QFrame::Box);
        fsDescSets->setFrameShadow(QFrame::Plain);
        fsDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsDescSets->setProperty("showDropIndicator", QVariant(false));
        fsDescSets->setRootIsDecorated(false);
        fsDescSets->setUniformRowHeights(true);
        fsDescSets->setAllColumnsShowFocus(true);
        fsDescSets->header()->setStretchLastSection(false);

        fsDescGroupVLayout->addWidget(fsDescSets);


        verticalLayout_8->addWidget(fsDescGroup);

        fsScroll = new QScrollArea(FS);
        fsScroll->setObjectName(QString::fromUtf8("fsScroll"));
        fsScroll->setFrameShape(QFrame::NoFrame);
        fsScroll->setWidgetResizable(true);
        fsScrollContents = new QWidget();
        fsScrollContents->setObjectName(QString::fromUtf8("fsScrollContents"));
        fsScrollContents->setGeometry(QRect(0, 0, 96, 172));
        verticalLayout_15 = new QVBoxLayout(fsScrollContents);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        fsResGroup = new CollapseGroupBox(fsScrollContents);
        fsResGroup->setObjectName(QString::fromUtf8("fsResGroup"));
        sizePolicy8.setHeightForWidth(fsResGroup->sizePolicy().hasHeightForWidth());
        fsResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_15 = new QHBoxLayout(fsResGroup);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(2, 2, 2, 2);
        fsResources = new RDTreeWidget(fsResGroup);
        fsResources->setObjectName(QString::fromUtf8("fsResources"));
        fsResources->setFrameShape(QFrame::Box);
        fsResources->setFrameShadow(QFrame::Plain);
        fsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsResources->setProperty("showDropIndicator", QVariant(false));
        fsResources->setRootIsDecorated(true);
        fsResources->setUniformRowHeights(true);
        fsResources->setAllColumnsShowFocus(true);
        fsResources->header()->setStretchLastSection(false);

        horizontalLayout_15->addWidget(fsResources);


        verticalLayout_15->addWidget(fsResGroup);

        fsUBOGroup = new CollapseGroupBox(fsScrollContents);
        fsUBOGroup->setObjectName(QString::fromUtf8("fsUBOGroup"));
        sizePolicy8.setHeightForWidth(fsUBOGroup->sizePolicy().hasHeightForWidth());
        fsUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_17 = new QHBoxLayout(fsUBOGroup);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(2, 2, 2, 2);
        fsUBOs = new RDTreeWidget(fsUBOGroup);
        fsUBOs->setObjectName(QString::fromUtf8("fsUBOs"));
        fsUBOs->setFrameShape(QFrame::Box);
        fsUBOs->setFrameShadow(QFrame::Plain);
        fsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsUBOs->setProperty("showDropIndicator", QVariant(false));
        fsUBOs->setRootIsDecorated(true);
        fsUBOs->setUniformRowHeights(true);
        fsUBOs->setAllColumnsShowFocus(true);
        fsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_17->addWidget(fsUBOs);


        verticalLayout_15->addWidget(fsUBOGroup);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_5);

        fsScroll->setWidget(fsScrollContents);

        verticalLayout_8->addWidget(fsScroll);

        stagesTabs->addTab(FS, QString());
        FB = new QWidget();
        FB->setObjectName(QString::fromUtf8("FB"));
        gridLayout_5 = new QGridLayout(FB);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        fbScroll = new QScrollArea(FB);
        fbScroll->setObjectName(QString::fromUtf8("fbScroll"));
        fbScroll->setFrameShape(QFrame::NoFrame);
        fbScroll->setWidgetResizable(true);
        fbScrollContents = new QWidget();
        fbScrollContents->setObjectName(QString::fromUtf8("fbScrollContents"));
        fbScrollContents->setGeometry(QRect(0, 0, 488, 348));
        gridLayout_4 = new QGridLayout(fbScrollContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        framebufferGroup = new QGroupBox(fbScrollContents);
        framebufferGroup->setObjectName(QString::fromUtf8("framebufferGroup"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(framebufferGroup->sizePolicy().hasHeightForWidth());
        framebufferGroup->setSizePolicy(sizePolicy10);
        verticalLayout_17 = new QVBoxLayout(framebufferGroup);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        renderpass = new RDLabel(framebufferGroup);
        renderpass->setObjectName(QString::fromUtf8("renderpass"));
        renderpass->setFrameShape(QFrame::Box);
        renderpass->setMargin(4);

        horizontalLayout_23->addWidget(renderpass);

        framebuffer = new RDLabel(framebufferGroup);
        framebuffer->setObjectName(QString::fromUtf8("framebuffer"));
        framebuffer->setFrameShape(QFrame::Box);
        framebuffer->setMargin(2);

        horizontalLayout_23->addWidget(framebuffer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_2);


        verticalLayout_17->addLayout(horizontalLayout_23);

        fbAttach = new RDTreeWidget(framebufferGroup);
        fbAttach->setObjectName(QString::fromUtf8("fbAttach"));
        fbAttach->setFrameShape(QFrame::Box);
        fbAttach->setFrameShadow(QFrame::Plain);
        fbAttach->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        fbAttach->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fbAttach->setProperty("showDropIndicator", QVariant(false));
        fbAttach->setIndentation(0);
        fbAttach->setRootIsDecorated(false);
        fbAttach->setItemsExpandable(false);
        fbAttach->setAllColumnsShowFocus(true);
        fbAttach->setExpandsOnDoubleClick(false);
        fbAttach->header()->setStretchLastSection(false);

        verticalLayout_17->addWidget(fbAttach);


        gridLayout_4->addWidget(framebufferGroup, 0, 0, 1, 3);

        blendsGroup = new QGroupBox(fbScrollContents);
        blendsGroup->setObjectName(QString::fromUtf8("blendsGroup"));
        sizePolicy10.setHeightForWidth(blendsGroup->sizePolicy().hasHeightForWidth());
        blendsGroup->setSizePolicy(sizePolicy10);
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


        gridLayout_4->addWidget(blendsGroup, 1, 0, 1, 3);

        blendStateGroup = new QGroupBox(fbScrollContents);
        blendStateGroup->setObjectName(QString::fromUtf8("blendStateGroup"));
        sizePolicy1.setHeightForWidth(blendStateGroup->sizePolicy().hasHeightForWidth());
        blendStateGroup->setSizePolicy(sizePolicy1);
        blendStateGridLayout = new QGridLayout(blendStateGroup);
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

        logicOpLabel = new QLabel(blendStateGroup);
        logicOpLabel->setObjectName(QString::fromUtf8("logicOpLabel"));
        logicOpLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logicOpLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(logicOpLabel, 1, 0, 1, 1);

        logicOp = new QLabel(blendStateGroup);
        logicOp->setObjectName(QString::fromUtf8("logicOp"));
        logicOp->setFont(font);
        logicOp->setAlignment(Qt::AlignCenter);
        logicOp->setMargin(4);

        blendStateGridLayout->addWidget(logicOp, 1, 1, 1, 1);


        gridLayout_4->addWidget(blendStateGroup, 2, 0, 1, 1);

        depthStateGroup = new QGroupBox(fbScrollContents);
        depthStateGroup->setObjectName(QString::fromUtf8("depthStateGroup"));
        sizePolicy1.setHeightForWidth(depthStateGroup->sizePolicy().hasHeightForWidth());
        depthStateGroup->setSizePolicy(sizePolicy1);
        depthStateGridLayout = new QGridLayout(depthStateGroup);
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

        depthFuncLabel = new QLabel(depthStateGroup);
        depthFuncLabel->setObjectName(QString::fromUtf8("depthFuncLabel"));
        depthFuncLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthFuncLabel, 1, 0, 1, 1);

        depthFunc = new QLabel(depthStateGroup);
        depthFunc->setObjectName(QString::fromUtf8("depthFunc"));
        depthFunc->setFont(font);
        depthFunc->setAlignment(Qt::AlignCenter);
        depthFunc->setMargin(4);

        depthStateGridLayout->addWidget(depthFunc, 1, 1, 1, 1);

        depthWriteLabel = new QLabel(depthStateGroup);
        depthWriteLabel->setObjectName(QString::fromUtf8("depthWriteLabel"));
        depthWriteLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthWriteLabel, 2, 0, 1, 1);

        depthWrite = new QLabel(depthStateGroup);
        depthWrite->setObjectName(QString::fromUtf8("depthWrite"));
        depthWrite->setFont(font);
        depthWrite->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthWrite->setAlignment(Qt::AlignCenter);
        depthWrite->setMargin(4);

        depthStateGridLayout->addWidget(depthWrite, 2, 1, 1, 1);

        depthBoundsLabel = new QLabel(depthStateGroup);
        depthBoundsLabel->setObjectName(QString::fromUtf8("depthBoundsLabel"));
        depthBoundsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        depthStateGridLayout->addWidget(depthBoundsLabel, 3, 0, 1, 1);

        depthBounds = new QLabel(depthStateGroup);
        depthBounds->setObjectName(QString::fromUtf8("depthBounds"));
        depthBounds->setFont(font);
        depthBounds->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        depthBounds->setAlignment(Qt::AlignCenter);
        depthBounds->setMargin(4);

        depthStateGridLayout->addWidget(depthBounds, 3, 1, 1, 1);


        gridLayout_4->addWidget(depthStateGroup, 2, 1, 1, 1);

        stencilStateGroup = new QGroupBox(fbScrollContents);
        stencilStateGroup->setObjectName(QString::fromUtf8("stencilStateGroup"));
        sizePolicy1.setHeightForWidth(stencilStateGroup->sizePolicy().hasHeightForWidth());
        stencilStateGroup->setSizePolicy(sizePolicy1);
        stencilStateGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_10 = new QVBoxLayout(stencilStateGroup);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        stencils = new RDTreeWidget(stencilStateGroup);
        stencils->setObjectName(QString::fromUtf8("stencils"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(stencils->sizePolicy().hasHeightForWidth());
        stencils->setSizePolicy(sizePolicy11);
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

        verticalLayout_10->addWidget(stencils);


        gridLayout_4->addWidget(stencilStateGroup, 2, 2, 1, 1);

        fbScroll->setWidget(fbScrollContents);

        gridLayout_5->addWidget(fbScroll, 0, 0, 1, 1);

        stagesTabs->addTab(FB, QString());
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
        csPipeline = new RDLabel(csShaderGroup);
        csPipeline->setObjectName(QString::fromUtf8("csPipeline"));
        sizePolicy5.setHeightForWidth(csPipeline->sizePolicy().hasHeightForWidth());
        csPipeline->setSizePolicy(sizePolicy5);
        csPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csPipeline);

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

        csShaderMessagesButton = new QToolButton(csShaderGroup);
        csShaderMessagesButton->setObjectName(QString::fromUtf8("csShaderMessagesButton"));
        csShaderMessagesButton->setIcon(icon6);
        csShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderMessagesButton->setAutoRaise(true);

        horizontalLayout_19->addWidget(csShaderMessagesButton);

        computeDebugSelector = new QToolButton(csShaderGroup);
        computeDebugSelector->setObjectName(QString::fromUtf8("computeDebugSelector"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        computeDebugSelector->setIcon(icon7);
        computeDebugSelector->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        computeDebugSelector->setAutoRaise(true);

        horizontalLayout_19->addWidget(computeDebugSelector);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_4);


        verticalLayout_9->addWidget(csShaderGroup);

        csDescGroup = new CollapseGroupBox(CS);
        csDescGroup->setObjectName(QString::fromUtf8("csDescGroup"));
        sizePolicy4.setHeightForWidth(csDescGroup->sizePolicy().hasHeightForWidth());
        csDescGroup->setSizePolicy(sizePolicy4);
        csDescGroupVLayout = new QVBoxLayout(csDescGroup);
        csDescGroupVLayout->setObjectName(QString::fromUtf8("csDescGroupVLayout"));
        csDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        csPipeLayout = new RDLabel(csDescGroup);
        csPipeLayout->setObjectName(QString::fromUtf8("csPipeLayout"));
        sizePolicy6.setHeightForWidth(csPipeLayout->sizePolicy().hasHeightForWidth());
        csPipeLayout->setSizePolicy(sizePolicy6);
        csPipeLayout->setFrameShape(QFrame::Box);

        csDescGroupVLayout->addWidget(csPipeLayout);

        csDescSets = new RDTreeWidget(csDescGroup);
        csDescSets->setObjectName(QString::fromUtf8("csDescSets"));
        sizePolicy7.setHeightForWidth(csDescSets->sizePolicy().hasHeightForWidth());
        csDescSets->setSizePolicy(sizePolicy7);
        csDescSets->setFrameShape(QFrame::Box);
        csDescSets->setFrameShadow(QFrame::Plain);
        csDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csDescSets->setProperty("showDropIndicator", QVariant(false));
        csDescSets->setRootIsDecorated(false);
        csDescSets->setUniformRowHeights(true);
        csDescSets->setAllColumnsShowFocus(true);
        csDescSets->header()->setStretchLastSection(false);

        csDescGroupVLayout->addWidget(csDescSets);


        verticalLayout_9->addWidget(csDescGroup);

        csConditionalRenderingGroup = new QGroupBox(CS);
        csConditionalRenderingGroup->setObjectName(QString::fromUtf8("csConditionalRenderingGroup"));
        horizontalLayout_43 = new QHBoxLayout(csConditionalRenderingGroup);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        label_7 = new QLabel(csConditionalRenderingGroup);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_43->addWidget(label_7);

        csPredicatePassing = new QLabel(csConditionalRenderingGroup);
        csPredicatePassing->setObjectName(QString::fromUtf8("csPredicatePassing"));

        horizontalLayout_43->addWidget(csPredicatePassing);

        label_8 = new QLabel(csConditionalRenderingGroup);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_43->addWidget(label_8);

        csPredicateInverted = new QLabel(csConditionalRenderingGroup);
        csPredicateInverted->setObjectName(QString::fromUtf8("csPredicateInverted"));

        horizontalLayout_43->addWidget(csPredicateInverted);

        csPredicateBuffer = new RDLabel(csConditionalRenderingGroup);
        csPredicateBuffer->setObjectName(QString::fromUtf8("csPredicateBuffer"));
        csPredicateBuffer->setFrameShape(QFrame::Box);
        csPredicateBuffer->setMargin(4);

        horizontalLayout_43->addWidget(csPredicateBuffer);

        csPredicateBufferViewButton = new QToolButton(csConditionalRenderingGroup);
        csPredicateBufferViewButton->setObjectName(QString::fromUtf8("csPredicateBufferViewButton"));
        csPredicateBufferViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        csPredicateBufferViewButton->setIcon(icon4);
        csPredicateBufferViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csPredicateBufferViewButton->setAutoRaise(true);

        horizontalLayout_43->addWidget(csPredicateBufferViewButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_6);


        verticalLayout_9->addWidget(csConditionalRenderingGroup);

        csScroll = new QScrollArea(CS);
        csScroll->setObjectName(QString::fromUtf8("csScroll"));
        csScroll->setFrameShape(QFrame::NoFrame);
        csScroll->setWidgetResizable(true);
        csScrollContents = new QWidget();
        csScrollContents->setObjectName(QString::fromUtf8("csScrollContents"));
        csScrollContents->setGeometry(QRect(0, 0, 96, 172));
        verticalLayout_16 = new QVBoxLayout(csScrollContents);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        csResGroup = new CollapseGroupBox(csScrollContents);
        csResGroup->setObjectName(QString::fromUtf8("csResGroup"));
        sizePolicy8.setHeightForWidth(csResGroup->sizePolicy().hasHeightForWidth());
        csResGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_18 = new QHBoxLayout(csResGroup);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(2, 2, 2, 2);
        csResources = new RDTreeWidget(csResGroup);
        csResources->setObjectName(QString::fromUtf8("csResources"));
        csResources->setFrameShape(QFrame::Box);
        csResources->setFrameShadow(QFrame::Plain);
        csResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csResources->setProperty("showDropIndicator", QVariant(false));
        csResources->setRootIsDecorated(true);
        csResources->setUniformRowHeights(true);
        csResources->setAllColumnsShowFocus(true);
        csResources->header()->setStretchLastSection(false);

        horizontalLayout_18->addWidget(csResources);


        verticalLayout_16->addWidget(csResGroup);

        csUBOGroup = new CollapseGroupBox(csScrollContents);
        csUBOGroup->setObjectName(QString::fromUtf8("csUBOGroup"));
        sizePolicy8.setHeightForWidth(csUBOGroup->sizePolicy().hasHeightForWidth());
        csUBOGroup->setSizePolicy(sizePolicy8);
        horizontalLayout_20 = new QHBoxLayout(csUBOGroup);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(2, 2, 2, 2);
        csUBOs = new RDTreeWidget(csUBOGroup);
        csUBOs->setObjectName(QString::fromUtf8("csUBOs"));
        csUBOs->setFrameShape(QFrame::Box);
        csUBOs->setFrameShadow(QFrame::Plain);
        csUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csUBOs->setProperty("showDropIndicator", QVariant(false));
        csUBOs->setRootIsDecorated(true);
        csUBOs->setUniformRowHeights(true);
        csUBOs->setAllColumnsShowFocus(true);
        csUBOs->header()->setStretchLastSection(false);

        horizontalLayout_20->addWidget(csUBOs);


        verticalLayout_16->addWidget(csUBOGroup);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_16->addItem(verticalSpacer_6);

        csScroll->setWidget(csScrollContents);

        verticalLayout_9->addWidget(csScroll);

        stagesTabs->addTab(CS, QString());
        TS = new QWidget();
        TS->setObjectName(QString::fromUtf8("TS"));
        tsShaderVerticalLayout = new QVBoxLayout(TS);
        tsShaderVerticalLayout->setObjectName(QString::fromUtf8("tsShaderVerticalLayout"));
        tsShaderVerticalLayout->setContentsMargins(0, 0, 0, 0);
        tsShaderGroup = new QGroupBox(TS);
        tsShaderGroup->setObjectName(QString::fromUtf8("tsShaderGroup"));
        sizePolicy4.setHeightForWidth(tsShaderGroup->sizePolicy().hasHeightForWidth());
        tsShaderGroup->setSizePolicy(sizePolicy4);
        tsShaderHorizontalLayout = new QHBoxLayout(tsShaderGroup);
        tsShaderHorizontalLayout->setSpacing(0);
        tsShaderHorizontalLayout->setObjectName(QString::fromUtf8("tsShaderHorizontalLayout"));
        tsShaderHorizontalLayout->setContentsMargins(-1, 0, -1, 4);
        tsPipeline = new RDLabel(tsShaderGroup);
        tsPipeline->setObjectName(QString::fromUtf8("tsPipeline"));
        sizePolicy5.setHeightForWidth(tsPipeline->sizePolicy().hasHeightForWidth());
        tsPipeline->setSizePolicy(sizePolicy5);
        tsPipeline->setFrameShape(QFrame::Box);

        tsShaderHorizontalLayout->addWidget(tsPipeline);

        tsShader = new RDLabel(tsShaderGroup);
        tsShader->setObjectName(QString::fromUtf8("tsShader"));
        sizePolicy5.setHeightForWidth(tsShader->sizePolicy().hasHeightForWidth());
        tsShader->setSizePolicy(sizePolicy5);
        tsShader->setFrameShape(QFrame::Box);

        tsShaderHorizontalLayout->addWidget(tsShader);

        tsShaderDebug = new RDLabel(tsShaderGroup);
        tsShaderDebug->setObjectName(QString::fromUtf8("tsShaderDebug"));
        sizePolicy5.setHeightForWidth(tsShaderDebug->sizePolicy().hasHeightForWidth());
        tsShaderDebug->setSizePolicy(sizePolicy5);
        tsShaderDebug->setFrameShape(QFrame::Box);

        tsShaderHorizontalLayout->addWidget(tsShaderDebug);

        tsShaderViewButton = new QToolButton(tsShaderGroup);
        tsShaderViewButton->setObjectName(QString::fromUtf8("tsShaderViewButton"));
        tsShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        tsShaderViewButton->setIcon(icon4);
        tsShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tsShaderViewButton->setAutoRaise(true);

        tsShaderHorizontalLayout->addWidget(tsShaderViewButton);

        tsShaderEditButton = new QToolButton(tsShaderGroup);
        tsShaderEditButton->setObjectName(QString::fromUtf8("tsShaderEditButton"));
        tsShaderEditButton->setIcon(icon5);
        tsShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        tsShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tsShaderEditButton->setAutoRaise(true);

        tsShaderHorizontalLayout->addWidget(tsShaderEditButton);

        tsShaderSaveButton = new QToolButton(tsShaderGroup);
        tsShaderSaveButton->setObjectName(QString::fromUtf8("tsShaderSaveButton"));
        tsShaderSaveButton->setIcon(icon2);
        tsShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tsShaderSaveButton->setAutoRaise(true);

        tsShaderHorizontalLayout->addWidget(tsShaderSaveButton);

        tsShaderMessagesButton = new QToolButton(tsShaderGroup);
        tsShaderMessagesButton->setObjectName(QString::fromUtf8("tsShaderMessagesButton"));
        tsShaderMessagesButton->setIcon(icon6);
        tsShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tsShaderMessagesButton->setAutoRaise(true);

        tsShaderHorizontalLayout->addWidget(tsShaderMessagesButton);

        tsShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tsShaderHorizontalLayout->addItem(tsShaderSpacer);


        tsShaderVerticalLayout->addWidget(tsShaderGroup);

        tsDescGroup = new CollapseGroupBox(TS);
        tsDescGroup->setObjectName(QString::fromUtf8("tsDescGroup"));
        sizePolicy4.setHeightForWidth(tsDescGroup->sizePolicy().hasHeightForWidth());
        tsDescGroup->setSizePolicy(sizePolicy4);
        tsDescGroupVLayout = new QVBoxLayout(tsDescGroup);
        tsDescGroupVLayout->setObjectName(QString::fromUtf8("tsDescGroupVLayout"));
        tsDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        tsPipeLayout = new RDLabel(tsDescGroup);
        tsPipeLayout->setObjectName(QString::fromUtf8("tsPipeLayout"));
        sizePolicy6.setHeightForWidth(tsPipeLayout->sizePolicy().hasHeightForWidth());
        tsPipeLayout->setSizePolicy(sizePolicy6);
        tsPipeLayout->setFrameShape(QFrame::Box);

        tsDescGroupVLayout->addWidget(tsPipeLayout);

        tsDescSets = new RDTreeWidget(tsDescGroup);
        tsDescSets->setObjectName(QString::fromUtf8("tsDescSets"));
        sizePolicy7.setHeightForWidth(tsDescSets->sizePolicy().hasHeightForWidth());
        tsDescSets->setSizePolicy(sizePolicy7);
        tsDescSets->setFrameShape(QFrame::Box);
        tsDescSets->setFrameShadow(QFrame::Plain);
        tsDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tsDescSets->setProperty("showDropIndicator", QVariant(false));
        tsDescSets->setRootIsDecorated(false);
        tsDescSets->setUniformRowHeights(true);
        tsDescSets->setAllColumnsShowFocus(true);
        tsDescSets->header()->setStretchLastSection(false);

        tsDescGroupVLayout->addWidget(tsDescSets);


        tsShaderVerticalLayout->addWidget(tsDescGroup);

        tsScroll = new QScrollArea(TS);
        tsScroll->setObjectName(QString::fromUtf8("tsScroll"));
        tsScroll->setFrameShape(QFrame::NoFrame);
        tsScroll->setWidgetResizable(true);
        tsScrollContents = new QWidget();
        tsScrollContents->setObjectName(QString::fromUtf8("tsScrollContents"));
        tsScrollContents->setGeometry(QRect(0, 0, 96, 172));
        tsShaderVerticalLayout2 = new QVBoxLayout(tsScrollContents);
        tsShaderVerticalLayout2->setObjectName(QString::fromUtf8("tsShaderVerticalLayout2"));
        tsShaderVerticalLayout2->setContentsMargins(0, 0, 0, 0);
        tsResGroup = new CollapseGroupBox(tsScrollContents);
        tsResGroup->setObjectName(QString::fromUtf8("tsResGroup"));
        sizePolicy8.setHeightForWidth(tsResGroup->sizePolicy().hasHeightForWidth());
        tsResGroup->setSizePolicy(sizePolicy8);
        tsShaderHorizontalLayout2 = new QHBoxLayout(tsResGroup);
        tsShaderHorizontalLayout2->setObjectName(QString::fromUtf8("tsShaderHorizontalLayout2"));
        tsShaderHorizontalLayout2->setContentsMargins(2, 2, 2, 2);
        tsResources = new RDTreeWidget(tsResGroup);
        tsResources->setObjectName(QString::fromUtf8("tsResources"));
        tsResources->setFrameShape(QFrame::Box);
        tsResources->setFrameShadow(QFrame::Plain);
        tsResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tsResources->setProperty("showDropIndicator", QVariant(false));
        tsResources->setRootIsDecorated(true);
        tsResources->setUniformRowHeights(true);
        tsResources->setAllColumnsShowFocus(true);
        tsResources->header()->setStretchLastSection(false);

        tsShaderHorizontalLayout2->addWidget(tsResources);


        tsShaderVerticalLayout2->addWidget(tsResGroup);

        tsUBOGroup = new CollapseGroupBox(tsScrollContents);
        tsUBOGroup->setObjectName(QString::fromUtf8("tsUBOGroup"));
        sizePolicy8.setHeightForWidth(tsUBOGroup->sizePolicy().hasHeightForWidth());
        tsUBOGroup->setSizePolicy(sizePolicy8);
        tsShaderHorizontalLayout3 = new QHBoxLayout(tsUBOGroup);
        tsShaderHorizontalLayout3->setObjectName(QString::fromUtf8("tsShaderHorizontalLayout3"));
        tsShaderHorizontalLayout3->setContentsMargins(2, 2, 2, 2);
        tsUBOs = new RDTreeWidget(tsUBOGroup);
        tsUBOs->setObjectName(QString::fromUtf8("tsUBOs"));
        tsUBOs->setFrameShape(QFrame::Box);
        tsUBOs->setFrameShadow(QFrame::Plain);
        tsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tsUBOs->setProperty("showDropIndicator", QVariant(false));
        tsUBOs->setRootIsDecorated(true);
        tsUBOs->setUniformRowHeights(true);
        tsUBOs->setAllColumnsShowFocus(true);
        tsUBOs->header()->setStretchLastSection(false);

        tsShaderHorizontalLayout3->addWidget(tsUBOs);


        tsShaderVerticalLayout2->addWidget(tsUBOGroup);

        tsVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        tsShaderVerticalLayout2->addItem(tsVerticalSpacer);

        tsScroll->setWidget(tsScrollContents);

        tsShaderVerticalLayout->addWidget(tsScroll);

        stagesTabs->addTab(TS, QString());
        MS = new QWidget();
        MS->setObjectName(QString::fromUtf8("MS"));
        msShaderVerticalLayout = new QVBoxLayout(MS);
        msShaderVerticalLayout->setObjectName(QString::fromUtf8("msShaderVerticalLayout"));
        msShaderVerticalLayout->setContentsMargins(0, 0, 0, 0);
        msShaderGroup = new QGroupBox(MS);
        msShaderGroup->setObjectName(QString::fromUtf8("msShaderGroup"));
        sizePolicy4.setHeightForWidth(msShaderGroup->sizePolicy().hasHeightForWidth());
        msShaderGroup->setSizePolicy(sizePolicy4);
        msShaderHorizontalLayout = new QHBoxLayout(msShaderGroup);
        msShaderHorizontalLayout->setSpacing(0);
        msShaderHorizontalLayout->setObjectName(QString::fromUtf8("msShaderHorizontalLayout"));
        msShaderHorizontalLayout->setContentsMargins(-1, 0, -1, 4);
        msPipeline = new RDLabel(msShaderGroup);
        msPipeline->setObjectName(QString::fromUtf8("msPipeline"));
        sizePolicy5.setHeightForWidth(msPipeline->sizePolicy().hasHeightForWidth());
        msPipeline->setSizePolicy(sizePolicy5);
        msPipeline->setFrameShape(QFrame::Box);

        msShaderHorizontalLayout->addWidget(msPipeline);

        msShader = new RDLabel(msShaderGroup);
        msShader->setObjectName(QString::fromUtf8("msShader"));
        sizePolicy5.setHeightForWidth(msShader->sizePolicy().hasHeightForWidth());
        msShader->setSizePolicy(sizePolicy5);
        msShader->setFrameShape(QFrame::Box);

        msShaderHorizontalLayout->addWidget(msShader);

        msShaderDebug = new RDLabel(msShaderGroup);
        msShaderDebug->setObjectName(QString::fromUtf8("msShaderDebug"));
        sizePolicy5.setHeightForWidth(msShaderDebug->sizePolicy().hasHeightForWidth());
        msShaderDebug->setSizePolicy(sizePolicy5);
        msShaderDebug->setFrameShape(QFrame::Box);

        msShaderHorizontalLayout->addWidget(msShaderDebug);

        msShaderViewButton = new QToolButton(msShaderGroup);
        msShaderViewButton->setObjectName(QString::fromUtf8("msShaderViewButton"));
        msShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        msShaderViewButton->setIcon(icon4);
        msShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderViewButton->setAutoRaise(true);

        msShaderHorizontalLayout->addWidget(msShaderViewButton);

        msShaderEditButton = new QToolButton(msShaderGroup);
        msShaderEditButton->setObjectName(QString::fromUtf8("msShaderEditButton"));
        msShaderEditButton->setIcon(icon5);
        msShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        msShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderEditButton->setAutoRaise(true);

        msShaderHorizontalLayout->addWidget(msShaderEditButton);

        msShaderSaveButton = new QToolButton(msShaderGroup);
        msShaderSaveButton->setObjectName(QString::fromUtf8("msShaderSaveButton"));
        msShaderSaveButton->setIcon(icon2);
        msShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderSaveButton->setAutoRaise(true);

        msShaderHorizontalLayout->addWidget(msShaderSaveButton);

        msShaderMessagesButton = new QToolButton(msShaderGroup);
        msShaderMessagesButton->setObjectName(QString::fromUtf8("msShaderMessagesButton"));
        msShaderMessagesButton->setIcon(icon6);
        msShaderMessagesButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderMessagesButton->setAutoRaise(true);

        msShaderHorizontalLayout->addWidget(msShaderMessagesButton);

        msMeshButton = new QToolButton(msShaderGroup);
        msMeshButton->setObjectName(QString::fromUtf8("msMeshButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/draw_vertex.png"), QSize(), QIcon::Normal, QIcon::Off);
        msMeshButton->setIcon(icon8);
        msMeshButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msMeshButton->setAutoRaise(true);

        msShaderHorizontalLayout->addWidget(msMeshButton);

        msTopoLabel = new QLabel(msShaderGroup);
        msTopoLabel->setObjectName(QString::fromUtf8("msTopoLabel"));

        msShaderHorizontalLayout->addWidget(msTopoLabel);

        msTopology = new QLabel(msShaderGroup);
        msTopology->setObjectName(QString::fromUtf8("msTopology"));

        msShaderHorizontalLayout->addWidget(msTopology);

        msShaderSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        msShaderHorizontalLayout->addItem(msShaderSpacer);


        msShaderVerticalLayout->addWidget(msShaderGroup);

        msDescGroup = new CollapseGroupBox(MS);
        msDescGroup->setObjectName(QString::fromUtf8("msDescGroup"));
        sizePolicy4.setHeightForWidth(msDescGroup->sizePolicy().hasHeightForWidth());
        msDescGroup->setSizePolicy(sizePolicy4);
        msDescGroupVLayout = new QVBoxLayout(msDescGroup);
        msDescGroupVLayout->setObjectName(QString::fromUtf8("msDescGroupVLayout"));
        msDescGroupVLayout->setContentsMargins(2, 2, 2, 2);
        msPipeLayout = new RDLabel(msDescGroup);
        msPipeLayout->setObjectName(QString::fromUtf8("msPipeLayout"));
        sizePolicy6.setHeightForWidth(msPipeLayout->sizePolicy().hasHeightForWidth());
        msPipeLayout->setSizePolicy(sizePolicy6);
        msPipeLayout->setFrameShape(QFrame::Box);

        msDescGroupVLayout->addWidget(msPipeLayout);

        msDescSets = new RDTreeWidget(msDescGroup);
        msDescSets->setObjectName(QString::fromUtf8("msDescSets"));
        sizePolicy7.setHeightForWidth(msDescSets->sizePolicy().hasHeightForWidth());
        msDescSets->setSizePolicy(sizePolicy7);
        msDescSets->setFrameShape(QFrame::Box);
        msDescSets->setFrameShadow(QFrame::Plain);
        msDescSets->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msDescSets->setProperty("showDropIndicator", QVariant(false));
        msDescSets->setRootIsDecorated(false);
        msDescSets->setUniformRowHeights(true);
        msDescSets->setAllColumnsShowFocus(true);
        msDescSets->header()->setStretchLastSection(false);

        msDescGroupVLayout->addWidget(msDescSets);


        msShaderVerticalLayout->addWidget(msDescGroup);

        msScroll = new QScrollArea(MS);
        msScroll->setObjectName(QString::fromUtf8("msScroll"));
        msScroll->setFrameShape(QFrame::NoFrame);
        msScroll->setWidgetResizable(true);
        msScrollContents = new QWidget();
        msScrollContents->setObjectName(QString::fromUtf8("msScrollContents"));
        msScrollContents->setGeometry(QRect(0, 0, 96, 172));
        msShaderVerticalLayout2 = new QVBoxLayout(msScrollContents);
        msShaderVerticalLayout2->setObjectName(QString::fromUtf8("msShaderVerticalLayout2"));
        msShaderVerticalLayout2->setContentsMargins(0, 0, 0, 0);
        msResGroup = new CollapseGroupBox(msScrollContents);
        msResGroup->setObjectName(QString::fromUtf8("msResGroup"));
        sizePolicy8.setHeightForWidth(msResGroup->sizePolicy().hasHeightForWidth());
        msResGroup->setSizePolicy(sizePolicy8);
        msShaderHorizontalLayout2 = new QHBoxLayout(msResGroup);
        msShaderHorizontalLayout2->setObjectName(QString::fromUtf8("msShaderHorizontalLayout2"));
        msShaderHorizontalLayout2->setContentsMargins(2, 2, 2, 2);
        msResources = new RDTreeWidget(msResGroup);
        msResources->setObjectName(QString::fromUtf8("msResources"));
        msResources->setFrameShape(QFrame::Box);
        msResources->setFrameShadow(QFrame::Plain);
        msResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msResources->setProperty("showDropIndicator", QVariant(false));
        msResources->setRootIsDecorated(true);
        msResources->setUniformRowHeights(true);
        msResources->setAllColumnsShowFocus(true);
        msResources->header()->setStretchLastSection(false);

        msShaderHorizontalLayout2->addWidget(msResources);


        msShaderVerticalLayout2->addWidget(msResGroup);

        msUBOGroup = new CollapseGroupBox(msScrollContents);
        msUBOGroup->setObjectName(QString::fromUtf8("msUBOGroup"));
        sizePolicy8.setHeightForWidth(msUBOGroup->sizePolicy().hasHeightForWidth());
        msUBOGroup->setSizePolicy(sizePolicy8);
        msShaderHorizontalLayout3 = new QHBoxLayout(msUBOGroup);
        msShaderHorizontalLayout3->setObjectName(QString::fromUtf8("msShaderHorizontalLayout3"));
        msShaderHorizontalLayout3->setContentsMargins(2, 2, 2, 2);
        msUBOs = new RDTreeWidget(msUBOGroup);
        msUBOs->setObjectName(QString::fromUtf8("msUBOs"));
        msUBOs->setFrameShape(QFrame::Box);
        msUBOs->setFrameShadow(QFrame::Plain);
        msUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msUBOs->setProperty("showDropIndicator", QVariant(false));
        msUBOs->setRootIsDecorated(true);
        msUBOs->setUniformRowHeights(true);
        msUBOs->setAllColumnsShowFocus(true);
        msUBOs->header()->setStretchLastSection(false);

        msShaderHorizontalLayout3->addWidget(msUBOs);


        msShaderVerticalLayout2->addWidget(msUBOGroup);

        msVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        msShaderVerticalLayout2->addItem(msVerticalSpacer);

        msScroll->setWidget(msScrollContents);

        msShaderVerticalLayout->addWidget(msScroll);

        stagesTabs->addTab(MS, QString());

        verticalLayout->addWidget(stagesTabs);


        retranslateUi(VulkanPipelineStateViewer);

        stagesTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VulkanPipelineStateViewer);
    } // setupUi

    void retranslateUi(QFrame *VulkanPipelineStateViewer)
    {
        controlsLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        showUnused->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Show items that are bound but not currently used by the pipeline.", nullptr));
#endif // QT_CONFIG(tooltip)
        showUnused->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Show Unused Items", nullptr));
#if QT_CONFIG(tooltip)
        showEmpty->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Show pipeline bindings which are completely empty and have nothing bound", nullptr));
#endif // QT_CONFIG(tooltip)
        showEmpty->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Show Empty Items", nullptr));
#if QT_CONFIG(tooltip)
        exportDrop->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Export the current pipeline state to an HTML file or Fossilize database", nullptr));
#endif // QT_CONFIG(tooltip)
        exportDrop->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Export", nullptr));
        extensions->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Extensions", nullptr));
        attribGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Attributes", nullptr));
        buffersGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Buffers", nullptr));
        meshViewGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Mesh View", nullptr));
#if QT_CONFIG(tooltip)
        meshView->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View the mesh input data", nullptr));
#endif // QT_CONFIG(tooltip)
        topologyGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Primitive Topology", nullptr));
        topology->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Triangle List", nullptr));
        topologyDiagram->setText(QString());
        primRestart->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Primitive Restart Enabled", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VTX), QCoreApplication::translate("VulkanPipelineStateViewer", "Vertex Input", nullptr));
        vsShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        vsPipeline->setText(QString());
        vsShader->setText(QString());
        vsShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        vsShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        vsDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        vsPipeLayout->setText(QString());
        vsResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        vsUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VS), QCoreApplication::translate("VulkanPipelineStateViewer", "Vertex Shader", nullptr));
        tcsShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        tcsPipeline->setText(QString());
        tcsShader->setText(QString());
        tcsShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        tcsShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        tcsShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        tcsShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        tcsShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        tcsDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        tcsPipeLayout->setText(QString());
        tcsResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        tcsUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(TCS), QCoreApplication::translate("VulkanPipelineStateViewer", "Tess Control Shader", nullptr));
        tesShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        tesPipeline->setText(QString());
        tesShader->setText(QString());
        tesShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        tesShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        tesShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        tesShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        tesShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        tesDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        tesPipeLayout->setText(QString());
        tesResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        tesUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(TES), QCoreApplication::translate("VulkanPipelineStateViewer", "Tess Eval Shader", nullptr));
        gsShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        gsPipeline->setText(QString());
        gsShader->setText(QString());
        gsShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        gsShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        gsDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        gsPipeLayout->setText(QString());
        gsResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        gsUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        xfbGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Transform Feedback", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(GS), QCoreApplication::translate("VulkanPipelineStateViewer", "Geometry Shader", nullptr));
        rasterizerGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Rasterizer State", nullptr));
        fillModeLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Fill Mode:", nullptr));
        fillMode->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Solid", nullptr));
        cullModeLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Cull Mode:", nullptr));
        cullMode->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "None", nullptr));
        frontCCWLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Front CCW:", nullptr));
        frontCCW->setText(QString());
        label->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Conservative Raster:", nullptr));
        conservativeRaster->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Disabled", nullptr));
        depthBiasLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Depth Bias:", nullptr));
        depthBias->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00", nullptr));
        depthBiasClampLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Depth Bias Clamp:", nullptr));
        depthBiasClamp->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00", nullptr));
        slopeScaledBiasLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Slope-Scaled Bias:", nullptr));
        slopeScaledBias->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00", nullptr));
        label_3->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Multiview:", nullptr));
        multiview->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "TextLabel", nullptr));
        depthClampLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Depth Clamp:", nullptr));
        depthClamp->setText(QString());
        label_4->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Depth Clip:", nullptr));
        lineWidthLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Line Width:", nullptr));
        lineWidth->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00", nullptr));
        label_9->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Pipeline shading rate:", nullptr));
        pipelineShadingRate->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "1x1", nullptr));
        stippleFactorLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Line Stipple Factor:", nullptr));
        stipplePatternLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Stipple Pattern:", nullptr));
        rasterizerDiscardLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Rasterizer Discard:", nullptr));
        rasterizerDiscard->setText(QString());
        label_2->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Shading rate combiners:", nullptr));
        shadingRateCombiners->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Keep, Keep", nullptr));
        label_10->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Provoking Vertex:", nullptr));
        provokingVertex->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "First", nullptr));
        MSAAGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Multisample State", nullptr));
        sampleCountLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Sample Count:", nullptr));
        sampleCount->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0", nullptr));
        sampleShadingLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Sample Shading:", nullptr));
        sampleShading->setText(QString());
        minSampleShadingLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Min Sample Shading:", nullptr));
        minSampleShading->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00", nullptr));
        sampleMaskLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Sample Mask:", nullptr));
        sampleMask->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "FFFFFFFF", nullptr));
        alphaToOneLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Alpha to 1:", nullptr));
        alphaToCoverageLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Alpha to Coverage:", nullptr));
        conditionalRenderingGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Conditional Rendering", nullptr));
        label_5->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Passing:", nullptr));
        label_6->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Inverted:", nullptr));
#if QT_CONFIG(tooltip)
        predicateBufferViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Predicate Buffer", nullptr));
#endif // QT_CONFIG(tooltip)
        predicateBufferViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
        viewportsGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Viewports", nullptr));
        scissorGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Scissor Regions", nullptr));
        discardGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Discard Rectangles", nullptr));
        discardMode->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Exclusive", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(RS), QCoreApplication::translate("VulkanPipelineStateViewer", "Rasterizer", nullptr));
        fsShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        fsPipeline->setText(QString());
        fsShader->setText(QString());
        fsShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        fsShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        fsShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        fsShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        fsShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        fsDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        fsPipeLayout->setText(QString());
        fsResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        fsUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(FS), QCoreApplication::translate("VulkanPipelineStateViewer", "Fragment Shader", nullptr));
        framebufferGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Render Pass", nullptr));
        blendsGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Target Blends", nullptr));
        blendStateGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Blend State", nullptr));
        blendFactorLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Blend Factor:", nullptr));
        blendFactor->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "0.00, 0.00, 0.00, 0.00", nullptr));
        logicOpLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Logic Op:", nullptr));
        logicOp->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "-", nullptr));
        depthStateGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Depth State", nullptr));
        depthEnabledLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Enabled:", nullptr));
        depthEnabled->setText(QString());
        depthFuncLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Func:", nullptr));
        depthFunc->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "GREATER_EQUAL", nullptr));
        depthWriteLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Write:", nullptr));
        depthWrite->setText(QString());
        depthBoundsLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Bounds:", nullptr));
        depthBounds->setText(QString());
        stencilStateGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Stencil State", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(FB), QCoreApplication::translate("VulkanPipelineStateViewer", "Framebuffer", nullptr));
        csShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
#if QT_CONFIG(tooltip)
        csShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        csShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        csShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        csShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        computeDebugSelector->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Debug", nullptr));
        csDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        csPipeLayout->setText(QString());
        csConditionalRenderingGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Conditional Rendering", nullptr));
        label_7->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Passing:", nullptr));
        label_8->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Inverted:", nullptr));
#if QT_CONFIG(tooltip)
        csPredicateBufferViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Predicate Buffer", nullptr));
#endif // QT_CONFIG(tooltip)
        csPredicateBufferViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
        csResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        csUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(CS), QCoreApplication::translate("VulkanPipelineStateViewer", "Compute Shader", nullptr));
        tsShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        tsPipeline->setText(QString());
        tsShader->setText(QString());
        tsShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        tsShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        tsShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        tsShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        tsShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        tsShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        tsShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        tsShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        tsShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
        tsDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        tsPipeLayout->setText(QString());
        tsResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        tsUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(TS), QCoreApplication::translate("VulkanPipelineStateViewer", "Task Shader", nullptr));
        msShaderGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Shader", nullptr));
        msPipeline->setText(QString());
        msShader->setText(QString());
        msShaderDebug->setText(QString());
#if QT_CONFIG(tooltip)
        msShaderViewButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderViewButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        msShaderEditButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderEditButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        msShaderSaveButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "Save Shader SPIR-V", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderSaveButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        msShaderMessagesButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Shader Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderMessagesButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "Messages", nullptr));
#if QT_CONFIG(tooltip)
        msMeshButton->setToolTip(QCoreApplication::translate("VulkanPipelineStateViewer", "View Mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        msMeshButton->setText(QCoreApplication::translate("VulkanPipelineStateViewer", "View Mesh", nullptr));
        msTopoLabel->setText(QCoreApplication::translate("VulkanPipelineStateViewer", " Output Topology: ", nullptr));
        msTopology->setText(QString());
        msDescGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Descriptor Sets", nullptr));
        msPipeLayout->setText(QString());
        msResGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Resources", nullptr));
        msUBOGroup->setTitle(QCoreApplication::translate("VulkanPipelineStateViewer", "Uniform Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(MS), QCoreApplication::translate("VulkanPipelineStateViewer", "Mesh Shader", nullptr));
        (void)VulkanPipelineStateViewer;
    } // retranslateUi

};

namespace Ui {
    class VulkanPipelineStateViewer: public Ui_VulkanPipelineStateViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VULKANPIPELINESTATEVIEWER_H
