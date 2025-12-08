/********************************************************************************
** Form generated from reading UI file 'DebugMessageView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGMESSAGEVIEW_H
#define UI_DEBUGMESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTableView.h"

QT_BEGIN_NAMESPACE

class Ui_DebugMessageView
{
public:
    QVBoxLayout *verticalLayout;
    RDTableView *messages;

    void setupUi(QFrame *DebugMessageView)
    {
        if (DebugMessageView->objectName().isEmpty())
            DebugMessageView->setObjectName(QString::fromUtf8("DebugMessageView"));
        DebugMessageView->resize(400, 300);
        verticalLayout = new QVBoxLayout(DebugMessageView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        messages = new RDTableView(DebugMessageView);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        messages->setSelectionMode(QAbstractItemView::SingleSelection);
        messages->setSelectionBehavior(QAbstractItemView::SelectRows);
        messages->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        messages->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        messages->horizontalHeader()->setHighlightSections(false);
        messages->horizontalHeader()->setStretchLastSection(true);
        messages->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(messages);


        retranslateUi(DebugMessageView);

        QMetaObject::connectSlotsByName(DebugMessageView);
    } // setupUi

    void retranslateUi(QFrame *DebugMessageView)
    {
        DebugMessageView->setWindowTitle(QCoreApplication::translate("DebugMessageView", "Debug warnings and errors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugMessageView: public Ui_DebugMessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGMESSAGEVIEW_H
