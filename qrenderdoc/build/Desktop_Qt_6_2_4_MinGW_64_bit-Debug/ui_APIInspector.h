/********************************************************************************
** Form generated from reading UI file 'APIInspector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APIINSPECTOR_H
#define UI_APIINSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDListWidget.h"
#include "Widgets/Extended/RDSplitter.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_APIInspector
{
public:
    QVBoxLayout *verticalLayout;
    RDSplitter *splitter;
    RDTreeWidget *apiEvents;
    RDListWidget *callstack;

    void setupUi(QFrame *APIInspector)
    {
        if (APIInspector->objectName().isEmpty())
            APIInspector->setObjectName(QString::fromUtf8("APIInspector"));
        APIInspector->resize(434, 425);
        verticalLayout = new QVBoxLayout(APIInspector);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        splitter = new RDSplitter(APIInspector);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(27);
        apiEvents = new RDTreeWidget(splitter);
        apiEvents->setObjectName(QString::fromUtf8("apiEvents"));
        apiEvents->setEditTriggers(QAbstractItemView::NoEditTriggers);
        apiEvents->setProperty("showDropIndicator", QVariant(false));
        apiEvents->setSelectionMode(QAbstractItemView::ContiguousSelection);
        apiEvents->setIndentation(20);
        apiEvents->setRootIsDecorated(true);
        apiEvents->setUniformRowHeights(true);
        apiEvents->setItemsExpandable(true);
        apiEvents->setAllColumnsShowFocus(true);
        splitter->addWidget(apiEvents);
        callstack = new RDListWidget(splitter);
        callstack->setObjectName(QString::fromUtf8("callstack"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(callstack->sizePolicy().hasHeightForWidth());
        callstack->setSizePolicy(sizePolicy);
        callstack->setSelectionMode(QAbstractItemView::ContiguousSelection);
        splitter->addWidget(callstack);

        verticalLayout->addWidget(splitter);


        retranslateUi(APIInspector);

        QMetaObject::connectSlotsByName(APIInspector);
    } // setupUi

    void retranslateUi(QFrame *APIInspector)
    {
        APIInspector->setWindowTitle(QCoreApplication::translate("APIInspector", "API Inspector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class APIInspector: public Ui_APIInspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIINSPECTOR_H
