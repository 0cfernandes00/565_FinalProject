/********************************************************************************
** Form generated from reading UI file 'EventBrowser.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTBROWSER_H
#define UI_EVENTBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTextEdit.h"
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_EventBrowser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line_2;
    QToolButton *stepPrev;
    QToolButton *stepNext;
    QFrame *line;
    QToolButton *find;
    QToolButton *timeActions;
    QToolButton *colSelect;
    QToolButton *bookmark;
    QToolButton *exportActions;
    QToolButton *extensions;
    QSpacerItem *horizontalSpacer;
    QWidget *findStrip;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *label_5;
    RDLineEdit *findEvent;
    QToolButton *findPrev;
    QToolButton *findNext;
    QWidget *filterStrip;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *label_7;
    RDTextEdit *filterExpression;
    QToolButton *filterSettings;
    QWidget *breadcrumbStrip;
    QWidget *bookmarkStrip;
    QWidget *bookmarkStripHeader;
    QHBoxLayout *horizontalLayout_6;
    QLabel *bookmarkStripIcon;
    QLabel *bookmarkStripLabel;
    QFrame *bookmarkStripLine;
    RDTreeView *events;

    void setupUi(QFrame *EventBrowser)
    {
        if (EventBrowser->objectName().isEmpty())
            EventBrowser->setObjectName(QString::fromUtf8("EventBrowser"));
        EventBrowser->resize(281, 298);
        verticalLayout = new QVBoxLayout(EventBrowser);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(6, -1, 6, -1);
        label = new QLabel(EventBrowser);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        line_2 = new QFrame(EventBrowser);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        stepPrev = new QToolButton(EventBrowser);
        stepPrev->setObjectName(QString::fromUtf8("stepPrev"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepPrev->setIcon(icon);
        stepPrev->setAutoRaise(true);

        horizontalLayout->addWidget(stepPrev);

        stepNext = new QToolButton(EventBrowser);
        stepNext->setObjectName(QString::fromUtf8("stepNext"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        stepNext->setIcon(icon1);
        stepNext->setAutoRaise(true);

        horizontalLayout->addWidget(stepNext);

        line = new QFrame(EventBrowser);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        find = new QToolButton(EventBrowser);
        find->setObjectName(QString::fromUtf8("find"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        find->setIcon(icon2);
        find->setCheckable(true);
        find->setChecked(false);
        find->setAutoRaise(true);

        horizontalLayout->addWidget(find);

        timeActions = new QToolButton(EventBrowser);
        timeActions->setObjectName(QString::fromUtf8("timeActions"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/time.png"), QSize(), QIcon::Normal, QIcon::Off);
        timeActions->setIcon(icon3);
        timeActions->setAutoRaise(true);

        horizontalLayout->addWidget(timeActions);

        colSelect = new QToolButton(EventBrowser);
        colSelect->setObjectName(QString::fromUtf8("colSelect"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/timeline_marker.png"), QSize(), QIcon::Normal, QIcon::Off);
        colSelect->setIcon(icon4);
        colSelect->setAutoRaise(true);

        horizontalLayout->addWidget(colSelect);

        bookmark = new QToolButton(EventBrowser);
        bookmark->setObjectName(QString::fromUtf8("bookmark"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/asterisk_orange.png"), QSize(), QIcon::Normal, QIcon::Off);
        bookmark->setIcon(icon5);
        bookmark->setAutoRaise(true);

        horizontalLayout->addWidget(bookmark);

        exportActions = new QToolButton(EventBrowser);
        exportActions->setObjectName(QString::fromUtf8("exportActions"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportActions->setIcon(icon6);
        exportActions->setAutoRaise(true);

        horizontalLayout->addWidget(exportActions);

        extensions = new QToolButton(EventBrowser);
        extensions->setObjectName(QString::fromUtf8("extensions"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/plugin.png"), QSize(), QIcon::Normal, QIcon::Off);
        extensions->setIcon(icon7);
        extensions->setAutoRaise(true);

        horizontalLayout->addWidget(extensions);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        findStrip = new QWidget(EventBrowser);
        findStrip->setObjectName(QString::fromUtf8("findStrip"));
        horizontalLayout_5 = new QHBoxLayout(findStrip);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 0, 6, 0);
        label_4 = new QLabel(findStrip);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/find.png")));

        horizontalLayout_5->addWidget(label_4);

        label_5 = new QLabel(findStrip);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5->setMargin(0);

        horizontalLayout_5->addWidget(label_5);

        findEvent = new RDLineEdit(findStrip);
        findEvent->setObjectName(QString::fromUtf8("findEvent"));
        findEvent->setMinimumSize(QSize(0, 20));
        findEvent->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(findEvent);

        findPrev = new QToolButton(findStrip);
        findPrev->setObjectName(QString::fromUtf8("findPrev"));
        findPrev->setIcon(icon);
        findPrev->setAutoRaise(true);

        horizontalLayout_5->addWidget(findPrev);

        findNext = new QToolButton(findStrip);
        findNext->setObjectName(QString::fromUtf8("findNext"));
        findNext->setIcon(icon1);
        findNext->setAutoRaise(true);

        horizontalLayout_5->addWidget(findNext);


        verticalLayout->addWidget(findStrip);

        filterStrip = new QWidget(EventBrowser);
        filterStrip->setObjectName(QString::fromUtf8("filterStrip"));
        horizontalLayout_7 = new QHBoxLayout(filterStrip);
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 0, 6, 2);
        label_6 = new QLabel(filterStrip);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/filter.png")));

        horizontalLayout_7->addWidget(label_6);

        label_7 = new QLabel(filterStrip);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setTextFormat(Qt::PlainText);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7->setMargin(0);

        horizontalLayout_7->addWidget(label_7);

        filterExpression = new RDTextEdit(filterStrip);
        filterExpression->setObjectName(QString::fromUtf8("filterExpression"));
        filterExpression->setMinimumSize(QSize(0, 20));

        horizontalLayout_7->addWidget(filterExpression);

        filterSettings = new QToolButton(filterStrip);
        filterSettings->setObjectName(QString::fromUtf8("filterSettings"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterSettings->setIcon(icon8);
        filterSettings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        filterSettings->setAutoRaise(true);

        horizontalLayout_7->addWidget(filterSettings);


        verticalLayout->addWidget(filterStrip);

        breadcrumbStrip = new QWidget(EventBrowser);
        breadcrumbStrip->setObjectName(QString::fromUtf8("breadcrumbStrip"));

        verticalLayout->addWidget(breadcrumbStrip);

        bookmarkStrip = new QWidget(EventBrowser);
        bookmarkStrip->setObjectName(QString::fromUtf8("bookmarkStrip"));
        bookmarkStripHeader = new QWidget(bookmarkStrip);
        bookmarkStripHeader->setObjectName(QString::fromUtf8("bookmarkStripHeader"));
        bookmarkStripHeader->setGeometry(QRect(0, 0, 82, 16));
        horizontalLayout_6 = new QHBoxLayout(bookmarkStripHeader);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        bookmarkStripIcon = new QLabel(bookmarkStripHeader);
        bookmarkStripIcon->setObjectName(QString::fromUtf8("bookmarkStripIcon"));
        bookmarkStripIcon->setPixmap(QPixmap(QString::fromUtf8(":/asterisk_orange.png")));

        horizontalLayout_6->addWidget(bookmarkStripIcon);

        bookmarkStripLabel = new QLabel(bookmarkStripHeader);
        bookmarkStripLabel->setObjectName(QString::fromUtf8("bookmarkStripLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bookmarkStripLabel->sizePolicy().hasHeightForWidth());
        bookmarkStripLabel->setSizePolicy(sizePolicy1);
        bookmarkStripLabel->setTextFormat(Qt::PlainText);
        bookmarkStripLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        bookmarkStripLabel->setMargin(0);

        horizontalLayout_6->addWidget(bookmarkStripLabel);

        bookmarkStripLine = new QFrame(bookmarkStripHeader);
        bookmarkStripLine->setObjectName(QString::fromUtf8("bookmarkStripLine"));
        bookmarkStripLine->setFrameShape(QFrame::VLine);
        bookmarkStripLine->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(bookmarkStripLine);


        verticalLayout->addWidget(bookmarkStrip);

        events = new RDTreeView(EventBrowser);
        events->setObjectName(QString::fromUtf8("events"));
        events->setFrameShape(QFrame::Box);
        events->setFrameShadow(QFrame::Plain);
        events->setMidLineWidth(1);
        events->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        events->setEditTriggers(QAbstractItemView::NoEditTriggers);
        events->setIndentation(12);
        events->setRootIsDecorated(true);
        events->setUniformRowHeights(true);
        events->setAllColumnsShowFocus(true);
        events->setHeaderHidden(false);
        events->header()->setCascadingSectionResizes(false);
        events->header()->setStretchLastSection(false);

        verticalLayout->addWidget(events);


        retranslateUi(EventBrowser);

        QMetaObject::connectSlotsByName(EventBrowser);
    } // setupUi

    void retranslateUi(QFrame *EventBrowser)
    {
        EventBrowser->setWindowTitle(QCoreApplication::translate("EventBrowser", "Event Browser", nullptr));
        label->setText(QCoreApplication::translate("EventBrowser", "Controls", nullptr));
#if QT_CONFIG(tooltip)
        stepPrev->setToolTip(QCoreApplication::translate("EventBrowser", "Go to Previous Action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        stepNext->setToolTip(QCoreApplication::translate("EventBrowser", "Go to Next Action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        find->setToolTip(QCoreApplication::translate("EventBrowser", "Find event by string", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        timeActions->setToolTip(QCoreApplication::translate("EventBrowser", "Time durations for the actions", nullptr));
#endif // QT_CONFIG(tooltip)
        timeActions->setText(QString());
#if QT_CONFIG(tooltip)
        colSelect->setToolTip(QCoreApplication::translate("EventBrowser", "Select visible columns", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        bookmark->setToolTip(QCoreApplication::translate("EventBrowser", "Toggle Bookmark", nullptr));
#endif // QT_CONFIG(tooltip)
        bookmark->setText(QString());
#if QT_CONFIG(tooltip)
        exportActions->setToolTip(QCoreApplication::translate("EventBrowser", "Export the list of events to disk", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("EventBrowser", "Find Event", nullptr));
        findEvent->setPlaceholderText(QCoreApplication::translate("EventBrowser", "Search String", nullptr));
        findPrev->setText(QString());
        findNext->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("EventBrowser", "Filter", nullptr));
#if QT_CONFIG(tooltip)
        filterSettings->setToolTip(QCoreApplication::translate("EventBrowser", "Configuration and help for filter expressions", nullptr));
#endif // QT_CONFIG(tooltip)
        filterSettings->setText(QCoreApplication::translate("EventBrowser", "Settings && Help", nullptr));
        bookmarkStripIcon->setText(QString());
        bookmarkStripLabel->setText(QCoreApplication::translate("EventBrowser", "Bookmarks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventBrowser: public Ui_EventBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTBROWSER_H
