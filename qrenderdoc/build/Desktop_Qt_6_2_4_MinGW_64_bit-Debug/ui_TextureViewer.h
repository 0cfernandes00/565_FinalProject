/********************************************************************************
** Form generated from reading UI file 'TextureViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREVIEWER_H
#define UI_TEXTUREVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/toolwindowmanager/ToolWindowManager.h"
#include "Widgets/CustomPaintWidget.h"
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDToolButton.h"
#include "Widgets/Extended/RDTreeWidget.h"
#include "Widgets/RangeHistogram.h"
#include "Widgets/ThumbnailStrip.h"

QT_BEGIN_NAMESPACE

class Ui_TextureViewer
{
public:
    ToolWindowManager *dockarea;
    QFrame *rangeToolbar;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rangeLabel;
    RDLineEdit *rangeBlack;
    RangeHistogram *rangeHistogram;
    RDLineEdit *rangeWhite;
    QToolButton *zoomRange;
    RDToolButton *autoFit;
    QToolButton *reset01;
    QToolButton *visualiseRange;
    QFrame *overlayToolbar;
    QHBoxLayout *horizontalLayout_8;
    QLabel *overlayLabel;
    QComboBox *overlay;
    QFrame *zoomToolbar;
    QHBoxLayout *horizontalLayout_9;
    QLabel *zoomLabel;
    QToolButton *zoomExactSize;
    QToolButton *fitToWindow;
    QComboBox *zoomOption;
    QToolButton *flip_y;
    QFrame *actionToolbar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *actionLabel;
    QToolButton *saveTex;
    QToolButton *texListShow;
    QToolButton *viewTexBuffer;
    QToolButton *locationGoto;
    QToolButton *resourceDetails;
    QToolButton *extensions;
    QFrame *subresourceToolbar;
    QHBoxLayout *horizontalLayout_6;
    QLabel *subResLabel;
    QFrame *line;
    QLabel *mipLabel;
    QComboBox *mipLevel;
    QLabel *sliceFaceLabel;
    QComboBox *sliceFace;
    QFrame *channelsToolbar;
    QHBoxLayout *horizontalLayout_5;
    QLabel *channelLabel;
    QComboBox *channels;
    QFrame *line_2;
    RDToolButton *channelRed;
    RDToolButton *channelGreen;
    RDToolButton *channelBlue;
    RDToolButton *channelAlpha;
    QLabel *tonemapLabel;
    QComboBox *tonemapMode;
    QFrame *mulSep;
    QLabel *mulLabel;
    QComboBox *hdrMul;
    QRadioButton *depthDisplay;
    QRadioButton *stencilDisplay;
    QComboBox *customShader;
    QToolButton *customCreate;
    QToolButton *customEdit;
    QToolButton *customDelete;
    QToolButton *backcolorPick;
    QToolButton *checkerBack;
    QFrame *gammaSep;
    QToolButton *gammaDisplay;
    QWidget *renderContainer;
    QVBoxLayout *renderLayout;
    QGridLayout *gridLayout;
    CustomPaintWidget *render;
    QScrollBar *renderVScroll;
    QScrollBar *renderHScroll;
    QHBoxLayout *statusbar;
    QLabel *texStatusName;
    QLabel *texStatusDim;
    QLabel *texStatusFormat;
    QWidget *pickSwatch;
    QLabel *hoverText;
    QLabel *pickedText;
    QWidget *pixelContextLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *pixelcontextgrid;
    CustomPaintWidget *pixelContext;
    QPushButton *pixelHistory;
    QPushButton *debugPixelContext;
    ThumbnailStrip *inputThumbs;
    ThumbnailStrip *outputThumbs;
    QFrame *textureListFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *textureListControls;
    QComboBox *textureListFilter;
    QToolButton *cancelTextureListFilter;
    QToolButton *colSelect;
    RDTreeWidget *textureList;

    void setupUi(QFrame *TextureViewer)
    {
        if (TextureViewer->objectName().isEmpty())
            TextureViewer->setObjectName(QString::fromUtf8("TextureViewer"));
        TextureViewer->resize(775, 571);
        dockarea = new ToolWindowManager(TextureViewer);
        dockarea->setObjectName(QString::fromUtf8("dockarea"));
        dockarea->setGeometry(QRect(50, 460, 119, 100));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockarea->sizePolicy().hasHeightForWidth());
        dockarea->setSizePolicy(sizePolicy);
        dockarea->setMinimumSize(QSize(100, 100));
        dockarea->setAutoFillBackground(false);
        rangeToolbar = new QFrame(TextureViewer);
        rangeToolbar->setObjectName(QString::fromUtf8("rangeToolbar"));
        rangeToolbar->setGeometry(QRect(10, 120, 558, 32));
        rangeToolbar->setMinimumSize(QSize(0, 32));
        rangeToolbar->setFrameShape(QFrame::Panel);
        rangeToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(rangeToolbar);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 2, 6, 2);
        rangeLabel = new QLabel(rangeToolbar);
        rangeLabel->setObjectName(QString::fromUtf8("rangeLabel"));

        horizontalLayout_7->addWidget(rangeLabel);

        rangeBlack = new RDLineEdit(rangeToolbar);
        rangeBlack->setObjectName(QString::fromUtf8("rangeBlack"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rangeBlack->sizePolicy().hasHeightForWidth());
        rangeBlack->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(rangeBlack);

        rangeHistogram = new RangeHistogram(rangeToolbar);
        rangeHistogram->setObjectName(QString::fromUtf8("rangeHistogram"));
        rangeHistogram->setMinimumSize(QSize(200, 0));
        rangeHistogram->setBaseSize(QSize(0, 0));

        horizontalLayout_7->addWidget(rangeHistogram);

        rangeWhite = new RDLineEdit(rangeToolbar);
        rangeWhite->setObjectName(QString::fromUtf8("rangeWhite"));
        sizePolicy1.setHeightForWidth(rangeWhite->sizePolicy().hasHeightForWidth());
        rangeWhite->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(rangeWhite);

        zoomRange = new QToolButton(rangeToolbar);
        zoomRange->setObjectName(QString::fromUtf8("zoomRange"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zoomRange->sizePolicy().hasHeightForWidth());
        zoomRange->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomRange->setIcon(icon);
        zoomRange->setAutoRaise(true);

        horizontalLayout_7->addWidget(zoomRange);

        autoFit = new RDToolButton(rangeToolbar);
        autoFit->setObjectName(QString::fromUtf8("autoFit"));
        sizePolicy2.setHeightForWidth(autoFit->sizePolicy().hasHeightForWidth());
        autoFit->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/wand.png"), QSize(), QIcon::Normal, QIcon::Off);
        autoFit->setIcon(icon1);
        autoFit->setCheckable(true);
        autoFit->setAutoRaise(true);

        horizontalLayout_7->addWidget(autoFit);

        reset01 = new QToolButton(rangeToolbar);
        reset01->setObjectName(QString::fromUtf8("reset01"));
        sizePolicy2.setHeightForWidth(reset01->sizePolicy().hasHeightForWidth());
        reset01->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        reset01->setIcon(icon2);
        reset01->setAutoRaise(true);

        horizontalLayout_7->addWidget(reset01);

        visualiseRange = new QToolButton(rangeToolbar);
        visualiseRange->setObjectName(QString::fromUtf8("visualiseRange"));
        sizePolicy2.setHeightForWidth(visualiseRange->sizePolicy().hasHeightForWidth());
        visualiseRange->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/chart_curve.png"), QSize(), QIcon::Normal, QIcon::Off);
        visualiseRange->setIcon(icon3);
        visualiseRange->setCheckable(true);
        visualiseRange->setAutoRaise(true);

        horizontalLayout_7->addWidget(visualiseRange);

        overlayToolbar = new QFrame(TextureViewer);
        overlayToolbar->setObjectName(QString::fromUtf8("overlayToolbar"));
        overlayToolbar->setGeometry(QRect(530, 40, 129, 32));
        overlayToolbar->setMinimumSize(QSize(0, 32));
        overlayToolbar->setFrameShape(QFrame::Panel);
        overlayToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(overlayToolbar);
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(6, 2, 6, 2);
        overlayLabel = new QLabel(overlayToolbar);
        overlayLabel->setObjectName(QString::fromUtf8("overlayLabel"));

        horizontalLayout_8->addWidget(overlayLabel);

        overlay = new QComboBox(overlayToolbar);
        overlay->setObjectName(QString::fromUtf8("overlay"));
        overlay->setMaxVisibleItems(20);

        horizontalLayout_8->addWidget(overlay);

        zoomToolbar = new QFrame(TextureViewer);
        zoomToolbar->setObjectName(QString::fromUtf8("zoomToolbar"));
        zoomToolbar->setGeometry(QRect(10, 80, 221, 32));
        zoomToolbar->setMinimumSize(QSize(0, 32));
        zoomToolbar->setFrameShape(QFrame::Panel);
        zoomToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(zoomToolbar);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(6, 2, 6, 2);
        zoomLabel = new QLabel(zoomToolbar);
        zoomLabel->setObjectName(QString::fromUtf8("zoomLabel"));

        horizontalLayout_9->addWidget(zoomLabel);

        zoomExactSize = new QToolButton(zoomToolbar);
        zoomExactSize->setObjectName(QString::fromUtf8("zoomExactSize"));
        zoomExactSize->setEnabled(true);
        zoomExactSize->setCheckable(false);
        zoomExactSize->setChecked(false);
        zoomExactSize->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        zoomExactSize->setAutoRaise(true);

        horizontalLayout_9->addWidget(zoomExactSize);

        fitToWindow = new QToolButton(zoomToolbar);
        fitToWindow->setObjectName(QString::fromUtf8("fitToWindow"));
        fitToWindow->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/arrow_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        fitToWindow->setIcon(icon4);
        fitToWindow->setCheckable(true);
        fitToWindow->setChecked(true);
        fitToWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        fitToWindow->setAutoRaise(true);

        horizontalLayout_9->addWidget(fitToWindow);

        zoomOption = new QComboBox(zoomToolbar);
        zoomOption->setObjectName(QString::fromUtf8("zoomOption"));
        zoomOption->setMinimumSize(QSize(70, 0));
        zoomOption->setEditable(true);
        zoomOption->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_9->addWidget(zoomOption);

        flip_y = new QToolButton(zoomToolbar);
        flip_y->setObjectName(QString::fromUtf8("flip_y"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/flip_y.png"), QSize(), QIcon::Normal, QIcon::Off);
        flip_y->setIcon(icon5);
        flip_y->setCheckable(true);
        flip_y->setAutoRaise(true);

        horizontalLayout_9->addWidget(flip_y);

        actionToolbar = new QFrame(TextureViewer);
        actionToolbar->setObjectName(QString::fromUtf8("actionToolbar"));
        actionToolbar->setGeometry(QRect(330, 40, 181, 32));
        actionToolbar->setMinimumSize(QSize(0, 32));
        actionToolbar->setFrameShape(QFrame::Panel);
        actionToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(actionToolbar);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 2, 6, 2);
        actionLabel = new QLabel(actionToolbar);
        actionLabel->setObjectName(QString::fromUtf8("actionLabel"));

        horizontalLayout_4->addWidget(actionLabel);

        saveTex = new QToolButton(actionToolbar);
        saveTex->setObjectName(QString::fromUtf8("saveTex"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTex->setIcon(icon6);
        saveTex->setAutoRaise(true);

        horizontalLayout_4->addWidget(saveTex);

        texListShow = new QToolButton(actionToolbar);
        texListShow->setObjectName(QString::fromUtf8("texListShow"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/page_white_stack.png"), QSize(), QIcon::Normal, QIcon::Off);
        texListShow->setIcon(icon7);
        texListShow->setAutoRaise(true);

        horizontalLayout_4->addWidget(texListShow);

        viewTexBuffer = new QToolButton(actionToolbar);
        viewTexBuffer->setObjectName(QString::fromUtf8("viewTexBuffer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/page_white_code.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewTexBuffer->setIcon(icon8);
        viewTexBuffer->setAutoRaise(true);

        horizontalLayout_4->addWidget(viewTexBuffer);

        locationGoto = new QToolButton(actionToolbar);
        locationGoto->setObjectName(QString::fromUtf8("locationGoto"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        locationGoto->setIcon(icon9);
        locationGoto->setAutoRaise(true);

        horizontalLayout_4->addWidget(locationGoto);

        resourceDetails = new QToolButton(actionToolbar);
        resourceDetails->setObjectName(QString::fromUtf8("resourceDetails"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        resourceDetails->setIcon(icon10);
        resourceDetails->setAutoRaise(true);

        horizontalLayout_4->addWidget(resourceDetails);

        extensions = new QToolButton(actionToolbar);
        extensions->setObjectName(QString::fromUtf8("extensions"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/plugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        extensions->setIcon(icon11);
        extensions->setAutoRaise(true);

        horizontalLayout_4->addWidget(extensions);

        subresourceToolbar = new QFrame(TextureViewer);
        subresourceToolbar->setObjectName(QString::fromUtf8("subresourceToolbar"));
        subresourceToolbar->setGeometry(QRect(10, 40, 299, 32));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(subresourceToolbar->sizePolicy().hasHeightForWidth());
        subresourceToolbar->setSizePolicy(sizePolicy3);
        subresourceToolbar->setMinimumSize(QSize(0, 32));
        subresourceToolbar->setFrameShape(QFrame::Panel);
        subresourceToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(subresourceToolbar);
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(6, 2, 6, 2);
        subResLabel = new QLabel(subresourceToolbar);
        subResLabel->setObjectName(QString::fromUtf8("subResLabel"));

        horizontalLayout_6->addWidget(subResLabel);

        line = new QFrame(subresourceToolbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        mipLabel = new QLabel(subresourceToolbar);
        mipLabel->setObjectName(QString::fromUtf8("mipLabel"));

        horizontalLayout_6->addWidget(mipLabel);

        mipLevel = new QComboBox(subresourceToolbar);
        mipLevel->setObjectName(QString::fromUtf8("mipLevel"));
        mipLevel->setMaxVisibleItems(20);
        mipLevel->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(mipLevel);

        sliceFaceLabel = new QLabel(subresourceToolbar);
        sliceFaceLabel->setObjectName(QString::fromUtf8("sliceFaceLabel"));

        horizontalLayout_6->addWidget(sliceFaceLabel);

        sliceFace = new QComboBox(subresourceToolbar);
        sliceFace->setObjectName(QString::fromUtf8("sliceFace"));
        sliceFace->setMaxVisibleItems(20);
        sliceFace->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_6->addWidget(sliceFace);

        channelsToolbar = new QFrame(TextureViewer);
        channelsToolbar->setObjectName(QString::fromUtf8("channelsToolbar"));
        channelsToolbar->setGeometry(QRect(3, 3, 971, 32));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(channelsToolbar->sizePolicy().hasHeightForWidth());
        channelsToolbar->setSizePolicy(sizePolicy4);
        channelsToolbar->setMinimumSize(QSize(0, 32));
        channelsToolbar->setFrameShape(QFrame::Panel);
        channelsToolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(channelsToolbar);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 2, 6, 2);
        channelLabel = new QLabel(channelsToolbar);
        channelLabel->setObjectName(QString::fromUtf8("channelLabel"));

        horizontalLayout_5->addWidget(channelLabel);

        channels = new QComboBox(channelsToolbar);
        channels->setObjectName(QString::fromUtf8("channels"));
        channels->setFrame(true);

        horizontalLayout_5->addWidget(channels);

        line_2 = new QFrame(channelsToolbar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_2);

        channelRed = new RDToolButton(channelsToolbar);
        channelRed->setObjectName(QString::fromUtf8("channelRed"));
        channelRed->setCheckable(true);
        channelRed->setChecked(true);
        channelRed->setAutoRaise(true);

        horizontalLayout_5->addWidget(channelRed);

        channelGreen = new RDToolButton(channelsToolbar);
        channelGreen->setObjectName(QString::fromUtf8("channelGreen"));
        channelGreen->setCheckable(true);
        channelGreen->setChecked(true);
        channelGreen->setAutoRaise(true);

        horizontalLayout_5->addWidget(channelGreen);

        channelBlue = new RDToolButton(channelsToolbar);
        channelBlue->setObjectName(QString::fromUtf8("channelBlue"));
        channelBlue->setCheckable(true);
        channelBlue->setChecked(true);
        channelBlue->setAutoRaise(true);

        horizontalLayout_5->addWidget(channelBlue);

        channelAlpha = new RDToolButton(channelsToolbar);
        channelAlpha->setObjectName(QString::fromUtf8("channelAlpha"));
        channelAlpha->setCheckable(true);
        channelAlpha->setAutoRaise(true);

        horizontalLayout_5->addWidget(channelAlpha);

        tonemapLabel = new QLabel(channelsToolbar);
        tonemapLabel->setObjectName(QString::fromUtf8("tonemapLabel"));

        horizontalLayout_5->addWidget(tonemapLabel);

        tonemapMode = new QComboBox(channelsToolbar);
        tonemapMode->setObjectName(QString::fromUtf8("tonemapMode"));
        tonemapMode->setFrame(true);

        horizontalLayout_5->addWidget(tonemapMode);

        mulSep = new QFrame(channelsToolbar);
        mulSep->setObjectName(QString::fromUtf8("mulSep"));
        mulSep->setFrameShape(QFrame::VLine);
        mulSep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(mulSep);

        mulLabel = new QLabel(channelsToolbar);
        mulLabel->setObjectName(QString::fromUtf8("mulLabel"));

        horizontalLayout_5->addWidget(mulLabel);

        hdrMul = new QComboBox(channelsToolbar);
        hdrMul->setObjectName(QString::fromUtf8("hdrMul"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(hdrMul->sizePolicy().hasHeightForWidth());
        hdrMul->setSizePolicy(sizePolicy5);
        hdrMul->setMinimumSize(QSize(50, 0));
        hdrMul->setEditable(true);
        hdrMul->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_5->addWidget(hdrMul);

        depthDisplay = new QRadioButton(channelsToolbar);
        depthDisplay->setObjectName(QString::fromUtf8("depthDisplay"));

        horizontalLayout_5->addWidget(depthDisplay);

        stencilDisplay = new QRadioButton(channelsToolbar);
        stencilDisplay->setObjectName(QString::fromUtf8("stencilDisplay"));

        horizontalLayout_5->addWidget(stencilDisplay);

        customShader = new QComboBox(channelsToolbar);
        customShader->setObjectName(QString::fromUtf8("customShader"));
        sizePolicy1.setHeightForWidth(customShader->sizePolicy().hasHeightForWidth());
        customShader->setSizePolicy(sizePolicy1);
        customShader->setMinimumSize(QSize(150, 0));
        customShader->setEditable(true);
        customShader->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_5->addWidget(customShader);

        customCreate = new QToolButton(channelsToolbar);
        customCreate->setObjectName(QString::fromUtf8("customCreate"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        customCreate->setIcon(icon12);
        customCreate->setAutoRaise(true);

        horizontalLayout_5->addWidget(customCreate);

        customEdit = new QToolButton(channelsToolbar);
        customEdit->setObjectName(QString::fromUtf8("customEdit"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/page_white_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        customEdit->setIcon(icon13);
        customEdit->setAutoRaise(true);

        horizontalLayout_5->addWidget(customEdit);

        customDelete = new QToolButton(channelsToolbar);
        customDelete->setObjectName(QString::fromUtf8("customDelete"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        customDelete->setIcon(icon14);
        customDelete->setAutoRaise(true);

        horizontalLayout_5->addWidget(customDelete);

        backcolorPick = new QToolButton(channelsToolbar);
        backcolorPick->setObjectName(QString::fromUtf8("backcolorPick"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/color_wheel.png"), QSize(), QIcon::Normal, QIcon::Off);
        backcolorPick->setIcon(icon15);
        backcolorPick->setCheckable(true);
        backcolorPick->setAutoRaise(true);

        horizontalLayout_5->addWidget(backcolorPick);

        checkerBack = new QToolButton(channelsToolbar);
        checkerBack->setObjectName(QString::fromUtf8("checkerBack"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/checkerboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkerBack->setIcon(icon16);
        checkerBack->setCheckable(true);
        checkerBack->setChecked(true);
        checkerBack->setAutoRaise(true);

        horizontalLayout_5->addWidget(checkerBack);

        gammaSep = new QFrame(channelsToolbar);
        gammaSep->setObjectName(QString::fromUtf8("gammaSep"));
        gammaSep->setFrameShape(QFrame::VLine);
        gammaSep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(gammaSep);

        gammaDisplay = new QToolButton(channelsToolbar);
        gammaDisplay->setObjectName(QString::fromUtf8("gammaDisplay"));
        gammaDisplay->setMinimumSize(QSize(23, 22));
        gammaDisplay->setCheckable(true);
        gammaDisplay->setChecked(true);
        gammaDisplay->setAutoRaise(true);

        horizontalLayout_5->addWidget(gammaDisplay);

        renderContainer = new QWidget(TextureViewer);
        renderContainer->setObjectName(QString::fromUtf8("renderContainer"));
        renderContainer->setGeometry(QRect(250, 220, 291, 231));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(renderContainer->sizePolicy().hasHeightForWidth());
        renderContainer->setSizePolicy(sizePolicy6);
        renderContainer->setMinimumSize(QSize(100, 100));
        renderLayout = new QVBoxLayout(renderContainer);
        renderLayout->setSpacing(0);
        renderLayout->setObjectName(QString::fromUtf8("renderLayout"));
        renderLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        render = new CustomPaintWidget(renderContainer);
        render->setObjectName(QString::fromUtf8("render"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(render->sizePolicy().hasHeightForWidth());
        render->setSizePolicy(sizePolicy7);

        gridLayout->addWidget(render, 1, 0, 1, 1);

        renderVScroll = new QScrollBar(renderContainer);
        renderVScroll->setObjectName(QString::fromUtf8("renderVScroll"));
        renderVScroll->setOrientation(Qt::Vertical);

        gridLayout->addWidget(renderVScroll, 1, 1, 1, 1);

        renderHScroll = new QScrollBar(renderContainer);
        renderHScroll->setObjectName(QString::fromUtf8("renderHScroll"));
        renderHScroll->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(renderHScroll, 2, 0, 1, 1);


        renderLayout->addLayout(gridLayout);

        statusbar = new QHBoxLayout();
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        texStatusName = new QLabel(renderContainer);
        texStatusName->setObjectName(QString::fromUtf8("texStatusName"));
        sizePolicy6.setHeightForWidth(texStatusName->sizePolicy().hasHeightForWidth());
        texStatusName->setSizePolicy(sizePolicy6);

        statusbar->addWidget(texStatusName);

        texStatusDim = new QLabel(renderContainer);
        texStatusDim->setObjectName(QString::fromUtf8("texStatusDim"));
        sizePolicy6.setHeightForWidth(texStatusDim->sizePolicy().hasHeightForWidth());
        texStatusDim->setSizePolicy(sizePolicy6);
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        texStatusDim->setFont(font);

        statusbar->addWidget(texStatusDim);

        texStatusFormat = new QLabel(renderContainer);
        texStatusFormat->setObjectName(QString::fromUtf8("texStatusFormat"));
        sizePolicy6.setHeightForWidth(texStatusFormat->sizePolicy().hasHeightForWidth());
        texStatusFormat->setSizePolicy(sizePolicy6);
        texStatusFormat->setFont(font);

        statusbar->addWidget(texStatusFormat);

        pickSwatch = new QWidget(renderContainer);
        pickSwatch->setObjectName(QString::fromUtf8("pickSwatch"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(pickSwatch->sizePolicy().hasHeightForWidth());
        pickSwatch->setSizePolicy(sizePolicy8);
        pickSwatch->setMinimumSize(QSize(32, 14));

        statusbar->addWidget(pickSwatch);

        hoverText = new QLabel(renderContainer);
        hoverText->setObjectName(QString::fromUtf8("hoverText"));
        sizePolicy6.setHeightForWidth(hoverText->sizePolicy().hasHeightForWidth());
        hoverText->setSizePolicy(sizePolicy6);
        hoverText->setFont(font);

        statusbar->addWidget(hoverText);

        pickedText = new QLabel(renderContainer);
        pickedText->setObjectName(QString::fromUtf8("pickedText"));
        sizePolicy6.setHeightForWidth(pickedText->sizePolicy().hasHeightForWidth());
        pickedText->setSizePolicy(sizePolicy6);
        pickedText->setFont(font);

        statusbar->addWidget(pickedText);


        renderLayout->addLayout(statusbar);

        pixelContextLayout = new QWidget(TextureViewer);
        pixelContextLayout->setObjectName(QString::fromUtf8("pixelContextLayout"));
        pixelContextLayout->setGeometry(QRect(40, 240, 201, 181));
        horizontalLayout = new QHBoxLayout(pixelContextLayout);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pixelcontextgrid = new QGridLayout();
        pixelcontextgrid->setObjectName(QString::fromUtf8("pixelcontextgrid"));
        pixelContext = new CustomPaintWidget(pixelContextLayout);
        pixelContext->setObjectName(QString::fromUtf8("pixelContext"));
        sizePolicy7.setHeightForWidth(pixelContext->sizePolicy().hasHeightForWidth());
        pixelContext->setSizePolicy(sizePolicy7);

        pixelcontextgrid->addWidget(pixelContext, 0, 0, 1, 2);

        pixelHistory = new QPushButton(pixelContextLayout);
        pixelHistory->setObjectName(QString::fromUtf8("pixelHistory"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/pixel_history.png"), QSize(), QIcon::Normal, QIcon::Off);
        pixelHistory->setIcon(icon17);

        pixelcontextgrid->addWidget(pixelHistory, 1, 0, 1, 1);

        debugPixelContext = new QPushButton(pixelContextLayout);
        debugPixelContext->setObjectName(QString::fromUtf8("debugPixelContext"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        debugPixelContext->setIcon(icon18);

        pixelcontextgrid->addWidget(debugPixelContext, 1, 1, 1, 1);


        horizontalLayout->addLayout(pixelcontextgrid);

        inputThumbs = new ThumbnailStrip(TextureViewer);
        inputThumbs->setObjectName(QString::fromUtf8("inputThumbs"));
        inputThumbs->setGeometry(QRect(40, 470, 120, 80));
        outputThumbs = new ThumbnailStrip(TextureViewer);
        outputThumbs->setObjectName(QString::fromUtf8("outputThumbs"));
        outputThumbs->setGeometry(QRect(210, 470, 120, 80));
        textureListFrame = new QFrame(TextureViewer);
        textureListFrame->setObjectName(QString::fromUtf8("textureListFrame"));
        textureListFrame->setGeometry(QRect(550, 210, 221, 244));
        textureListFrame->setFrameShape(QFrame::NoFrame);
        textureListFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(textureListFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        textureListControls = new QHBoxLayout();
        textureListControls->setSpacing(0);
        textureListControls->setObjectName(QString::fromUtf8("textureListControls"));
        textureListFilter = new QComboBox(textureListFrame);
        textureListFilter->setObjectName(QString::fromUtf8("textureListFilter"));
        QSizePolicy sizePolicy9(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(textureListFilter->sizePolicy().hasHeightForWidth());
        textureListFilter->setSizePolicy(sizePolicy9);
        textureListFilter->setEditable(true);

        textureListControls->addWidget(textureListFilter);

        cancelTextureListFilter = new QToolButton(textureListFrame);
        cancelTextureListFilter->setObjectName(QString::fromUtf8("cancelTextureListFilter"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelTextureListFilter->setIcon(icon19);
        cancelTextureListFilter->setAutoRaise(true);

        textureListControls->addWidget(cancelTextureListFilter);

        colSelect = new QToolButton(textureListFrame);
        colSelect->setObjectName(QString::fromUtf8("colSelect"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/timeline_marker.png"), QSize(), QIcon::Normal, QIcon::Off);
        colSelect->setIcon(icon20);
        colSelect->setAutoRaise(true);

        textureListControls->addWidget(colSelect);


        verticalLayout->addLayout(textureListControls);

        textureList = new RDTreeWidget(textureListFrame);
        textureList->setObjectName(QString::fromUtf8("textureList"));
        textureList->setFrameShape(QFrame::Box);
        textureList->setFrameShadow(QFrame::Sunken);
        textureList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        textureList->setProperty("showDropIndicator", QVariant(false));
        textureList->setIndentation(0);
        textureList->setRootIsDecorated(true);
        textureList->setUniformRowHeights(true);
        textureList->setItemsExpandable(false);
        textureList->setSortingEnabled(true);
        textureList->setAllColumnsShowFocus(true);
        textureList->setWordWrap(false);
        textureList->setProperty("clearSelectionOnFocusLoss", QVariant(false));

        verticalLayout->addWidget(textureList);


        retranslateUi(TextureViewer);

        QMetaObject::connectSlotsByName(TextureViewer);
    } // setupUi

    void retranslateUi(QFrame *TextureViewer)
    {
        TextureViewer->setWindowTitle(QCoreApplication::translate("TextureViewer", "Texture Viewer", nullptr));
        rangeLabel->setText(QCoreApplication::translate("TextureViewer", "Range", nullptr));
        rangeBlack->setText(QCoreApplication::translate("TextureViewer", "0.0", nullptr));
        rangeWhite->setText(QCoreApplication::translate("TextureViewer", "1.0", nullptr));
#if QT_CONFIG(tooltip)
        zoomRange->setToolTip(QCoreApplication::translate("TextureViewer", "Zoom the visible range controls to the current black and white points", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomRange->setText(QString());
#if QT_CONFIG(tooltip)
        autoFit->setToolTip(QCoreApplication::translate("TextureViewer", "Automatically fit the black and white points of the range to the minimum and maximum values contained in the texture", nullptr));
#endif // QT_CONFIG(tooltip)
        autoFit->setText(QString());
#if QT_CONFIG(tooltip)
        reset01->setToolTip(QCoreApplication::translate("TextureViewer", "Reset to [0, 1]", nullptr));
#endif // QT_CONFIG(tooltip)
        reset01->setText(QCoreApplication::translate("TextureViewer", "...", nullptr));
#if QT_CONFIG(tooltip)
        visualiseRange->setToolTip(QCoreApplication::translate("TextureViewer", "Show a histogram with the distribution of values on top of the visible range", nullptr));
#endif // QT_CONFIG(tooltip)
        visualiseRange->setText(QCoreApplication::translate("TextureViewer", "...", nullptr));
        overlayLabel->setText(QCoreApplication::translate("TextureViewer", "Overlay", nullptr));
        zoomLabel->setText(QCoreApplication::translate("TextureViewer", "Zoom", nullptr));
#if QT_CONFIG(tooltip)
        zoomExactSize->setToolTip(QCoreApplication::translate("TextureViewer", "Reset the zoom to 100%", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomExactSize->setText(QCoreApplication::translate("TextureViewer", "1:1", nullptr));
#if QT_CONFIG(tooltip)
        fitToWindow->setToolTip(QCoreApplication::translate("TextureViewer", "Fit the current texture to the window", nullptr));
#endif // QT_CONFIG(tooltip)
        fitToWindow->setText(QCoreApplication::translate("TextureViewer", "Fit", nullptr));
#if QT_CONFIG(tooltip)
        flip_y->setToolTip(QCoreApplication::translate("TextureViewer", "Flip the texture in the Y axis", nullptr));
#endif // QT_CONFIG(tooltip)
        flip_y->setText(QString());
        actionLabel->setText(QCoreApplication::translate("TextureViewer", "Actions", nullptr));
#if QT_CONFIG(tooltip)
        saveTex->setToolTip(QCoreApplication::translate("TextureViewer", "Save selected Texture", nullptr));
#endif // QT_CONFIG(tooltip)
        saveTex->setText(QString());
#if QT_CONFIG(tooltip)
        texListShow->setToolTip(QCoreApplication::translate("TextureViewer", "Open Texture List", nullptr));
#endif // QT_CONFIG(tooltip)
        texListShow->setText(QString());
#if QT_CONFIG(tooltip)
        viewTexBuffer->setToolTip(QCoreApplication::translate("TextureViewer", "Open the texture contents in a raw buffer viewer", nullptr));
#endif // QT_CONFIG(tooltip)
        viewTexBuffer->setText(QString());
#if QT_CONFIG(tooltip)
        locationGoto->setToolTip(QCoreApplication::translate("TextureViewer", "Enter co-ordinates to select a specific pixel location", nullptr));
#endif // QT_CONFIG(tooltip)
        locationGoto->setText(QString());
#if QT_CONFIG(tooltip)
        resourceDetails->setToolTip(QCoreApplication::translate("TextureViewer", "Open the currently visible resource's details in the resource inspector", nullptr));
#endif // QT_CONFIG(tooltip)
        subResLabel->setText(QCoreApplication::translate("TextureViewer", "Subresource", nullptr));
        mipLabel->setText(QCoreApplication::translate("TextureViewer", "Mip", nullptr));
        sliceFaceLabel->setText(QCoreApplication::translate("TextureViewer", "Slice/Face", nullptr));
        channelLabel->setText(QCoreApplication::translate("TextureViewer", "Channels", nullptr));
#if QT_CONFIG(tooltip)
        channelRed->setToolTip(QCoreApplication::translate("TextureViewer", "Show Red (Right click to toggle solo)", nullptr));
#endif // QT_CONFIG(tooltip)
        channelRed->setText(QCoreApplication::translate("TextureViewer", "R", nullptr));
#if QT_CONFIG(tooltip)
        channelGreen->setToolTip(QCoreApplication::translate("TextureViewer", "Show Green (Right click to toggle solo)", nullptr));
#endif // QT_CONFIG(tooltip)
        channelGreen->setText(QCoreApplication::translate("TextureViewer", "G", nullptr));
#if QT_CONFIG(tooltip)
        channelBlue->setToolTip(QCoreApplication::translate("TextureViewer", "Show Blue (Right click to toggle solo)", nullptr));
#endif // QT_CONFIG(tooltip)
        channelBlue->setText(QCoreApplication::translate("TextureViewer", "B", nullptr));
#if QT_CONFIG(tooltip)
        channelAlpha->setToolTip(QCoreApplication::translate("TextureViewer", "Show Alpha (Right click to toggle solo)", nullptr));
#endif // QT_CONFIG(tooltip)
        channelAlpha->setText(QCoreApplication::translate("TextureViewer", "A", nullptr));
        tonemapLabel->setText(QCoreApplication::translate("TextureViewer", "Tonemapping", nullptr));
        mulLabel->setText(QCoreApplication::translate("TextureViewer", "Mul:", nullptr));
        hdrMul->setCurrentText(QCoreApplication::translate("TextureViewer", "128", nullptr));
        depthDisplay->setText(QCoreApplication::translate("TextureViewer", "Depth", nullptr));
        stencilDisplay->setText(QCoreApplication::translate("TextureViewer", "Stencil", nullptr));
#if QT_CONFIG(tooltip)
        customCreate->setToolTip(QCoreApplication::translate("TextureViewer", "Create New Custom Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        customCreate->setText(QString());
#if QT_CONFIG(tooltip)
        customEdit->setToolTip(QCoreApplication::translate("TextureViewer", "Edit Selected Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        customEdit->setText(QString());
#if QT_CONFIG(tooltip)
        customDelete->setToolTip(QCoreApplication::translate("TextureViewer", "Delete Custom Shader", nullptr));
#endif // QT_CONFIG(tooltip)
        customDelete->setText(QString());
#if QT_CONFIG(tooltip)
        backcolorPick->setToolTip(QCoreApplication::translate("TextureViewer", "Alpha: Pick Solid Background Color", nullptr));
#endif // QT_CONFIG(tooltip)
        backcolorPick->setText(QString());
#if QT_CONFIG(tooltip)
        checkerBack->setToolTip(QCoreApplication::translate("TextureViewer", "Alpha: Show Checkerboard Background", nullptr));
#endif // QT_CONFIG(tooltip)
        checkerBack->setText(QString());
#if QT_CONFIG(tooltip)
        gammaDisplay->setToolTip(QCoreApplication::translate("TextureViewer", "Override display of linear data in gamma space\n"
"\n"
"See FAQ on \"Gamma display of linear data\"", nullptr));
#endif // QT_CONFIG(tooltip)
        gammaDisplay->setText(QCoreApplication::translate("TextureViewer", "\316\263", nullptr));
        texStatusName->setText(QCoreApplication::translate("TextureViewer", "texStatusName", nullptr));
        texStatusDim->setText(QCoreApplication::translate("TextureViewer", "texStatusDim", nullptr));
        texStatusFormat->setText(QCoreApplication::translate("TextureViewer", "texStatusFormat", nullptr));
        hoverText->setText(QCoreApplication::translate("TextureViewer", "hoverText", nullptr));
        pickedText->setText(QCoreApplication::translate("TextureViewer", "pickedText", nullptr));
        pixelHistory->setText(QCoreApplication::translate("TextureViewer", "History", nullptr));
        debugPixelContext->setText(QCoreApplication::translate("TextureViewer", "Debug", nullptr));
        cancelTextureListFilter->setText(QString());
#if QT_CONFIG(tooltip)
        colSelect->setToolTip(QCoreApplication::translate("TextureViewer", "Select visible columns", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class TextureViewer: public Ui_TextureViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTUREVIEWER_H
