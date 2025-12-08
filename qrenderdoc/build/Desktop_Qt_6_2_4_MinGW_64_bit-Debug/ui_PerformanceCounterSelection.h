/********************************************************************************
** Form generated from reading UI file 'PerformanceCounterSelection.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCECOUNTERSELECTION_H
#define UI_PERFORMANCECOUNTERSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PerformanceCounterSelection
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *countersLabel;
    RDTreeWidget *counterTree;
    QVBoxLayout *verticalLayout;
    QLabel *counterDescriptionLabel;
    QTextBrowser *counterDescription;
    QLabel *enabledCountersLabel;
    QListWidget *enabledCounters;
    QGridLayout *gridLayout;
    QPushButton *save;
    QPushButton *load;
    QPushButton *sampleCounters;
    QPushButton *cancel;

    void setupUi(QDialog *PerformanceCounterSelection)
    {
        if (PerformanceCounterSelection->objectName().isEmpty())
            PerformanceCounterSelection->setObjectName(QString::fromUtf8("PerformanceCounterSelection"));
        PerformanceCounterSelection->resize(640, 480);
        horizontalLayout = new QHBoxLayout(PerformanceCounterSelection);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        countersLabel = new QLabel(PerformanceCounterSelection);
        countersLabel->setObjectName(QString::fromUtf8("countersLabel"));

        verticalLayout_2->addWidget(countersLabel);

        counterTree = new RDTreeWidget(PerformanceCounterSelection);
        counterTree->setObjectName(QString::fromUtf8("counterTree"));
        counterTree->header()->setDefaultSectionSize(31);

        verticalLayout_2->addWidget(counterTree);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        counterDescriptionLabel = new QLabel(PerformanceCounterSelection);
        counterDescriptionLabel->setObjectName(QString::fromUtf8("counterDescriptionLabel"));

        verticalLayout->addWidget(counterDescriptionLabel);

        counterDescription = new QTextBrowser(PerformanceCounterSelection);
        counterDescription->setObjectName(QString::fromUtf8("counterDescription"));
        counterDescription->setOpenExternalLinks(true);

        verticalLayout->addWidget(counterDescription);

        enabledCountersLabel = new QLabel(PerformanceCounterSelection);
        enabledCountersLabel->setObjectName(QString::fromUtf8("enabledCountersLabel"));

        verticalLayout->addWidget(enabledCountersLabel);

        enabledCounters = new QListWidget(PerformanceCounterSelection);
        enabledCounters->setObjectName(QString::fromUtf8("enabledCounters"));
        enabledCounters->setSortingEnabled(true);

        verticalLayout->addWidget(enabledCounters);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        save = new QPushButton(PerformanceCounterSelection);
        save->setObjectName(QString::fromUtf8("save"));

        gridLayout->addWidget(save, 0, 0, 1, 1);

        load = new QPushButton(PerformanceCounterSelection);
        load->setObjectName(QString::fromUtf8("load"));

        gridLayout->addWidget(load, 0, 1, 1, 1);

        sampleCounters = new QPushButton(PerformanceCounterSelection);
        sampleCounters->setObjectName(QString::fromUtf8("sampleCounters"));

        gridLayout->addWidget(sampleCounters, 1, 0, 1, 1);

        cancel = new QPushButton(PerformanceCounterSelection);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        gridLayout->addWidget(cancel, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(PerformanceCounterSelection);

        QMetaObject::connectSlotsByName(PerformanceCounterSelection);
    } // setupUi

    void retranslateUi(QDialog *PerformanceCounterSelection)
    {
        PerformanceCounterSelection->setWindowTitle(QCoreApplication::translate("PerformanceCounterSelection", "Performance counter selection", nullptr));
        countersLabel->setText(QCoreApplication::translate("PerformanceCounterSelection", "Counters", nullptr));
        counterDescriptionLabel->setText(QCoreApplication::translate("PerformanceCounterSelection", "Counter description", nullptr));
        enabledCountersLabel->setText(QCoreApplication::translate("PerformanceCounterSelection", "Enabled counters", nullptr));
        save->setText(QCoreApplication::translate("PerformanceCounterSelection", "Save", nullptr));
        load->setText(QCoreApplication::translate("PerformanceCounterSelection", "Load", nullptr));
        sampleCounters->setText(QCoreApplication::translate("PerformanceCounterSelection", "Sample counters", nullptr));
        cancel->setText(QCoreApplication::translate("PerformanceCounterSelection", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PerformanceCounterSelection: public Ui_PerformanceCounterSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCECOUNTERSELECTION_H
