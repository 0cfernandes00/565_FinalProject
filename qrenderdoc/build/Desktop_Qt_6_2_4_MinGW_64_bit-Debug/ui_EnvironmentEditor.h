/********************************************************************************
** Form generated from reading UI file 'EnvironmentEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTEDITOR_H
#define UI_ENVIRONMENTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EnvironmentEditor
{
public:
    QGridLayout *gridLayout;
    RDTreeWidget *variables;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLabel;
    RDLineEdit *name;
    QLabel *valueLabel;
    RDLineEdit *value;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *setValue;
    QRadioButton *appendValue;
    QRadioButton *prependValue;
    QComboBox *separator;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *addUpdate;
    QPushButton *deleteButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnvironmentEditor)
    {
        if (EnvironmentEditor->objectName().isEmpty())
            EnvironmentEditor->setObjectName(QString::fromUtf8("EnvironmentEditor"));
        EnvironmentEditor->resize(542, 418);
        EnvironmentEditor->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(EnvironmentEditor);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        variables = new RDTreeWidget(EnvironmentEditor);
        variables->setObjectName(QString::fromUtf8("variables"));
        variables->setFrameShape(QFrame::Panel);
        variables->setFrameShadow(QFrame::Plain);
        variables->setEditTriggers(QAbstractItemView::NoEditTriggers);
        variables->setIndentation(0);
        variables->setRootIsDecorated(false);
        variables->setItemsExpandable(false);
        variables->setSortingEnabled(true);

        gridLayout->addWidget(variables, 0, 0, 1, 2);

        groupBox = new QGroupBox(EnvironmentEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        nameLabel = new QLabel(groupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout_3->addWidget(nameLabel);

        name = new RDLineEdit(groupBox);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_3->addWidget(name);

        valueLabel = new QLabel(groupBox);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));

        verticalLayout_3->addWidget(valueLabel);

        value = new RDLineEdit(groupBox);
        value->setObjectName(QString::fromUtf8("value"));

        verticalLayout_3->addWidget(value);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(EnvironmentEditor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        setValue = new QRadioButton(groupBox_2);
        setValue->setObjectName(QString::fromUtf8("setValue"));

        verticalLayout_2->addWidget(setValue);

        appendValue = new QRadioButton(groupBox_2);
        appendValue->setObjectName(QString::fromUtf8("appendValue"));

        verticalLayout_2->addWidget(appendValue);

        prependValue = new QRadioButton(groupBox_2);
        prependValue->setObjectName(QString::fromUtf8("prependValue"));

        verticalLayout_2->addWidget(prependValue);

        separator = new QComboBox(groupBox_2);
        separator->setObjectName(QString::fromUtf8("separator"));

        verticalLayout_2->addWidget(separator);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(25);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(EnvironmentEditor);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addUpdate = new QPushButton(frame);
        addUpdate->setObjectName(QString::fromUtf8("addUpdate"));

        horizontalLayout->addWidget(addUpdate);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(EnvironmentEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);


        retranslateUi(EnvironmentEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EnvironmentEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EnvironmentEditor);
    } // setupUi

    void retranslateUi(QDialog *EnvironmentEditor)
    {
        EnvironmentEditor->setWindowTitle(QCoreApplication::translate("EnvironmentEditor", "Environment Variables", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EnvironmentEditor", "Environment Variable", nullptr));
        nameLabel->setText(QCoreApplication::translate("EnvironmentEditor", "Name", nullptr));
        valueLabel->setText(QCoreApplication::translate("EnvironmentEditor", "Value", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EnvironmentEditor", "Modification type", nullptr));
        setValue->setText(QCoreApplication::translate("EnvironmentEditor", "Set Value", nullptr));
        appendValue->setText(QCoreApplication::translate("EnvironmentEditor", "Append Value", nullptr));
        prependValue->setText(QCoreApplication::translate("EnvironmentEditor", "Prepend Value", nullptr));
        addUpdate->setText(QCoreApplication::translate("EnvironmentEditor", "Add / Update", nullptr));
        deleteButton->setText(QCoreApplication::translate("EnvironmentEditor", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentEditor: public Ui_EnvironmentEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTEDITOR_H
