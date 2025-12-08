/********************************************************************************
** Form generated from reading UI file 'BufferViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUFFERVIEWER_H
#define UI_BUFFERVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "3rdparty/toolwindowmanager/ToolWindowManager.h"
#include "Widgets/BufferFormatSpecifier.h"
#include "Widgets/CustomPaintWidget.h"
#include "Widgets/Extended/RDTableView.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_BufferViewer
{
public:
    RDTreeWidget *fixedVars;
    RDTableView *inTable;
    RDTableView *out1Table;
    QTabWidget *outputTabs;
    QWidget *inTab;
    QGridLayout *gridLayout;
    QFrame *renderContainer;
    QGridLayout *renderContainerGridLayout;
    QFrame *controlsToolbar;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *toggleControls;
    QToolButton *resetCamera;
    QToolButton *autofitCamera;
    QFrame *line;
    QLabel *controlTypeLabel;
    QComboBox *controlType;
    QFrame *line_5;
    QLabel *drawRangeLabel;
    QComboBox *drawRange;
    QFrame *line_6;
    QLabel *visualisationLabel;
    QComboBox *visualisation;
    QToolButton *wireframeRender;
    QToolButton *highlightVerts;
    QLabel *vtxExploderLabel;
    QSlider *vtxExploderSlider;
    QPushButton *exploderReset;
    QLabel *exploderScaleLabel;
    QDoubleSpinBox *exploderScale;
    QSpacerItem *horizontalSpacer;
    QGroupBox *cameraControlsGroup;
    QGridLayout *gridLayout_2;
    QScrollArea *cameraControlsScroll;
    QWidget *cameraControlsWidget;
    QGridLayout *gridLayout_5;
    QLabel *camSpeedLabel;
    QDoubleSpinBox *camSpeed;
    QLabel *guessInstructions;
    QLabel *matrixTypeLabel;
    QComboBox *matrixType;
    QLabel *fovGuessLabel;
    QDoubleSpinBox *fovGuess;
    QLabel *aspectGuessLabel;
    QDoubleSpinBox *aspectGuess;
    QLabel *nearGuessLabel;
    QDoubleSpinBox *nearGuess;
    QLabel *farGuessLabel;
    QDoubleSpinBox *farGuess;
    QLabel *axisMappingLabel;
    QComboBox *axisMappingCombo;
    QPushButton *axisMappingButton;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *minBoundsLabel;
    QLabel *maxBoundsLabel;
    QSpacerItem *verticalSpacer;
    CustomPaintWidget *render;
    QWidget *out1Tab;
    QGridLayout *gridLayout_3;
    QWidget *out2Tab;
    QGridLayout *gridLayout_4;
    RDTableView *out2Table;
    QFrame *meshToolbar;
    QHBoxLayout *horizontalLayout_9;
    QLabel *zoomLabel;
    QFrame *controlsLine;
    QToolButton *exportDrop;
    QToolButton *showPadding;
    QToolButton *syncViews;
    QToolButton *setFormat;
    QToolButton *resourceDetails;
    QToolButton *extensions;
    QFrame *offsetLine;
    QLabel *rowOffsetLabel;
    QSpinBox *rowOffset;
    QLabel *instanceLabel;
    QSpinBox *instance;
    QLabel *viewLabel;
    QSpinBox *viewIndex;
    QLabel *meshFilterLabel;
    QToolButton *resetMeshFilterButton;
    QFrame *byteRangeLine;
    QLabel *byteRangeStartLabel;
    QDoubleSpinBox *byteRangeStart;
    QLabel *byteRangeLengthLabel;
    QDoubleSpinBox *byteRangeLength;
    QSpacerItem *horizontalSpacer_2;
    ToolWindowManager *dockarea;
    BufferFormatSpecifier *formatSpecifier;

    void setupUi(QFrame *BufferViewer)
    {
        if (BufferViewer->objectName().isEmpty())
            BufferViewer->setObjectName(QString::fromUtf8("BufferViewer"));
        BufferViewer->resize(1300, 837);
        fixedVars = new RDTreeWidget(BufferViewer);
        fixedVars->setObjectName(QString::fromUtf8("fixedVars"));
        fixedVars->setGeometry(QRect(510, 150, 191, 71));
        fixedVars->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fixedVars->setProperty("showDropIndicator", QVariant(false));
        fixedVars->setSelectionMode(QAbstractItemView::ContiguousSelection);
        fixedVars->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        fixedVars->setAllColumnsShowFocus(true);
        fixedVars->header()->setStretchLastSection(false);
        inTable = new RDTableView(BufferViewer);
        inTable->setObjectName(QString::fromUtf8("inTable"));
        inTable->setGeometry(QRect(60, 50, 194, 91));
        inTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        inTable->setProperty("showDropIndicator", QVariant(false));
        inTable->setDragDropOverwriteMode(false);
        inTable->setSelectionMode(QAbstractItemView::SingleSelection);
        inTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        inTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        inTable->setCornerButtonEnabled(false);
        inTable->horizontalHeader()->setHighlightSections(false);
        inTable->verticalHeader()->setVisible(false);
        out1Table = new RDTableView(BufferViewer);
        out1Table->setObjectName(QString::fromUtf8("out1Table"));
        out1Table->setGeometry(QRect(280, 50, 194, 101));
        out1Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        out1Table->setProperty("showDropIndicator", QVariant(false));
        out1Table->setDragDropOverwriteMode(false);
        out1Table->setSelectionMode(QAbstractItemView::SingleSelection);
        out1Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        out1Table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        out1Table->setCornerButtonEnabled(false);
        out1Table->horizontalHeader()->setHighlightSections(false);
        out1Table->verticalHeader()->setVisible(false);
        outputTabs = new QTabWidget(BufferViewer);
        outputTabs->setObjectName(QString::fromUtf8("outputTabs"));
        outputTabs->setGeometry(QRect(50, 220, 666, 312));
        outputTabs->setDocumentMode(true);
        inTab = new QWidget();
        inTab->setObjectName(QString::fromUtf8("inTab"));
        gridLayout = new QGridLayout(inTab);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        renderContainer = new QFrame(inTab);
        renderContainer->setObjectName(QString::fromUtf8("renderContainer"));
        renderContainerGridLayout = new QGridLayout(renderContainer);
        renderContainerGridLayout->setSpacing(6);
        renderContainerGridLayout->setObjectName(QString::fromUtf8("renderContainerGridLayout"));
        renderContainerGridLayout->setContentsMargins(4, 2, 4, 2);
        controlsToolbar = new QFrame(renderContainer);
        controlsToolbar->setObjectName(QString::fromUtf8("controlsToolbar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controlsToolbar->sizePolicy().hasHeightForWidth());
        controlsToolbar->setSizePolicy(sizePolicy);
        controlsToolbar->setMinimumSize(QSize(0, 28));
        horizontalLayout_10 = new QHBoxLayout(controlsToolbar);
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 6, 0);
        toggleControls = new QToolButton(controlsToolbar);
        toggleControls->setObjectName(QString::fromUtf8("toggleControls"));
        toggleControls->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        toggleControls->setIcon(icon);
        toggleControls->setCheckable(true);
        toggleControls->setChecked(false);
        toggleControls->setAutoRaise(true);

        horizontalLayout_10->addWidget(toggleControls);

        resetCamera = new QToolButton(controlsToolbar);
        resetCamera->setObjectName(QString::fromUtf8("resetCamera"));
        resetCamera->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetCamera->setIcon(icon1);
        resetCamera->setAutoRaise(true);

        horizontalLayout_10->addWidget(resetCamera);

        autofitCamera = new QToolButton(controlsToolbar);
        autofitCamera->setObjectName(QString::fromUtf8("autofitCamera"));
        autofitCamera->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/wand.png"), QSize(), QIcon::Normal, QIcon::Off);
        autofitCamera->setIcon(icon2);
        autofitCamera->setAutoRaise(true);

        horizontalLayout_10->addWidget(autofitCamera);

        line = new QFrame(controlsToolbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line);

        controlTypeLabel = new QLabel(controlsToolbar);
        controlTypeLabel->setObjectName(QString::fromUtf8("controlTypeLabel"));

        horizontalLayout_10->addWidget(controlTypeLabel);

        controlType = new QComboBox(controlsToolbar);
        controlType->setObjectName(QString::fromUtf8("controlType"));

        horizontalLayout_10->addWidget(controlType);

        line_5 = new QFrame(controlsToolbar);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_5);

        drawRangeLabel = new QLabel(controlsToolbar);
        drawRangeLabel->setObjectName(QString::fromUtf8("drawRangeLabel"));

        horizontalLayout_10->addWidget(drawRangeLabel);

        drawRange = new QComboBox(controlsToolbar);
        drawRange->setObjectName(QString::fromUtf8("drawRange"));
        drawRange->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_10->addWidget(drawRange);

        line_6 = new QFrame(controlsToolbar);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_6);

        visualisationLabel = new QLabel(controlsToolbar);
        visualisationLabel->setObjectName(QString::fromUtf8("visualisationLabel"));

        horizontalLayout_10->addWidget(visualisationLabel);

        visualisation = new QComboBox(controlsToolbar);
        visualisation->setObjectName(QString::fromUtf8("visualisation"));

        horizontalLayout_10->addWidget(visualisation);

        wireframeRender = new QToolButton(controlsToolbar);
        wireframeRender->setObjectName(QString::fromUtf8("wireframeRender"));
        wireframeRender->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wireframeRender->sizePolicy().hasHeightForWidth());
        wireframeRender->setSizePolicy(sizePolicy1);
        wireframeRender->setCheckable(true);
        wireframeRender->setChecked(true);
        wireframeRender->setToolButtonStyle(Qt::ToolButtonTextOnly);
        wireframeRender->setAutoRaise(true);

        horizontalLayout_10->addWidget(wireframeRender);

        highlightVerts = new QToolButton(controlsToolbar);
        highlightVerts->setObjectName(QString::fromUtf8("highlightVerts"));
        highlightVerts->setEnabled(true);
        sizePolicy1.setHeightForWidth(highlightVerts->sizePolicy().hasHeightForWidth());
        highlightVerts->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/asterisk_orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        highlightVerts->setIcon(icon3);
        highlightVerts->setCheckable(true);
        highlightVerts->setChecked(true);
        highlightVerts->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        highlightVerts->setAutoRaise(true);

        horizontalLayout_10->addWidget(highlightVerts);

        vtxExploderLabel = new QLabel(controlsToolbar);
        vtxExploderLabel->setObjectName(QString::fromUtf8("vtxExploderLabel"));
        vtxExploderLabel->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vtxExploderLabel->sizePolicy().hasHeightForWidth());
        vtxExploderLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(vtxExploderLabel);

        vtxExploderSlider = new QSlider(controlsToolbar);
        vtxExploderSlider->setObjectName(QString::fromUtf8("vtxExploderSlider"));
        sizePolicy1.setHeightForWidth(vtxExploderSlider->sizePolicy().hasHeightForWidth());
        vtxExploderSlider->setSizePolicy(sizePolicy1);
        vtxExploderSlider->setMinimumSize(QSize(90, 0));
        vtxExploderSlider->setFocusPolicy(Qt::StrongFocus);
        vtxExploderSlider->setMinimum(-100);
        vtxExploderSlider->setMaximum(100);
        vtxExploderSlider->setSliderPosition(0);
        vtxExploderSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(vtxExploderSlider);

        exploderReset = new QPushButton(controlsToolbar);
        exploderReset->setObjectName(QString::fromUtf8("exploderReset"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(exploderReset->sizePolicy().hasHeightForWidth());
        exploderReset->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(exploderReset);

        exploderScaleLabel = new QLabel(controlsToolbar);
        exploderScaleLabel->setObjectName(QString::fromUtf8("exploderScaleLabel"));

        horizontalLayout_10->addWidget(exploderScaleLabel);

        exploderScale = new QDoubleSpinBox(controlsToolbar);
        exploderScale->setObjectName(QString::fromUtf8("exploderScale"));
        exploderScale->setDecimals(1);
        exploderScale->setMinimum(0.100000000000000);
        exploderScale->setMaximum(99.000000000000000);
        exploderScale->setSingleStep(0.100000000000000);
        exploderScale->setValue(1.000000000000000);

        horizontalLayout_10->addWidget(exploderScale);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        renderContainerGridLayout->addWidget(controlsToolbar, 0, 0, 1, 2);

        cameraControlsGroup = new QGroupBox(renderContainer);
        cameraControlsGroup->setObjectName(QString::fromUtf8("cameraControlsGroup"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cameraControlsGroup->sizePolicy().hasHeightForWidth());
        cameraControlsGroup->setSizePolicy(sizePolicy4);
        gridLayout_2 = new QGridLayout(cameraControlsGroup);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cameraControlsScroll = new QScrollArea(cameraControlsGroup);
        cameraControlsScroll->setObjectName(QString::fromUtf8("cameraControlsScroll"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cameraControlsScroll->sizePolicy().hasHeightForWidth());
        cameraControlsScroll->setSizePolicy(sizePolicy5);
        cameraControlsScroll->setFrameShape(QFrame::NoFrame);
        cameraControlsScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        cameraControlsScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        cameraControlsScroll->setWidgetResizable(true);
        cameraControlsWidget = new QWidget();
        cameraControlsWidget->setObjectName(QString::fromUtf8("cameraControlsWidget"));
        cameraControlsWidget->setGeometry(QRect(0, 0, 312, 308));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cameraControlsWidget->sizePolicy().hasHeightForWidth());
        cameraControlsWidget->setSizePolicy(sizePolicy6);
        gridLayout_5 = new QGridLayout(cameraControlsWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        camSpeedLabel = new QLabel(cameraControlsWidget);
        camSpeedLabel->setObjectName(QString::fromUtf8("camSpeedLabel"));

        gridLayout_5->addWidget(camSpeedLabel, 0, 0, 1, 1);

        camSpeed = new QDoubleSpinBox(cameraControlsWidget);
        camSpeed->setObjectName(QString::fromUtf8("camSpeed"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(camSpeed->sizePolicy().hasHeightForWidth());
        camSpeed->setSizePolicy(sizePolicy7);
        camSpeed->setDecimals(5);
        camSpeed->setMinimum(0.000100000000000);
        camSpeed->setMaximum(100.000000000000000);
        camSpeed->setSingleStep(0.000100000000000);
        camSpeed->setValue(1.000000000000000);

        gridLayout_5->addWidget(camSpeed, 0, 1, 1, 1);

        guessInstructions = new QLabel(cameraControlsWidget);
        guessInstructions->setObjectName(QString::fromUtf8("guessInstructions"));

        gridLayout_5->addWidget(guessInstructions, 1, 0, 1, 2);

        matrixTypeLabel = new QLabel(cameraControlsWidget);
        matrixTypeLabel->setObjectName(QString::fromUtf8("matrixTypeLabel"));

        gridLayout_5->addWidget(matrixTypeLabel, 2, 0, 1, 1);

        matrixType = new QComboBox(cameraControlsWidget);
        matrixType->setObjectName(QString::fromUtf8("matrixType"));
        matrixType->setMaxVisibleItems(2);
        matrixType->setMaxCount(2);
        matrixType->setInsertPolicy(QComboBox::NoInsert);
        matrixType->setFrame(true);

        gridLayout_5->addWidget(matrixType, 2, 1, 1, 1);

        fovGuessLabel = new QLabel(cameraControlsWidget);
        fovGuessLabel->setObjectName(QString::fromUtf8("fovGuessLabel"));

        gridLayout_5->addWidget(fovGuessLabel, 3, 0, 1, 1);

        fovGuess = new QDoubleSpinBox(cameraControlsWidget);
        fovGuess->setObjectName(QString::fromUtf8("fovGuess"));
        fovGuess->setMinimum(1.000000000000000);
        fovGuess->setMaximum(180.000000000000000);
        fovGuess->setValue(90.000000000000000);

        gridLayout_5->addWidget(fovGuess, 3, 1, 1, 1);

        aspectGuessLabel = new QLabel(cameraControlsWidget);
        aspectGuessLabel->setObjectName(QString::fromUtf8("aspectGuessLabel"));

        gridLayout_5->addWidget(aspectGuessLabel, 4, 0, 1, 1);

        aspectGuess = new QDoubleSpinBox(cameraControlsWidget);
        aspectGuess->setObjectName(QString::fromUtf8("aspectGuess"));
        aspectGuess->setMinimum(0.000000000000000);
        aspectGuess->setMaximum(10.000000000000000);
        aspectGuess->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(aspectGuess, 4, 1, 1, 1);

        nearGuessLabel = new QLabel(cameraControlsWidget);
        nearGuessLabel->setObjectName(QString::fromUtf8("nearGuessLabel"));

        gridLayout_5->addWidget(nearGuessLabel, 5, 0, 1, 1);

        nearGuess = new QDoubleSpinBox(cameraControlsWidget);
        nearGuess->setObjectName(QString::fromUtf8("nearGuess"));
        nearGuess->setMaximum(100.000000000000000);
        nearGuess->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(nearGuess, 5, 1, 1, 1);

        farGuessLabel = new QLabel(cameraControlsWidget);
        farGuessLabel->setObjectName(QString::fromUtf8("farGuessLabel"));

        gridLayout_5->addWidget(farGuessLabel, 6, 0, 1, 1);

        farGuess = new QDoubleSpinBox(cameraControlsWidget);
        farGuess->setObjectName(QString::fromUtf8("farGuess"));
        farGuess->setMaximum(1000000.000000000000000);
        farGuess->setSingleStep(10.000000000000000);

        gridLayout_5->addWidget(farGuess, 6, 1, 1, 1);

        axisMappingLabel = new QLabel(cameraControlsWidget);
        axisMappingLabel->setObjectName(QString::fromUtf8("axisMappingLabel"));

        gridLayout_5->addWidget(axisMappingLabel, 7, 0, 1, 1);

        axisMappingCombo = new QComboBox(cameraControlsWidget);
        axisMappingCombo->setObjectName(QString::fromUtf8("axisMappingCombo"));

        gridLayout_5->addWidget(axisMappingCombo, 7, 1, 1, 1);

        axisMappingButton = new QPushButton(cameraControlsWidget);
        axisMappingButton->setObjectName(QString::fromUtf8("axisMappingButton"));
        axisMappingButton->setEnabled(false);

        gridLayout_5->addWidget(axisMappingButton, 8, 1, 1, 1);

        line_2 = new QFrame(cameraControlsWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 9, 0, 1, 2);

        label_3 = new QLabel(cameraControlsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 10, 0, 1, 1);

        minBoundsLabel = new QLabel(cameraControlsWidget);
        minBoundsLabel->setObjectName(QString::fromUtf8("minBoundsLabel"));

        gridLayout_5->addWidget(minBoundsLabel, 10, 1, 1, 1);

        maxBoundsLabel = new QLabel(cameraControlsWidget);
        maxBoundsLabel->setObjectName(QString::fromUtf8("maxBoundsLabel"));

        gridLayout_5->addWidget(maxBoundsLabel, 11, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 12, 1, 1, 1);

        cameraControlsScroll->setWidget(cameraControlsWidget);

        gridLayout_2->addWidget(cameraControlsScroll, 0, 1, 1, 1);


        renderContainerGridLayout->addWidget(cameraControlsGroup, 1, 0, 1, 1);

        render = new CustomPaintWidget(renderContainer);
        render->setObjectName(QString::fromUtf8("render"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(render->sizePolicy().hasHeightForWidth());
        render->setSizePolicy(sizePolicy8);

        renderContainerGridLayout->addWidget(render, 1, 1, 1, 1);


        gridLayout->addWidget(renderContainer, 0, 0, 1, 1);

        outputTabs->addTab(inTab, QString());
        out1Tab = new QWidget();
        out1Tab->setObjectName(QString::fromUtf8("out1Tab"));
        gridLayout_3 = new QGridLayout(out1Tab);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        outputTabs->addTab(out1Tab, QString());
        out2Tab = new QWidget();
        out2Tab->setObjectName(QString::fromUtf8("out2Tab"));
        gridLayout_4 = new QGridLayout(out2Tab);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        outputTabs->addTab(out2Tab, QString());
        out2Table = new RDTableView(BufferViewer);
        out2Table->setObjectName(QString::fromUtf8("out2Table"));
        out2Table->setGeometry(QRect(500, 50, 194, 81));
        out2Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        out2Table->setProperty("showDropIndicator", QVariant(false));
        out2Table->setDragDropOverwriteMode(false);
        out2Table->setSelectionMode(QAbstractItemView::SingleSelection);
        out2Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        out2Table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        out2Table->setCornerButtonEnabled(false);
        out2Table->horizontalHeader()->setHighlightSections(false);
        out2Table->verticalHeader()->setVisible(false);
        meshToolbar = new QFrame(BufferViewer);
        meshToolbar->setObjectName(QString::fromUtf8("meshToolbar"));
        meshToolbar->setGeometry(QRect(0, 10, 767, 28));
        sizePolicy.setHeightForWidth(meshToolbar->sizePolicy().hasHeightForWidth());
        meshToolbar->setSizePolicy(sizePolicy);
        meshToolbar->setMinimumSize(QSize(0, 28));
        meshToolbar->setFrameShape(QFrame::Panel);
        meshToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(meshToolbar);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(6, 2, 6, 2);
        zoomLabel = new QLabel(meshToolbar);
        zoomLabel->setObjectName(QString::fromUtf8("zoomLabel"));

        horizontalLayout_9->addWidget(zoomLabel);

        controlsLine = new QFrame(meshToolbar);
        controlsLine->setObjectName(QString::fromUtf8("controlsLine"));
        controlsLine->setFrameShape(QFrame::VLine);
        controlsLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(controlsLine);

        exportDrop = new QToolButton(meshToolbar);
        exportDrop->setObjectName(QString::fromUtf8("exportDrop"));
        exportDrop->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportDrop->setIcon(icon4);
        exportDrop->setCheckable(false);
        exportDrop->setChecked(false);
        exportDrop->setPopupMode(QToolButton::MenuButtonPopup);
        exportDrop->setAutoRaise(true);

        horizontalLayout_9->addWidget(exportDrop);

        showPadding = new QToolButton(meshToolbar);
        showPadding->setObjectName(QString::fromUtf8("showPadding"));
        showPadding->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/align.png"), QSize(), QIcon::Normal, QIcon::Off);
        showPadding->setIcon(icon5);
        showPadding->setCheckable(true);
        showPadding->setChecked(false);
        showPadding->setAutoRaise(true);

        horizontalLayout_9->addWidget(showPadding);

        syncViews = new QToolButton(meshToolbar);
        syncViews->setObjectName(QString::fromUtf8("syncViews"));
        syncViews->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/arrow_join.png"), QSize(), QIcon::Normal, QIcon::Off);
        syncViews->setIcon(icon6);
        syncViews->setCheckable(true);
        syncViews->setChecked(false);
        syncViews->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        syncViews->setAutoRaise(true);

        horizontalLayout_9->addWidget(syncViews);

        setFormat = new QToolButton(meshToolbar);
        setFormat->setObjectName(QString::fromUtf8("setFormat"));
        setFormat->setCheckable(true);
        setFormat->setToolButtonStyle(Qt::ToolButtonTextOnly);
        setFormat->setAutoRaise(true);

        horizontalLayout_9->addWidget(setFormat);

        resourceDetails = new QToolButton(meshToolbar);
        resourceDetails->setObjectName(QString::fromUtf8("resourceDetails"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        resourceDetails->setIcon(icon7);
        resourceDetails->setAutoRaise(true);

        horizontalLayout_9->addWidget(resourceDetails);

        extensions = new QToolButton(meshToolbar);
        extensions->setObjectName(QString::fromUtf8("extensions"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/plugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        extensions->setIcon(icon8);
        extensions->setAutoRaise(true);

        horizontalLayout_9->addWidget(extensions);

        offsetLine = new QFrame(meshToolbar);
        offsetLine->setObjectName(QString::fromUtf8("offsetLine"));
        offsetLine->setFrameShape(QFrame::VLine);
        offsetLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(offsetLine);

        rowOffsetLabel = new QLabel(meshToolbar);
        rowOffsetLabel->setObjectName(QString::fromUtf8("rowOffsetLabel"));

        horizontalLayout_9->addWidget(rowOffsetLabel);

        rowOffset = new QSpinBox(meshToolbar);
        rowOffset->setObjectName(QString::fromUtf8("rowOffset"));
        rowOffset->setMaximum(1000000);

        horizontalLayout_9->addWidget(rowOffset);

        instanceLabel = new QLabel(meshToolbar);
        instanceLabel->setObjectName(QString::fromUtf8("instanceLabel"));

        horizontalLayout_9->addWidget(instanceLabel);

        instance = new QSpinBox(meshToolbar);
        instance->setObjectName(QString::fromUtf8("instance"));
        instance->setMaximum(100000);

        horizontalLayout_9->addWidget(instance);

        viewLabel = new QLabel(meshToolbar);
        viewLabel->setObjectName(QString::fromUtf8("viewLabel"));

        horizontalLayout_9->addWidget(viewLabel);

        viewIndex = new QSpinBox(meshToolbar);
        viewIndex->setObjectName(QString::fromUtf8("viewIndex"));
        viewIndex->setMaximum(16);

        horizontalLayout_9->addWidget(viewIndex);

        meshFilterLabel = new QLabel(meshToolbar);
        meshFilterLabel->setObjectName(QString::fromUtf8("meshFilterLabel"));

        horizontalLayout_9->addWidget(meshFilterLabel);

        resetMeshFilterButton = new QToolButton(meshToolbar);
        resetMeshFilterButton->setObjectName(QString::fromUtf8("resetMeshFilterButton"));
        resetMeshFilterButton->setIcon(icon1);
        resetMeshFilterButton->setAutoRaise(true);

        horizontalLayout_9->addWidget(resetMeshFilterButton);

        byteRangeLine = new QFrame(meshToolbar);
        byteRangeLine->setObjectName(QString::fromUtf8("byteRangeLine"));
        byteRangeLine->setFrameShape(QFrame::VLine);
        byteRangeLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(byteRangeLine);

        byteRangeStartLabel = new QLabel(meshToolbar);
        byteRangeStartLabel->setObjectName(QString::fromUtf8("byteRangeStartLabel"));

        horizontalLayout_9->addWidget(byteRangeStartLabel);

        byteRangeStart = new QDoubleSpinBox(meshToolbar);
        byteRangeStart->setObjectName(QString::fromUtf8("byteRangeStart"));
        byteRangeStart->setMaximum(999123456.000000000000000);

        horizontalLayout_9->addWidget(byteRangeStart);

        byteRangeLengthLabel = new QLabel(meshToolbar);
        byteRangeLengthLabel->setObjectName(QString::fromUtf8("byteRangeLengthLabel"));

        horizontalLayout_9->addWidget(byteRangeLengthLabel);

        byteRangeLength = new QDoubleSpinBox(meshToolbar);
        byteRangeLength->setObjectName(QString::fromUtf8("byteRangeLength"));
        byteRangeLength->setMaximum(999123456.000000000000000);

        horizontalLayout_9->addWidget(byteRangeLength);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        dockarea = new ToolWindowManager(BufferViewer);
        dockarea->setObjectName(QString::fromUtf8("dockarea"));
        dockarea->setGeometry(QRect(30, 50, 119, 100));
        sizePolicy8.setHeightForWidth(dockarea->sizePolicy().hasHeightForWidth());
        dockarea->setSizePolicy(sizePolicy8);
        dockarea->setMinimumSize(QSize(100, 100));
        dockarea->setAutoFillBackground(false);
        formatSpecifier = new BufferFormatSpecifier(BufferViewer);
        formatSpecifier->setObjectName(QString::fromUtf8("formatSpecifier"));
        formatSpecifier->setGeometry(QRect(139, 160, 361, 61));

        retranslateUi(BufferViewer);

        outputTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BufferViewer);
    } // setupUi

    void retranslateUi(QFrame *BufferViewer)
    {
        BufferViewer->setWindowTitle(QCoreApplication::translate("BufferViewer", "Buffer Viewer", nullptr));
#if QT_CONFIG(tooltip)
        toggleControls->setToolTip(QCoreApplication::translate("BufferViewer", "Configure Camera", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetCamera->setToolTip(QCoreApplication::translate("BufferViewer", "Reset Camera Position", nullptr));
#endif // QT_CONFIG(tooltip)
        resetCamera->setText(QString());
#if QT_CONFIG(tooltip)
        autofitCamera->setToolTip(QCoreApplication::translate("BufferViewer", "Fit Camera to Geometry", nullptr));
#endif // QT_CONFIG(tooltip)
        autofitCamera->setText(QString());
        controlTypeLabel->setText(QCoreApplication::translate("BufferViewer", "Controls", nullptr));
        drawRangeLabel->setText(QCoreApplication::translate("BufferViewer", "Show", nullptr));
        visualisationLabel->setText(QCoreApplication::translate("BufferViewer", "Visualisation", nullptr));
#if QT_CONFIG(tooltip)
        wireframeRender->setToolTip(QCoreApplication::translate("BufferViewer", "Wireframe", nullptr));
#endif // QT_CONFIG(tooltip)
        wireframeRender->setText(QCoreApplication::translate("BufferViewer", "Wireframe", nullptr));
#if QT_CONFIG(tooltip)
        highlightVerts->setToolTip(QCoreApplication::translate("BufferViewer", "Highlight Vertices", nullptr));
#endif // QT_CONFIG(tooltip)
        highlightVerts->setText(QCoreApplication::translate("BufferViewer", "Highlight Vertices", nullptr));
        vtxExploderLabel->setText(QCoreApplication::translate("BufferViewer", "Exploder", nullptr));
#if QT_CONFIG(tooltip)
        vtxExploderSlider->setToolTip(QCoreApplication::translate("BufferViewer", "Explode vertices", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exploderReset->setToolTip(QCoreApplication::translate("BufferViewer", "Reset/zero exploder slider", nullptr));
#endif // QT_CONFIG(tooltip)
        exploderReset->setText(QCoreApplication::translate("BufferViewer", "Reset", nullptr));
        exploderScaleLabel->setText(QCoreApplication::translate("BufferViewer", "Scale", nullptr));
#if QT_CONFIG(tooltip)
        exploderScale->setToolTip(QCoreApplication::translate("BufferViewer", "Exploder scaling", nullptr));
#endif // QT_CONFIG(tooltip)
        cameraControlsGroup->setTitle(QCoreApplication::translate("BufferViewer", "Camera Controls", nullptr));
        camSpeedLabel->setText(QCoreApplication::translate("BufferViewer", "Speed:", nullptr));
        guessInstructions->setText(QCoreApplication::translate("BufferViewer", "Manually configure projection used by vertex pipeline.\n"
"Enter 0.0 to use automatic/guessed value derived from data.", nullptr));
        matrixTypeLabel->setText(QCoreApplication::translate("BufferViewer", "Matrix Type:", nullptr));
        fovGuessLabel->setText(QCoreApplication::translate("BufferViewer", "Persp. FOV:", nullptr));
        aspectGuessLabel->setText(QCoreApplication::translate("BufferViewer", "Aspect Ratio:", nullptr));
        nearGuessLabel->setText(QCoreApplication::translate("BufferViewer", "Near Plane:", nullptr));
        farGuessLabel->setText(QCoreApplication::translate("BufferViewer", "Far Plane:", nullptr));
        axisMappingLabel->setText(QCoreApplication::translate("BufferViewer", "Axis Mapping:", nullptr));
        axisMappingButton->setText(QCoreApplication::translate("BufferViewer", "Edit Custom Mapping", nullptr));
        label_3->setText(QCoreApplication::translate("BufferViewer", "Bounding Box:", nullptr));
        minBoundsLabel->setText(QString());
        maxBoundsLabel->setText(QString());
        outputTabs->setTabText(outputTabs->indexOf(inTab), QCoreApplication::translate("BufferViewer", "VS In", nullptr));
        outputTabs->setTabText(outputTabs->indexOf(out1Tab), QCoreApplication::translate("BufferViewer", "VS Out", nullptr));
        outputTabs->setTabText(outputTabs->indexOf(out2Tab), QCoreApplication::translate("BufferViewer", "GS/DS Out", nullptr));
        zoomLabel->setText(QCoreApplication::translate("BufferViewer", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        exportDrop->setToolTip(QCoreApplication::translate("BufferViewer", "Export to CSV or raw bytes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        showPadding->setToolTip(QCoreApplication::translate("BufferViewer", "Show visible padding", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        syncViews->setToolTip(QCoreApplication::translate("BufferViewer", "Sync Views", nullptr));
#endif // QT_CONFIG(tooltip)
        syncViews->setText(QCoreApplication::translate("BufferViewer", "Sync Views", nullptr));
        setFormat->setText(QCoreApplication::translate("BufferViewer", "{}", nullptr));
#if QT_CONFIG(tooltip)
        resourceDetails->setToolTip(QCoreApplication::translate("BufferViewer", "Open the currently visible buffer's resource details in the resource inspector", nullptr));
#endif // QT_CONFIG(tooltip)
        rowOffsetLabel->setText(QCoreApplication::translate("BufferViewer", "Row Offset", nullptr));
        instanceLabel->setText(QCoreApplication::translate("BufferViewer", "Instance", nullptr));
        viewLabel->setText(QCoreApplication::translate("BufferViewer", "View", nullptr));
        meshFilterLabel->setText(QCoreApplication::translate("BufferViewer", "Current Range filter: None", nullptr));
#if QT_CONFIG(tooltip)
        resetMeshFilterButton->setToolTip(QCoreApplication::translate("BufferViewer", "Reset the filter showing only a subset of meshlets", nullptr));
#endif // QT_CONFIG(tooltip)
        byteRangeStartLabel->setText(QCoreApplication::translate("BufferViewer", "Byte Range Start", nullptr));
        byteRangeLengthLabel->setText(QCoreApplication::translate("BufferViewer", "Length", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BufferViewer: public Ui_BufferViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUFFERVIEWER_H
