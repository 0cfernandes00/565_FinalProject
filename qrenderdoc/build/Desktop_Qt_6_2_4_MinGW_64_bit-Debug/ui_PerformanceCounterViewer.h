/********************************************************************************
** Form generated from reading UI file 'PerformanceCounterViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCECOUNTERVIEWER_H
#define UI_PERFORMANCECOUNTERVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTableView.h"

QT_BEGIN_NAMESPACE

class Ui_PerformanceCounterViewer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *captureCounters;
    QFrame *line;
    QToolButton *syncViews;
    QFrame *line_2;
    QToolButton *saveCSV;
    QSpacerItem *horizontalSpacer;
    RDTableView *counterResults;

    void setupUi(QFrame *PerformanceCounterViewer)
    {
        if (PerformanceCounterViewer->objectName().isEmpty())
            PerformanceCounterViewer->setObjectName(QString::fromUtf8("PerformanceCounterViewer"));
        PerformanceCounterViewer->resize(320, 240);
        verticalLayout = new QVBoxLayout(PerformanceCounterViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        frame = new QFrame(PerformanceCounterViewer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 2, 6, 2);
        captureCounters = new QToolButton(frame);
        captureCounters->setObjectName(QString::fromUtf8("captureCounters"));

        horizontalLayout_2->addWidget(captureCounters);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        syncViews = new QToolButton(frame);
        syncViews->setObjectName(QString::fromUtf8("syncViews"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_join.png"), QSize(), QIcon::Normal, QIcon::Off);
        syncViews->setIcon(icon);
        syncViews->setCheckable(true);
        syncViews->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        syncViews->setAutoRaise(true);
        syncViews->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(syncViews);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        saveCSV = new QToolButton(frame);
        saveCSV->setObjectName(QString::fromUtf8("saveCSV"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveCSV->setIcon(icon1);
        saveCSV->setAutoRaise(true);

        horizontalLayout_2->addWidget(saveCSV);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        counterResults = new RDTableView(PerformanceCounterViewer);
        counterResults->setObjectName(QString::fromUtf8("counterResults"));
        counterResults->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        counterResults->setSelectionMode(QAbstractItemView::ExtendedSelection);
        counterResults->setSelectionBehavior(QAbstractItemView::SelectRows);
        counterResults->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        counterResults->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        counterResults->setSortingEnabled(true);
        counterResults->horizontalHeader()->setHighlightSections(false);
        counterResults->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(counterResults);


        retranslateUi(PerformanceCounterViewer);

        QMetaObject::connectSlotsByName(PerformanceCounterViewer);
    } // setupUi

    void retranslateUi(QFrame *PerformanceCounterViewer)
    {
        PerformanceCounterViewer->setWindowTitle(QCoreApplication::translate("PerformanceCounterViewer", "Performance Counter Viewer", nullptr));
        captureCounters->setText(QCoreApplication::translate("PerformanceCounterViewer", "Capture counters", nullptr));
#if QT_CONFIG(tooltip)
        syncViews->setToolTip(QCoreApplication::translate("PerformanceCounterViewer", "Sync with Event Browser for event selection and visibility", nullptr));
#endif // QT_CONFIG(tooltip)
        syncViews->setText(QCoreApplication::translate("PerformanceCounterViewer", "Sync with Event Browser", nullptr));
#if QT_CONFIG(tooltip)
        saveCSV->setToolTip(QCoreApplication::translate("PerformanceCounterViewer", "Export to CSV", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PerformanceCounterViewer: public Ui_PerformanceCounterViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCECOUNTERVIEWER_H
