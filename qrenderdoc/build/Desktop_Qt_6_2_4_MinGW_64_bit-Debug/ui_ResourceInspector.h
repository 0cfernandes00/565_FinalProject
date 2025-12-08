/********************************************************************************
** Form generated from reading UI file 'ResourceInspector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEINSPECTOR_H
#define UI_RESOURCEINSPECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/toolwindowmanager/ToolWindowManager.h"
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDListView.h"
#include "Widgets/Extended/RDTreeView.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ResourceInspector
{
public:
    QWidget *resourceListWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *resourceListControls;
    RDLineEdit *resourceListFilter;
    QToolButton *cancelResourceListFilter;
    QComboBox *sortType;
    RDListView *resourceList;
    ToolWindowManager *dockarea;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *resourceName;
    RDLineEdit *resourceNameEdit;
    QToolButton *renameResource;
    QToolButton *resetName;
    QToolButton *viewContents;
    RDTreeView *initChunks;
    RDTreeWidget *relatedResources;
    RDTreeWidget *resourceUsage;

    void setupUi(QFrame *ResourceInspector)
    {
        if (ResourceInspector->objectName().isEmpty())
            ResourceInspector->setObjectName(QString::fromUtf8("ResourceInspector"));
        ResourceInspector->resize(815, 596);
        resourceListWidget = new QWidget(ResourceInspector);
        resourceListWidget->setObjectName(QString::fromUtf8("resourceListWidget"));
        resourceListWidget->setGeometry(QRect(615, 346, 191, 241));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(resourceListWidget->sizePolicy().hasHeightForWidth());
        resourceListWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(resourceListWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        resourceListControls = new QHBoxLayout();
        resourceListControls->setSpacing(0);
        resourceListControls->setObjectName(QString::fromUtf8("resourceListControls"));
        resourceListFilter = new RDLineEdit(resourceListWidget);
        resourceListFilter->setObjectName(QString::fromUtf8("resourceListFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resourceListFilter->sizePolicy().hasHeightForWidth());
        resourceListFilter->setSizePolicy(sizePolicy1);

        resourceListControls->addWidget(resourceListFilter);

        cancelResourceListFilter = new QToolButton(resourceListWidget);
        cancelResourceListFilter->setObjectName(QString::fromUtf8("cancelResourceListFilter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelResourceListFilter->setIcon(icon);
        cancelResourceListFilter->setAutoRaise(true);

        resourceListControls->addWidget(cancelResourceListFilter);


        verticalLayout->addLayout(resourceListControls);

        sortType = new QComboBox(resourceListWidget);
        sortType->setObjectName(QString::fromUtf8("sortType"));

        verticalLayout->addWidget(sortType);

        resourceList = new RDListView(resourceListWidget);
        resourceList->setObjectName(QString::fromUtf8("resourceList"));
        resourceList->setFrameShape(QFrame::Box);
        resourceList->setFrameShadow(QFrame::Sunken);
        resourceList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resourceList->setProperty("showDropIndicator", QVariant(false));
        resourceList->setDefaultDropAction(Qt::CopyAction);
        resourceList->setSelectionBehavior(QAbstractItemView::SelectRows);
        resourceList->setViewMode(QListView::ListMode);
        resourceList->setUniformItemSizes(true);

        verticalLayout->addWidget(resourceList);

        dockarea = new ToolWindowManager(ResourceInspector);
        dockarea->setObjectName(QString::fromUtf8("dockarea"));
        dockarea->setGeometry(QRect(420, 450, 119, 100));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dockarea->sizePolicy().hasHeightForWidth());
        dockarea->setSizePolicy(sizePolicy2);
        dockarea->setMinimumSize(QSize(100, 100));
        dockarea->setAutoFillBackground(false);
        titleWidget = new QWidget(ResourceInspector);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(10, 10, 800, 39));
        horizontalLayout_4 = new QHBoxLayout(titleWidget);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        resourceName = new QLabel(titleWidget);
        resourceName->setObjectName(QString::fromUtf8("resourceName"));
        QFont font;
        font.setPointSize(20);
        resourceName->setFont(font);
        resourceName->setWordWrap(true);

        horizontalLayout_4->addWidget(resourceName);

        resourceNameEdit = new RDLineEdit(titleWidget);
        resourceNameEdit->setObjectName(QString::fromUtf8("resourceNameEdit"));
        resourceNameEdit->setFont(font);

        horizontalLayout_4->addWidget(resourceNameEdit);

        renameResource = new QToolButton(titleWidget);
        renameResource->setObjectName(QString::fromUtf8("renameResource"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/page_white_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        renameResource->setIcon(icon1);
        renameResource->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        renameResource->setAutoRaise(true);

        horizontalLayout_4->addWidget(renameResource);

        resetName = new QToolButton(titleWidget);
        resetName->setObjectName(QString::fromUtf8("resetName"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetName->setIcon(icon2);
        resetName->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        resetName->setAutoRaise(true);

        horizontalLayout_4->addWidget(resetName);

        viewContents = new QToolButton(titleWidget);
        viewContents->setObjectName(QString::fromUtf8("viewContents"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/action_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewContents->setIcon(icon3);
        viewContents->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        viewContents->setAutoRaise(true);

        horizontalLayout_4->addWidget(viewContents);

        initChunks = new RDTreeView(ResourceInspector);
        initChunks->setObjectName(QString::fromUtf8("initChunks"));
        initChunks->setGeometry(QRect(60, 340, 256, 192));
        initChunks->setFrameShape(QFrame::NoFrame);
        initChunks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        initChunks->setProperty("showDropIndicator", QVariant(false));
        initChunks->setSelectionMode(QAbstractItemView::ContiguousSelection);
        initChunks->setIndentation(20);
        initChunks->setRootIsDecorated(true);
        initChunks->setItemsExpandable(true);
        initChunks->setAllColumnsShowFocus(true);
        relatedResources = new RDTreeWidget(ResourceInspector);
        relatedResources->setObjectName(QString::fromUtf8("relatedResources"));
        relatedResources->setGeometry(QRect(70, 80, 310, 174));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(relatedResources->sizePolicy().hasHeightForWidth());
        relatedResources->setSizePolicy(sizePolicy3);
        relatedResources->setFrameShape(QFrame::NoFrame);
        relatedResources->setSelectionBehavior(QAbstractItemView::SelectRows);
        relatedResources->header()->setVisible(false);
        resourceUsage = new RDTreeWidget(ResourceInspector);
        resourceUsage->setObjectName(QString::fromUtf8("resourceUsage"));
        resourceUsage->setGeometry(QRect(460, 90, 310, 174));
        resourceUsage->setFrameShape(QFrame::NoFrame);
        resourceUsage->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        resourceUsage->setSelectionBehavior(QAbstractItemView::SelectRows);
        resourceUsage->header()->setVisible(false);

        retranslateUi(ResourceInspector);

        QMetaObject::connectSlotsByName(ResourceInspector);
    } // setupUi

    void retranslateUi(QFrame *ResourceInspector)
    {
        ResourceInspector->setWindowTitle(QCoreApplication::translate("ResourceInspector", "Resource Inspector", nullptr));
        cancelResourceListFilter->setText(QString());
        resourceName->setText(QCoreApplication::translate("ResourceInspector", "Resource Name Here", nullptr));
        renameResource->setText(QCoreApplication::translate("ResourceInspector", "Rename resource", nullptr));
        resetName->setText(QCoreApplication::translate("ResourceInspector", "Reset name", nullptr));
        viewContents->setText(QCoreApplication::translate("ResourceInspector", "View Contents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResourceInspector: public Ui_ResourceInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEINSPECTOR_H
