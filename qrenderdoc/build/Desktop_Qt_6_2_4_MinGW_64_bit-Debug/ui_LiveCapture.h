/********************************************************************************
** Form generated from reading UI file 'LiveCapture.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVECAPTURE_H
#define UI_LIVECAPTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLabel.h"
#include "Widgets/Extended/RDListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_LiveCapture
{
public:
    QVBoxLayout *mainLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *statusGroup;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *target;
    QLabel *connectionStatusLabel;
    QLabel *connectionIcon;
    QLabel *connectionStatus;
    QLabel *apiStatusLabel;
    RDLabel *apiIcon;
    QLabel *apiStatus;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *toolsGroup;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *numFrames;
    QPushButton *triggerImmediateCapture;
    QPushButton *triggerDelayedCapture;
    QDoubleSpinBox *captureDelay;
    QPushButton *queueCap;
    QDoubleSpinBox *captureFrame;
    QSpacerItem *verticalSpacer;
    QPushButton *cycleActiveWindow;
    QSpacerItem *horizontalSpacer;
    QLabel *childProcessLabel;
    QListWidget *childProcesses;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QSplitter *previewSplit;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *capturesLabel;
    RDListWidget *captures;
    QScrollArea *previewScroll;
    RDLabel *preview;

    void setupUi(QFrame *LiveCapture)
    {
        if (LiveCapture->objectName().isEmpty())
            LiveCapture->setObjectName(QString::fromUtf8("LiveCapture"));
        LiveCapture->resize(680, 483);
        mainLayout = new QVBoxLayout(LiveCapture);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(3, 3, 3, 3);
        frame_3 = new QFrame(LiveCapture);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        statusGroup = new QGroupBox(frame_3);
        statusGroup->setObjectName(QString::fromUtf8("statusGroup"));
        gridLayout_2 = new QGridLayout(statusGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(statusGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        target = new QLabel(statusGroup);
        target->setObjectName(QString::fromUtf8("target"));

        gridLayout_2->addWidget(target, 0, 2, 1, 1);

        connectionStatusLabel = new QLabel(statusGroup);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        connectionStatusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(connectionStatusLabel, 1, 0, 1, 1);

        connectionIcon = new QLabel(statusGroup);
        connectionIcon->setObjectName(QString::fromUtf8("connectionIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectionIcon->sizePolicy().hasHeightForWidth());
        connectionIcon->setSizePolicy(sizePolicy1);
        connectionIcon->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));

        gridLayout_2->addWidget(connectionIcon, 1, 1, 1, 1);

        connectionStatus = new QLabel(statusGroup);
        connectionStatus->setObjectName(QString::fromUtf8("connectionStatus"));

        gridLayout_2->addWidget(connectionStatus, 1, 2, 1, 1);

        apiStatusLabel = new QLabel(statusGroup);
        apiStatusLabel->setObjectName(QString::fromUtf8("apiStatusLabel"));
        apiStatusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignTop);

        gridLayout_2->addWidget(apiStatusLabel, 2, 0, 1, 1);

        apiIcon = new RDLabel(statusGroup);
        apiIcon->setObjectName(QString::fromUtf8("apiIcon"));
        sizePolicy1.setHeightForWidth(apiIcon->sizePolicy().hasHeightForWidth());
        apiIcon->setSizePolicy(sizePolicy1);
        apiIcon->setCursor(QCursor(Qt::PointingHandCursor));
        apiIcon->setPixmap(QPixmap(QString::fromUtf8(":/information.png")));

        gridLayout_2->addWidget(apiIcon, 2, 1, 1, 1);

        apiStatus = new QLabel(statusGroup);
        apiStatus->setObjectName(QString::fromUtf8("apiStatus"));
        apiStatus->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(apiStatus, 2, 2, 1, 1);

        progressLabel = new QLabel(statusGroup);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(progressLabel, 3, 0, 1, 1);

        progressBar = new QProgressBar(statusGroup);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(progressBar, 4, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 2);


        horizontalLayout->addWidget(statusGroup);

        toolsGroup = new QGroupBox(frame_3);
        toolsGroup->setObjectName(QString::fromUtf8("toolsGroup"));
        gridLayout_3 = new QGridLayout(toolsGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        numFrames = new QDoubleSpinBox(toolsGroup);
        numFrames->setObjectName(QString::fromUtf8("numFrames"));
        numFrames->setMinimumSize(QSize(45, 0));
        numFrames->setDecimals(0);
        numFrames->setMinimum(1.000000000000000);
        numFrames->setMaximum(10.000000000000000);
        numFrames->setValue(1.000000000000000);

        gridLayout_3->addWidget(numFrames, 0, 0, 1, 2);

        triggerImmediateCapture = new QPushButton(toolsGroup);
        triggerImmediateCapture->setObjectName(QString::fromUtf8("triggerImmediateCapture"));

        gridLayout_3->addWidget(triggerImmediateCapture, 1, 0, 1, 2);

        triggerDelayedCapture = new QPushButton(toolsGroup);
        triggerDelayedCapture->setObjectName(QString::fromUtf8("triggerDelayedCapture"));

        gridLayout_3->addWidget(triggerDelayedCapture, 3, 0, 1, 1);

        captureDelay = new QDoubleSpinBox(toolsGroup);
        captureDelay->setObjectName(QString::fromUtf8("captureDelay"));
        captureDelay->setBaseSize(QSize(0, 0));
        captureDelay->setDecimals(0);
        captureDelay->setMaximum(120.000000000000000);
        captureDelay->setValue(0.000000000000000);

        gridLayout_3->addWidget(captureDelay, 3, 1, 1, 1);

        queueCap = new QPushButton(toolsGroup);
        queueCap->setObjectName(QString::fromUtf8("queueCap"));

        gridLayout_3->addWidget(queueCap, 4, 0, 1, 1);

        captureFrame = new QDoubleSpinBox(toolsGroup);
        captureFrame->setObjectName(QString::fromUtf8("captureFrame"));
        captureFrame->setDecimals(0);
        captureFrame->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(captureFrame, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 5, 0, 1, 2);

        cycleActiveWindow = new QPushButton(toolsGroup);
        cycleActiveWindow->setObjectName(QString::fromUtf8("cycleActiveWindow"));

        gridLayout_3->addWidget(cycleActiveWindow, 6, 0, 1, 1);


        horizontalLayout->addWidget(toolsGroup);

        horizontalSpacer = new QSpacerItem(75, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        mainLayout->addWidget(frame_3);

        childProcessLabel = new QLabel(LiveCapture);
        childProcessLabel->setObjectName(QString::fromUtf8("childProcessLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(childProcessLabel->sizePolicy().hasHeightForWidth());
        childProcessLabel->setSizePolicy(sizePolicy3);

        mainLayout->addWidget(childProcessLabel);

        childProcesses = new QListWidget(LiveCapture);
        childProcesses->setObjectName(QString::fromUtf8("childProcesses"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(childProcesses->sizePolicy().hasHeightForWidth());
        childProcesses->setSizePolicy(sizePolicy4);
        childProcesses->setMinimumSize(QSize(0, 40));
        childProcesses->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        childProcesses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        childProcesses->setProperty("showDropIndicator", QVariant(false));
        childProcesses->setMovement(QListView::Static);
        childProcesses->setResizeMode(QListView::Adjust);
        childProcesses->setSpacing(15);
        childProcesses->setViewMode(QListView::IconMode);

        mainLayout->addWidget(childProcesses);

        frame_2 = new QFrame(LiveCapture);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        previewSplit = new QSplitter(frame_2);
        previewSplit->setObjectName(QString::fromUtf8("previewSplit"));
        previewSplit->setOrientation(Qt::Vertical);
        previewSplit->setChildrenCollapsible(false);
        frame = new QFrame(previewSplit);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        capturesLabel = new QLabel(frame);
        capturesLabel->setObjectName(QString::fromUtf8("capturesLabel"));

        verticalLayout_2->addWidget(capturesLabel);

        captures = new RDListWidget(frame);
        captures->setObjectName(QString::fromUtf8("captures"));
        captures->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        captures->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        captures->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        captures->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        captures->setProperty("showDropIndicator", QVariant(false));
        captures->setSelectionMode(QAbstractItemView::ExtendedSelection);
        captures->setIconSize(QSize(256, 144));
        captures->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        captures->setMovement(QListView::Static);
        captures->setFlow(QListView::LeftToRight);
        captures->setResizeMode(QListView::Adjust);
        captures->setSpacing(12);
        captures->setViewMode(QListView::IconMode);
        captures->setUniformItemSizes(true);

        verticalLayout_2->addWidget(captures);

        previewSplit->addWidget(frame);
        previewScroll = new QScrollArea(previewSplit);
        previewScroll->setObjectName(QString::fromUtf8("previewScroll"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(previewScroll->sizePolicy().hasHeightForWidth());
        previewScroll->setSizePolicy(sizePolicy5);
        previewScroll->setFrameShape(QFrame::Box);
        previewScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        previewScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        previewScroll->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        previewScroll->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        preview = new RDLabel();
        preview->setObjectName(QString::fromUtf8("preview"));
        preview->setGeometry(QRect(0, 0, 16, 16));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy6);
        previewScroll->setWidget(preview);
        previewSplit->addWidget(previewScroll);

        verticalLayout_3->addWidget(previewSplit);


        mainLayout->addWidget(frame_2);


        retranslateUi(LiveCapture);

        QMetaObject::connectSlotsByName(LiveCapture);
    } // setupUi

    void retranslateUi(QFrame *LiveCapture)
    {
        LiveCapture->setWindowTitle(QCoreApplication::translate("LiveCapture", "Connecting...", nullptr));
        statusGroup->setTitle(QCoreApplication::translate("LiveCapture", "Status", nullptr));
        label->setText(QCoreApplication::translate("LiveCapture", "Target:", nullptr));
        target->setText(QString());
        connectionStatusLabel->setText(QCoreApplication::translate("LiveCapture", "Connection Status:", nullptr));
        connectionIcon->setText(QString());
        connectionStatus->setText(QCoreApplication::translate("LiveCapture", "Connecting", nullptr));
        apiStatusLabel->setText(QCoreApplication::translate("LiveCapture", "API:", nullptr));
#if QT_CONFIG(tooltip)
        apiIcon->setToolTip(QCoreApplication::translate("LiveCapture", "<p>An API in use is not presenting to a window. This commonly means the API rendering is happening to off-screen targets and either nothing is displayed, or the results are displayed using some other mechanism.</p>\n"
"\n"
"<p>Without the boundary of a frame, RenderDoc cannot capture by default since it can't tell where to start and stop.</p>\n"
"\n"
"<p>You can use RenderDoc's In-application API to manually provide markers about where to start and stop the frame capture.</p>\n"
"\n"
"<p>Click on the icon for more information about this API.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        apiStatus->setText(QCoreApplication::translate("LiveCapture", "None", nullptr));
        progressLabel->setText(QCoreApplication::translate("LiveCapture", "Capture in Progress:", nullptr));
        toolsGroup->setTitle(QCoreApplication::translate("LiveCapture", "Tools", nullptr));
        numFrames->setPrefix(QCoreApplication::translate("LiveCapture", "Capture ", nullptr));
        numFrames->setSuffix(QCoreApplication::translate("LiveCapture", " Sequential Frame(s)", nullptr));
        triggerImmediateCapture->setText(QCoreApplication::translate("LiveCapture", "Capture Frame(s) Immediately", nullptr));
        triggerDelayedCapture->setText(QCoreApplication::translate("LiveCapture", "Capture After Delay:", nullptr));
        captureDelay->setSuffix(QCoreApplication::translate("LiveCapture", " secs", nullptr));
        queueCap->setText(QCoreApplication::translate("LiveCapture", "Capture Specific Frame(s):", nullptr));
        captureFrame->setPrefix(QCoreApplication::translate("LiveCapture", "Frame ", nullptr));
        cycleActiveWindow->setText(QCoreApplication::translate("LiveCapture", "Cycle Active Window", nullptr));
        childProcessLabel->setText(QCoreApplication::translate("LiveCapture", "Child Processes:", nullptr));
        capturesLabel->setText(QCoreApplication::translate("LiveCapture", "Captures collected:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiveCapture: public Ui_LiveCapture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVECAPTURE_H
