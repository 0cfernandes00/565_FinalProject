/********************************************************************************
** Form generated from reading UI file 'ReplayOptionsSelector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLAYOPTIONSSELECTOR_H
#define UI_REPLAYOPTIONSSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplayOptionsSelector
{
public:
    QGridLayout *gridLayout;
    QFrame *captureFileFrame;
    QHBoxLayout *captureFileLayout;
    QLabel *captureFileLabel;
    QComboBox *captureFile;
    QToolButton *captureFileBrowse;
    QLabel *label_3;
    QCheckBox *replayAPIValidation;
    QLabel *label_2;
    QComboBox *gpuOverride;
    QLabel *label;
    QComboBox *replayOptimisation;
    QFrame *buttonsFrame;
    QHBoxLayout *buttonsLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveDefaults;
    QPushButton *open;
    QPushButton *cancel;

    void setupUi(QWidget *ReplayOptionsSelector)
    {
        if (ReplayOptionsSelector->objectName().isEmpty())
            ReplayOptionsSelector->setObjectName(QString::fromUtf8("ReplayOptionsSelector"));
        ReplayOptionsSelector->resize(680, 268);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReplayOptionsSelector->sizePolicy().hasHeightForWidth());
        ReplayOptionsSelector->setSizePolicy(sizePolicy);
        ReplayOptionsSelector->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(ReplayOptionsSelector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        captureFileFrame = new QFrame(ReplayOptionsSelector);
        captureFileFrame->setObjectName(QString::fromUtf8("captureFileFrame"));
        captureFileLayout = new QHBoxLayout(captureFileFrame);
        captureFileLayout->setObjectName(QString::fromUtf8("captureFileLayout"));
        captureFileLayout->setContentsMargins(0, 0, 0, 0);
        captureFileLabel = new QLabel(captureFileFrame);
        captureFileLabel->setObjectName(QString::fromUtf8("captureFileLabel"));

        captureFileLayout->addWidget(captureFileLabel);

        captureFile = new QComboBox(captureFileFrame);
        captureFile->setObjectName(QString::fromUtf8("captureFile"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(captureFile->sizePolicy().hasHeightForWidth());
        captureFile->setSizePolicy(sizePolicy1);
        captureFile->setEditable(true);
        captureFile->setInsertPolicy(QComboBox::NoInsert);
        captureFile->setMinimumContentsLength(30);

        captureFileLayout->addWidget(captureFile);

        captureFileBrowse = new QToolButton(captureFileFrame);
        captureFileBrowse->setObjectName(QString::fromUtf8("captureFileBrowse"));

        captureFileLayout->addWidget(captureFileBrowse);


        gridLayout->addWidget(captureFileFrame, 0, 0, 1, 2);

        label_3 = new QLabel(ReplayOptionsSelector);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        replayAPIValidation = new QCheckBox(ReplayOptionsSelector);
        replayAPIValidation->setObjectName(QString::fromUtf8("replayAPIValidation"));

        gridLayout->addWidget(replayAPIValidation, 1, 1, 1, 1);

        label_2 = new QLabel(ReplayOptionsSelector);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        gpuOverride = new QComboBox(ReplayOptionsSelector);
        gpuOverride->setObjectName(QString::fromUtf8("gpuOverride"));

        gridLayout->addWidget(gpuOverride, 2, 1, 1, 1);

        label = new QLabel(ReplayOptionsSelector);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        replayOptimisation = new QComboBox(ReplayOptionsSelector);
        replayOptimisation->setObjectName(QString::fromUtf8("replayOptimisation"));

        gridLayout->addWidget(replayOptimisation, 3, 1, 1, 1);

        buttonsFrame = new QFrame(ReplayOptionsSelector);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        buttonsLayout = new QHBoxLayout(buttonsFrame);
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        saveDefaults = new QPushButton(buttonsFrame);
        saveDefaults->setObjectName(QString::fromUtf8("saveDefaults"));

        buttonsLayout->addWidget(saveDefaults);

        open = new QPushButton(buttonsFrame);
        open->setObjectName(QString::fromUtf8("open"));

        buttonsLayout->addWidget(open);

        cancel = new QPushButton(buttonsFrame);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        buttonsLayout->addWidget(cancel);


        gridLayout->addWidget(buttonsFrame, 4, 0, 1, 2);


        retranslateUi(ReplayOptionsSelector);

        QMetaObject::connectSlotsByName(ReplayOptionsSelector);
    } // setupUi

    void retranslateUi(QWidget *ReplayOptionsSelector)
    {
        ReplayOptionsSelector->setWindowTitle(QCoreApplication::translate("ReplayOptionsSelector", "Form", nullptr));
        captureFileLabel->setText(QCoreApplication::translate("ReplayOptionsSelector", "Capture File:", nullptr));
        captureFileBrowse->setText(QCoreApplication::translate("ReplayOptionsSelector", "...", nullptr));
        label_3->setText(QCoreApplication::translate("ReplayOptionsSelector", "Use API Validation on replay:", nullptr));
        replayAPIValidation->setText(QString());
        label_2->setText(QCoreApplication::translate("ReplayOptionsSelector", "GPU Selection Override:", nullptr));
        label->setText(QCoreApplication::translate("ReplayOptionsSelector", "Replay optimisation level:", nullptr));
        saveDefaults->setText(QCoreApplication::translate("ReplayOptionsSelector", "Save Defaults", nullptr));
        open->setText(QCoreApplication::translate("ReplayOptionsSelector", "Open", nullptr));
        cancel->setText(QCoreApplication::translate("ReplayOptionsSelector", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplayOptionsSelector: public Ui_ReplayOptionsSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLAYOPTIONSSELECTOR_H
