/********************************************************************************
** Form generated from reading UI file 'PixelHistoryView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXELHISTORYVIEW_H
#define UI_PIXELHISTORYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_PixelHistoryView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *eventsHidden;
    RDTreeView *events;

    void setupUi(QFrame *PixelHistoryView)
    {
        if (PixelHistoryView->objectName().isEmpty())
            PixelHistoryView->setObjectName(QString::fromUtf8("PixelHistoryView"));
        PixelHistoryView->resize(662, 569);
        verticalLayout = new QVBoxLayout(PixelHistoryView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        label = new QLabel(PixelHistoryView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        eventsHidden = new QLabel(PixelHistoryView);
        eventsHidden->setObjectName(QString::fromUtf8("eventsHidden"));
        QPalette palette;
        QBrush brush(QColor(200, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        eventsHidden->setPalette(palette);

        verticalLayout->addWidget(eventsHidden);

        events = new RDTreeView(PixelHistoryView);
        events->setObjectName(QString::fromUtf8("events"));
        events->setContextMenuPolicy(Qt::CustomContextMenu);
        events->header()->setMinimumSectionSize(16);
        events->header()->setStretchLastSection(false);

        verticalLayout->addWidget(events);


        retranslateUi(PixelHistoryView);

        QMetaObject::connectSlotsByName(PixelHistoryView);
    } // setupUi

    void retranslateUi(QFrame *PixelHistoryView)
    {
        PixelHistoryView->setWindowTitle(QCoreApplication::translate("PixelHistoryView", "Pixel History", nullptr));
        label->setText(QCoreApplication::translate("PixelHistoryView", "***code overwritten preview*** Preview colours displayed in visible range {min} - {max} with {red, blue, green} channels.\n"
"\n"
"Right click to debug an event, hide failed events, or jump to the modification's primitive in the mesh view.", nullptr));
        eventsHidden->setText(QCoreApplication::translate("PixelHistoryView", "Failed events are currently hidden", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PixelHistoryView: public Ui_PixelHistoryView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXELHISTORYVIEW_H
