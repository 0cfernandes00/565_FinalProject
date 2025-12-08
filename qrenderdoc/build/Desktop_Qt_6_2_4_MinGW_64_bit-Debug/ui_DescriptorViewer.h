/********************************************************************************
** Form generated from reading UI file 'DescriptorViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESCRIPTORVIEWER_H
#define UI_DESCRIPTORVIEWER_H

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
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_DescriptorViewer
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *toolbarHorizontalLayout;
    QToolButton *pipeButton;
    QLabel *pipeLabel;
    QSpacerItem *toolbarHorizontalSpacer;
    RDTreeView *descriptors;

    void setupUi(QFrame *DescriptorViewer)
    {
        if (DescriptorViewer->objectName().isEmpty())
            DescriptorViewer->setObjectName(QString::fromUtf8("DescriptorViewer"));
        DescriptorViewer->resize(400, 300);
        mainLayout = new QVBoxLayout(DescriptorViewer);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(3, 3, 3, 3);
        toolbarHorizontalLayout = new QHBoxLayout();
        toolbarHorizontalLayout->setSpacing(5);
        toolbarHorizontalLayout->setObjectName(QString::fromUtf8("toolbarHorizontalLayout"));
        toolbarHorizontalLayout->setContentsMargins(0, 2, 6, 2);
        pipeButton = new QToolButton(DescriptorViewer);
        pipeButton->setObjectName(QString::fromUtf8("pipeButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/action.png"), QSize(), QIcon::Normal, QIcon::Off);
        pipeButton->setIcon(icon);
        pipeButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pipeButton->setAutoRaise(true);

        toolbarHorizontalLayout->addWidget(pipeButton);

        pipeLabel = new QLabel(DescriptorViewer);
        pipeLabel->setObjectName(QString::fromUtf8("pipeLabel"));
        pipeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        toolbarHorizontalLayout->addWidget(pipeLabel);

        toolbarHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarHorizontalLayout->addItem(toolbarHorizontalSpacer);


        mainLayout->addLayout(toolbarHorizontalLayout);

        descriptors = new RDTreeView(DescriptorViewer);
        descriptors->setObjectName(QString::fromUtf8("descriptors"));
        descriptors->setFrameShape(QFrame::Box);
        descriptors->setFrameShadow(QFrame::Plain);
        descriptors->setMidLineWidth(1);
        descriptors->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        descriptors->setEditTriggers(QAbstractItemView::NoEditTriggers);
        descriptors->setIndentation(12);
        descriptors->setRootIsDecorated(true);
        descriptors->setUniformRowHeights(true);
        descriptors->setAllColumnsShowFocus(true);
        descriptors->setHeaderHidden(false);
        descriptors->header()->setCascadingSectionResizes(false);
        descriptors->header()->setStretchLastSection(false);

        mainLayout->addWidget(descriptors);


        retranslateUi(DescriptorViewer);

        QMetaObject::connectSlotsByName(DescriptorViewer);
    } // setupUi

    void retranslateUi(QFrame *DescriptorViewer)
    {
        DescriptorViewer->setWindowTitle(QCoreApplication::translate("DescriptorViewer", "Descriptor Viewer", nullptr));
        pipeButton->setText(QCoreApplication::translate("DescriptorViewer", "Open Pipeline State", nullptr));
#if QT_CONFIG(tooltip)
        pipeButton->setToolTip(QCoreApplication::translate("DescriptorViewer", "Open the pipeline state viewer to more easily show the current bindings.", nullptr));
#endif // QT_CONFIG(tooltip)
        pipeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DescriptorViewer: public Ui_DescriptorViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESCRIPTORVIEWER_H
