/********************************************************************************
** Form generated from reading UI file 'ConfigEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGEDITOR_H
#define UI_CONFIGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warning;
    QLineEdit *filter;
    RDTreeView *settings;
    QDialogButtonBox *buttons;

    void setupUi(QDialog *ConfigEditor)
    {
        if (ConfigEditor->objectName().isEmpty())
            ConfigEditor->setObjectName(QString::fromUtf8("ConfigEditor"));
        ConfigEditor->setWindowModality(Qt::ApplicationModal);
        ConfigEditor->resize(800, 600);
        verticalLayout = new QVBoxLayout(ConfigEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        warning = new QLabel(ConfigEditor);
        warning->setObjectName(QString::fromUtf8("warning"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(106, 104, 100, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        warning->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        warning->setFont(font);
        warning->setWordWrap(true);

        verticalLayout->addWidget(warning);

        filter = new QLineEdit(ConfigEditor);
        filter->setObjectName(QString::fromUtf8("filter"));

        verticalLayout->addWidget(filter);

        settings = new RDTreeView(ConfigEditor);
        settings->setObjectName(QString::fromUtf8("settings"));

        verticalLayout->addWidget(settings);

        buttons = new QDialogButtonBox(ConfigEditor);
        buttons->setObjectName(QString::fromUtf8("buttons"));
        buttons->setStandardButtons(QDialogButtonBox::Close);
        buttons->setCenterButtons(true);

        verticalLayout->addWidget(buttons);


        retranslateUi(ConfigEditor);
        QObject::connect(buttons, &QDialogButtonBox::accepted, ConfigEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttons, &QDialogButtonBox::rejected, ConfigEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigEditor);
    } // setupUi

    void retranslateUi(QDialog *ConfigEditor)
    {
        ConfigEditor->setWindowTitle(QCoreApplication::translate("ConfigEditor", "Advanced Config Editor", nullptr));
        warning->setText(QCoreApplication::translate("ConfigEditor", "Editing any of these settings could cause crashes or unpredictable behaviour. Be sure you know what you are doing before editing any of them!", nullptr));
        filter->setPlaceholderText(QCoreApplication::translate("ConfigEditor", "Filter the settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigEditor: public Ui_ConfigEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGEDITOR_H
