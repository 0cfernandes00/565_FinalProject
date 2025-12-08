/********************************************************************************
** Form generated from reading UI file 'D3D12PipelineStateViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_D3D12PIPELINESTATEVIEWER_H
#define UI_D3D12PIPELINESTATEVIEWER_H

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

class Ui_D3D12PipelineStateViewer
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
    QLabel *primRestart;
    QWidget *VS;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *vsShaderGroup;
    QHBoxLayout *horizontalLayout_3;
    RDLabel *vsRootSig;
    QToolButton *vsRootSigButton;
    RDLabel *vsPipeline;
    RDLabel *vsShader;
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
    CollapseGroupBox *vsUAVGroup;
    QHBoxLayout *vsUAVLayout;
    RDTreeWidget *vsUAVs;
    CollapseGroupBox *vsSamplerGroup;
    QHBoxLayout *horizontalLayout_1;
    RDTreeWidget *vsSamplers;
    CollapseGroupBox *vsCBufferGroup;
    QHBoxLayout *horizontalLayout_5;
    RDTreeWidget *vsCBuffers;
    QSpacerItem *verticalSpacer;
    QWidget *HS;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *hsShaderGroup;
    QHBoxLayout *horizontalLayout_7;
    RDLabel *hsRootSig;
    QToolButton *hsRootSigButton;
    RDLabel *hsPipeline;
    RDLabel *hsShader;
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
    CollapseGroupBox *hsUAVGroup;
    QHBoxLayout *hsUAVLayout;
    RDTreeWidget *hsUAVs;
    CollapseGroupBox *hsSamplerGroup;
    QHBoxLayout *horizontalLayout_26;
    RDTreeWidget *hsSamplers;
    CollapseGroupBox *hsCBufferGroup;
    QHBoxLayout *horizontalLayout_6;
    RDTreeWidget *hsCBuffers;
    QSpacerItem *verticalSpacer_2;
    QWidget *DS;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *dsShaderGroup;
    QHBoxLayout *horizontalLayout_10;
    RDLabel *dsRootSig;
    QToolButton *dsRootSigButton;
    RDLabel *dsPipeline;
    RDLabel *dsShader;
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
    CollapseGroupBox *dsUAVGroup;
    QHBoxLayout *dsUAVLayout;
    RDTreeWidget *dsUAVs;
    CollapseGroupBox *dsSamplerGroup;
    QHBoxLayout *horizontalLayout_14;
    RDTreeWidget *dsSamplers;
    CollapseGroupBox *dsCBufferGroup;
    QHBoxLayout *horizontalLayout_9;
    RDTreeWidget *dsCBuffers;
    QSpacerItem *verticalSpacer_3;
    QWidget *GS;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *gsShaderGroup;
    QHBoxLayout *horizontalLayout_13;
    RDLabel *gsRootSig;
    QToolButton *gsRootSigButton;
    RDLabel *gsPipeline;
    RDLabel *gsShader;
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
    CollapseGroupBox *gsUAVGroup;
    QHBoxLayout *gsUAVLayout;
    RDTreeWidget *gsUAVs;
    CollapseGroupBox *gsSamplerGroup;
    QHBoxLayout *horizontalLayout_28;
    RDTreeWidget *gsSamplers;
    CollapseGroupBox *gsCBufferGroup;
    QHBoxLayout *horizontalLayout_17;
    RDTreeWidget *gsCBuffers;
    CollapseGroupBox *soGroup;
    QHBoxLayout *soLayout_3;
    RDTreeWidget *gsStreamOut;
    QSpacerItem *verticalSpacer_4;
    QWidget *RS;
    QGridLayout *gridLayout_2;
    QGroupBox *rasterizerGroup;
    QGridLayout *rasterizerGridLayout;
    QLabel *fillModeLabel;
    QLabel *fillMode;
    QLabel *cullModeLabel;
    QLabel *cullMode;
    QLabel *frontCCWLabel;
    QLabel *frontCCW;
    QLabel *conservativeRasterLabel;
    QLabel *conservativeRaster;
    QLabel *shadingRateLabel;
    QLabel *baseShadingRate;
    QSpacerItem *rastHSpacer;
    QLabel *depthBiasLabel;
    QLabel *depthBias;
    QLabel *depthBiasClampLabel;
    QLabel *depthBiasClamp;
    QLabel *slopeScaledBiasLabel;
    QLabel *slopeScaledBias;
    QLabel *forcedSampleCountLabel;
    QLabel *forcedSampleCount;
    QLabel *shadingRateCombinersLabel;
    QLabel *shadingRateCombiners;
    QLabel *depthClipLabel;
    QLabel *depthClip;
    QLabel *lineAALabel;
    QLabel *lineAA;
    QLabel *sampleMaskLabel;
    QLabel *sampleMask;
    QLabel *shadingRateImageLabel;
    RDLabel *shadingRateImage;
    QSpacerItem *rastVSpacer;
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
    RDLabel *psRootSig;
    QToolButton *psRootSigButton;
    RDLabel *psPipeline;
    RDLabel *psShader;
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
    CollapseGroupBox *psUAVGroup;
    QHBoxLayout *psUAVLayout;
    RDTreeWidget *psUAVs;
    CollapseGroupBox *psSamplerGroup;
    QHBoxLayout *horizontalLayout_33;
    RDTreeWidget *psSamplers;
    CollapseGroupBox *psCBufferGroup;
    QHBoxLayout *horizontalLayout_30;
    RDTreeWidget *psCBuffers;
    QSpacerItem *verticalSpacer_5;
    QWidget *OM;
    QGridLayout *gridLayout_5;
    QScrollArea *omScroll;
    QWidget *omScrollContents;
    QGridLayout *gridLayout_6;
    QGroupBox *outputsGroup;
    QHBoxLayout *horizontalLayout_24;
    RDTreeWidget *targetOutputs;
    QGroupBox *blendsGroup;
    QHBoxLayout *horizontalLayout_25;
    RDTreeWidget *blends;
    QGroupBox *blendStateGroup;
    QGridLayout *blendStateGridLayout;
    QLabel *independentBlendLabel;
    QLabel *independentBlend;
    QLabel *alphaToCoverageLabel;
    QLabel *alphaToCoverage;
    QLabel *blendFactorLabel;
    QLabel *blendFactor;
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
    QVBoxLayout *verticalLayout_16;
    RDTreeWidget *stencils;
    QWidget *CS;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *csShaderGroup;
    QHBoxLayout *horizontalLayout_8;
    RDLabel *csRootSig;
    QToolButton *csRootSigButton;
    RDLabel *csPipeline;
    RDLabel *csShader;
    QToolButton *csShaderViewButton;
    QToolButton *csShaderEditButton;
    QToolButton *csShaderSaveButton;
    QToolButton *computeDebugSelector;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *csScroll;
    QWidget *csScrollContents;
    QVBoxLayout *verticalLayout_15;
    CollapseGroupBox *csResGroup;
    QHBoxLayout *horizontalLayout_37;
    RDTreeWidget *csResources;
    CollapseGroupBox *csUAVGroup;
    QHBoxLayout *csUAVLayout;
    RDTreeWidget *csUAVs;
    CollapseGroupBox *csSamplerGroup;
    QHBoxLayout *horizontalLayout_38;
    RDTreeWidget *csSamplers;
    CollapseGroupBox *csCBufferGroup;
    QHBoxLayout *horizontalLayout_35;
    RDTreeWidget *csCBuffers;
    QSpacerItem *verticalSpacer_6;
    QWidget *AS;
    QVBoxLayout *asverticalLayout;
    QGroupBox *asShaderGroup;
    QHBoxLayout *asHorizontalLayout1;
    RDLabel *asRootSig;
    QToolButton *asRootSigButton;
    RDLabel *asPipeline;
    RDLabel *asShader;
    QToolButton *asShaderViewButton;
    QToolButton *asShaderEditButton;
    QToolButton *asShaderSaveButton;
    QSpacerItem *asHorizontalSpacer1;
    QScrollArea *asScroll;
    QWidget *asScrollContents;
    QVBoxLayout *asVerticalLayout3;
    CollapseGroupBox *asResGroup;
    QHBoxLayout *asHorizontalLayout4;
    RDTreeWidget *asResources;
    CollapseGroupBox *asUAVGroup;
    QHBoxLayout *asUAVLayout;
    RDTreeWidget *asUAVs;
    CollapseGroupBox *asSamplerGroup;
    QHBoxLayout *asHorizontalLayout5;
    RDTreeWidget *asSamplers;
    CollapseGroupBox *asCBufferGroup;
    QHBoxLayout *asHorizontalLayout6;
    RDTreeWidget *asCBuffers;
    QSpacerItem *asVerticalSpacer;
    QWidget *MS;
    QVBoxLayout *msverticalLayout;
    QGroupBox *msShaderGroup;
    QHBoxLayout *msHorizontalLayout1;
    RDLabel *msRootSig;
    QToolButton *msRootSigButton;
    RDLabel *msPipeline;
    RDLabel *msShader;
    QToolButton *msShaderViewButton;
    QToolButton *msShaderEditButton;
    QToolButton *msShaderSaveButton;
    QToolButton *msMeshButton;
    QLabel *msTopoLabel;
    QLabel *msTopology;
    QSpacerItem *msHorizontalSpacer1;
    QScrollArea *msScroll;
    QWidget *msScrollContents;
    QVBoxLayout *msVerticalLayout3;
    CollapseGroupBox *msResGroup;
    QHBoxLayout *msHorizontalLayout4;
    RDTreeWidget *msResources;
    CollapseGroupBox *msUAVGroup;
    QHBoxLayout *msUAVLayout;
    RDTreeWidget *msUAVs;
    CollapseGroupBox *msSamplerGroup;
    QHBoxLayout *msHorizontalLayout5;
    RDTreeWidget *msSamplers;
    CollapseGroupBox *msCBufferGroup;
    QHBoxLayout *msHorizontalLayout6;
    RDTreeWidget *msCBuffers;
    QSpacerItem *msVerticalSpacer;

    void setupUi(QFrame *D3D12PipelineStateViewer)
    {
        if (D3D12PipelineStateViewer->objectName().isEmpty())
            D3D12PipelineStateViewer->setObjectName(QString::fromUtf8("D3D12PipelineStateViewer"));
        D3D12PipelineStateViewer->resize(868, 574);
        verticalLayout = new QVBoxLayout(D3D12PipelineStateViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolbar = new QFrame(D3D12PipelineStateViewer);
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

        pipeFlow = new PipelineFlowChart(D3D12PipelineStateViewer);
        pipeFlow->setObjectName(QString::fromUtf8("pipeFlow"));
        QFont font;
        font.setPointSize(12);
        pipeFlow->setFont(font);

        verticalLayout->addWidget(pipeFlow);

        stagesTabs = new QTabWidget(D3D12PipelineStateViewer);
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
        iaScrollContents->setGeometry(QRect(0, 0, 454, 196));
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


        gridLayout_3->addWidget(buffersGroup, 1, 0, 1, 1);

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

        primRestart = new QLabel(topologyGroup);
        primRestart->setObjectName(QString::fromUtf8("primRestart"));
        primRestart->setFont(font1);
        primRestart->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(primRestart);


        gridLayout_3->addWidget(topologyGroup, 1, 2, 1, 1);

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
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 4);
        vsRootSig = new RDLabel(vsShaderGroup);
        vsRootSig->setObjectName(QString::fromUtf8("vsRootSig"));
        vsRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsRootSig);

        vsRootSigButton = new QToolButton(vsShaderGroup);
        vsRootSigButton->setObjectName(QString::fromUtf8("vsRootSigButton"));
        vsRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/action.png"), QSize(), QIcon::Normal, QIcon::Off);
        vsRootSigButton->setIcon(icon4);
        vsRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        vsRootSigButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(vsRootSigButton);

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
        vsResources->setUniformRowHeights(true);
        vsResources->setAllColumnsShowFocus(true);
        vsResources->header()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(vsResources);


        verticalLayout_10->addWidget(vsResGroup);

        vsUAVGroup = new CollapseGroupBox(vsScrollContents);
        vsUAVGroup->setObjectName(QString::fromUtf8("vsUAVGroup"));
        sizePolicy6.setHeightForWidth(vsUAVGroup->sizePolicy().hasHeightForWidth());
        vsUAVGroup->setSizePolicy(sizePolicy6);
        vsUAVLayout = new QHBoxLayout(vsUAVGroup);
        vsUAVLayout->setObjectName(QString::fromUtf8("vsUAVLayout"));
        vsUAVLayout->setContentsMargins(2, 2, 2, 2);
        vsUAVs = new RDTreeWidget(vsUAVGroup);
        vsUAVs->setObjectName(QString::fromUtf8("vsUAVs"));
        vsUAVs->setFrameShape(QFrame::Box);
        vsUAVs->setFrameShadow(QFrame::Plain);
        vsUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsUAVs->setProperty("showDropIndicator", QVariant(false));
        vsUAVs->setRootIsDecorated(false);
        vsUAVs->setUniformRowHeights(true);
        vsUAVs->setAllColumnsShowFocus(true);
        vsUAVs->header()->setStretchLastSection(false);

        vsUAVLayout->addWidget(vsUAVs);


        verticalLayout_10->addWidget(vsUAVGroup);

        vsSamplerGroup = new CollapseGroupBox(vsScrollContents);
        vsSamplerGroup->setObjectName(QString::fromUtf8("vsSamplerGroup"));
        sizePolicy6.setHeightForWidth(vsSamplerGroup->sizePolicy().hasHeightForWidth());
        vsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_1 = new QHBoxLayout(vsSamplerGroup);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(2, 2, 2, 2);
        vsSamplers = new RDTreeWidget(vsSamplerGroup);
        vsSamplers->setObjectName(QString::fromUtf8("vsSamplers"));
        vsSamplers->setFrameShape(QFrame::Box);
        vsSamplers->setFrameShadow(QFrame::Plain);
        vsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsSamplers->setProperty("showDropIndicator", QVariant(false));
        vsSamplers->setRootIsDecorated(false);
        vsSamplers->setUniformRowHeights(true);
        vsSamplers->setAllColumnsShowFocus(true);
        vsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_1->addWidget(vsSamplers);


        verticalLayout_10->addWidget(vsSamplerGroup);

        vsCBufferGroup = new CollapseGroupBox(vsScrollContents);
        vsCBufferGroup->setObjectName(QString::fromUtf8("vsCBufferGroup"));
        sizePolicy6.setHeightForWidth(vsCBufferGroup->sizePolicy().hasHeightForWidth());
        vsCBufferGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_5 = new QHBoxLayout(vsCBufferGroup);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        vsCBuffers = new RDTreeWidget(vsCBufferGroup);
        vsCBuffers->setObjectName(QString::fromUtf8("vsCBuffers"));
        vsCBuffers->setFrameShape(QFrame::Box);
        vsCBuffers->setFrameShadow(QFrame::Plain);
        vsCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsCBuffers->setProperty("showDropIndicator", QVariant(false));
        vsCBuffers->setRootIsDecorated(false);
        vsCBuffers->setUniformRowHeights(true);
        vsCBuffers->setAllColumnsShowFocus(true);
        vsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(vsCBuffers);


        verticalLayout_10->addWidget(vsCBufferGroup);

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
        horizontalLayout_7->setSpacing(4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 4);
        hsRootSig = new RDLabel(hsShaderGroup);
        hsRootSig->setObjectName(QString::fromUtf8("hsRootSig"));
        hsRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(hsRootSig);

        hsRootSigButton = new QToolButton(hsShaderGroup);
        hsRootSigButton->setObjectName(QString::fromUtf8("hsRootSigButton"));
        hsRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        hsRootSigButton->setIcon(icon4);
        hsRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hsRootSigButton->setAutoRaise(true);

        horizontalLayout_7->addWidget(hsRootSigButton);

        hsPipeline = new RDLabel(hsShaderGroup);
        hsPipeline->setObjectName(QString::fromUtf8("hsPipeline"));
        sizePolicy5.setHeightForWidth(hsPipeline->sizePolicy().hasHeightForWidth());
        hsPipeline->setSizePolicy(sizePolicy5);
        hsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(hsPipeline);

        hsShader = new RDLabel(hsShaderGroup);
        hsShader->setObjectName(QString::fromUtf8("hsShader"));
        sizePolicy5.setHeightForWidth(hsShader->sizePolicy().hasHeightForWidth());
        hsShader->setSizePolicy(sizePolicy5);
        hsShader->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(hsShader);

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
        hsResources->setUniformRowHeights(true);
        hsResources->setAllColumnsShowFocus(true);
        hsResources->header()->setStretchLastSection(false);

        horizontalLayout_23->addWidget(hsResources);


        verticalLayout_11->addWidget(hsResGroup);

        hsUAVGroup = new CollapseGroupBox(hsScrollContents);
        hsUAVGroup->setObjectName(QString::fromUtf8("hsUAVGroup"));
        sizePolicy6.setHeightForWidth(hsUAVGroup->sizePolicy().hasHeightForWidth());
        hsUAVGroup->setSizePolicy(sizePolicy6);
        hsUAVLayout = new QHBoxLayout(hsUAVGroup);
        hsUAVLayout->setObjectName(QString::fromUtf8("hsUAVLayout"));
        hsUAVLayout->setContentsMargins(2, 2, 2, 2);
        hsUAVs = new RDTreeWidget(hsUAVGroup);
        hsUAVs->setObjectName(QString::fromUtf8("hsUAVs"));
        hsUAVs->setFrameShape(QFrame::Box);
        hsUAVs->setFrameShadow(QFrame::Plain);
        hsUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hsUAVs->setProperty("showDropIndicator", QVariant(false));
        hsUAVs->setRootIsDecorated(false);
        hsUAVs->setUniformRowHeights(true);
        hsUAVs->setAllColumnsShowFocus(true);
        hsUAVs->header()->setStretchLastSection(false);

        hsUAVLayout->addWidget(hsUAVs);


        verticalLayout_11->addWidget(hsUAVGroup);

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
        hsSamplers->setUniformRowHeights(true);
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
        hsCBuffers->setUniformRowHeights(true);
        hsCBuffers->setAllColumnsShowFocus(true);
        hsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(hsCBuffers);


        verticalLayout_11->addWidget(hsCBufferGroup);

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
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 4);
        dsRootSig = new RDLabel(dsShaderGroup);
        dsRootSig->setObjectName(QString::fromUtf8("dsRootSig"));
        dsRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(dsRootSig);

        dsRootSigButton = new QToolButton(dsShaderGroup);
        dsRootSigButton->setObjectName(QString::fromUtf8("dsRootSigButton"));
        dsRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        dsRootSigButton->setIcon(icon4);
        dsRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        dsRootSigButton->setAutoRaise(true);

        horizontalLayout_10->addWidget(dsRootSigButton);

        dsPipeline = new RDLabel(dsShaderGroup);
        dsPipeline->setObjectName(QString::fromUtf8("dsPipeline"));
        sizePolicy5.setHeightForWidth(dsPipeline->sizePolicy().hasHeightForWidth());
        dsPipeline->setSizePolicy(sizePolicy5);
        dsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(dsPipeline);

        dsShader = new RDLabel(dsShaderGroup);
        dsShader->setObjectName(QString::fromUtf8("dsShader"));
        sizePolicy5.setHeightForWidth(dsShader->sizePolicy().hasHeightForWidth());
        dsShader->setSizePolicy(sizePolicy5);
        dsShader->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(dsShader);

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
        dsResources->setUniformRowHeights(true);
        dsResources->setAllColumnsShowFocus(true);
        dsResources->header()->setStretchLastSection(false);

        horizontalLayout_12->addWidget(dsResources);


        verticalLayout_12->addWidget(dsResGroup);

        dsUAVGroup = new CollapseGroupBox(dsScrollContents);
        dsUAVGroup->setObjectName(QString::fromUtf8("dsUAVGroup"));
        sizePolicy6.setHeightForWidth(dsUAVGroup->sizePolicy().hasHeightForWidth());
        dsUAVGroup->setSizePolicy(sizePolicy6);
        dsUAVLayout = new QHBoxLayout(dsUAVGroup);
        dsUAVLayout->setObjectName(QString::fromUtf8("dsUAVLayout"));
        dsUAVLayout->setContentsMargins(2, 2, 2, 2);
        dsUAVs = new RDTreeWidget(dsUAVGroup);
        dsUAVs->setObjectName(QString::fromUtf8("dsUAVs"));
        dsUAVs->setFrameShape(QFrame::Box);
        dsUAVs->setFrameShadow(QFrame::Plain);
        dsUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dsUAVs->setProperty("showDropIndicator", QVariant(false));
        dsUAVs->setRootIsDecorated(false);
        dsUAVs->setUniformRowHeights(true);
        dsUAVs->setAllColumnsShowFocus(true);
        dsUAVs->header()->setStretchLastSection(false);

        dsUAVLayout->addWidget(dsUAVs);


        verticalLayout_12->addWidget(dsUAVGroup);

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
        dsSamplers->setUniformRowHeights(true);
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
        dsCBuffers->setUniformRowHeights(true);
        dsCBuffers->setAllColumnsShowFocus(true);
        dsCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_9->addWidget(dsCBuffers);


        verticalLayout_12->addWidget(dsCBufferGroup);

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
        horizontalLayout_13->setSpacing(4);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, 4);
        gsRootSig = new RDLabel(gsShaderGroup);
        gsRootSig->setObjectName(QString::fromUtf8("gsRootSig"));
        gsRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsRootSig);

        gsRootSigButton = new QToolButton(gsShaderGroup);
        gsRootSigButton->setObjectName(QString::fromUtf8("gsRootSigButton"));
        gsRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        gsRootSigButton->setIcon(icon4);
        gsRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        gsRootSigButton->setAutoRaise(true);

        horizontalLayout_13->addWidget(gsRootSigButton);

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
        gsResources->setUniformRowHeights(true);
        gsResources->setAllColumnsShowFocus(true);
        gsResources->header()->setStretchLastSection(false);

        horizontalLayout_20->addWidget(gsResources);


        verticalLayout_13->addWidget(gsResGroup);

        gsUAVGroup = new CollapseGroupBox(gsScrollContents);
        gsUAVGroup->setObjectName(QString::fromUtf8("gsUAVGroup"));
        sizePolicy6.setHeightForWidth(gsUAVGroup->sizePolicy().hasHeightForWidth());
        gsUAVGroup->setSizePolicy(sizePolicy6);
        gsUAVLayout = new QHBoxLayout(gsUAVGroup);
        gsUAVLayout->setObjectName(QString::fromUtf8("gsUAVLayout"));
        gsUAVLayout->setContentsMargins(2, 2, 2, 2);
        gsUAVs = new RDTreeWidget(gsUAVGroup);
        gsUAVs->setObjectName(QString::fromUtf8("gsUAVs"));
        gsUAVs->setFrameShape(QFrame::Box);
        gsUAVs->setFrameShadow(QFrame::Plain);
        gsUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsUAVs->setProperty("showDropIndicator", QVariant(false));
        gsUAVs->setRootIsDecorated(false);
        gsUAVs->setUniformRowHeights(true);
        gsUAVs->setAllColumnsShowFocus(true);
        gsUAVs->header()->setStretchLastSection(false);

        gsUAVLayout->addWidget(gsUAVs);


        verticalLayout_13->addWidget(gsUAVGroup);

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
        gsSamplers->setUniformRowHeights(true);
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
        gsCBuffers->setUniformRowHeights(true);
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

        shadingRateLabel = new QLabel(rasterizerGroup);
        shadingRateLabel->setObjectName(QString::fromUtf8("shadingRateLabel"));

        rasterizerGridLayout->addWidget(shadingRateLabel, 0, 8, 1, 1);

        baseShadingRate = new QLabel(rasterizerGroup);
        baseShadingRate->setObjectName(QString::fromUtf8("baseShadingRate"));
        baseShadingRate->setFont(font);

        rasterizerGridLayout->addWidget(baseShadingRate, 0, 9, 1, 1);

        rastHSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        rasterizerGridLayout->addItem(rastHSpacer, 0, 10, 1, 1);

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

        shadingRateCombinersLabel = new QLabel(rasterizerGroup);
        shadingRateCombinersLabel->setObjectName(QString::fromUtf8("shadingRateCombinersLabel"));

        rasterizerGridLayout->addWidget(shadingRateCombinersLabel, 1, 8, 1, 1);

        shadingRateCombiners = new QLabel(rasterizerGroup);
        shadingRateCombiners->setObjectName(QString::fromUtf8("shadingRateCombiners"));
        shadingRateCombiners->setFont(font);

        rasterizerGridLayout->addWidget(shadingRateCombiners, 1, 9, 1, 1);

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

        lineAALabel = new QLabel(rasterizerGroup);
        lineAALabel->setObjectName(QString::fromUtf8("lineAALabel"));
        lineAALabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineAALabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(lineAALabel, 2, 4, 1, 1);

        lineAA = new QLabel(rasterizerGroup);
        lineAA->setObjectName(QString::fromUtf8("lineAA"));
        lineAA->setFont(font);
        lineAA->setAlignment(Qt::AlignCenter);
        lineAA->setMargin(4);

        rasterizerGridLayout->addWidget(lineAA, 2, 5, 1, 1);

        sampleMaskLabel = new QLabel(rasterizerGroup);
        sampleMaskLabel->setObjectName(QString::fromUtf8("sampleMaskLabel"));
        sampleMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleMaskLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(sampleMaskLabel, 2, 6, 1, 1);

        sampleMask = new QLabel(rasterizerGroup);
        sampleMask->setObjectName(QString::fromUtf8("sampleMask"));
        sampleMask->setFont(font);
        sampleMask->setAlignment(Qt::AlignCenter);
        sampleMask->setMargin(4);

        rasterizerGridLayout->addWidget(sampleMask, 2, 7, 1, 1);

        shadingRateImageLabel = new QLabel(rasterizerGroup);
        shadingRateImageLabel->setObjectName(QString::fromUtf8("shadingRateImageLabel"));

        rasterizerGridLayout->addWidget(shadingRateImageLabel, 2, 8, 1, 1);

        shadingRateImage = new RDLabel(rasterizerGroup);
        shadingRateImage->setObjectName(QString::fromUtf8("shadingRateImage"));

        rasterizerGridLayout->addWidget(shadingRateImage, 2, 9, 1, 1);

        rastVSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        rasterizerGridLayout->addItem(rastVSpacer, 3, 2, 1, 1);


        gridLayout_2->addWidget(rasterizerGroup, 0, 0, 1, 2);

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


        gridLayout_2->addWidget(viewportsGroup, 1, 0, 1, 1);

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


        gridLayout_2->addWidget(scissorGroup, 1, 1, 1, 1);

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
        horizontalLayout_16->setSpacing(4);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, 0, -1, 4);
        psRootSig = new RDLabel(psShaderGroup);
        psRootSig->setObjectName(QString::fromUtf8("psRootSig"));
        psRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(psRootSig);

        psRootSigButton = new QToolButton(psShaderGroup);
        psRootSigButton->setObjectName(QString::fromUtf8("psRootSigButton"));
        psRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        psRootSigButton->setIcon(icon4);
        psRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        psRootSigButton->setAutoRaise(true);

        horizontalLayout_16->addWidget(psRootSigButton);

        psPipeline = new RDLabel(psShaderGroup);
        psPipeline->setObjectName(QString::fromUtf8("psPipeline"));
        sizePolicy5.setHeightForWidth(psPipeline->sizePolicy().hasHeightForWidth());
        psPipeline->setSizePolicy(sizePolicy5);
        psPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(psPipeline);

        psShader = new RDLabel(psShaderGroup);
        psShader->setObjectName(QString::fromUtf8("psShader"));
        sizePolicy5.setHeightForWidth(psShader->sizePolicy().hasHeightForWidth());
        psShader->setSizePolicy(sizePolicy5);
        psShader->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(psShader);

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
        psResources->setUniformRowHeights(true);
        psResources->setAllColumnsShowFocus(true);
        psResources->header()->setStretchLastSection(false);

        horizontalLayout_32->addWidget(psResources);


        verticalLayout_14->addWidget(psResGroup);

        psUAVGroup = new CollapseGroupBox(psScrollContents);
        psUAVGroup->setObjectName(QString::fromUtf8("psUAVGroup"));
        sizePolicy6.setHeightForWidth(psUAVGroup->sizePolicy().hasHeightForWidth());
        psUAVGroup->setSizePolicy(sizePolicy6);
        psUAVLayout = new QHBoxLayout(psUAVGroup);
        psUAVLayout->setObjectName(QString::fromUtf8("psUAVLayout"));
        psUAVLayout->setContentsMargins(2, 2, 2, 2);
        psUAVs = new RDTreeWidget(psUAVGroup);
        psUAVs->setObjectName(QString::fromUtf8("psUAVs"));
        psUAVs->setFrameShape(QFrame::Box);
        psUAVs->setFrameShadow(QFrame::Plain);
        psUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        psUAVs->setProperty("showDropIndicator", QVariant(false));
        psUAVs->setRootIsDecorated(false);
        psUAVs->setUniformRowHeights(true);
        psUAVs->setAllColumnsShowFocus(true);
        psUAVs->header()->setStretchLastSection(false);

        psUAVLayout->addWidget(psUAVs);


        verticalLayout_14->addWidget(psUAVGroup);

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
        psSamplers->setUniformRowHeights(true);
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
        psCBuffers->setUniformRowHeights(true);
        psCBuffers->setAllColumnsShowFocus(true);
        psCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_30->addWidget(psCBuffers);


        verticalLayout_14->addWidget(psCBufferGroup);

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
        omScrollContents->setGeometry(QRect(0, 0, 698, 318));
        gridLayout_6 = new QGridLayout(omScrollContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
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


        gridLayout_6->addWidget(outputsGroup, 0, 0, 1, 3);

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


        gridLayout_6->addWidget(blendsGroup, 1, 0, 1, 3);

        blendStateGroup = new QGroupBox(omScrollContents);
        blendStateGroup->setObjectName(QString::fromUtf8("blendStateGroup"));
        sizePolicy1.setHeightForWidth(blendStateGroup->sizePolicy().hasHeightForWidth());
        blendStateGroup->setSizePolicy(sizePolicy1);
        blendStateGridLayout = new QGridLayout(blendStateGroup);
        blendStateGridLayout->setSpacing(0);
        blendStateGridLayout->setObjectName(QString::fromUtf8("blendStateGridLayout"));
        blendStateGridLayout->setContentsMargins(2, 2, 2, 2);
        independentBlendLabel = new QLabel(blendStateGroup);
        independentBlendLabel->setObjectName(QString::fromUtf8("independentBlendLabel"));
        independentBlendLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        independentBlendLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(independentBlendLabel, 0, 0, 1, 1);

        independentBlend = new QLabel(blendStateGroup);
        independentBlend->setObjectName(QString::fromUtf8("independentBlend"));
        independentBlend->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        independentBlend->setAlignment(Qt::AlignCenter);
        independentBlend->setMargin(4);

        blendStateGridLayout->addWidget(independentBlend, 0, 1, 1, 1);

        alphaToCoverageLabel = new QLabel(blendStateGroup);
        alphaToCoverageLabel->setObjectName(QString::fromUtf8("alphaToCoverageLabel"));
        alphaToCoverageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToCoverageLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(alphaToCoverageLabel, 0, 2, 1, 1);

        alphaToCoverage = new QLabel(blendStateGroup);
        alphaToCoverage->setObjectName(QString::fromUtf8("alphaToCoverage"));
        alphaToCoverage->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToCoverage->setAlignment(Qt::AlignCenter);
        alphaToCoverage->setMargin(4);

        blendStateGridLayout->addWidget(alphaToCoverage, 0, 3, 1, 1);

        blendFactorLabel = new QLabel(blendStateGroup);
        blendFactorLabel->setObjectName(QString::fromUtf8("blendFactorLabel"));
        blendFactorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        blendFactorLabel->setWordWrap(true);

        blendStateGridLayout->addWidget(blendFactorLabel, 1, 0, 1, 1);

        blendFactor = new QLabel(blendStateGroup);
        blendFactor->setObjectName(QString::fromUtf8("blendFactor"));
        blendFactor->setFont(font);
        blendFactor->setAlignment(Qt::AlignCenter);
        blendFactor->setMargin(4);

        blendStateGridLayout->addWidget(blendFactor, 1, 1, 1, 3);


        gridLayout_6->addWidget(blendStateGroup, 2, 0, 1, 1);

        depthStateGroup = new QGroupBox(omScrollContents);
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


        gridLayout_6->addWidget(depthStateGroup, 2, 1, 1, 1);

        stencilStateGroup = new QGroupBox(omScrollContents);
        stencilStateGroup->setObjectName(QString::fromUtf8("stencilStateGroup"));
        sizePolicy1.setHeightForWidth(stencilStateGroup->sizePolicy().hasHeightForWidth());
        stencilStateGroup->setSizePolicy(sizePolicy1);
        stencilStateGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_16 = new QVBoxLayout(stencilStateGroup);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(2, 2, 2, 2);
        stencils = new RDTreeWidget(stencilStateGroup);
        stencils->setObjectName(QString::fromUtf8("stencils"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(stencils->sizePolicy().hasHeightForWidth());
        stencils->setSizePolicy(sizePolicy10);
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

        verticalLayout_16->addWidget(stencils);


        gridLayout_6->addWidget(stencilStateGroup, 2, 2, 1, 1);

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
        horizontalLayout_8 = new QHBoxLayout(csShaderGroup);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        csRootSig = new RDLabel(csShaderGroup);
        csRootSig->setObjectName(QString::fromUtf8("csRootSig"));
        csRootSig->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(csRootSig);

        csRootSigButton = new QToolButton(csShaderGroup);
        csRootSigButton->setObjectName(QString::fromUtf8("csRootSigButton"));
        csRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        csRootSigButton->setIcon(icon4);
        csRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csRootSigButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(csRootSigButton);

        csPipeline = new RDLabel(csShaderGroup);
        csPipeline->setObjectName(QString::fromUtf8("csPipeline"));
        sizePolicy5.setHeightForWidth(csPipeline->sizePolicy().hasHeightForWidth());
        csPipeline->setSizePolicy(sizePolicy5);
        csPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(csPipeline);

        csShader = new RDLabel(csShaderGroup);
        csShader->setObjectName(QString::fromUtf8("csShader"));
        sizePolicy5.setHeightForWidth(csShader->sizePolicy().hasHeightForWidth());
        csShader->setSizePolicy(sizePolicy5);
        csShader->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(csShader);

        csShaderViewButton = new QToolButton(csShaderGroup);
        csShaderViewButton->setObjectName(QString::fromUtf8("csShaderViewButton"));
        csShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        csShaderViewButton->setIcon(icon4);
        csShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderViewButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(csShaderViewButton);

        csShaderEditButton = new QToolButton(csShaderGroup);
        csShaderEditButton->setObjectName(QString::fromUtf8("csShaderEditButton"));
        csShaderEditButton->setIcon(icon5);
        csShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        csShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderEditButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(csShaderEditButton);

        csShaderSaveButton = new QToolButton(csShaderGroup);
        csShaderSaveButton->setObjectName(QString::fromUtf8("csShaderSaveButton"));
        csShaderSaveButton->setIcon(icon2);
        csShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        csShaderSaveButton->setAutoRaise(true);

        horizontalLayout_8->addWidget(csShaderSaveButton);

        computeDebugSelector = new QToolButton(csShaderGroup);
        computeDebugSelector->setObjectName(QString::fromUtf8("computeDebugSelector"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        computeDebugSelector->setIcon(icon6);
        computeDebugSelector->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        computeDebugSelector->setAutoRaise(true);

        horizontalLayout_8->addWidget(computeDebugSelector);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_9->addWidget(csShaderGroup);

        csScroll = new QScrollArea(CS);
        csScroll->setObjectName(QString::fromUtf8("csScroll"));
        csScroll->setFrameShape(QFrame::NoFrame);
        csScroll->setWidgetResizable(true);
        csScrollContents = new QWidget();
        csScrollContents->setObjectName(QString::fromUtf8("csScrollContents"));
        csScrollContents->setGeometry(QRect(0, 0, 868, 452));
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
        csResources->setUniformRowHeights(true);
        csResources->setAllColumnsShowFocus(true);
        csResources->header()->setStretchLastSection(false);

        horizontalLayout_37->addWidget(csResources);


        verticalLayout_15->addWidget(csResGroup);

        csUAVGroup = new CollapseGroupBox(csScrollContents);
        csUAVGroup->setObjectName(QString::fromUtf8("csUAVGroup"));
        sizePolicy6.setHeightForWidth(csUAVGroup->sizePolicy().hasHeightForWidth());
        csUAVGroup->setSizePolicy(sizePolicy6);
        csUAVLayout = new QHBoxLayout(csUAVGroup);
        csUAVLayout->setObjectName(QString::fromUtf8("csUAVLayout"));
        csUAVLayout->setContentsMargins(2, 2, 2, 2);
        csUAVs = new RDTreeWidget(csUAVGroup);
        csUAVs->setObjectName(QString::fromUtf8("csUAVs"));
        csUAVs->setFrameShape(QFrame::Box);
        csUAVs->setFrameShadow(QFrame::Plain);
        csUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csUAVs->setProperty("showDropIndicator", QVariant(false));
        csUAVs->setRootIsDecorated(false);
        csUAVs->setUniformRowHeights(true);
        csUAVs->setAllColumnsShowFocus(true);
        csUAVs->header()->setStretchLastSection(false);

        csUAVLayout->addWidget(csUAVs);


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
        csSamplers->setUniformRowHeights(true);
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
        csCBuffers->setUniformRowHeights(true);
        csCBuffers->setAllColumnsShowFocus(true);
        csCBuffers->header()->setStretchLastSection(false);

        horizontalLayout_35->addWidget(csCBuffers);


        verticalLayout_15->addWidget(csCBufferGroup);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_6);

        csScroll->setWidget(csScrollContents);

        verticalLayout_9->addWidget(csScroll);

        stagesTabs->addTab(CS, QString());
        AS = new QWidget();
        AS->setObjectName(QString::fromUtf8("AS"));
        asverticalLayout = new QVBoxLayout(AS);
        asverticalLayout->setObjectName(QString::fromUtf8("asverticalLayout"));
        asverticalLayout->setContentsMargins(0, 0, 0, 0);
        asShaderGroup = new QGroupBox(AS);
        asShaderGroup->setObjectName(QString::fromUtf8("asShaderGroup"));
        sizePolicy4.setHeightForWidth(asShaderGroup->sizePolicy().hasHeightForWidth());
        asShaderGroup->setSizePolicy(sizePolicy4);
        asHorizontalLayout1 = new QHBoxLayout(asShaderGroup);
        asHorizontalLayout1->setSpacing(0);
        asHorizontalLayout1->setObjectName(QString::fromUtf8("asHorizontalLayout1"));
        asRootSig = new RDLabel(asShaderGroup);
        asRootSig->setObjectName(QString::fromUtf8("asRootSig"));
        asRootSig->setFrameShape(QFrame::Box);

        asHorizontalLayout1->addWidget(asRootSig);

        asRootSigButton = new QToolButton(asShaderGroup);
        asRootSigButton->setObjectName(QString::fromUtf8("asRootSigButton"));
        asRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        asRootSigButton->setIcon(icon4);
        asRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        asRootSigButton->setAutoRaise(true);

        asHorizontalLayout1->addWidget(asRootSigButton);

        asPipeline = new RDLabel(asShaderGroup);
        asPipeline->setObjectName(QString::fromUtf8("asPipeline"));
        sizePolicy5.setHeightForWidth(asPipeline->sizePolicy().hasHeightForWidth());
        asPipeline->setSizePolicy(sizePolicy5);
        asPipeline->setFrameShape(QFrame::Box);

        asHorizontalLayout1->addWidget(asPipeline);

        asShader = new RDLabel(asShaderGroup);
        asShader->setObjectName(QString::fromUtf8("asShader"));
        sizePolicy5.setHeightForWidth(asShader->sizePolicy().hasHeightForWidth());
        asShader->setSizePolicy(sizePolicy5);
        asShader->setFrameShape(QFrame::Box);

        asHorizontalLayout1->addWidget(asShader);

        asShaderViewButton = new QToolButton(asShaderGroup);
        asShaderViewButton->setObjectName(QString::fromUtf8("asShaderViewButton"));
        asShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        asShaderViewButton->setIcon(icon4);
        asShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        asShaderViewButton->setAutoRaise(true);

        asHorizontalLayout1->addWidget(asShaderViewButton);

        asShaderEditButton = new QToolButton(asShaderGroup);
        asShaderEditButton->setObjectName(QString::fromUtf8("asShaderEditButton"));
        asShaderEditButton->setIcon(icon5);
        asShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        asShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        asShaderEditButton->setAutoRaise(true);

        asHorizontalLayout1->addWidget(asShaderEditButton);

        asShaderSaveButton = new QToolButton(asShaderGroup);
        asShaderSaveButton->setObjectName(QString::fromUtf8("asShaderSaveButton"));
        asShaderSaveButton->setIcon(icon2);
        asShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        asShaderSaveButton->setAutoRaise(true);

        asHorizontalLayout1->addWidget(asShaderSaveButton);

        asHorizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        asHorizontalLayout1->addItem(asHorizontalSpacer1);


        asverticalLayout->addWidget(asShaderGroup);

        asScroll = new QScrollArea(AS);
        asScroll->setObjectName(QString::fromUtf8("asScroll"));
        asScroll->setFrameShape(QFrame::NoFrame);
        asScroll->setWidgetResizable(true);
        asScrollContents = new QWidget();
        asScrollContents->setObjectName(QString::fromUtf8("asScrollContents"));
        asScrollContents->setGeometry(QRect(0, 0, 868, 452));
        asVerticalLayout3 = new QVBoxLayout(asScrollContents);
        asVerticalLayout3->setObjectName(QString::fromUtf8("asVerticalLayout3"));
        asVerticalLayout3->setContentsMargins(0, 0, 0, 0);
        asResGroup = new CollapseGroupBox(asScrollContents);
        asResGroup->setObjectName(QString::fromUtf8("asResGroup"));
        sizePolicy6.setHeightForWidth(asResGroup->sizePolicy().hasHeightForWidth());
        asResGroup->setSizePolicy(sizePolicy6);
        asHorizontalLayout4 = new QHBoxLayout(asResGroup);
        asHorizontalLayout4->setObjectName(QString::fromUtf8("asHorizontalLayout4"));
        asHorizontalLayout4->setContentsMargins(2, 2, 2, 2);
        asResources = new RDTreeWidget(asResGroup);
        asResources->setObjectName(QString::fromUtf8("asResources"));
        asResources->setFrameShape(QFrame::Box);
        asResources->setFrameShadow(QFrame::Plain);
        asResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        asResources->setProperty("showDropIndicator", QVariant(false));
        asResources->setRootIsDecorated(false);
        asResources->setUniformRowHeights(true);
        asResources->setAllColumnsShowFocus(true);
        asResources->header()->setStretchLastSection(false);

        asHorizontalLayout4->addWidget(asResources);


        asVerticalLayout3->addWidget(asResGroup);

        asUAVGroup = new CollapseGroupBox(asScrollContents);
        asUAVGroup->setObjectName(QString::fromUtf8("asUAVGroup"));
        sizePolicy6.setHeightForWidth(asUAVGroup->sizePolicy().hasHeightForWidth());
        asUAVGroup->setSizePolicy(sizePolicy6);
        asUAVLayout = new QHBoxLayout(asUAVGroup);
        asUAVLayout->setObjectName(QString::fromUtf8("asUAVLayout"));
        asUAVLayout->setContentsMargins(2, 2, 2, 2);
        asUAVs = new RDTreeWidget(asUAVGroup);
        asUAVs->setObjectName(QString::fromUtf8("asUAVs"));
        asUAVs->setFrameShape(QFrame::Box);
        asUAVs->setFrameShadow(QFrame::Plain);
        asUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        asUAVs->setProperty("showDropIndicator", QVariant(false));
        asUAVs->setRootIsDecorated(false);
        asUAVs->setUniformRowHeights(true);
        asUAVs->setAllColumnsShowFocus(true);
        asUAVs->header()->setStretchLastSection(false);

        asUAVLayout->addWidget(asUAVs);


        asVerticalLayout3->addWidget(asUAVGroup);

        asSamplerGroup = new CollapseGroupBox(asScrollContents);
        asSamplerGroup->setObjectName(QString::fromUtf8("asSamplerGroup"));
        sizePolicy6.setHeightForWidth(asSamplerGroup->sizePolicy().hasHeightForWidth());
        asSamplerGroup->setSizePolicy(sizePolicy6);
        asHorizontalLayout5 = new QHBoxLayout(asSamplerGroup);
        asHorizontalLayout5->setObjectName(QString::fromUtf8("asHorizontalLayout5"));
        asHorizontalLayout5->setContentsMargins(2, 2, 2, 2);
        asSamplers = new RDTreeWidget(asSamplerGroup);
        asSamplers->setObjectName(QString::fromUtf8("asSamplers"));
        asSamplers->setFrameShape(QFrame::Box);
        asSamplers->setFrameShadow(QFrame::Plain);
        asSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        asSamplers->setProperty("showDropIndicator", QVariant(false));
        asSamplers->setRootIsDecorated(false);
        asSamplers->setUniformRowHeights(true);
        asSamplers->setAllColumnsShowFocus(true);
        asSamplers->header()->setStretchLastSection(false);

        asHorizontalLayout5->addWidget(asSamplers);


        asVerticalLayout3->addWidget(asSamplerGroup);

        asCBufferGroup = new CollapseGroupBox(asScrollContents);
        asCBufferGroup->setObjectName(QString::fromUtf8("asCBufferGroup"));
        sizePolicy6.setHeightForWidth(asCBufferGroup->sizePolicy().hasHeightForWidth());
        asCBufferGroup->setSizePolicy(sizePolicy6);
        asHorizontalLayout6 = new QHBoxLayout(asCBufferGroup);
        asHorizontalLayout6->setObjectName(QString::fromUtf8("asHorizontalLayout6"));
        asHorizontalLayout6->setContentsMargins(2, 2, 2, 2);
        asCBuffers = new RDTreeWidget(asCBufferGroup);
        asCBuffers->setObjectName(QString::fromUtf8("asCBuffers"));
        asCBuffers->setFrameShape(QFrame::Box);
        asCBuffers->setFrameShadow(QFrame::Plain);
        asCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        asCBuffers->setProperty("showDropIndicator", QVariant(false));
        asCBuffers->setRootIsDecorated(false);
        asCBuffers->setUniformRowHeights(true);
        asCBuffers->setAllColumnsShowFocus(true);
        asCBuffers->header()->setStretchLastSection(false);

        asHorizontalLayout6->addWidget(asCBuffers);


        asVerticalLayout3->addWidget(asCBufferGroup);

        asVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        asVerticalLayout3->addItem(asVerticalSpacer);

        asScroll->setWidget(asScrollContents);

        asverticalLayout->addWidget(asScroll);

        stagesTabs->addTab(AS, QString());
        MS = new QWidget();
        MS->setObjectName(QString::fromUtf8("MS"));
        msverticalLayout = new QVBoxLayout(MS);
        msverticalLayout->setObjectName(QString::fromUtf8("msverticalLayout"));
        msverticalLayout->setContentsMargins(0, 0, 0, 0);
        msShaderGroup = new QGroupBox(MS);
        msShaderGroup->setObjectName(QString::fromUtf8("msShaderGroup"));
        sizePolicy4.setHeightForWidth(msShaderGroup->sizePolicy().hasHeightForWidth());
        msShaderGroup->setSizePolicy(sizePolicy4);
        msHorizontalLayout1 = new QHBoxLayout(msShaderGroup);
        msHorizontalLayout1->setSpacing(0);
        msHorizontalLayout1->setObjectName(QString::fromUtf8("msHorizontalLayout1"));
        msRootSig = new RDLabel(msShaderGroup);
        msRootSig->setObjectName(QString::fromUtf8("msRootSig"));
        msRootSig->setFrameShape(QFrame::Box);

        msHorizontalLayout1->addWidget(msRootSig);

        msRootSigButton = new QToolButton(msShaderGroup);
        msRootSigButton->setObjectName(QString::fromUtf8("msRootSigButton"));
        msRootSigButton->setCursor(QCursor(Qt::PointingHandCursor));
        msRootSigButton->setIcon(icon4);
        msRootSigButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msRootSigButton->setAutoRaise(true);

        msHorizontalLayout1->addWidget(msRootSigButton);

        msPipeline = new RDLabel(msShaderGroup);
        msPipeline->setObjectName(QString::fromUtf8("msPipeline"));
        sizePolicy5.setHeightForWidth(msPipeline->sizePolicy().hasHeightForWidth());
        msPipeline->setSizePolicy(sizePolicy5);
        msPipeline->setFrameShape(QFrame::Box);

        msHorizontalLayout1->addWidget(msPipeline);

        msShader = new RDLabel(msShaderGroup);
        msShader->setObjectName(QString::fromUtf8("msShader"));
        sizePolicy5.setHeightForWidth(msShader->sizePolicy().hasHeightForWidth());
        msShader->setSizePolicy(sizePolicy5);
        msShader->setFrameShape(QFrame::Box);

        msHorizontalLayout1->addWidget(msShader);

        msShaderViewButton = new QToolButton(msShaderGroup);
        msShaderViewButton->setObjectName(QString::fromUtf8("msShaderViewButton"));
        msShaderViewButton->setCursor(QCursor(Qt::PointingHandCursor));
        msShaderViewButton->setIcon(icon4);
        msShaderViewButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderViewButton->setAutoRaise(true);

        msHorizontalLayout1->addWidget(msShaderViewButton);

        msShaderEditButton = new QToolButton(msShaderGroup);
        msShaderEditButton->setObjectName(QString::fromUtf8("msShaderEditButton"));
        msShaderEditButton->setIcon(icon5);
        msShaderEditButton->setPopupMode(QToolButton::MenuButtonPopup);
        msShaderEditButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderEditButton->setAutoRaise(true);

        msHorizontalLayout1->addWidget(msShaderEditButton);

        msShaderSaveButton = new QToolButton(msShaderGroup);
        msShaderSaveButton->setObjectName(QString::fromUtf8("msShaderSaveButton"));
        msShaderSaveButton->setIcon(icon2);
        msShaderSaveButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msShaderSaveButton->setAutoRaise(true);

        msHorizontalLayout1->addWidget(msShaderSaveButton);

        msMeshButton = new QToolButton(msShaderGroup);
        msMeshButton->setObjectName(QString::fromUtf8("msMeshButton"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/draw_vertex.png"), QSize(), QIcon::Normal, QIcon::Off);
        msMeshButton->setIcon(icon7);
        msMeshButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        msMeshButton->setAutoRaise(true);

        msHorizontalLayout1->addWidget(msMeshButton);

        msTopoLabel = new QLabel(msShaderGroup);
        msTopoLabel->setObjectName(QString::fromUtf8("msTopoLabel"));

        msHorizontalLayout1->addWidget(msTopoLabel);

        msTopology = new QLabel(msShaderGroup);
        msTopology->setObjectName(QString::fromUtf8("msTopology"));

        msHorizontalLayout1->addWidget(msTopology);

        msHorizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        msHorizontalLayout1->addItem(msHorizontalSpacer1);


        msverticalLayout->addWidget(msShaderGroup);

        msScroll = new QScrollArea(MS);
        msScroll->setObjectName(QString::fromUtf8("msScroll"));
        msScroll->setFrameShape(QFrame::NoFrame);
        msScroll->setWidgetResizable(true);
        msScrollContents = new QWidget();
        msScrollContents->setObjectName(QString::fromUtf8("msScrollContents"));
        msScrollContents->setGeometry(QRect(0, 0, 868, 452));
        msVerticalLayout3 = new QVBoxLayout(msScrollContents);
        msVerticalLayout3->setObjectName(QString::fromUtf8("msVerticalLayout3"));
        msVerticalLayout3->setContentsMargins(0, 0, 0, 0);
        msResGroup = new CollapseGroupBox(msScrollContents);
        msResGroup->setObjectName(QString::fromUtf8("msResGroup"));
        sizePolicy6.setHeightForWidth(msResGroup->sizePolicy().hasHeightForWidth());
        msResGroup->setSizePolicy(sizePolicy6);
        msHorizontalLayout4 = new QHBoxLayout(msResGroup);
        msHorizontalLayout4->setObjectName(QString::fromUtf8("msHorizontalLayout4"));
        msHorizontalLayout4->setContentsMargins(2, 2, 2, 2);
        msResources = new RDTreeWidget(msResGroup);
        msResources->setObjectName(QString::fromUtf8("msResources"));
        msResources->setFrameShape(QFrame::Box);
        msResources->setFrameShadow(QFrame::Plain);
        msResources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msResources->setProperty("showDropIndicator", QVariant(false));
        msResources->setRootIsDecorated(false);
        msResources->setUniformRowHeights(true);
        msResources->setAllColumnsShowFocus(true);
        msResources->header()->setStretchLastSection(false);

        msHorizontalLayout4->addWidget(msResources);


        msVerticalLayout3->addWidget(msResGroup);

        msUAVGroup = new CollapseGroupBox(msScrollContents);
        msUAVGroup->setObjectName(QString::fromUtf8("msUAVGroup"));
        sizePolicy6.setHeightForWidth(msUAVGroup->sizePolicy().hasHeightForWidth());
        msUAVGroup->setSizePolicy(sizePolicy6);
        msUAVLayout = new QHBoxLayout(msUAVGroup);
        msUAVLayout->setObjectName(QString::fromUtf8("msUAVLayout"));
        msUAVLayout->setContentsMargins(2, 2, 2, 2);
        msUAVs = new RDTreeWidget(msUAVGroup);
        msUAVs->setObjectName(QString::fromUtf8("msUAVs"));
        msUAVs->setFrameShape(QFrame::Box);
        msUAVs->setFrameShadow(QFrame::Plain);
        msUAVs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msUAVs->setProperty("showDropIndicator", QVariant(false));
        msUAVs->setRootIsDecorated(false);
        msUAVs->setUniformRowHeights(true);
        msUAVs->setAllColumnsShowFocus(true);
        msUAVs->header()->setStretchLastSection(false);

        msUAVLayout->addWidget(msUAVs);


        msVerticalLayout3->addWidget(msUAVGroup);

        msSamplerGroup = new CollapseGroupBox(msScrollContents);
        msSamplerGroup->setObjectName(QString::fromUtf8("msSamplerGroup"));
        sizePolicy6.setHeightForWidth(msSamplerGroup->sizePolicy().hasHeightForWidth());
        msSamplerGroup->setSizePolicy(sizePolicy6);
        msHorizontalLayout5 = new QHBoxLayout(msSamplerGroup);
        msHorizontalLayout5->setObjectName(QString::fromUtf8("msHorizontalLayout5"));
        msHorizontalLayout5->setContentsMargins(2, 2, 2, 2);
        msSamplers = new RDTreeWidget(msSamplerGroup);
        msSamplers->setObjectName(QString::fromUtf8("msSamplers"));
        msSamplers->setFrameShape(QFrame::Box);
        msSamplers->setFrameShadow(QFrame::Plain);
        msSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msSamplers->setProperty("showDropIndicator", QVariant(false));
        msSamplers->setRootIsDecorated(false);
        msSamplers->setUniformRowHeights(true);
        msSamplers->setAllColumnsShowFocus(true);
        msSamplers->header()->setStretchLastSection(false);

        msHorizontalLayout5->addWidget(msSamplers);


        msVerticalLayout3->addWidget(msSamplerGroup);

        msCBufferGroup = new CollapseGroupBox(msScrollContents);
        msCBufferGroup->setObjectName(QString::fromUtf8("msCBufferGroup"));
        sizePolicy6.setHeightForWidth(msCBufferGroup->sizePolicy().hasHeightForWidth());
        msCBufferGroup->setSizePolicy(sizePolicy6);
        msHorizontalLayout6 = new QHBoxLayout(msCBufferGroup);
        msHorizontalLayout6->setObjectName(QString::fromUtf8("msHorizontalLayout6"));
        msHorizontalLayout6->setContentsMargins(2, 2, 2, 2);
        msCBuffers = new RDTreeWidget(msCBufferGroup);
        msCBuffers->setObjectName(QString::fromUtf8("msCBuffers"));
        msCBuffers->setFrameShape(QFrame::Box);
        msCBuffers->setFrameShadow(QFrame::Plain);
        msCBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        msCBuffers->setProperty("showDropIndicator", QVariant(false));
        msCBuffers->setRootIsDecorated(false);
        msCBuffers->setUniformRowHeights(true);
        msCBuffers->setAllColumnsShowFocus(true);
        msCBuffers->header()->setStretchLastSection(false);

        msHorizontalLayout6->addWidget(msCBuffers);


        msVerticalLayout3->addWidget(msCBufferGroup);

        msVerticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        msVerticalLayout3->addItem(msVerticalSpacer);

        msScroll->setWidget(msScrollContents);

        msverticalLayout->addWidget(msScroll);

        stagesTabs->addTab(MS, QString());

        verticalLayout->addWidget(stagesTabs);


        retranslateUi(D3D12PipelineStateViewer);

        stagesTabs->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(D3D12PipelineStateViewer);
    } // setupUi

    void retranslateUi(QFrame *D3D12PipelineStateViewer)
    {
        controlsLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        showUnused->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Show items that are bound but not currently used by the pipeline.", nullptr));
#endif // QT_CONFIG(tooltip)
        showUnused->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Show Unused Items", nullptr));
#if QT_CONFIG(tooltip)
        showEmpty->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Show pipeline bindings which are completely empty and have nothing bound", nullptr));
#endif // QT_CONFIG(tooltip)
        showEmpty->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Show Empty Items", nullptr));
#if QT_CONFIG(tooltip)
        exportHTML->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Export the current pipeline state to an HTML file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportHTML->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Export", nullptr));
        extensions->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Extensions", nullptr));
        attribGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Input Layouts", nullptr));
        buffersGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Buffers", nullptr));
        meshViewGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Mesh View", nullptr));
#if QT_CONFIG(tooltip)
        meshView->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "View the mesh input data", nullptr));
#endif // QT_CONFIG(tooltip)
        topologyGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Primitive Topology", nullptr));
        topology->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Triangle List", nullptr));
        topologyDiagram->setText(QString());
        primRestart->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Restart Idx: 0xFFFFFFFF", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(IA), QCoreApplication::translate("D3D12PipelineStateViewer", "Input Assembly", nullptr));
        vsShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        vsRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        vsRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        vsResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        vsUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        vsSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        vsCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VS), QCoreApplication::translate("D3D12PipelineStateViewer", "Vertex Shader", nullptr));
        hsShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        hsRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        hsRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        hsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        hsShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        hsResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        hsUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        hsSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        hsCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(HS), QCoreApplication::translate("D3D12PipelineStateViewer", "Hull Shader", nullptr));
        dsShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        dsRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        dsRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        dsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        dsShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        dsResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        dsUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        dsSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        dsCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(DS), QCoreApplication::translate("D3D12PipelineStateViewer", "Domain Shader", nullptr));
        gsShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        gsRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        gsRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        gsResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        gsUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        gsSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        gsCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        soGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Stream Out", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(GS), QCoreApplication::translate("D3D12PipelineStateViewer", "Geometry Shader", nullptr));
        rasterizerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Rasterizer State", nullptr));
        fillModeLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Fill Mode:", nullptr));
        fillMode->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Solid", nullptr));
        cullModeLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Cull Mode:", nullptr));
        cullMode->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "None", nullptr));
        frontCCWLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Front CCW:", nullptr));
        frontCCW->setText(QString());
        conservativeRasterLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Conservative Raster:", nullptr));
        conservativeRaster->setText(QString());
        shadingRateLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Base Shading Rate:", nullptr));
        baseShadingRate->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "1x1", nullptr));
        depthBiasLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Depth Bias:", nullptr));
        depthBias->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "0.00", nullptr));
        depthBiasClampLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Depth Bias Clamp:", nullptr));
        depthBiasClamp->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "0.00", nullptr));
        slopeScaledBiasLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Slope-Scaled Bias:", nullptr));
        slopeScaledBias->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "0.00", nullptr));
        forcedSampleCountLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Forced Sample Count:", nullptr));
        forcedSampleCount->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "0", nullptr));
        shadingRateCombinersLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Shading Rate Combiners:", nullptr));
        shadingRateCombiners->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Keep, Keep", nullptr));
        depthClipLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Depth Clip:", nullptr));
        depthClip->setText(QString());
        lineAALabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Line AA:", nullptr));
        lineAA->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Quadrilateral", nullptr));
        sampleMaskLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Sample Mask:", nullptr));
        sampleMask->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "FFFFFFFF", nullptr));
        shadingRateImageLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Shading Rate Image:", nullptr));
        viewportsGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Viewports", nullptr));
        scissorGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Scissor Regions", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(RS), QCoreApplication::translate("D3D12PipelineStateViewer", "Rasterizer", nullptr));
        psShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        psRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        psRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        psShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        psShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        psShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        psShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        psResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        psUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        psSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        psCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(PS), QCoreApplication::translate("D3D12PipelineStateViewer", "Pixel Shader", nullptr));
        outputsGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Render Targets", nullptr));
        blendsGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Target Blends", nullptr));
        blendStateGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Blend State", nullptr));
        independentBlendLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Independent Blend:", nullptr));
        independentBlend->setText(QString());
        alphaToCoverageLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Alpha to Coverage:", nullptr));
        alphaToCoverage->setText(QString());
        blendFactorLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Blend Factor:", nullptr));
        blendFactor->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "0.00, 0.00, 0.00, 0.00", nullptr));
        depthStateGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Depth State", nullptr));
        depthEnabledLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Enabled:", nullptr));
        depthEnabled->setText(QString());
        depthFuncLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Func:", nullptr));
        depthFunc->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "GREATER_EQUAL", nullptr));
        depthWriteLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Write:", nullptr));
        depthWrite->setText(QString());
        depthBoundsLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Bounds:", nullptr));
        depthBounds->setText(QString());
        stencilStateGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Stencil State", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(OM), QCoreApplication::translate("D3D12PipelineStateViewer", "Output Merger", nullptr));
        csShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        csRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        csRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        csShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        csShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        csShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        computeDebugSelector->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Debug", nullptr));
        csResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        csUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        csSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        csCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(CS), QCoreApplication::translate("D3D12PipelineStateViewer", "Compute Shader", nullptr));
        asShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        asRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        asRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        asShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        asShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        asShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        asShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        asShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        asShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
        asResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        asUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        asSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        asCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(AS), QCoreApplication::translate("D3D12PipelineStateViewer", "Amplification Shader", nullptr));
        msShaderGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Root Signature && Shader", nullptr));
#if QT_CONFIG(tooltip)
        msRootSigButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Root Signature View", nullptr));
#endif // QT_CONFIG(tooltip)
        msRootSigButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        msShaderViewButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderViewButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        msShaderEditButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderEditButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        msShaderSaveButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "Save Shader DXBC", nullptr));
#endif // QT_CONFIG(tooltip)
        msShaderSaveButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "Save", nullptr));
#if QT_CONFIG(tooltip)
        msMeshButton->setToolTip(QCoreApplication::translate("D3D12PipelineStateViewer", "View Mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        msMeshButton->setText(QCoreApplication::translate("D3D12PipelineStateViewer", "View Mesh", nullptr));
        msTopoLabel->setText(QCoreApplication::translate("D3D12PipelineStateViewer", " Output Topology: ", nullptr));
        msTopology->setText(QString());
        msResGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Resources", nullptr));
        msUAVGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "UAVs", nullptr));
        msSamplerGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Samplers", nullptr));
        msCBufferGroup->setTitle(QCoreApplication::translate("D3D12PipelineStateViewer", "Constant Buffers", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(MS), QCoreApplication::translate("D3D12PipelineStateViewer", "Mesh Shader", nullptr));
        (void)D3D12PipelineStateViewer;
    } // retranslateUi

};

namespace Ui {
    class D3D12PipelineStateViewer: public Ui_D3D12PipelineStateViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_D3D12PIPELINESTATEVIEWER_H
