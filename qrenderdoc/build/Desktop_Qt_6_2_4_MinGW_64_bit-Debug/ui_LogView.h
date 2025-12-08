/********************************************************************************
** Form generated from reading UI file 'LogView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGVIEW_H
#define UI_LOGVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_LogView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *followNew;
    QToolButton *openExternal;
    QToolButton *save;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QFrame *line;
    QComboBox *pidFilter;
    QComboBox *typeFilter;
    QLabel *label_3;
    QComboBox *textFilterMeaning;
    QCheckBox *regexpFilter;
    QLineEdit *textFilter;
    RDTreeView *messages;

    void setupUi(QFrame *LogView)
    {
        if (LogView->objectName().isEmpty())
            LogView->setObjectName(QString::fromUtf8("LogView"));
        LogView->resize(581, 404);
        verticalLayout = new QVBoxLayout(LogView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 2, 6, 2);
        followNew = new QToolButton(LogView);
        followNew->setObjectName(QString::fromUtf8("followNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        followNew->setIcon(icon);
        followNew->setCheckable(true);
        followNew->setChecked(true);
        followNew->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        followNew->setAutoRaise(true);

        horizontalLayout->addWidget(followNew);

        openExternal = new QToolButton(LogView);
        openExternal->setObjectName(QString::fromUtf8("openExternal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/action_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        openExternal->setIcon(icon1);
        openExternal->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        openExternal->setAutoRaise(true);

        horizontalLayout->addWidget(openExternal);

        save = new QToolButton(LogView);
        save->setObjectName(QString::fromUtf8("save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon2);
        save->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        save->setAutoRaise(true);

        horizontalLayout->addWidget(save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_2 = new QFrame(LogView);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setToolTipDuration(5);
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 2, 6, 2);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        pidFilter = new QComboBox(frame_2);
        pidFilter->setObjectName(QString::fromUtf8("pidFilter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pidFilter->sizePolicy().hasHeightForWidth());
        pidFilter->setSizePolicy(sizePolicy);
        pidFilter->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        pidFilter->setMinimumContentsLength(8);

        horizontalLayout_4->addWidget(pidFilter);

        typeFilter = new QComboBox(frame_2);
        typeFilter->setObjectName(QString::fromUtf8("typeFilter"));
        sizePolicy.setHeightForWidth(typeFilter->sizePolicy().hasHeightForWidth());
        typeFilter->setSizePolicy(sizePolicy);
        typeFilter->setMaxVisibleItems(5);
        typeFilter->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        typeFilter->setMinimumContentsLength(7);

        horizontalLayout_4->addWidget(typeFilter);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        textFilterMeaning = new QComboBox(frame_2);
        textFilterMeaning->addItem(QString());
        textFilterMeaning->addItem(QString());
        textFilterMeaning->setObjectName(QString::fromUtf8("textFilterMeaning"));
        sizePolicy.setHeightForWidth(textFilterMeaning->sizePolicy().hasHeightForWidth());
        textFilterMeaning->setSizePolicy(sizePolicy);
        textFilterMeaning->setMaxVisibleItems(2);
        textFilterMeaning->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(textFilterMeaning);

        regexpFilter = new QCheckBox(frame_2);
        regexpFilter->setObjectName(QString::fromUtf8("regexpFilter"));

        horizontalLayout_4->addWidget(regexpFilter);

        textFilter = new QLineEdit(frame_2);
        textFilter->setObjectName(QString::fromUtf8("textFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textFilter->sizePolicy().hasHeightForWidth());
        textFilter->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(textFilter);


        horizontalLayout_3->addWidget(frame_2);


        verticalLayout->addLayout(horizontalLayout_3);

        messages = new RDTreeView(LogView);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setFrameShape(QFrame::Panel);
        messages->setFrameShadow(QFrame::Plain);
        messages->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        messages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        messages->setAlternatingRowColors(true);
        messages->setSelectionMode(QAbstractItemView::ContiguousSelection);
        messages->setSelectionBehavior(QAbstractItemView::SelectRows);
        messages->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        messages->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        messages->setIndentation(0);
        messages->setRootIsDecorated(false);
        messages->setUniformRowHeights(true);
        messages->setItemsExpandable(false);
        messages->setWordWrap(true);

        verticalLayout->addWidget(messages);


        retranslateUi(LogView);

        QMetaObject::connectSlotsByName(LogView);
    } // setupUi

    void retranslateUi(QFrame *LogView)
    {
        LogView->setWindowTitle(QCoreApplication::translate("LogView", "Diagnostic Log", nullptr));
        followNew->setText(QCoreApplication::translate("LogView", "Follow new messages", nullptr));
        openExternal->setText(QCoreApplication::translate("LogView", "Open in external editor", nullptr));
        save->setText(QCoreApplication::translate("LogView", "Save", nullptr));
        label->setText(QCoreApplication::translate("LogView", "Filter", nullptr));
        label_3->setText(QCoreApplication::translate("LogView", "Text:", nullptr));
        textFilterMeaning->setItemText(0, QCoreApplication::translate("LogView", "Include", nullptr));
        textFilterMeaning->setItemText(1, QCoreApplication::translate("LogView", "Exclude", nullptr));

        regexpFilter->setText(QCoreApplication::translate("LogView", "Regex", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogView: public Ui_LogView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGVIEW_H
