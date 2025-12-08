/********************************************************************************
** Form generated from reading UI file 'AxisMappingDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISMAPPINGDIALOG_H
#define UI_AXISMAPPINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AxisMappingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QLabel *xAxisLabel;
    QComboBox *xAxisCombo;
    QLabel *yAxisLabel;
    QComboBox *yAxisCombo;
    QLabel *zAxisLabel;
    QComboBox *zAxisCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AxisMappingDialog)
    {
        if (AxisMappingDialog->objectName().isEmpty())
            AxisMappingDialog->setObjectName(QString::fromUtf8("AxisMappingDialog"));
        AxisMappingDialog->resize(300, 200);
        verticalLayout = new QVBoxLayout(AxisMappingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, -1, -1, 10);
        xAxisLabel = new QLabel(AxisMappingDialog);
        xAxisLabel->setObjectName(QString::fromUtf8("xAxisLabel"));

        gridLayout_5->addWidget(xAxisLabel, 0, 0, 1, 1);

        xAxisCombo = new QComboBox(AxisMappingDialog);
        xAxisCombo->setObjectName(QString::fromUtf8("xAxisCombo"));

        gridLayout_5->addWidget(xAxisCombo, 0, 1, 1, 1);

        yAxisLabel = new QLabel(AxisMappingDialog);
        yAxisLabel->setObjectName(QString::fromUtf8("yAxisLabel"));

        gridLayout_5->addWidget(yAxisLabel, 1, 0, 1, 1);

        yAxisCombo = new QComboBox(AxisMappingDialog);
        yAxisCombo->setObjectName(QString::fromUtf8("yAxisCombo"));

        gridLayout_5->addWidget(yAxisCombo, 1, 1, 1, 1);

        zAxisLabel = new QLabel(AxisMappingDialog);
        zAxisLabel->setObjectName(QString::fromUtf8("zAxisLabel"));

        gridLayout_5->addWidget(zAxisLabel, 2, 0, 1, 1);

        zAxisCombo = new QComboBox(AxisMappingDialog);
        zAxisCombo->setObjectName(QString::fromUtf8("zAxisCombo"));

        gridLayout_5->addWidget(zAxisCombo, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        buttonBox = new QDialogButtonBox(AxisMappingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AxisMappingDialog);

        QMetaObject::connectSlotsByName(AxisMappingDialog);
    } // setupUi

    void retranslateUi(QDialog *AxisMappingDialog)
    {
        AxisMappingDialog->setWindowTitle(QCoreApplication::translate("AxisMappingDialog", "Edit Custom Mapping", nullptr));
        xAxisLabel->setText(QCoreApplication::translate("AxisMappingDialog", "X Axis:", nullptr));
        yAxisLabel->setText(QCoreApplication::translate("AxisMappingDialog", "Y Axis:", nullptr));
        zAxisLabel->setText(QCoreApplication::translate("AxisMappingDialog", "Z Axis:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AxisMappingDialog: public Ui_AxisMappingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISMAPPINGDIALOG_H
