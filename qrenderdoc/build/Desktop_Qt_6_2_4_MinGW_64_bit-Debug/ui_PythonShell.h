/********************************************************************************
** Form generated from reading UI file 'PythonShell.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYTHONSHELL_H
#define UI_PYTHONSHELL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTextEdit.h"

QT_BEGIN_NAMESPACE

class Ui_PythonShell
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *interactiveTab;
    QVBoxLayout *verticalLayout;
    RDTextEdit *interactiveOutput;
    QHBoxLayout *horizontalLayout_2;
    RDLineEdit *lineInput;
    QPushButton *execute;
    QPushButton *clear;
    QWidget *scriptTab;
    QVBoxLayout *verticalLayout_2;
    QFrame *toolbar;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *newScript;
    QToolButton *openScript;
    QToolButton *saveScript;
    QFrame *sep;
    QToolButton *runScript;
    QToolButton *abortRun;
    QSpacerItem *horizontalSpacer;
    QSplitter *scriptSplitter;
    QTabWidget *outputHelpTabs;
    QWidget *outputTab;
    QHBoxLayout *horizontalLayout_3;
    RDTextEdit *scriptOutput;
    QWidget *helpTab;
    QGridLayout *gridLayout;
    QLabel *label;
    RDLineEdit *helpSearch;
    RDTextEdit *helpText;

    void setupUi(QFrame *PythonShell)
    {
        if (PythonShell->objectName().isEmpty())
            PythonShell->setObjectName(QString::fromUtf8("PythonShell"));
        PythonShell->resize(544, 346);
        horizontalLayout = new QHBoxLayout(PythonShell);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        tabWidget = new QTabWidget(PythonShell);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        interactiveTab = new QWidget();
        interactiveTab->setObjectName(QString::fromUtf8("interactiveTab"));
        verticalLayout = new QVBoxLayout(interactiveTab);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        interactiveOutput = new RDTextEdit(interactiveTab);
        interactiveOutput->setObjectName(QString::fromUtf8("interactiveOutput"));
        interactiveOutput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        interactiveOutput->setReadOnly(true);
        interactiveOutput->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(interactiveOutput);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineInput = new RDLineEdit(interactiveTab);
        lineInput->setObjectName(QString::fromUtf8("lineInput"));

        horizontalLayout_2->addWidget(lineInput);

        execute = new QPushButton(interactiveTab);
        execute->setObjectName(QString::fromUtf8("execute"));

        horizontalLayout_2->addWidget(execute);

        clear = new QPushButton(interactiveTab);
        clear->setObjectName(QString::fromUtf8("clear"));

        horizontalLayout_2->addWidget(clear);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(interactiveTab, QString());
        scriptTab = new QWidget();
        scriptTab->setObjectName(QString::fromUtf8("scriptTab"));
        verticalLayout_2 = new QVBoxLayout(scriptTab);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        toolbar = new QFrame(scriptTab);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolbar->sizePolicy().hasHeightForWidth());
        toolbar->setSizePolicy(sizePolicy);
        toolbar->setMinimumSize(QSize(0, 28));
        toolbar->setFrameShape(QFrame::Panel);
        toolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(toolbar);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 2, 6, 2);
        newScript = new QToolButton(toolbar);
        newScript->setObjectName(QString::fromUtf8("newScript"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/page_white_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        newScript->setIcon(icon);
        newScript->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        newScript->setAutoRaise(true);

        horizontalLayout_5->addWidget(newScript);

        openScript = new QToolButton(toolbar);
        openScript->setObjectName(QString::fromUtf8("openScript"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/folder_page_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        openScript->setIcon(icon1);
        openScript->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        openScript->setAutoRaise(true);

        horizontalLayout_5->addWidget(openScript);

        saveScript = new QToolButton(toolbar);
        saveScript->setObjectName(QString::fromUtf8("saveScript"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveScript->setIcon(icon2);
        saveScript->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        saveScript->setAutoRaise(true);

        horizontalLayout_5->addWidget(saveScript);

        sep = new QFrame(toolbar);
        sep->setObjectName(QString::fromUtf8("sep"));
        sep->setFrameShape(QFrame::VLine);
        sep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(sep);

        runScript = new QToolButton(toolbar);
        runScript->setObjectName(QString::fromUtf8("runScript"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        runScript->setIcon(icon3);
        runScript->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        runScript->setAutoRaise(true);

        horizontalLayout_5->addWidget(runScript);

        abortRun = new QToolButton(toolbar);
        abortRun->setObjectName(QString::fromUtf8("abortRun"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        abortRun->setIcon(icon4);
        abortRun->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        abortRun->setAutoRaise(true);

        horizontalLayout_5->addWidget(abortRun);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(toolbar);

        scriptSplitter = new QSplitter(scriptTab);
        scriptSplitter->setObjectName(QString::fromUtf8("scriptSplitter"));
        scriptSplitter->setOrientation(Qt::Vertical);
        scriptSplitter->setChildrenCollapsible(false);
        outputHelpTabs = new QTabWidget(scriptSplitter);
        outputHelpTabs->setObjectName(QString::fromUtf8("outputHelpTabs"));
        outputTab = new QWidget();
        outputTab->setObjectName(QString::fromUtf8("outputTab"));
        horizontalLayout_3 = new QHBoxLayout(outputTab);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        scriptOutput = new RDTextEdit(outputTab);
        scriptOutput->setObjectName(QString::fromUtf8("scriptOutput"));
        scriptOutput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scriptOutput->setReadOnly(true);
        scriptOutput->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(scriptOutput);

        outputHelpTabs->addTab(outputTab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QString::fromUtf8("helpTab"));
        gridLayout = new QGridLayout(helpTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        label = new QLabel(helpTab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        helpSearch = new RDLineEdit(helpTab);
        helpSearch->setObjectName(QString::fromUtf8("helpSearch"));

        gridLayout->addWidget(helpSearch, 0, 1, 1, 1);

        helpText = new RDTextEdit(helpTab);
        helpText->setObjectName(QString::fromUtf8("helpText"));
        helpText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        helpText->setReadOnly(true);
        helpText->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(helpText, 1, 0, 1, 2);

        outputHelpTabs->addTab(helpTab, QString());
        scriptSplitter->addWidget(outputHelpTabs);

        verticalLayout_2->addWidget(scriptSplitter);

        tabWidget->addTab(scriptTab, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(PythonShell);

        tabWidget->setCurrentIndex(1);
        outputHelpTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PythonShell);
    } // setupUi

    void retranslateUi(QFrame *PythonShell)
    {
        PythonShell->setWindowTitle(QCoreApplication::translate("PythonShell", "Interactive Python Shell", nullptr));
        execute->setText(QCoreApplication::translate("PythonShell", "Execute", nullptr));
        clear->setText(QCoreApplication::translate("PythonShell", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(interactiveTab), QCoreApplication::translate("PythonShell", "Interactive Shell", nullptr));
#if QT_CONFIG(tooltip)
        newScript->setToolTip(QCoreApplication::translate("PythonShell", "Create a new blank script", nullptr));
#endif // QT_CONFIG(tooltip)
        newScript->setText(QCoreApplication::translate("PythonShell", "New", nullptr));
#if QT_CONFIG(tooltip)
        openScript->setToolTip(QCoreApplication::translate("PythonShell", "Open an existing python script", nullptr));
#endif // QT_CONFIG(tooltip)
        openScript->setText(QCoreApplication::translate("PythonShell", "Open", nullptr));
#if QT_CONFIG(tooltip)
        saveScript->setToolTip(QCoreApplication::translate("PythonShell", "Save the current script to disk", nullptr));
#endif // QT_CONFIG(tooltip)
        saveScript->setText(QCoreApplication::translate("PythonShell", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        runScript->setToolTip(QCoreApplication::translate("PythonShell", "Begin running the script in python", nullptr));
#endif // QT_CONFIG(tooltip)
        runScript->setText(QCoreApplication::translate("PythonShell", "Run", nullptr));
#if QT_CONFIG(tooltip)
        abortRun->setToolTip(QCoreApplication::translate("PythonShell", "Stop execution of the current script", nullptr));
#endif // QT_CONFIG(tooltip)
        abortRun->setText(QCoreApplication::translate("PythonShell", "Abort", nullptr));
        outputHelpTabs->setTabText(outputHelpTabs->indexOf(outputTab), QCoreApplication::translate("PythonShell", "Output", nullptr));
        label->setText(QCoreApplication::translate("PythonShell", "Search", nullptr));
        outputHelpTabs->setTabText(outputHelpTabs->indexOf(helpTab), QCoreApplication::translate("PythonShell", "Help", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(scriptTab), QCoreApplication::translate("PythonShell", "Run Scripts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PythonShell: public Ui_PythonShell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYTHONSHELL_H
