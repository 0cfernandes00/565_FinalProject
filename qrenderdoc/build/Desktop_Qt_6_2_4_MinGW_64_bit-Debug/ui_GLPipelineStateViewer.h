/********************************************************************************
** Form generated from reading UI file 'GLPipelineStateViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLPIPELINESTATEVIEWER_H
#define UI_GLPIPELINESTATEVIEWER_H

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

class Ui_GLPipelineStateViewer
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
    QWidget *VTX;
    QGridLayout *gridLayout;
    QScrollArea *vtxScroll;
    QWidget *vtxScrollContents;
    QGridLayout *gridLayout_6;
    QGroupBox *attribGroup;
    QHBoxLayout *horizontalLayout_2;
    RDTreeWidget *viAttrs;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_42;
    RDLabel *vaoLabel;
    QSpacerItem *horizontalSpacer_4;
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
    RDLabel *vsProgram;
    RDLabel *vsShader;
    QToolButton *vsShaderViewButton;
    QToolButton *vsShaderEditButton;
    QToolButton *vsShaderSaveButton;
    QSpacerItem *vsShaderSpacer;
    QScrollArea *vsScroll;
    QWidget *vsScrollContents;
    QVBoxLayout *verticalLayout_16;
    CollapseGroupBox *vsTexGroup;
    QHBoxLayout *horizontalLayout_4;
    RDTreeWidget *vsTextures;
    CollapseGroupBox *vsSamplerGroup;
    QHBoxLayout *horizontalLayout_1;
    RDTreeWidget *vsSamplers;
    CollapseGroupBox *vsUBOGroup;
    QHBoxLayout *horizontalLayout_5;
    RDTreeWidget *vsUBOs;
    CollapseGroupBox *vsReadWriteGroup;
    QHBoxLayout *horizontalLayout_17;
    RDTreeWidget *vsReadWrite;
    CollapseGroupBox *vsSubroutineGroup;
    QHBoxLayout *horizontalLayout_40;
    RDTreeWidget *vsSubroutines;
    QSpacerItem *verticalSpacer_2;
    QWidget *TCS;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *tcsShaderGroup;
    QHBoxLayout *horizontalLayout_7;
    RDLabel *tcsPipeline;
    RDLabel *tcsProgram;
    RDLabel *tcsShader;
    QToolButton *tcsShaderViewButton;
    QToolButton *tcsShaderEditButton;
    QToolButton *tcsShaderSaveButton;
    QSpacerItem *tcsShaderSpacer;
    QScrollArea *tcsScroll;
    QWidget *tcsScrollContents;
    QVBoxLayout *verticalLayout_15;
    CollapseGroupBox *tcsTexGroup;
    QHBoxLayout *horizontalLayout_23;
    RDTreeWidget *tcsTextures;
    CollapseGroupBox *tcsSamplerGroup;
    QHBoxLayout *horizontalLayout_26;
    RDTreeWidget *tcsSamplers;
    CollapseGroupBox *tcsUBOGroup;
    QHBoxLayout *horizontalLayout_6;
    RDTreeWidget *tcsUBOs;
    CollapseGroupBox *tcsReadWriteGroup;
    QHBoxLayout *horizontalLayout_27;
    RDTreeWidget *tcsReadWrite;
    CollapseGroupBox *tcsSubroutineGroup;
    QHBoxLayout *horizontalLayout_8;
    RDTreeWidget *tcsSubroutines;
    QSpacerItem *verticalSpacer_3;
    QWidget *TES;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *tesShaderGroup;
    QHBoxLayout *horizontalLayout_10;
    RDLabel *tesPipeline;
    RDLabel *tesProgram;
    RDLabel *tesShader;
    QToolButton *tesShaderViewButton;
    QToolButton *tesShaderEditButton;
    QToolButton *tesShaderSaveButton;
    QSpacerItem *tesShaderSpacer;
    QScrollArea *tesScroll;
    QWidget *tesScrollContents;
    QVBoxLayout *verticalLayout_14;
    CollapseGroupBox *tesTexGroup;
    QHBoxLayout *horizontalLayout_12;
    RDTreeWidget *tesTextures;
    CollapseGroupBox *tesSamplerGroup;
    QHBoxLayout *horizontalLayout_14;
    RDTreeWidget *tesSamplers;
    CollapseGroupBox *tesUBOGroup;
    QHBoxLayout *horizontalLayout_9;
    RDTreeWidget *tesUBOs;
    CollapseGroupBox *tesReadWriteGroup;
    QHBoxLayout *horizontalLayout_15;
    RDTreeWidget *tesReadWrite;
    CollapseGroupBox *tesSubroutineGroup;
    QHBoxLayout *horizontalLayout_11;
    RDTreeWidget *tesSubroutines;
    QSpacerItem *verticalSpacer_4;
    QWidget *GS;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *gsShaderGroup;
    QHBoxLayout *horizontalLayout_13;
    RDLabel *gsPipeline;
    RDLabel *gsProgram;
    RDLabel *gsShader;
    QToolButton *gsShaderViewButton;
    QToolButton *gsShaderEditButton;
    QToolButton *gsShaderSaveButton;
    QSpacerItem *gsShaderSpacer;
    QScrollArea *gsScroll;
    QWidget *gsScrollContents;
    QVBoxLayout *verticalLayout_13;
    CollapseGroupBox *gsTexGroup;
    QHBoxLayout *horizontalLayout_20;
    RDTreeWidget *gsTextures;
    CollapseGroupBox *gsSamplerGroup;
    QHBoxLayout *horizontalLayout_28;
    RDTreeWidget *gsSamplers;
    CollapseGroupBox *gsUBOGroup;
    QHBoxLayout *horizontalLayout_41;
    RDTreeWidget *gsUBOs;
    CollapseGroupBox *xfbGroup;
    QGridLayout *gridLayout_3;
    QHBoxLayout *xfbPaused_HLayout;
    RDLabel *xfbObj;
    QLabel *xfbPausedLabel;
    QLabel *xfbPaused;
    QSpacerItem *horizontalSpacer_2;
    RDTreeWidget *xfbBuffers;
    CollapseGroupBox *gsReadWriteGroup;
    QHBoxLayout *horizontalLayout_29;
    RDTreeWidget *gsReadWrite;
    CollapseGroupBox *gsSubroutineGroup;
    QHBoxLayout *horizontalLayout_18;
    RDTreeWidget *gsSubroutines;
    QSpacerItem *verticalSpacer_5;
    QWidget *RS;
    QGridLayout *gridLayout_2;
    QGroupBox *rasterizerGroup;
    QGridLayout *rasterizerGridLayout;
    QLabel *fillModeLabel;
    QLabel *fillMode;
    QLabel *cullModeLabel;
    QLabel *cullMode;
    QLabel *rasterizerDiscardLabel;
    QLabel *rasterizerDiscard;
    QLabel *frontFaceLabel;
    QLabel *frontFace;
    QLabel *depthBiasLabel;
    QLabel *depthBias;
    QLabel *slopeScaledBiasLabel;
    QLabel *slopeScaledBias;
    QLabel *offsetClampLabel;
    QLabel *offsetClamp;
    QLabel *clipSetupLabel;
    QLabel *clipSetup;
    QSpacerItem *rastHSpacer;
    QLabel *depthClampLabel;
    QLabel *depthClamp;
    QLabel *scissorLabel;
    QLabel *scissorEnabled;
    QLabel *provokingLabel;
    QLabel *provoking;
    QLabel *clipDistanceLabel;
    QLabel *clipDistance;
    QLabel *pointSizeLabel;
    QLabel *pointSize;
    QLabel *lineWidthLabel;
    QLabel *lineWidth;
    QSpacerItem *rastVSpacer;
    QGroupBox *MSAAGroup;
    QGridLayout *MSAAGridLayout;
    QLabel *multisampleLabel;
    QLabel *multisample;
    QLabel *sampleShadingLabel;
    QLabel *sampleShading;
    QLabel *minSampleShadingLabel;
    QLabel *minSampleShading;
    QLabel *alphaToCoverageLabel;
    QLabel *alphaToCoverage;
    QLabel *alphaToOneLabel;
    QLabel *alphaToOne;
    QLabel *sampleCoverageLabel;
    QLabel *sampleCoverage;
    QLabel *sampleMaskLabel;
    QLabel *sampleMask;
    QSpacerItem *MSAAHSpacer;
    QSpacerItem *MSAAVSpacer;
    QGroupBox *viewportsGroup;
    QHBoxLayout *horizontalLayout_21;
    RDTreeWidget *viewports;
    QGroupBox *scissorGroup;
    QHBoxLayout *horizontalLayout_22;
    RDTreeWidget *scissors;
    QWidget *FS;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *fsShaderGroup;
    QHBoxLayout *horizontalLayout_16;
    RDLabel *fsPipeline;
    RDLabel *fsProgram;
    RDLabel *fsShader;
    QToolButton *fsShaderViewButton;
    QToolButton *fsShaderEditButton;
    QToolButton *fsShaderSaveButton;
    QSpacerItem *fsShaderSpacer;
    QScrollArea *fsScroll;
    QWidget *fsScrollContents;
    QVBoxLayout *verticalLayout_12;
    CollapseGroupBox *fsTexGroup;
    QHBoxLayout *horizontalLayout_32;
    RDTreeWidget *fsTextures;
    CollapseGroupBox *fsSamplerGroup;
    QHBoxLayout *horizontalLayout_33;
    RDTreeWidget *fsSamplers;
    CollapseGroupBox *fsUBOGroup;
    QHBoxLayout *horizontalLayout_30;
    RDTreeWidget *fsUBOs;
    CollapseGroupBox *fsReadWriteGroup;
    QHBoxLayout *horizontalLayout_34;
    RDTreeWidget *fsReadWrite;
    CollapseGroupBox *fsSubroutineGroup;
    QHBoxLayout *horizontalLayout_31;
    RDTreeWidget *fsSubroutines;
    QSpacerItem *verticalSpacer_6;
    QWidget *FB;
    QGridLayout *gridLayout_5;
    QScrollArea *fbScroll;
    QWidget *fbScrollContents;
    QGridLayout *gridLayout_4;
    QGroupBox *framebufferGroup;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_24;
    RDLabel *drawFBO;
    RDLabel *readFBO;
    QSpacerItem *horizontalSpacer_3;
    RDTreeWidget *framebuffer;
    QGroupBox *blendsGroup;
    QHBoxLayout *horizontalLayout_25;
    RDTreeWidget *blends;
    QGroupBox *blendStateGroup;
    QGridLayout *blendStateGridLayout;
    QLabel *blendFactorLabel;
    QLabel *blendFactor;
    QSpacerItem *verticalSpacer;
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
    RDLabel *csProgram;
    RDLabel *csShader;
    QToolButton *csShaderViewButton;
    QToolButton *csShaderEditButton;
    QToolButton *csShaderSaveButton;
    QSpacerItem *csShaderSpacer;
    QScrollArea *csScroll;
    QWidget *csScrollContents;
    QVBoxLayout *verticalLayout_11;
    CollapseGroupBox *csTexGroup;
    QHBoxLayout *horizontalLayout_37;
    RDTreeWidget *csTextures;
    CollapseGroupBox *csSamplerGroup;
    QHBoxLayout *horizontalLayout_38;
    RDTreeWidget *csSamplers;
    CollapseGroupBox *csUBOGroup;
    QHBoxLayout *horizontalLayout_35;
    RDTreeWidget *csUBOs;
    CollapseGroupBox *csReadWriteGroup;
    QHBoxLayout *horizontalLayout_39;
    RDTreeWidget *csReadWrite;
    CollapseGroupBox *csSubroutineGroup;
    QHBoxLayout *horizontalLayout_36;
    RDTreeWidget *csSubroutines;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QFrame *GLPipelineStateViewer)
    {
        if (GLPipelineStateViewer->objectName().isEmpty())
            GLPipelineStateViewer->setObjectName(QString::fromUtf8("GLPipelineStateViewer"));
        GLPipelineStateViewer->resize(883, 660);
        verticalLayout = new QVBoxLayout(GLPipelineStateViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolbar = new QFrame(GLPipelineStateViewer);
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

        pipeFlow = new PipelineFlowChart(GLPipelineStateViewer);
        pipeFlow->setObjectName(QString::fromUtf8("pipeFlow"));
        QFont font;
        font.setPointSize(12);
        pipeFlow->setFont(font);

        verticalLayout->addWidget(pipeFlow);

        stagesTabs = new QTabWidget(GLPipelineStateViewer);
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
        vtxScrollContents->setGeometry(QRect(0, 0, 883, 601));
        gridLayout_6 = new QGridLayout(vtxScrollContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
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


        gridLayout_6->addWidget(attribGroup, 0, 0, 1, 3);

        groupBox = new QGroupBox(vtxScrollContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_42 = new QHBoxLayout(groupBox);
        horizontalLayout_42->setSpacing(0);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalLayout_42->setContentsMargins(9, 0, 9, 4);
        vaoLabel = new RDLabel(groupBox);
        vaoLabel->setObjectName(QString::fromUtf8("vaoLabel"));
        vaoLabel->setMinimumSize(QSize(250, 20));
        vaoLabel->setFrameShape(QFrame::Box);

        horizontalLayout_42->addWidget(vaoLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_4);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 3);

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


        gridLayout_6->addWidget(buffersGroup, 2, 0, 1, 1);

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


        gridLayout_6->addWidget(meshViewGroup, 2, 1, 1, 1);

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


        gridLayout_6->addWidget(topologyGroup, 2, 2, 1, 1);

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
        vsPipeline->setMinimumSize(QSize(250, 0));
        vsPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        vsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsPipeline);

        vsProgram = new RDLabel(vsShaderGroup);
        vsProgram->setObjectName(QString::fromUtf8("vsProgram"));
        sizePolicy5.setHeightForWidth(vsProgram->sizePolicy().hasHeightForWidth());
        vsProgram->setSizePolicy(sizePolicy5);
        vsProgram->setMinimumSize(QSize(250, 0));
        vsProgram->setCursor(QCursor(Qt::PointingHandCursor));
        vsProgram->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsProgram);

        vsShader = new RDLabel(vsShaderGroup);
        vsShader->setObjectName(QString::fromUtf8("vsShader"));
        sizePolicy5.setHeightForWidth(vsShader->sizePolicy().hasHeightForWidth());
        vsShader->setSizePolicy(sizePolicy5);
        vsShader->setMinimumSize(QSize(250, 0));
        vsShader->setCursor(QCursor(Qt::PointingHandCursor));
        vsShader->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(vsShader);

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

        vsShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(vsShaderSpacer);


        verticalLayout_4->addWidget(vsShaderGroup);

        vsScroll = new QScrollArea(VS);
        vsScroll->setObjectName(QString::fromUtf8("vsScroll"));
        vsScroll->setFrameShape(QFrame::NoFrame);
        vsScroll->setWidgetResizable(true);
        vsScrollContents = new QWidget();
        vsScrollContents->setObjectName(QString::fromUtf8("vsScrollContents"));
        vsScrollContents->setGeometry(QRect(0, 0, 116, 430));
        verticalLayout_16 = new QVBoxLayout(vsScrollContents);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        vsTexGroup = new CollapseGroupBox(vsScrollContents);
        vsTexGroup->setObjectName(QString::fromUtf8("vsTexGroup"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(vsTexGroup->sizePolicy().hasHeightForWidth());
        vsTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_4 = new QHBoxLayout(vsTexGroup);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        vsTextures = new RDTreeWidget(vsTexGroup);
        vsTextures->setObjectName(QString::fromUtf8("vsTextures"));
        vsTextures->setFrameShape(QFrame::Box);
        vsTextures->setFrameShadow(QFrame::Plain);
        vsTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsTextures->setProperty("showDropIndicator", QVariant(false));
        vsTextures->setRootIsDecorated(false);
        vsTextures->setAllColumnsShowFocus(true);
        vsTextures->header()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(vsTextures);


        verticalLayout_16->addWidget(vsTexGroup);

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
        vsSamplers->setAllColumnsShowFocus(true);
        vsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_1->addWidget(vsSamplers);


        verticalLayout_16->addWidget(vsSamplerGroup);

        vsUBOGroup = new CollapseGroupBox(vsScrollContents);
        vsUBOGroup->setObjectName(QString::fromUtf8("vsUBOGroup"));
        sizePolicy6.setHeightForWidth(vsUBOGroup->sizePolicy().hasHeightForWidth());
        vsUBOGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_5 = new QHBoxLayout(vsUBOGroup);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        vsUBOs = new RDTreeWidget(vsUBOGroup);
        vsUBOs->setObjectName(QString::fromUtf8("vsUBOs"));
        vsUBOs->setFrameShape(QFrame::Box);
        vsUBOs->setFrameShadow(QFrame::Plain);
        vsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsUBOs->setProperty("showDropIndicator", QVariant(false));
        vsUBOs->setRootIsDecorated(false);
        vsUBOs->setAllColumnsShowFocus(true);
        vsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(vsUBOs);


        verticalLayout_16->addWidget(vsUBOGroup);

        vsReadWriteGroup = new CollapseGroupBox(vsScrollContents);
        vsReadWriteGroup->setObjectName(QString::fromUtf8("vsReadWriteGroup"));
        sizePolicy6.setHeightForWidth(vsReadWriteGroup->sizePolicy().hasHeightForWidth());
        vsReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_17 = new QHBoxLayout(vsReadWriteGroup);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(2, 2, 2, 2);
        vsReadWrite = new RDTreeWidget(vsReadWriteGroup);
        vsReadWrite->setObjectName(QString::fromUtf8("vsReadWrite"));
        vsReadWrite->setFrameShape(QFrame::Box);
        vsReadWrite->setFrameShadow(QFrame::Plain);
        vsReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsReadWrite->setProperty("showDropIndicator", QVariant(false));
        vsReadWrite->setRootIsDecorated(false);
        vsReadWrite->setAllColumnsShowFocus(true);
        vsReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_17->addWidget(vsReadWrite);


        verticalLayout_16->addWidget(vsReadWriteGroup);

        vsSubroutineGroup = new CollapseGroupBox(vsScrollContents);
        vsSubroutineGroup->setObjectName(QString::fromUtf8("vsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(vsSubroutineGroup->sizePolicy().hasHeightForWidth());
        vsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_40 = new QHBoxLayout(vsSubroutineGroup);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        horizontalLayout_40->setContentsMargins(2, 2, 2, 2);
        vsSubroutines = new RDTreeWidget(vsSubroutineGroup);
        vsSubroutines->setObjectName(QString::fromUtf8("vsSubroutines"));
        vsSubroutines->setFrameShape(QFrame::Box);
        vsSubroutines->setFrameShadow(QFrame::Plain);
        vsSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        vsSubroutines->setProperty("showDropIndicator", QVariant(false));
        vsSubroutines->setRootIsDecorated(false);
        vsSubroutines->setAllColumnsShowFocus(true);
        vsSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_40->addWidget(vsSubroutines);


        verticalLayout_16->addWidget(vsSubroutineGroup);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_16->addItem(verticalSpacer_2);

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
        tcsPipeline->setMinimumSize(QSize(250, 0));
        tcsPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        tcsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsPipeline);

        tcsProgram = new RDLabel(tcsShaderGroup);
        tcsProgram->setObjectName(QString::fromUtf8("tcsProgram"));
        sizePolicy5.setHeightForWidth(tcsProgram->sizePolicy().hasHeightForWidth());
        tcsProgram->setSizePolicy(sizePolicy5);
        tcsProgram->setMinimumSize(QSize(250, 0));
        tcsProgram->setCursor(QCursor(Qt::PointingHandCursor));
        tcsProgram->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsProgram);

        tcsShader = new RDLabel(tcsShaderGroup);
        tcsShader->setObjectName(QString::fromUtf8("tcsShader"));
        sizePolicy5.setHeightForWidth(tcsShader->sizePolicy().hasHeightForWidth());
        tcsShader->setSizePolicy(sizePolicy5);
        tcsShader->setMinimumSize(QSize(250, 0));
        tcsShader->setCursor(QCursor(Qt::PointingHandCursor));
        tcsShader->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(tcsShader);

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

        tcsShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(tcsShaderSpacer);


        verticalLayout_5->addWidget(tcsShaderGroup);

        tcsScroll = new QScrollArea(TCS);
        tcsScroll->setObjectName(QString::fromUtf8("tcsScroll"));
        tcsScroll->setFrameShape(QFrame::NoFrame);
        tcsScroll->setWidgetResizable(true);
        tcsScrollContents = new QWidget();
        tcsScrollContents->setObjectName(QString::fromUtf8("tcsScrollContents"));
        tcsScrollContents->setGeometry(QRect(0, 0, 116, 430));
        verticalLayout_15 = new QVBoxLayout(tcsScrollContents);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        tcsTexGroup = new CollapseGroupBox(tcsScrollContents);
        tcsTexGroup->setObjectName(QString::fromUtf8("tcsTexGroup"));
        sizePolicy6.setHeightForWidth(tcsTexGroup->sizePolicy().hasHeightForWidth());
        tcsTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_23 = new QHBoxLayout(tcsTexGroup);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(2, 2, 2, 2);
        tcsTextures = new RDTreeWidget(tcsTexGroup);
        tcsTextures->setObjectName(QString::fromUtf8("tcsTextures"));
        tcsTextures->setFrameShape(QFrame::Box);
        tcsTextures->setFrameShadow(QFrame::Plain);
        tcsTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsTextures->setProperty("showDropIndicator", QVariant(false));
        tcsTextures->setRootIsDecorated(false);
        tcsTextures->setAllColumnsShowFocus(true);
        tcsTextures->header()->setStretchLastSection(false);

        horizontalLayout_23->addWidget(tcsTextures);


        verticalLayout_15->addWidget(tcsTexGroup);

        tcsSamplerGroup = new CollapseGroupBox(tcsScrollContents);
        tcsSamplerGroup->setObjectName(QString::fromUtf8("tcsSamplerGroup"));
        sizePolicy6.setHeightForWidth(tcsSamplerGroup->sizePolicy().hasHeightForWidth());
        tcsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_26 = new QHBoxLayout(tcsSamplerGroup);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(2, 2, 2, 2);
        tcsSamplers = new RDTreeWidget(tcsSamplerGroup);
        tcsSamplers->setObjectName(QString::fromUtf8("tcsSamplers"));
        tcsSamplers->setFrameShape(QFrame::Box);
        tcsSamplers->setFrameShadow(QFrame::Plain);
        tcsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsSamplers->setProperty("showDropIndicator", QVariant(false));
        tcsSamplers->setRootIsDecorated(false);
        tcsSamplers->setAllColumnsShowFocus(true);
        tcsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_26->addWidget(tcsSamplers);


        verticalLayout_15->addWidget(tcsSamplerGroup);

        tcsUBOGroup = new CollapseGroupBox(tcsScrollContents);
        tcsUBOGroup->setObjectName(QString::fromUtf8("tcsUBOGroup"));
        sizePolicy6.setHeightForWidth(tcsUBOGroup->sizePolicy().hasHeightForWidth());
        tcsUBOGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_6 = new QHBoxLayout(tcsUBOGroup);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        tcsUBOs = new RDTreeWidget(tcsUBOGroup);
        tcsUBOs->setObjectName(QString::fromUtf8("tcsUBOs"));
        tcsUBOs->setFrameShape(QFrame::Box);
        tcsUBOs->setFrameShadow(QFrame::Plain);
        tcsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsUBOs->setProperty("showDropIndicator", QVariant(false));
        tcsUBOs->setRootIsDecorated(false);
        tcsUBOs->setAllColumnsShowFocus(true);
        tcsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_6->addWidget(tcsUBOs);


        verticalLayout_15->addWidget(tcsUBOGroup);

        tcsReadWriteGroup = new CollapseGroupBox(tcsScrollContents);
        tcsReadWriteGroup->setObjectName(QString::fromUtf8("tcsReadWriteGroup"));
        sizePolicy6.setHeightForWidth(tcsReadWriteGroup->sizePolicy().hasHeightForWidth());
        tcsReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_27 = new QHBoxLayout(tcsReadWriteGroup);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(2, 2, 2, 2);
        tcsReadWrite = new RDTreeWidget(tcsReadWriteGroup);
        tcsReadWrite->setObjectName(QString::fromUtf8("tcsReadWrite"));
        tcsReadWrite->setFrameShape(QFrame::Box);
        tcsReadWrite->setFrameShadow(QFrame::Plain);
        tcsReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsReadWrite->setProperty("showDropIndicator", QVariant(false));
        tcsReadWrite->setRootIsDecorated(false);
        tcsReadWrite->setAllColumnsShowFocus(true);
        tcsReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_27->addWidget(tcsReadWrite);


        verticalLayout_15->addWidget(tcsReadWriteGroup);

        tcsSubroutineGroup = new CollapseGroupBox(tcsScrollContents);
        tcsSubroutineGroup->setObjectName(QString::fromUtf8("tcsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(tcsSubroutineGroup->sizePolicy().hasHeightForWidth());
        tcsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_8 = new QHBoxLayout(tcsSubroutineGroup);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(2, 2, 2, 2);
        tcsSubroutines = new RDTreeWidget(tcsSubroutineGroup);
        tcsSubroutines->setObjectName(QString::fromUtf8("tcsSubroutines"));
        tcsSubroutines->setFrameShape(QFrame::Box);
        tcsSubroutines->setFrameShadow(QFrame::Plain);
        tcsSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tcsSubroutines->setProperty("showDropIndicator", QVariant(false));
        tcsSubroutines->setRootIsDecorated(false);
        tcsSubroutines->setAllColumnsShowFocus(true);
        tcsSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_8->addWidget(tcsSubroutines);


        verticalLayout_15->addWidget(tcsSubroutineGroup);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_15->addItem(verticalSpacer_3);

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
        tesPipeline->setMinimumSize(QSize(250, 0));
        tesPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        tesPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesPipeline);

        tesProgram = new RDLabel(tesShaderGroup);
        tesProgram->setObjectName(QString::fromUtf8("tesProgram"));
        sizePolicy5.setHeightForWidth(tesProgram->sizePolicy().hasHeightForWidth());
        tesProgram->setSizePolicy(sizePolicy5);
        tesProgram->setMinimumSize(QSize(250, 0));
        tesProgram->setCursor(QCursor(Qt::PointingHandCursor));
        tesProgram->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesProgram);

        tesShader = new RDLabel(tesShaderGroup);
        tesShader->setObjectName(QString::fromUtf8("tesShader"));
        sizePolicy5.setHeightForWidth(tesShader->sizePolicy().hasHeightForWidth());
        tesShader->setSizePolicy(sizePolicy5);
        tesShader->setMinimumSize(QSize(250, 0));
        tesShader->setCursor(QCursor(Qt::PointingHandCursor));
        tesShader->setFrameShape(QFrame::Box);

        horizontalLayout_10->addWidget(tesShader);

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

        tesShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(tesShaderSpacer);


        verticalLayout_6->addWidget(tesShaderGroup);

        tesScroll = new QScrollArea(TES);
        tesScroll->setObjectName(QString::fromUtf8("tesScroll"));
        tesScroll->setFrameShape(QFrame::NoFrame);
        tesScroll->setWidgetResizable(true);
        tesScrollContents = new QWidget();
        tesScrollContents->setObjectName(QString::fromUtf8("tesScrollContents"));
        tesScrollContents->setGeometry(QRect(0, 0, 116, 430));
        verticalLayout_14 = new QVBoxLayout(tesScrollContents);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        tesTexGroup = new CollapseGroupBox(tesScrollContents);
        tesTexGroup->setObjectName(QString::fromUtf8("tesTexGroup"));
        sizePolicy6.setHeightForWidth(tesTexGroup->sizePolicy().hasHeightForWidth());
        tesTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_12 = new QHBoxLayout(tesTexGroup);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(2, 2, 2, 2);
        tesTextures = new RDTreeWidget(tesTexGroup);
        tesTextures->setObjectName(QString::fromUtf8("tesTextures"));
        tesTextures->setFrameShape(QFrame::Box);
        tesTextures->setFrameShadow(QFrame::Plain);
        tesTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesTextures->setProperty("showDropIndicator", QVariant(false));
        tesTextures->setRootIsDecorated(false);
        tesTextures->setAllColumnsShowFocus(true);
        tesTextures->header()->setStretchLastSection(false);

        horizontalLayout_12->addWidget(tesTextures);


        verticalLayout_14->addWidget(tesTexGroup);

        tesSamplerGroup = new CollapseGroupBox(tesScrollContents);
        tesSamplerGroup->setObjectName(QString::fromUtf8("tesSamplerGroup"));
        sizePolicy6.setHeightForWidth(tesSamplerGroup->sizePolicy().hasHeightForWidth());
        tesSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_14 = new QHBoxLayout(tesSamplerGroup);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(2, 2, 2, 2);
        tesSamplers = new RDTreeWidget(tesSamplerGroup);
        tesSamplers->setObjectName(QString::fromUtf8("tesSamplers"));
        tesSamplers->setFrameShape(QFrame::Box);
        tesSamplers->setFrameShadow(QFrame::Plain);
        tesSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesSamplers->setProperty("showDropIndicator", QVariant(false));
        tesSamplers->setRootIsDecorated(false);
        tesSamplers->setAllColumnsShowFocus(true);
        tesSamplers->header()->setStretchLastSection(false);

        horizontalLayout_14->addWidget(tesSamplers);


        verticalLayout_14->addWidget(tesSamplerGroup);

        tesUBOGroup = new CollapseGroupBox(tesScrollContents);
        tesUBOGroup->setObjectName(QString::fromUtf8("tesUBOGroup"));
        sizePolicy6.setHeightForWidth(tesUBOGroup->sizePolicy().hasHeightForWidth());
        tesUBOGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_9 = new QHBoxLayout(tesUBOGroup);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(2, 2, 2, 2);
        tesUBOs = new RDTreeWidget(tesUBOGroup);
        tesUBOs->setObjectName(QString::fromUtf8("tesUBOs"));
        tesUBOs->setFrameShape(QFrame::Box);
        tesUBOs->setFrameShadow(QFrame::Plain);
        tesUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesUBOs->setProperty("showDropIndicator", QVariant(false));
        tesUBOs->setRootIsDecorated(false);
        tesUBOs->setAllColumnsShowFocus(true);
        tesUBOs->header()->setStretchLastSection(false);

        horizontalLayout_9->addWidget(tesUBOs);


        verticalLayout_14->addWidget(tesUBOGroup);

        tesReadWriteGroup = new CollapseGroupBox(tesScrollContents);
        tesReadWriteGroup->setObjectName(QString::fromUtf8("tesReadWriteGroup"));
        sizePolicy6.setHeightForWidth(tesReadWriteGroup->sizePolicy().hasHeightForWidth());
        tesReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_15 = new QHBoxLayout(tesReadWriteGroup);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(2, 2, 2, 2);
        tesReadWrite = new RDTreeWidget(tesReadWriteGroup);
        tesReadWrite->setObjectName(QString::fromUtf8("tesReadWrite"));
        tesReadWrite->setFrameShape(QFrame::Box);
        tesReadWrite->setFrameShadow(QFrame::Plain);
        tesReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesReadWrite->setProperty("showDropIndicator", QVariant(false));
        tesReadWrite->setRootIsDecorated(false);
        tesReadWrite->setAllColumnsShowFocus(true);
        tesReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_15->addWidget(tesReadWrite);


        verticalLayout_14->addWidget(tesReadWriteGroup);

        tesSubroutineGroup = new CollapseGroupBox(tesScrollContents);
        tesSubroutineGroup->setObjectName(QString::fromUtf8("tesSubroutineGroup"));
        sizePolicy6.setHeightForWidth(tesSubroutineGroup->sizePolicy().hasHeightForWidth());
        tesSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_11 = new QHBoxLayout(tesSubroutineGroup);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        tesSubroutines = new RDTreeWidget(tesSubroutineGroup);
        tesSubroutines->setObjectName(QString::fromUtf8("tesSubroutines"));
        tesSubroutines->setFrameShape(QFrame::Box);
        tesSubroutines->setFrameShadow(QFrame::Plain);
        tesSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tesSubroutines->setProperty("showDropIndicator", QVariant(false));
        tesSubroutines->setRootIsDecorated(false);
        tesSubroutines->setAllColumnsShowFocus(true);
        tesSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_11->addWidget(tesSubroutines);


        verticalLayout_14->addWidget(tesSubroutineGroup);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_14->addItem(verticalSpacer_4);

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
        gsPipeline->setMinimumSize(QSize(250, 0));
        gsPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        gsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsPipeline);

        gsProgram = new RDLabel(gsShaderGroup);
        gsProgram->setObjectName(QString::fromUtf8("gsProgram"));
        sizePolicy5.setHeightForWidth(gsProgram->sizePolicy().hasHeightForWidth());
        gsProgram->setSizePolicy(sizePolicy5);
        gsProgram->setMinimumSize(QSize(250, 0));
        gsProgram->setCursor(QCursor(Qt::PointingHandCursor));
        gsProgram->setFrameShape(QFrame::Box);

        horizontalLayout_13->addWidget(gsProgram);

        gsShader = new RDLabel(gsShaderGroup);
        gsShader->setObjectName(QString::fromUtf8("gsShader"));
        sizePolicy5.setHeightForWidth(gsShader->sizePolicy().hasHeightForWidth());
        gsShader->setSizePolicy(sizePolicy5);
        gsShader->setMinimumSize(QSize(250, 0));
        gsShader->setCursor(QCursor(Qt::PointingHandCursor));
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

        gsShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(gsShaderSpacer);


        verticalLayout_7->addWidget(gsShaderGroup);

        gsScroll = new QScrollArea(GS);
        gsScroll->setObjectName(QString::fromUtf8("gsScroll"));
        gsScroll->setFrameShape(QFrame::NoFrame);
        gsScroll->setWidgetResizable(true);
        gsScrollContents = new QWidget();
        gsScrollContents->setObjectName(QString::fromUtf8("gsScrollContents"));
        gsScrollContents->setGeometry(QRect(0, 0, 117, 544));
        verticalLayout_13 = new QVBoxLayout(gsScrollContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        gsTexGroup = new CollapseGroupBox(gsScrollContents);
        gsTexGroup->setObjectName(QString::fromUtf8("gsTexGroup"));
        sizePolicy6.setHeightForWidth(gsTexGroup->sizePolicy().hasHeightForWidth());
        gsTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_20 = new QHBoxLayout(gsTexGroup);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(2, 2, 2, 2);
        gsTextures = new RDTreeWidget(gsTexGroup);
        gsTextures->setObjectName(QString::fromUtf8("gsTextures"));
        gsTextures->setFrameShape(QFrame::Box);
        gsTextures->setFrameShadow(QFrame::Plain);
        gsTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsTextures->setProperty("showDropIndicator", QVariant(false));
        gsTextures->setRootIsDecorated(false);
        gsTextures->setAllColumnsShowFocus(true);
        gsTextures->header()->setStretchLastSection(false);

        horizontalLayout_20->addWidget(gsTextures);


        verticalLayout_13->addWidget(gsTexGroup);

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

        gsUBOGroup = new CollapseGroupBox(gsScrollContents);
        gsUBOGroup->setObjectName(QString::fromUtf8("gsUBOGroup"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(5);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(gsUBOGroup->sizePolicy().hasHeightForWidth());
        gsUBOGroup->setSizePolicy(sizePolicy7);
        horizontalLayout_41 = new QHBoxLayout(gsUBOGroup);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(2, 2, 2, 2);
        gsUBOs = new RDTreeWidget(gsUBOGroup);
        gsUBOs->setObjectName(QString::fromUtf8("gsUBOs"));
        gsUBOs->setFrameShape(QFrame::Box);
        gsUBOs->setFrameShadow(QFrame::Plain);
        gsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsUBOs->setProperty("showDropIndicator", QVariant(false));
        gsUBOs->setRootIsDecorated(false);
        gsUBOs->setAllColumnsShowFocus(true);
        gsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_41->addWidget(gsUBOs);


        verticalLayout_13->addWidget(gsUBOGroup);

        xfbGroup = new CollapseGroupBox(gsScrollContents);
        xfbGroup->setObjectName(QString::fromUtf8("xfbGroup"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(4);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(xfbGroup->sizePolicy().hasHeightForWidth());
        xfbGroup->setSizePolicy(sizePolicy8);
        gridLayout_3 = new QGridLayout(xfbGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        xfbPaused_HLayout = new QHBoxLayout();
        xfbPaused_HLayout->setObjectName(QString::fromUtf8("xfbPaused_HLayout"));
        xfbObj = new RDLabel(xfbGroup);
        xfbObj->setObjectName(QString::fromUtf8("xfbObj"));
        xfbObj->setFrameShape(QFrame::Box);

        xfbPaused_HLayout->addWidget(xfbObj);

        xfbPausedLabel = new QLabel(xfbGroup);
        xfbPausedLabel->setObjectName(QString::fromUtf8("xfbPausedLabel"));
        xfbPausedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        xfbPaused_HLayout->addWidget(xfbPausedLabel);

        xfbPaused = new QLabel(xfbGroup);
        xfbPaused->setObjectName(QString::fromUtf8("xfbPaused"));
        xfbPaused->setPixmap(QPixmap(QString::fromUtf8(":/tick.png")));
        xfbPaused->setAlignment(Qt::AlignCenter);
        xfbPaused->setMargin(0);

        xfbPaused_HLayout->addWidget(xfbPaused);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        xfbPaused_HLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(xfbPaused_HLayout, 0, 0, 1, 1);

        xfbBuffers = new RDTreeWidget(xfbGroup);
        xfbBuffers->setObjectName(QString::fromUtf8("xfbBuffers"));
        xfbBuffers->setFrameShape(QFrame::Box);
        xfbBuffers->setFrameShadow(QFrame::Plain);
        xfbBuffers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        xfbBuffers->setProperty("showDropIndicator", QVariant(false));
        xfbBuffers->setRootIsDecorated(false);
        xfbBuffers->setAllColumnsShowFocus(true);
        xfbBuffers->header()->setStretchLastSection(false);

        gridLayout_3->addWidget(xfbBuffers, 4, 0, 1, 2);


        verticalLayout_13->addWidget(xfbGroup);

        gsReadWriteGroup = new CollapseGroupBox(gsScrollContents);
        gsReadWriteGroup->setObjectName(QString::fromUtf8("gsReadWriteGroup"));
        sizePolicy6.setHeightForWidth(gsReadWriteGroup->sizePolicy().hasHeightForWidth());
        gsReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_29 = new QHBoxLayout(gsReadWriteGroup);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(2, 2, 2, 2);
        gsReadWrite = new RDTreeWidget(gsReadWriteGroup);
        gsReadWrite->setObjectName(QString::fromUtf8("gsReadWrite"));
        gsReadWrite->setFrameShape(QFrame::Box);
        gsReadWrite->setFrameShadow(QFrame::Plain);
        gsReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsReadWrite->setProperty("showDropIndicator", QVariant(false));
        gsReadWrite->setRootIsDecorated(false);
        gsReadWrite->setAllColumnsShowFocus(true);
        gsReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_29->addWidget(gsReadWrite);


        verticalLayout_13->addWidget(gsReadWriteGroup);

        gsSubroutineGroup = new CollapseGroupBox(gsScrollContents);
        gsSubroutineGroup->setObjectName(QString::fromUtf8("gsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(gsSubroutineGroup->sizePolicy().hasHeightForWidth());
        gsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_18 = new QHBoxLayout(gsSubroutineGroup);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(2, 2, 2, 2);
        gsSubroutines = new RDTreeWidget(gsSubroutineGroup);
        gsSubroutines->setObjectName(QString::fromUtf8("gsSubroutines"));
        gsSubroutines->setFrameShape(QFrame::Box);
        gsSubroutines->setFrameShadow(QFrame::Plain);
        gsSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gsSubroutines->setProperty("showDropIndicator", QVariant(false));
        gsSubroutines->setRootIsDecorated(false);
        gsSubroutines->setAllColumnsShowFocus(true);
        gsSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_18->addWidget(gsSubroutines);


        verticalLayout_13->addWidget(gsSubroutineGroup);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_13->addItem(verticalSpacer_5);

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

        rasterizerDiscardLabel = new QLabel(rasterizerGroup);
        rasterizerDiscardLabel->setObjectName(QString::fromUtf8("rasterizerDiscardLabel"));
        rasterizerDiscardLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rasterizerDiscardLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(rasterizerDiscardLabel, 0, 4, 1, 1);

        rasterizerDiscard = new QLabel(rasterizerGroup);
        rasterizerDiscard->setObjectName(QString::fromUtf8("rasterizerDiscard"));
        rasterizerDiscard->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        rasterizerDiscard->setAlignment(Qt::AlignCenter);
        rasterizerDiscard->setMargin(4);

        rasterizerGridLayout->addWidget(rasterizerDiscard, 0, 5, 1, 1);

        frontFaceLabel = new QLabel(rasterizerGroup);
        frontFaceLabel->setObjectName(QString::fromUtf8("frontFaceLabel"));
        frontFaceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frontFaceLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(frontFaceLabel, 0, 6, 1, 1);

        frontFace = new QLabel(rasterizerGroup);
        frontFace->setObjectName(QString::fromUtf8("frontFace"));
        frontFace->setFont(font);
        frontFace->setAlignment(Qt::AlignCenter);
        frontFace->setMargin(4);

        rasterizerGridLayout->addWidget(frontFace, 0, 7, 1, 1);

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

        slopeScaledBiasLabel = new QLabel(rasterizerGroup);
        slopeScaledBiasLabel->setObjectName(QString::fromUtf8("slopeScaledBiasLabel"));
        slopeScaledBiasLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slopeScaledBiasLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(slopeScaledBiasLabel, 1, 2, 1, 1);

        slopeScaledBias = new QLabel(rasterizerGroup);
        slopeScaledBias->setObjectName(QString::fromUtf8("slopeScaledBias"));
        slopeScaledBias->setFont(font);
        slopeScaledBias->setAlignment(Qt::AlignCenter);
        slopeScaledBias->setMargin(4);

        rasterizerGridLayout->addWidget(slopeScaledBias, 1, 3, 1, 1);

        offsetClampLabel = new QLabel(rasterizerGroup);
        offsetClampLabel->setObjectName(QString::fromUtf8("offsetClampLabel"));
        offsetClampLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        offsetClampLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(offsetClampLabel, 1, 4, 1, 1);

        offsetClamp = new QLabel(rasterizerGroup);
        offsetClamp->setObjectName(QString::fromUtf8("offsetClamp"));
        offsetClamp->setFont(font);
        offsetClamp->setAlignment(Qt::AlignCenter);
        offsetClamp->setMargin(4);

        rasterizerGridLayout->addWidget(offsetClamp, 1, 5, 1, 1);

        clipSetupLabel = new QLabel(rasterizerGroup);
        clipSetupLabel->setObjectName(QString::fromUtf8("clipSetupLabel"));
        clipSetupLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clipSetupLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(clipSetupLabel, 1, 6, 1, 1);

        clipSetup = new QLabel(rasterizerGroup);
        clipSetup->setObjectName(QString::fromUtf8("clipSetup"));
        clipSetup->setFont(font);
        clipSetup->setAlignment(Qt::AlignCenter);
        clipSetup->setMargin(4);

        rasterizerGridLayout->addWidget(clipSetup, 1, 7, 1, 1);

        rastHSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        rasterizerGridLayout->addItem(rastHSpacer, 1, 9, 1, 1);

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

        provokingLabel = new QLabel(rasterizerGroup);
        provokingLabel->setObjectName(QString::fromUtf8("provokingLabel"));
        provokingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        provokingLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(provokingLabel, 2, 4, 1, 1);

        provoking = new QLabel(rasterizerGroup);
        provoking->setObjectName(QString::fromUtf8("provoking"));
        provoking->setFont(font);
        provoking->setAlignment(Qt::AlignCenter);
        provoking->setMargin(4);

        rasterizerGridLayout->addWidget(provoking, 2, 5, 1, 1);

        clipDistanceLabel = new QLabel(rasterizerGroup);
        clipDistanceLabel->setObjectName(QString::fromUtf8("clipDistanceLabel"));
        clipDistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clipDistanceLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(clipDistanceLabel, 2, 6, 1, 1);

        clipDistance = new QLabel(rasterizerGroup);
        clipDistance->setObjectName(QString::fromUtf8("clipDistance"));
        clipDistance->setFont(font);
        clipDistance->setAlignment(Qt::AlignCenter);
        clipDistance->setMargin(4);

        rasterizerGridLayout->addWidget(clipDistance, 2, 7, 1, 1);

        pointSizeLabel = new QLabel(rasterizerGroup);
        pointSizeLabel->setObjectName(QString::fromUtf8("pointSizeLabel"));
        pointSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pointSizeLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(pointSizeLabel, 3, 0, 1, 1);

        pointSize = new QLabel(rasterizerGroup);
        pointSize->setObjectName(QString::fromUtf8("pointSize"));
        pointSize->setFont(font);
        pointSize->setAlignment(Qt::AlignCenter);
        pointSize->setMargin(4);

        rasterizerGridLayout->addWidget(pointSize, 3, 1, 1, 1);

        lineWidthLabel = new QLabel(rasterizerGroup);
        lineWidthLabel->setObjectName(QString::fromUtf8("lineWidthLabel"));
        lineWidthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineWidthLabel->setWordWrap(true);

        rasterizerGridLayout->addWidget(lineWidthLabel, 3, 2, 1, 1);

        lineWidth = new QLabel(rasterizerGroup);
        lineWidth->setObjectName(QString::fromUtf8("lineWidth"));
        lineWidth->setFont(font);
        lineWidth->setAlignment(Qt::AlignCenter);
        lineWidth->setMargin(4);

        rasterizerGridLayout->addWidget(lineWidth, 3, 3, 1, 1);

        rastVSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        rasterizerGridLayout->addItem(rastVSpacer, 5, 2, 1, 1);


        gridLayout_2->addWidget(rasterizerGroup, 0, 0, 1, 2);

        MSAAGroup = new QGroupBox(RS);
        MSAAGroup->setObjectName(QString::fromUtf8("MSAAGroup"));
        MSAAGridLayout = new QGridLayout(MSAAGroup);
        MSAAGridLayout->setSpacing(0);
        MSAAGridLayout->setObjectName(QString::fromUtf8("MSAAGridLayout"));
        MSAAGridLayout->setContentsMargins(2, 2, 2, 2);
        multisampleLabel = new QLabel(MSAAGroup);
        multisampleLabel->setObjectName(QString::fromUtf8("multisampleLabel"));
        multisampleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        multisampleLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(multisampleLabel, 0, 0, 1, 1);

        multisample = new QLabel(MSAAGroup);
        multisample->setObjectName(QString::fromUtf8("multisample"));
        multisample->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        multisample->setAlignment(Qt::AlignCenter);
        multisample->setMargin(4);

        MSAAGridLayout->addWidget(multisample, 0, 1, 1, 1);

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

        MSAAGridLayout->addWidget(minSampleShadingLabel, 0, 4, 1, 1);

        minSampleShading = new QLabel(MSAAGroup);
        minSampleShading->setObjectName(QString::fromUtf8("minSampleShading"));
        minSampleShading->setFont(font);
        minSampleShading->setAlignment(Qt::AlignCenter);
        minSampleShading->setMargin(4);

        MSAAGridLayout->addWidget(minSampleShading, 0, 5, 1, 1);

        alphaToCoverageLabel = new QLabel(MSAAGroup);
        alphaToCoverageLabel->setObjectName(QString::fromUtf8("alphaToCoverageLabel"));
        alphaToCoverageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToCoverageLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(alphaToCoverageLabel, 1, 0, 1, 1);

        alphaToCoverage = new QLabel(MSAAGroup);
        alphaToCoverage->setObjectName(QString::fromUtf8("alphaToCoverage"));
        alphaToCoverage->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToCoverage->setAlignment(Qt::AlignCenter);
        alphaToCoverage->setMargin(4);

        MSAAGridLayout->addWidget(alphaToCoverage, 1, 1, 1, 1);

        alphaToOneLabel = new QLabel(MSAAGroup);
        alphaToOneLabel->setObjectName(QString::fromUtf8("alphaToOneLabel"));
        alphaToOneLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        alphaToOneLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(alphaToOneLabel, 1, 2, 1, 1);

        alphaToOne = new QLabel(MSAAGroup);
        alphaToOne->setObjectName(QString::fromUtf8("alphaToOne"));
        alphaToOne->setPixmap(QPixmap(QString::fromUtf8(":/cross.png")));
        alphaToOne->setAlignment(Qt::AlignCenter);
        alphaToOne->setMargin(4);

        MSAAGridLayout->addWidget(alphaToOne, 1, 3, 1, 1);

        sampleCoverageLabel = new QLabel(MSAAGroup);
        sampleCoverageLabel->setObjectName(QString::fromUtf8("sampleCoverageLabel"));
        sampleCoverageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleCoverageLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(sampleCoverageLabel, 2, 0, 1, 1);

        sampleCoverage = new QLabel(MSAAGroup);
        sampleCoverage->setObjectName(QString::fromUtf8("sampleCoverage"));
        sampleCoverage->setFont(font);
        sampleCoverage->setAlignment(Qt::AlignCenter);
        sampleCoverage->setMargin(4);

        MSAAGridLayout->addWidget(sampleCoverage, 2, 1, 1, 1);

        sampleMaskLabel = new QLabel(MSAAGroup);
        sampleMaskLabel->setObjectName(QString::fromUtf8("sampleMaskLabel"));
        sampleMaskLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sampleMaskLabel->setWordWrap(true);

        MSAAGridLayout->addWidget(sampleMaskLabel, 2, 2, 1, 1);

        sampleMask = new QLabel(MSAAGroup);
        sampleMask->setObjectName(QString::fromUtf8("sampleMask"));
        sampleMask->setFont(font);
        sampleMask->setAlignment(Qt::AlignCenter);
        sampleMask->setMargin(4);

        MSAAGridLayout->addWidget(sampleMask, 2, 3, 1, 1);

        MSAAHSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        MSAAGridLayout->addItem(MSAAHSpacer, 2, 8, 1, 1);

        MSAAVSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        MSAAGridLayout->addItem(MSAAVSpacer, 3, 6, 1, 2);


        gridLayout_2->addWidget(MSAAGroup, 1, 0, 1, 2);

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
        fsPipeline->setMinimumSize(QSize(250, 0));
        fsPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        fsPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsPipeline);

        fsProgram = new RDLabel(fsShaderGroup);
        fsProgram->setObjectName(QString::fromUtf8("fsProgram"));
        sizePolicy5.setHeightForWidth(fsProgram->sizePolicy().hasHeightForWidth());
        fsProgram->setSizePolicy(sizePolicy5);
        fsProgram->setMinimumSize(QSize(250, 0));
        fsProgram->setCursor(QCursor(Qt::PointingHandCursor));
        fsProgram->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsProgram);

        fsShader = new RDLabel(fsShaderGroup);
        fsShader->setObjectName(QString::fromUtf8("fsShader"));
        sizePolicy5.setHeightForWidth(fsShader->sizePolicy().hasHeightForWidth());
        fsShader->setSizePolicy(sizePolicy5);
        fsShader->setMinimumSize(QSize(250, 0));
        fsShader->setCursor(QCursor(Qt::PointingHandCursor));
        fsShader->setFrameShape(QFrame::Box);

        horizontalLayout_16->addWidget(fsShader);

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

        fsShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(fsShaderSpacer);


        verticalLayout_8->addWidget(fsShaderGroup);

        fsScroll = new QScrollArea(FS);
        fsScroll->setObjectName(QString::fromUtf8("fsScroll"));
        fsScroll->setFrameShape(QFrame::NoFrame);
        fsScroll->setWidgetResizable(true);
        fsScrollContents = new QWidget();
        fsScrollContents->setObjectName(QString::fromUtf8("fsScrollContents"));
        fsScrollContents->setGeometry(QRect(0, 0, 116, 430));
        verticalLayout_12 = new QVBoxLayout(fsScrollContents);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        fsTexGroup = new CollapseGroupBox(fsScrollContents);
        fsTexGroup->setObjectName(QString::fromUtf8("fsTexGroup"));
        sizePolicy6.setHeightForWidth(fsTexGroup->sizePolicy().hasHeightForWidth());
        fsTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_32 = new QHBoxLayout(fsTexGroup);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(2, 2, 2, 2);
        fsTextures = new RDTreeWidget(fsTexGroup);
        fsTextures->setObjectName(QString::fromUtf8("fsTextures"));
        fsTextures->setFrameShape(QFrame::Box);
        fsTextures->setFrameShadow(QFrame::Plain);
        fsTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsTextures->setProperty("showDropIndicator", QVariant(false));
        fsTextures->setRootIsDecorated(false);
        fsTextures->setAllColumnsShowFocus(true);
        fsTextures->header()->setStretchLastSection(false);

        horizontalLayout_32->addWidget(fsTextures);


        verticalLayout_12->addWidget(fsTexGroup);

        fsSamplerGroup = new CollapseGroupBox(fsScrollContents);
        fsSamplerGroup->setObjectName(QString::fromUtf8("fsSamplerGroup"));
        sizePolicy6.setHeightForWidth(fsSamplerGroup->sizePolicy().hasHeightForWidth());
        fsSamplerGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_33 = new QHBoxLayout(fsSamplerGroup);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(2, 2, 2, 2);
        fsSamplers = new RDTreeWidget(fsSamplerGroup);
        fsSamplers->setObjectName(QString::fromUtf8("fsSamplers"));
        fsSamplers->setFrameShape(QFrame::Box);
        fsSamplers->setFrameShadow(QFrame::Plain);
        fsSamplers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsSamplers->setProperty("showDropIndicator", QVariant(false));
        fsSamplers->setRootIsDecorated(false);
        fsSamplers->setAllColumnsShowFocus(true);
        fsSamplers->header()->setStretchLastSection(false);

        horizontalLayout_33->addWidget(fsSamplers);


        verticalLayout_12->addWidget(fsSamplerGroup);

        fsUBOGroup = new CollapseGroupBox(fsScrollContents);
        fsUBOGroup->setObjectName(QString::fromUtf8("fsUBOGroup"));
        sizePolicy6.setHeightForWidth(fsUBOGroup->sizePolicy().hasHeightForWidth());
        fsUBOGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_30 = new QHBoxLayout(fsUBOGroup);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(2, 2, 2, 2);
        fsUBOs = new RDTreeWidget(fsUBOGroup);
        fsUBOs->setObjectName(QString::fromUtf8("fsUBOs"));
        fsUBOs->setFrameShape(QFrame::Box);
        fsUBOs->setFrameShadow(QFrame::Plain);
        fsUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsUBOs->setProperty("showDropIndicator", QVariant(false));
        fsUBOs->setRootIsDecorated(false);
        fsUBOs->setAllColumnsShowFocus(true);
        fsUBOs->header()->setStretchLastSection(false);

        horizontalLayout_30->addWidget(fsUBOs);


        verticalLayout_12->addWidget(fsUBOGroup);

        fsReadWriteGroup = new CollapseGroupBox(fsScrollContents);
        fsReadWriteGroup->setObjectName(QString::fromUtf8("fsReadWriteGroup"));
        sizePolicy6.setHeightForWidth(fsReadWriteGroup->sizePolicy().hasHeightForWidth());
        fsReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_34 = new QHBoxLayout(fsReadWriteGroup);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(2, 2, 2, 2);
        fsReadWrite = new RDTreeWidget(fsReadWriteGroup);
        fsReadWrite->setObjectName(QString::fromUtf8("fsReadWrite"));
        fsReadWrite->setFrameShape(QFrame::Box);
        fsReadWrite->setFrameShadow(QFrame::Plain);
        fsReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsReadWrite->setProperty("showDropIndicator", QVariant(false));
        fsReadWrite->setRootIsDecorated(false);
        fsReadWrite->setAllColumnsShowFocus(true);
        fsReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_34->addWidget(fsReadWrite);


        verticalLayout_12->addWidget(fsReadWriteGroup);

        fsSubroutineGroup = new CollapseGroupBox(fsScrollContents);
        fsSubroutineGroup->setObjectName(QString::fromUtf8("fsSubroutineGroup"));
        sizePolicy6.setHeightForWidth(fsSubroutineGroup->sizePolicy().hasHeightForWidth());
        fsSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_31 = new QHBoxLayout(fsSubroutineGroup);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(2, 2, 2, 2);
        fsSubroutines = new RDTreeWidget(fsSubroutineGroup);
        fsSubroutines->setObjectName(QString::fromUtf8("fsSubroutines"));
        fsSubroutines->setFrameShape(QFrame::Box);
        fsSubroutines->setFrameShadow(QFrame::Plain);
        fsSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fsSubroutines->setProperty("showDropIndicator", QVariant(false));
        fsSubroutines->setRootIsDecorated(false);
        fsSubroutines->setAllColumnsShowFocus(true);
        fsSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_31->addWidget(fsSubroutines);


        verticalLayout_12->addWidget(fsSubroutineGroup);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_12->addItem(verticalSpacer_6);

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
        fbScrollContents->setGeometry(QRect(0, 0, 488, 345));
        gridLayout_4 = new QGridLayout(fbScrollContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        framebufferGroup = new QGroupBox(fbScrollContents);
        framebufferGroup->setObjectName(QString::fromUtf8("framebufferGroup"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(framebufferGroup->sizePolicy().hasHeightForWidth());
        framebufferGroup->setSizePolicy(sizePolicy9);
        verticalLayout_17 = new QVBoxLayout(framebufferGroup);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        drawFBO = new RDLabel(framebufferGroup);
        drawFBO->setObjectName(QString::fromUtf8("drawFBO"));
        drawFBO->setFrameShape(QFrame::Box);

        horizontalLayout_24->addWidget(drawFBO);

        readFBO = new RDLabel(framebufferGroup);
        readFBO->setObjectName(QString::fromUtf8("readFBO"));
        readFBO->setFrameShape(QFrame::Box);

        horizontalLayout_24->addWidget(readFBO);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_3);


        verticalLayout_17->addLayout(horizontalLayout_24);

        framebuffer = new RDTreeWidget(framebufferGroup);
        framebuffer->setObjectName(QString::fromUtf8("framebuffer"));
        framebuffer->setFrameShape(QFrame::Box);
        framebuffer->setFrameShadow(QFrame::Plain);
        framebuffer->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        framebuffer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        framebuffer->setProperty("showDropIndicator", QVariant(false));
        framebuffer->setIndentation(0);
        framebuffer->setRootIsDecorated(false);
        framebuffer->setItemsExpandable(false);
        framebuffer->setAllColumnsShowFocus(true);
        framebuffer->setExpandsOnDoubleClick(false);
        framebuffer->header()->setStretchLastSection(false);

        verticalLayout_17->addWidget(framebuffer);


        gridLayout_4->addWidget(framebufferGroup, 0, 0, 1, 3);

        blendsGroup = new QGroupBox(fbScrollContents);
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

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        blendStateGridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


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
        csPipeline->setMinimumSize(QSize(250, 0));
        csPipeline->setCursor(QCursor(Qt::PointingHandCursor));
        csPipeline->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csPipeline);

        csProgram = new RDLabel(csShaderGroup);
        csProgram->setObjectName(QString::fromUtf8("csProgram"));
        sizePolicy5.setHeightForWidth(csProgram->sizePolicy().hasHeightForWidth());
        csProgram->setSizePolicy(sizePolicy5);
        csProgram->setMinimumSize(QSize(250, 0));
        csProgram->setCursor(QCursor(Qt::PointingHandCursor));
        csProgram->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csProgram);

        csShader = new RDLabel(csShaderGroup);
        csShader->setObjectName(QString::fromUtf8("csShader"));
        sizePolicy5.setHeightForWidth(csShader->sizePolicy().hasHeightForWidth());
        csShader->setSizePolicy(sizePolicy5);
        csShader->setMinimumSize(QSize(250, 0));
        csShader->setCursor(QCursor(Qt::PointingHandCursor));
        csShader->setFrameShape(QFrame::Box);

        horizontalLayout_19->addWidget(csShader);

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

        csShaderSpacer = new QSpacerItem(576, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(csShaderSpacer);


        verticalLayout_9->addWidget(csShaderGroup);

        csScroll = new QScrollArea(CS);
        csScroll->setObjectName(QString::fromUtf8("csScroll"));
        csScroll->setFrameShape(QFrame::NoFrame);
        csScroll->setWidgetResizable(true);
        csScrollContents = new QWidget();
        csScrollContents->setObjectName(QString::fromUtf8("csScrollContents"));
        csScrollContents->setGeometry(QRect(0, 0, 116, 430));
        verticalLayout_11 = new QVBoxLayout(csScrollContents);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        csTexGroup = new CollapseGroupBox(csScrollContents);
        csTexGroup->setObjectName(QString::fromUtf8("csTexGroup"));
        sizePolicy6.setHeightForWidth(csTexGroup->sizePolicy().hasHeightForWidth());
        csTexGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_37 = new QHBoxLayout(csTexGroup);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        horizontalLayout_37->setContentsMargins(2, 2, 2, 2);
        csTextures = new RDTreeWidget(csTexGroup);
        csTextures->setObjectName(QString::fromUtf8("csTextures"));
        csTextures->setFrameShape(QFrame::Box);
        csTextures->setFrameShadow(QFrame::Plain);
        csTextures->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csTextures->setProperty("showDropIndicator", QVariant(false));
        csTextures->setRootIsDecorated(false);
        csTextures->setAllColumnsShowFocus(true);
        csTextures->header()->setStretchLastSection(false);

        horizontalLayout_37->addWidget(csTextures);


        verticalLayout_11->addWidget(csTexGroup);

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


        verticalLayout_11->addWidget(csSamplerGroup);

        csUBOGroup = new CollapseGroupBox(csScrollContents);
        csUBOGroup->setObjectName(QString::fromUtf8("csUBOGroup"));
        sizePolicy6.setHeightForWidth(csUBOGroup->sizePolicy().hasHeightForWidth());
        csUBOGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_35 = new QHBoxLayout(csUBOGroup);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_35->setContentsMargins(2, 2, 2, 2);
        csUBOs = new RDTreeWidget(csUBOGroup);
        csUBOs->setObjectName(QString::fromUtf8("csUBOs"));
        csUBOs->setFrameShape(QFrame::Box);
        csUBOs->setFrameShadow(QFrame::Plain);
        csUBOs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csUBOs->setProperty("showDropIndicator", QVariant(false));
        csUBOs->setRootIsDecorated(false);
        csUBOs->setAllColumnsShowFocus(true);
        csUBOs->header()->setStretchLastSection(false);

        horizontalLayout_35->addWidget(csUBOs);


        verticalLayout_11->addWidget(csUBOGroup);

        csReadWriteGroup = new CollapseGroupBox(csScrollContents);
        csReadWriteGroup->setObjectName(QString::fromUtf8("csReadWriteGroup"));
        sizePolicy6.setHeightForWidth(csReadWriteGroup->sizePolicy().hasHeightForWidth());
        csReadWriteGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_39 = new QHBoxLayout(csReadWriteGroup);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        horizontalLayout_39->setContentsMargins(2, 2, 2, 2);
        csReadWrite = new RDTreeWidget(csReadWriteGroup);
        csReadWrite->setObjectName(QString::fromUtf8("csReadWrite"));
        csReadWrite->setFrameShape(QFrame::Box);
        csReadWrite->setFrameShadow(QFrame::Plain);
        csReadWrite->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csReadWrite->setProperty("showDropIndicator", QVariant(false));
        csReadWrite->setRootIsDecorated(false);
        csReadWrite->setAllColumnsShowFocus(true);
        csReadWrite->header()->setStretchLastSection(false);

        horizontalLayout_39->addWidget(csReadWrite);


        verticalLayout_11->addWidget(csReadWriteGroup);

        csSubroutineGroup = new CollapseGroupBox(csScrollContents);
        csSubroutineGroup->setObjectName(QString::fromUtf8("csSubroutineGroup"));
        sizePolicy6.setHeightForWidth(csSubroutineGroup->sizePolicy().hasHeightForWidth());
        csSubroutineGroup->setSizePolicy(sizePolicy6);
        horizontalLayout_36 = new QHBoxLayout(csSubroutineGroup);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(2, 2, 2, 2);
        csSubroutines = new RDTreeWidget(csSubroutineGroup);
        csSubroutines->setObjectName(QString::fromUtf8("csSubroutines"));
        csSubroutines->setFrameShape(QFrame::Box);
        csSubroutines->setFrameShadow(QFrame::Plain);
        csSubroutines->setEditTriggers(QAbstractItemView::NoEditTriggers);
        csSubroutines->setProperty("showDropIndicator", QVariant(false));
        csSubroutines->setRootIsDecorated(false);
        csSubroutines->setAllColumnsShowFocus(true);
        csSubroutines->header()->setStretchLastSection(false);

        horizontalLayout_36->addWidget(csSubroutines);


        verticalLayout_11->addWidget(csSubroutineGroup);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_11->addItem(verticalSpacer_7);

        csScroll->setWidget(csScrollContents);

        verticalLayout_9->addWidget(csScroll);

        stagesTabs->addTab(CS, QString());

        verticalLayout->addWidget(stagesTabs);


        retranslateUi(GLPipelineStateViewer);

        stagesTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GLPipelineStateViewer);
    } // setupUi

    void retranslateUi(QFrame *GLPipelineStateViewer)
    {
        controlsLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        showUnused->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Show items that are bound but not currently used by the pipeline.", nullptr));
#endif // QT_CONFIG(tooltip)
        showUnused->setText(QCoreApplication::translate("GLPipelineStateViewer", "Show Unused Items", nullptr));
#if QT_CONFIG(tooltip)
        showEmpty->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Show pipeline bindings which are completely empty and have nothing bound", nullptr));
#endif // QT_CONFIG(tooltip)
        showEmpty->setText(QCoreApplication::translate("GLPipelineStateViewer", "Show Empty Items", nullptr));
#if QT_CONFIG(tooltip)
        exportHTML->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Export the current pipeline state to an HTML file", nullptr));
#endif // QT_CONFIG(tooltip)
        exportHTML->setText(QCoreApplication::translate("GLPipelineStateViewer", "Export", nullptr));
        extensions->setText(QCoreApplication::translate("GLPipelineStateViewer", "Extensions", nullptr));
        attribGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Vertex Attribute Formats", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Vertex Array Object", nullptr));
        vaoLabel->setText(QString());
        buffersGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Buffers", nullptr));
        meshViewGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Mesh View", nullptr));
#if QT_CONFIG(tooltip)
        meshView->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "View the mesh input data", nullptr));
#endif // QT_CONFIG(tooltip)
        topologyGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Primitive Topology", nullptr));
        topology->setText(QCoreApplication::translate("GLPipelineStateViewer", "Triangle List", nullptr));
        topologyDiagram->setText(QString());
        primRestart->setText(QCoreApplication::translate("GLPipelineStateViewer", "Primitive Restart Enabled", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VTX), QCoreApplication::translate("GLPipelineStateViewer", "Vertex Input", nullptr));
        vsShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        vsPipeline->setText(QString());
        vsProgram->setText(QString());
        vsShader->setText(QString());
#if QT_CONFIG(tooltip)
        vsShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        vsShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        vsShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        vsTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        vsSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        vsUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        vsReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        vsSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(VS), QCoreApplication::translate("GLPipelineStateViewer", "Vertex Shader", nullptr));
        tcsShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        tcsPipeline->setText(QString());
        tcsProgram->setText(QString());
        tcsShader->setText(QString());
#if QT_CONFIG(tooltip)
        tcsShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        tcsShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        tcsShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        tcsShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        tcsTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        tcsSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        tcsUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        tcsReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        tcsSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(TCS), QCoreApplication::translate("GLPipelineStateViewer", "Tess Control Shader", nullptr));
        tesShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        tesPipeline->setText(QString());
        tesProgram->setText(QString());
        tesShader->setText(QString());
#if QT_CONFIG(tooltip)
        tesShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        tesShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        tesShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        tesShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        tesTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        tesSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        tesUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        tesReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        tesSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(TES), QCoreApplication::translate("GLPipelineStateViewer", "Tess Eval Shader", nullptr));
        gsShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        gsPipeline->setText(QString());
        gsProgram->setText(QString());
        gsShader->setText(QString());
#if QT_CONFIG(tooltip)
        gsShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        gsShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        gsShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        gsTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        gsSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        gsUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        xfbGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Transform Feedback", nullptr));
        xfbPausedLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Paused:", nullptr));
        xfbPaused->setText(QString());
        gsReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        gsSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(GS), QCoreApplication::translate("GLPipelineStateViewer", "Geometry Shader", nullptr));
        rasterizerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Rasterizer State", nullptr));
        fillModeLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Fill Mode:", nullptr));
        fillMode->setText(QCoreApplication::translate("GLPipelineStateViewer", "Solid", nullptr));
        cullModeLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Cull Mode:", nullptr));
        cullMode->setText(QCoreApplication::translate("GLPipelineStateViewer", "None", nullptr));
        rasterizerDiscardLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Rasterizer Discard:", nullptr));
        rasterizerDiscard->setText(QString());
        frontFaceLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Front:", nullptr));
        frontFace->setText(QCoreApplication::translate("GLPipelineStateViewer", "CCW", nullptr));
        depthBiasLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Depth Bias:", nullptr));
        depthBias->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        slopeScaledBiasLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Slope-Scaled Bias:", nullptr));
        slopeScaledBias->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        offsetClampLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Offset Clamp:", nullptr));
        offsetClamp->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        clipSetupLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Clip Setup:", nullptr));
        clipSetup->setText(QCoreApplication::translate("GLPipelineStateViewer", "0,0 Lower Left, Z = -1 to 1", nullptr));
        depthClampLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Depth Clamp:", nullptr));
        depthClamp->setText(QString());
        scissorLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Scissor:", nullptr));
        scissorEnabled->setText(QString());
        provokingLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Provoking Vertex:", nullptr));
        provoking->setText(QCoreApplication::translate("GLPipelineStateViewer", "Last", nullptr));
        clipDistanceLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Clip Distances:", nullptr));
        clipDistance->setText(QCoreApplication::translate("GLPipelineStateViewer", "0,1,2", nullptr));
        pointSizeLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Point Size:", nullptr));
        pointSize->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        lineWidthLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Line Width:", nullptr));
        lineWidth->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        MSAAGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Multisample State", nullptr));
        multisampleLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Multisample:", nullptr));
        multisample->setText(QString());
        sampleShadingLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Sample Shading:", nullptr));
        sampleShading->setText(QString());
        minSampleShadingLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Min Sample Shading:", nullptr));
        minSampleShading->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00", nullptr));
        alphaToCoverageLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Alpha to Coverage:", nullptr));
        alphaToCoverage->setText(QString());
        alphaToOneLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Alpha to One:", nullptr));
        alphaToOne->setText(QString());
        sampleCoverageLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Sample Coverage:", nullptr));
        sampleCoverage->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.0", nullptr));
        sampleMaskLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Sample Mask:", nullptr));
        sampleMask->setText(QCoreApplication::translate("GLPipelineStateViewer", "FFFFFFFF", nullptr));
        viewportsGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Viewports", nullptr));
        scissorGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Scissor Regions", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(RS), QCoreApplication::translate("GLPipelineStateViewer", "Rasterizer", nullptr));
        fsShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        fsPipeline->setText(QString());
        fsProgram->setText(QString());
        fsShader->setText(QString());
#if QT_CONFIG(tooltip)
        fsShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        fsShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        fsShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        fsShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        fsTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        fsSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        fsUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        fsReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        fsSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(FS), QCoreApplication::translate("GLPipelineStateViewer", "Fragment Shader", nullptr));
        framebufferGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Framebuffer", nullptr));
        blendsGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Target Blends", nullptr));
        blendStateGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Blend State", nullptr));
        blendFactorLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Blend Factor:", nullptr));
        blendFactor->setText(QCoreApplication::translate("GLPipelineStateViewer", "0.00, 0.00, 0.00, 0.00", nullptr));
        depthStateGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Depth State", nullptr));
        depthEnabledLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Enabled:", nullptr));
        depthEnabled->setText(QString());
        depthFuncLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Func:", nullptr));
        depthFunc->setText(QCoreApplication::translate("GLPipelineStateViewer", "GREATER_EQUAL", nullptr));
        depthWriteLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Write:", nullptr));
        depthWrite->setText(QString());
        depthBoundsLabel->setText(QCoreApplication::translate("GLPipelineStateViewer", "Bounds:", nullptr));
        depthBounds->setText(QString());
        stencilStateGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Stencil State", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(FB), QCoreApplication::translate("GLPipelineStateViewer", "Framebuffer Output", nullptr));
        csShaderGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader", nullptr));
        csPipeline->setText(QString());
        csProgram->setText(QString());
        csShader->setText(QString());
#if QT_CONFIG(tooltip)
        csShaderViewButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Open Shader Source", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderViewButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "View", nullptr));
#if QT_CONFIG(tooltip)
        csShaderEditButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Edit Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderEditButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        csShaderSaveButton->setToolTip(QCoreApplication::translate("GLPipelineStateViewer", "Save Shader GLSL", nullptr));
#endif // QT_CONFIG(tooltip)
        csShaderSaveButton->setText(QCoreApplication::translate("GLPipelineStateViewer", "Save", nullptr));
        csTexGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Textures", nullptr));
        csSamplerGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Samplers", nullptr));
        csUBOGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Uniforms and UBOs", nullptr));
        csReadWriteGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Read/Write Bindings", nullptr));
        csSubroutineGroup->setTitle(QCoreApplication::translate("GLPipelineStateViewer", "Shader Subroutines", nullptr));
        stagesTabs->setTabText(stagesTabs->indexOf(CS), QCoreApplication::translate("GLPipelineStateViewer", "Compute Shader", nullptr));
        (void)GLPipelineStateViewer;
    } // retranslateUi

};

namespace Ui {
    class GLPipelineStateViewer: public Ui_GLPipelineStateViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLPIPELINESTATEVIEWER_H
