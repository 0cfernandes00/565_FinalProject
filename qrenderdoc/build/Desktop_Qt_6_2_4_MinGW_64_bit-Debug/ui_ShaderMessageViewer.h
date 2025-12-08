/********************************************************************************
** Form generated from reading UI file 'ShaderMessageViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERMESSAGEVIEWER_H
#define UI_SHADERMESSAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLabel.h"
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ShaderMessageViewer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *toolbarHorizontalLayout;
    QToolButton *exportButton;
    QSpacerItem *toolbarHorizontalSpacer;
    RDLabel *label;
    RDLabel *staleStatus;
    QGroupBox *filterGroup;
    QVBoxLayout *verticalLayout_2;
    QFrame *stageFilters;
    QHBoxLayout *horizontalLayout;
    QLabel *filterLabel;
    QCheckBox *task;
    QCheckBox *mesh;
    QCheckBox *vertex;
    QCheckBox *hull;
    QCheckBox *domain;
    QCheckBox *geometry;
    QCheckBox *pixel;
    QSpacerItem *horizontalSpacer;
    QFrame *textFilterFrame;
    QHBoxLayout *horizontalLayout_2;
    RDLineEdit *filter;
    QToolButton *filterButton;
    RDTreeWidget *messages;

    void setupUi(QFrame *ShaderMessageViewer)
    {
        if (ShaderMessageViewer->objectName().isEmpty())
            ShaderMessageViewer->setObjectName(QString::fromUtf8("ShaderMessageViewer"));
        ShaderMessageViewer->resize(469, 303);
        verticalLayout = new QVBoxLayout(ShaderMessageViewer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        toolbarHorizontalLayout = new QHBoxLayout();
        toolbarHorizontalLayout->setSpacing(5);
        toolbarHorizontalLayout->setObjectName(QString::fromUtf8("toolbarHorizontalLayout"));
        toolbarHorizontalLayout->setContentsMargins(0, 2, 6, 2);
        exportButton = new QToolButton(ShaderMessageViewer);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportButton->setIcon(icon);
        exportButton->setPopupMode(QToolButton::MenuButtonPopup);
        exportButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        exportButton->setAutoRaise(true);

        toolbarHorizontalLayout->addWidget(exportButton);

        toolbarHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarHorizontalLayout->addItem(toolbarHorizontalSpacer);


        verticalLayout->addLayout(toolbarHorizontalLayout);

        label = new RDLabel(ShaderMessageViewer);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        staleStatus = new RDLabel(ShaderMessageViewer);
        staleStatus->setObjectName(QString::fromUtf8("staleStatus"));

        verticalLayout->addWidget(staleStatus);

        filterGroup = new QGroupBox(ShaderMessageViewer);
        filterGroup->setObjectName(QString::fromUtf8("filterGroup"));
        verticalLayout_2 = new QVBoxLayout(filterGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        stageFilters = new QFrame(filterGroup);
        stageFilters->setObjectName(QString::fromUtf8("stageFilters"));
        horizontalLayout = new QHBoxLayout(stageFilters);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filterLabel = new QLabel(stageFilters);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));

        horizontalLayout->addWidget(filterLabel);

        task = new QCheckBox(stageFilters);
        task->setObjectName(QString::fromUtf8("task"));
        task->setCheckable(true);

        horizontalLayout->addWidget(task);

        mesh = new QCheckBox(stageFilters);
        mesh->setObjectName(QString::fromUtf8("mesh"));
        mesh->setCheckable(true);

        horizontalLayout->addWidget(mesh);

        vertex = new QCheckBox(stageFilters);
        vertex->setObjectName(QString::fromUtf8("vertex"));
        vertex->setCheckable(true);

        horizontalLayout->addWidget(vertex);

        hull = new QCheckBox(stageFilters);
        hull->setObjectName(QString::fromUtf8("hull"));

        horizontalLayout->addWidget(hull);

        domain = new QCheckBox(stageFilters);
        domain->setObjectName(QString::fromUtf8("domain"));

        horizontalLayout->addWidget(domain);

        geometry = new QCheckBox(stageFilters);
        geometry->setObjectName(QString::fromUtf8("geometry"));

        horizontalLayout->addWidget(geometry);

        pixel = new QCheckBox(stageFilters);
        pixel->setObjectName(QString::fromUtf8("pixel"));

        horizontalLayout->addWidget(pixel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(stageFilters);

        textFilterFrame = new QFrame(filterGroup);
        textFilterFrame->setObjectName(QString::fromUtf8("textFilterFrame"));
        horizontalLayout_2 = new QHBoxLayout(textFilterFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        filter = new RDLineEdit(textFilterFrame);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout_2->addWidget(filter);

        filterButton = new QToolButton(textFilterFrame);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        horizontalLayout_2->addWidget(filterButton);


        verticalLayout_2->addWidget(textFilterFrame);


        verticalLayout->addWidget(filterGroup);

        messages = new RDTreeWidget(ShaderMessageViewer);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setFrameShape(QFrame::Box);
        messages->setFrameShadow(QFrame::Plain);
        messages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        messages->setProperty("showDropIndicator", QVariant(false));
        messages->setSelectionMode(QAbstractItemView::ContiguousSelection);
        messages->setSelectionBehavior(QAbstractItemView::SelectRows);
        messages->setIndentation(0);
        messages->setRootIsDecorated(false);
        messages->setItemsExpandable(false);
        messages->setSortingEnabled(true);
        messages->setAllColumnsShowFocus(true);
        messages->setExpandsOnDoubleClick(false);
        messages->header()->setStretchLastSection(false);

        verticalLayout->addWidget(messages);


        retranslateUi(ShaderMessageViewer);

        QMetaObject::connectSlotsByName(ShaderMessageViewer);
    } // setupUi

    void retranslateUi(QFrame *ShaderMessageViewer)
    {
        ShaderMessageViewer->setWindowTitle(QCoreApplication::translate("ShaderMessageViewer", "X Shader Messages @ EID Y", nullptr));
        exportButton->setText(QCoreApplication::translate("ShaderMessageViewer", "Export", nullptr));
        label->setText(QCoreApplication::translate("ShaderMessageViewer", "These are messages from @1234 - DrawIndexed(6, 1)", nullptr));
        staleStatus->setText(QCoreApplication::translate("ShaderMessageViewer", "The results are out of date because of reasons.", nullptr));
        filterGroup->setTitle(QCoreApplication::translate("ShaderMessageViewer", "Filter", nullptr));
        filterLabel->setText(QCoreApplication::translate("ShaderMessageViewer", "Show messages from:", nullptr));
        task->setText(QCoreApplication::translate("ShaderMessageViewer", "Task", nullptr));
        mesh->setText(QCoreApplication::translate("ShaderMessageViewer", "Mesh", nullptr));
        vertex->setText(QCoreApplication::translate("ShaderMessageViewer", "Vertex", nullptr));
        hull->setText(QCoreApplication::translate("ShaderMessageViewer", "Hull", nullptr));
        domain->setText(QCoreApplication::translate("ShaderMessageViewer", "Domain", nullptr));
        geometry->setText(QCoreApplication::translate("ShaderMessageViewer", "Geometry", nullptr));
        pixel->setText(QCoreApplication::translate("ShaderMessageViewer", "Pixel", nullptr));
        filter->setPlaceholderText(QCoreApplication::translate("ShaderMessageViewer", "Filter message text", nullptr));
        filterButton->setText(QCoreApplication::translate("ShaderMessageViewer", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShaderMessageViewer: public Ui_ShaderMessageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERMESSAGEVIEWER_H
