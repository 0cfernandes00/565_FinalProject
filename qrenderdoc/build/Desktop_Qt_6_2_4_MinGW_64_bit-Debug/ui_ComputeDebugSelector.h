/********************************************************************************
** Form generated from reading UI file 'ComputeDebugSelector.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTEDEBUGSELECTOR_H
#define UI_COMPUTEDEBUGSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComputeDebugSelector
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_groupthread;
    QLabel *groupDebugLabel;
    QSpinBox *groupX;
    QSpinBox *groupY;
    QSpinBox *groupZ;
    QLabel *threadDebugLabel;
    QSpinBox *threadX;
    QSpinBox *threadY;
    QSpinBox *threadZ;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_dispatchthread;
    QSpinBox *dispatchX;
    QSpinBox *dispatchY;
    QSpinBox *dispatchZ;
    QHBoxLayout *horizontalLayout_buttons;
    QPushButton *beginDebug;
    QPushButton *cancelDebug;

    void setupUi(QDialog *ComputeDebugSelector)
    {
        if (ComputeDebugSelector->objectName().isEmpty())
            ComputeDebugSelector->setObjectName(QString::fromUtf8("ComputeDebugSelector"));
        ComputeDebugSelector->setWindowModality(Qt::ApplicationModal);
        ComputeDebugSelector->resize(268, 237);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComputeDebugSelector->sizePolicy().hasHeightForWidth());
        ComputeDebugSelector->setSizePolicy(sizePolicy);
        ComputeDebugSelector->setSizeGripEnabled(false);
        ComputeDebugSelector->setModal(true);
        verticalLayout = new QVBoxLayout(ComputeDebugSelector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        groupBox = new QGroupBox(ComputeDebugSelector);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_groupthread = new QGridLayout(groupBox);
        gridLayout_groupthread->setObjectName(QString::fromUtf8("gridLayout_groupthread"));
        gridLayout_groupthread->setVerticalSpacing(3);
        groupDebugLabel = new QLabel(groupBox);
        groupDebugLabel->setObjectName(QString::fromUtf8("groupDebugLabel"));

        gridLayout_groupthread->addWidget(groupDebugLabel, 0, 0, 1, 1);

        groupX = new QSpinBox(groupBox);
        groupX->setObjectName(QString::fromUtf8("groupX"));

        gridLayout_groupthread->addWidget(groupX, 0, 1, 1, 1);

        groupY = new QSpinBox(groupBox);
        groupY->setObjectName(QString::fromUtf8("groupY"));

        gridLayout_groupthread->addWidget(groupY, 0, 2, 1, 1);

        groupZ = new QSpinBox(groupBox);
        groupZ->setObjectName(QString::fromUtf8("groupZ"));

        gridLayout_groupthread->addWidget(groupZ, 0, 3, 1, 1);

        threadDebugLabel = new QLabel(groupBox);
        threadDebugLabel->setObjectName(QString::fromUtf8("threadDebugLabel"));

        gridLayout_groupthread->addWidget(threadDebugLabel, 1, 0, 1, 1);

        threadX = new QSpinBox(groupBox);
        threadX->setObjectName(QString::fromUtf8("threadX"));

        gridLayout_groupthread->addWidget(threadX, 1, 1, 1, 1);

        threadY = new QSpinBox(groupBox);
        threadY->setObjectName(QString::fromUtf8("threadY"));

        gridLayout_groupthread->addWidget(threadY, 1, 2, 1, 1);

        threadZ = new QSpinBox(groupBox);
        threadZ->setObjectName(QString::fromUtf8("threadZ"));

        gridLayout_groupthread->addWidget(threadZ, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox1 = new QGroupBox(ComputeDebugSelector);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        horizontalLayout_dispatchthread = new QHBoxLayout(groupBox1);
        horizontalLayout_dispatchthread->setObjectName(QString::fromUtf8("horizontalLayout_dispatchthread"));
        dispatchX = new QSpinBox(groupBox1);
        dispatchX->setObjectName(QString::fromUtf8("dispatchX"));

        horizontalLayout_dispatchthread->addWidget(dispatchX);

        dispatchY = new QSpinBox(groupBox1);
        dispatchY->setObjectName(QString::fromUtf8("dispatchY"));

        horizontalLayout_dispatchthread->addWidget(dispatchY);

        dispatchZ = new QSpinBox(groupBox1);
        dispatchZ->setObjectName(QString::fromUtf8("dispatchZ"));

        horizontalLayout_dispatchthread->addWidget(dispatchZ);


        verticalLayout->addWidget(groupBox1);

        horizontalLayout_buttons = new QHBoxLayout();
        horizontalLayout_buttons->setObjectName(QString::fromUtf8("horizontalLayout_buttons"));
        beginDebug = new QPushButton(ComputeDebugSelector);
        beginDebug->setObjectName(QString::fromUtf8("beginDebug"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        beginDebug->setIcon(icon);

        horizontalLayout_buttons->addWidget(beginDebug);

        cancelDebug = new QPushButton(ComputeDebugSelector);
        cancelDebug->setObjectName(QString::fromUtf8("cancelDebug"));

        horizontalLayout_buttons->addWidget(cancelDebug);


        verticalLayout->addLayout(horizontalLayout_buttons);


        retranslateUi(ComputeDebugSelector);

        QMetaObject::connectSlotsByName(ComputeDebugSelector);
    } // setupUi

    void retranslateUi(QDialog *ComputeDebugSelector)
    {
        ComputeDebugSelector->setWindowTitle(QCoreApplication::translate("ComputeDebugSelector", "Debug Compute Shader", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ComputeDebugSelector", "Debug Group and Thread ID", nullptr));
        groupDebugLabel->setText(QCoreApplication::translate("ComputeDebugSelector", "Debug Group:", nullptr));
        threadDebugLabel->setText(QCoreApplication::translate("ComputeDebugSelector", "Thread:", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("ComputeDebugSelector", "Dispatch Thread ID", nullptr));
        beginDebug->setText(QCoreApplication::translate("ComputeDebugSelector", "Debug", nullptr));
        cancelDebug->setText(QCoreApplication::translate("ComputeDebugSelector", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComputeDebugSelector: public Ui_ComputeDebugSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTEDEBUGSELECTOR_H
