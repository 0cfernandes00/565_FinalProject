/********************************************************************************
** Form generated from reading UI file 'ShaderViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADERVIEWER_H
#define UI_SHADERVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/toolwindowmanager/ToolWindowManager.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ShaderViewer
{
public:
    ToolWindowManager *docking;
    RDTreeWidget *inputSig;
    RDTreeWidget *outputSig;
    RDTreeWidget *constants;
    QFrame *resourcesPanel;
    QVBoxLayout *verticalLayout;
    RDTreeWidget *accessedResources;
    QFrame *sortGroup;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *resources_sortByResource;
    QToolButton *resources_sortByStep;
    QSpacerItem *resources_horizontalSpacer;
    RDTreeWidget *debugVars;
    QFrame *toolbar;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *findReplace;
    QToolButton *bookmark;
    QFrame *line;
    QToolButton *resetEdits;
    QToolButton *refresh;
    QToolButton *unrefresh;
    QLabel *editStatusLabel;
    QToolButton *snippets;
    QFrame *editSep;
    QToolButton *execBackwards;
    QToolButton *execForwards;
    QFrame *regFormatSep;
    QToolButton *intView;
    QToolButton *floatView;
    QFrame *debugToggleSep;
    QToolButton *debugToggle;
    QSpacerItem *horizontalSpacer;
    RDTreeWidget *watch;
    QListWidget *callstack;
    RDTreeWidget *sourceVars;
    QWidget *compilationGroup;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *entryFunc;
    QLabel *label_4;
    QComboBox *encoding;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *compileTool;
    QTextEdit *toolCommandLine;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *ShaderViewer)
    {
        if (ShaderViewer->objectName().isEmpty())
            ShaderViewer->setObjectName(QString::fromUtf8("ShaderViewer"));
        ShaderViewer->resize(963, 746);
        docking = new ToolWindowManager(ShaderViewer);
        docking->setObjectName(QString::fromUtf8("docking"));
        docking->setGeometry(QRect(80, 90, 351, 301));
        inputSig = new RDTreeWidget(ShaderViewer);
        inputSig->setObjectName(QString::fromUtf8("inputSig"));
        inputSig->setGeometry(QRect(570, 160, 256, 192));
        inputSig->setFrameShape(QFrame::NoFrame);
        inputSig->setEditTriggers(QAbstractItemView::NoEditTriggers);
        inputSig->setProperty("showDropIndicator", QVariant(false));
        inputSig->setDragDropOverwriteMode(false);
        inputSig->setIndentation(0);
        inputSig->setRootIsDecorated(false);
        inputSig->setItemsExpandable(false);
        inputSig->setAllColumnsShowFocus(true);
        inputSig->setProperty("cornerButtonEnabled", QVariant(false));
        outputSig = new RDTreeWidget(ShaderViewer);
        outputSig->setObjectName(QString::fromUtf8("outputSig"));
        outputSig->setGeometry(QRect(590, 360, 256, 192));
        outputSig->setFrameShape(QFrame::NoFrame);
        outputSig->setEditTriggers(QAbstractItemView::NoEditTriggers);
        outputSig->setProperty("showDropIndicator", QVariant(false));
        outputSig->setDragDropOverwriteMode(false);
        outputSig->setIndentation(0);
        outputSig->setRootIsDecorated(false);
        outputSig->setItemsExpandable(false);
        outputSig->setAllColumnsShowFocus(true);
        outputSig->setProperty("cornerButtonEnabled", QVariant(false));
        constants = new RDTreeWidget(ShaderViewer);
        constants->setObjectName(QString::fromUtf8("constants"));
        constants->setGeometry(QRect(20, 310, 256, 192));
        constants->setContextMenuPolicy(Qt::PreventContextMenu);
        constants->setFrameShape(QFrame::NoFrame);
        constants->setAllColumnsShowFocus(true);
        resourcesPanel = new QFrame(ShaderViewer);
        resourcesPanel->setObjectName(QString::fromUtf8("resourcesPanel"));
        resourcesPanel->setGeometry(QRect(20, 310, 256, 192));
        resourcesPanel->setContextMenuPolicy(Qt::PreventContextMenu);
        resourcesPanel->setFrameShape(QFrame::NoFrame);
        verticalLayout = new QVBoxLayout(resourcesPanel);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        accessedResources = new RDTreeWidget(resourcesPanel);
        accessedResources->setObjectName(QString::fromUtf8("accessedResources"));
        accessedResources->setFrameShape(QFrame::NoFrame);
        accessedResources->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(accessedResources);

        sortGroup = new QFrame(resourcesPanel);
        sortGroup->setObjectName(QString::fromUtf8("sortGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sortGroup->sizePolicy().hasHeightForWidth());
        sortGroup->setSizePolicy(sizePolicy);
        sortGroup->setContextMenuPolicy(Qt::PreventContextMenu);
        sortGroup->setFrameShape(QFrame::NoFrame);
        horizontalLayout_6 = new QHBoxLayout(sortGroup);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        resources_sortByResource = new QToolButton(sortGroup);
        resources_sortByResource->setObjectName(QString::fromUtf8("resources_sortByResource"));
        resources_sortByResource->setCheckable(true);
        resources_sortByResource->setChecked(true);
        resources_sortByResource->setAutoRaise(true);

        horizontalLayout_6->addWidget(resources_sortByResource);

        resources_sortByStep = new QToolButton(sortGroup);
        resources_sortByStep->setObjectName(QString::fromUtf8("resources_sortByStep"));
        resources_sortByStep->setCheckable(true);
        resources_sortByStep->setChecked(false);
        resources_sortByStep->setAutoRaise(true);

        horizontalLayout_6->addWidget(resources_sortByStep);

        resources_horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(resources_horizontalSpacer);


        verticalLayout->addWidget(sortGroup);

        debugVars = new RDTreeWidget(ShaderViewer);
        debugVars->setObjectName(QString::fromUtf8("debugVars"));
        debugVars->setGeometry(QRect(310, 310, 256, 192));
        debugVars->setFrameShape(QFrame::NoFrame);
        debugVars->setAllColumnsShowFocus(true);
        toolbar = new QFrame(ShaderViewer);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        toolbar->setGeometry(QRect(20, 10, 1132, 28));
        sizePolicy.setHeightForWidth(toolbar->sizePolicy().hasHeightForWidth());
        toolbar->setSizePolicy(sizePolicy);
        toolbar->setMinimumSize(QSize(0, 28));
        toolbar->setFrameShape(QFrame::Panel);
        toolbar->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(toolbar);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 2, 6, 2);
        findReplace = new QToolButton(toolbar);
        findReplace->setObjectName(QString::fromUtf8("findReplace"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        findReplace->setIcon(icon);
        findReplace->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        findReplace->setAutoRaise(true);

        horizontalLayout_5->addWidget(findReplace);

        bookmark = new QToolButton(toolbar);
        bookmark->setObjectName(QString::fromUtf8("bookmark"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/bookmark_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        bookmark->setIcon(icon1);
        bookmark->setPopupMode(QToolButton::InstantPopup);
        bookmark->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        bookmark->setAutoRaise(true);

        horizontalLayout_5->addWidget(bookmark);

        line = new QFrame(toolbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);

        resetEdits = new QToolButton(toolbar);
        resetEdits->setObjectName(QString::fromUtf8("resetEdits"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetEdits->setIcon(icon2);
        resetEdits->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        resetEdits->setAutoRaise(true);

        horizontalLayout_5->addWidget(resetEdits);

        refresh = new QToolButton(toolbar);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrow_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon3);
        refresh->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        refresh->setAutoRaise(true);

        horizontalLayout_5->addWidget(refresh);

        unrefresh = new QToolButton(toolbar);
        unrefresh->setObjectName(QString::fromUtf8("unrefresh"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        unrefresh->setIcon(icon4);
        unrefresh->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        unrefresh->setAutoRaise(true);

        horizontalLayout_5->addWidget(unrefresh);

        editStatusLabel = new QLabel(toolbar);
        editStatusLabel->setObjectName(QString::fromUtf8("editStatusLabel"));

        horizontalLayout_5->addWidget(editStatusLabel);

        snippets = new QToolButton(toolbar);
        snippets->setObjectName(QString::fromUtf8("snippets"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/plugin_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        snippets->setIcon(icon5);
        snippets->setPopupMode(QToolButton::InstantPopup);
        snippets->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        snippets->setAutoRaise(true);

        horizontalLayout_5->addWidget(snippets);

        editSep = new QFrame(toolbar);
        editSep->setObjectName(QString::fromUtf8("editSep"));
        editSep->setFrameShape(QFrame::VLine);
        editSep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(editSep);

        execBackwards = new QToolButton(toolbar);
        execBackwards->setObjectName(QString::fromUtf8("execBackwards"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/control_reverse_blue@2x.png"), QSize(), QIcon::Normal, QIcon::Off);
        execBackwards->setIcon(icon6);
        execBackwards->setPopupMode(QToolButton::InstantPopup);
        execBackwards->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        execBackwards->setAutoRaise(true);

        horizontalLayout_5->addWidget(execBackwards);

        execForwards = new QToolButton(toolbar);
        execForwards->setObjectName(QString::fromUtf8("execForwards"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/control_play_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        execForwards->setIcon(icon7);
        execForwards->setPopupMode(QToolButton::InstantPopup);
        execForwards->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        execForwards->setAutoRaise(true);

        horizontalLayout_5->addWidget(execForwards);

        regFormatSep = new QFrame(toolbar);
        regFormatSep->setObjectName(QString::fromUtf8("regFormatSep"));
        regFormatSep->setFrameShape(QFrame::VLine);
        regFormatSep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(regFormatSep);

        intView = new QToolButton(toolbar);
        intView->setObjectName(QString::fromUtf8("intView"));
        intView->setCheckable(true);
        intView->setChecked(false);
        intView->setAutoRaise(true);

        horizontalLayout_5->addWidget(intView);

        floatView = new QToolButton(toolbar);
        floatView->setObjectName(QString::fromUtf8("floatView"));
        floatView->setCheckable(true);
        floatView->setChecked(true);
        floatView->setAutoRaise(true);

        horizontalLayout_5->addWidget(floatView);

        debugToggleSep = new QFrame(toolbar);
        debugToggleSep->setObjectName(QString::fromUtf8("debugToggleSep"));
        debugToggleSep->setFrameShape(QFrame::VLine);
        debugToggleSep->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(debugToggleSep);

        debugToggle = new QToolButton(toolbar);
        debugToggle->setObjectName(QString::fromUtf8("debugToggle"));
        debugToggle->setMinimumSize(QSize(23, 22));
        debugToggle->setText(QString::fromUtf8("Debug Toggle"));
        debugToggle->setAutoRaise(true);

        horizontalLayout_5->addWidget(debugToggle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        watch = new RDTreeWidget(ShaderViewer);
        watch->setObjectName(QString::fromUtf8("watch"));
        watch->setGeometry(QRect(520, 60, 421, 131));
        watch->setFrameShape(QFrame::NoFrame);
        watch->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        watch->setSelectionMode(QAbstractItemView::SingleSelection);
        watch->setSelectionBehavior(QAbstractItemView::SelectRows);
        watch->setWordWrap(false);
        callstack = new QListWidget(ShaderViewer);
        callstack->setObjectName(QString::fromUtf8("callstack"));
        callstack->setGeometry(QRect(20, 80, 256, 192));
        callstack->setFrameShape(QFrame::NoFrame);
        callstack->setSelectionMode(QAbstractItemView::NoSelection);
        sourceVars = new RDTreeWidget(ShaderViewer);
        sourceVars->setObjectName(QString::fromUtf8("sourceVars"));
        sourceVars->setGeometry(QRect(290, 90, 256, 192));
        sourceVars->setFrameShape(QFrame::NoFrame);
        sourceVars->setAllColumnsShowFocus(true);
        compilationGroup = new QWidget(ShaderViewer);
        compilationGroup->setObjectName(QString::fromUtf8("compilationGroup"));
        compilationGroup->setGeometry(QRect(60, 560, 441, 141));
        gridLayout = new QGridLayout(compilationGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(compilationGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        entryFunc = new QLineEdit(compilationGroup);
        entryFunc->setObjectName(QString::fromUtf8("entryFunc"));
        sizePolicy.setHeightForWidth(entryFunc->sizePolicy().hasHeightForWidth());
        entryFunc->setSizePolicy(sizePolicy);
        entryFunc->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(entryFunc, 0, 1, 1, 1);

        label_4 = new QLabel(compilationGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        encoding = new QComboBox(compilationGroup);
        encoding->setObjectName(QString::fromUtf8("encoding"));
        encoding->setMinimumSize(QSize(0, 20));
        encoding->setInsertPolicy(QComboBox::NoInsert);
        encoding->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(encoding, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        label_3 = new QLabel(compilationGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        compileTool = new QComboBox(compilationGroup);
        compileTool->setObjectName(QString::fromUtf8("compileTool"));
        sizePolicy.setHeightForWidth(compileTool->sizePolicy().hasHeightForWidth());
        compileTool->setSizePolicy(sizePolicy);
        compileTool->setMinimumSize(QSize(0, 20));
        compileTool->setInsertPolicy(QComboBox::NoInsert);
        compileTool->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(compileTool, 1, 1, 1, 1);

        toolCommandLine = new QTextEdit(compilationGroup);
        toolCommandLine->setObjectName(QString::fromUtf8("toolCommandLine"));
        toolCommandLine->setMinimumSize(QSize(0, 20));
        toolCommandLine->setAcceptRichText(false);

        gridLayout->addWidget(toolCommandLine, 1, 2, 2, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(ShaderViewer);

        QMetaObject::connectSlotsByName(ShaderViewer);
    } // setupUi

    void retranslateUi(QFrame *ShaderViewer)
    {
        ShaderViewer->setWindowTitle(QCoreApplication::translate("ShaderViewer", "Form", nullptr));
#if QT_CONFIG(tooltip)
        resources_sortByResource->setToolTip(QCoreApplication::translate("ShaderViewer", "Sort accessed resource by shader binding", nullptr));
#endif // QT_CONFIG(tooltip)
        resources_sortByResource->setText(QCoreApplication::translate("ShaderViewer", "Sort By Resource", nullptr));
#if QT_CONFIG(tooltip)
        resources_sortByStep->setToolTip(QCoreApplication::translate("ShaderViewer", "Sort accessed resource by instruction step", nullptr));
#endif // QT_CONFIG(tooltip)
        resources_sortByStep->setText(QCoreApplication::translate("ShaderViewer", "Sort By Instruction", nullptr));
#if QT_CONFIG(tooltip)
        findReplace->setToolTip(QCoreApplication::translate("ShaderViewer", "Find & Replace", nullptr));
#endif // QT_CONFIG(tooltip)
        findReplace->setText(QCoreApplication::translate("ShaderViewer", "Find", nullptr));
#if QT_CONFIG(tooltip)
        bookmark->setToolTip(QCoreApplication::translate("ShaderViewer", "Add, remove or jump to bookmarks in current file", nullptr));
#endif // QT_CONFIG(tooltip)
        bookmark->setText(QCoreApplication::translate("ShaderViewer", "Bookmark...", nullptr));
#if QT_CONFIG(tooltip)
        resetEdits->setToolTip(QCoreApplication::translate("ShaderViewer", "Remove all source edits and restore original shader", nullptr));
#endif // QT_CONFIG(tooltip)
        resetEdits->setText(QCoreApplication::translate("ShaderViewer", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        refresh->setToolTip(QCoreApplication::translate("ShaderViewer", "Compile shader & apply changes", nullptr));
#endif // QT_CONFIG(tooltip)
        refresh->setText(QCoreApplication::translate("ShaderViewer", "Apply changes", nullptr));
#if QT_CONFIG(tooltip)
        unrefresh->setToolTip(QCoreApplication::translate("ShaderViewer", "Use original shader", nullptr));
#endif // QT_CONFIG(tooltip)
        unrefresh->setText(QCoreApplication::translate("ShaderViewer", "Remove changes", nullptr));
#if QT_CONFIG(tooltip)
        editStatusLabel->setToolTip(QCoreApplication::translate("ShaderViewer", "The replay currently has the original shader active", nullptr));
#endif // QT_CONFIG(tooltip)
        editStatusLabel->setText(QCoreApplication::translate("ShaderViewer", "Status: Original Shader Active", nullptr));
#if QT_CONFIG(tooltip)
        snippets->setToolTip(QCoreApplication::translate("ShaderViewer", "Insert built-in snippets", nullptr));
#endif // QT_CONFIG(tooltip)
        snippets->setText(QCoreApplication::translate("ShaderViewer", "Insert...", nullptr));
#if QT_CONFIG(tooltip)
        execBackwards->setToolTip(QCoreApplication::translate("ShaderViewer", "Run or step backwards in execution", nullptr));
#endif // QT_CONFIG(tooltip)
        execBackwards->setText(QCoreApplication::translate("ShaderViewer", "Execute backwards...", nullptr));
#if QT_CONFIG(tooltip)
        execForwards->setToolTip(QCoreApplication::translate("ShaderViewer", "Run or step forwards in execution", nullptr));
#endif // QT_CONFIG(tooltip)
        execForwards->setText(QCoreApplication::translate("ShaderViewer", "Execute forwards...", nullptr));
        intView->setText(QCoreApplication::translate("ShaderViewer", "int", nullptr));
        floatView->setText(QCoreApplication::translate("ShaderViewer", "float", nullptr));
#if QT_CONFIG(tooltip)
        debugToggle->setToolTip(QCoreApplication::translate("ShaderViewer", "Change the debugging view", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ShaderViewer", "Entry Point:", nullptr));
        label_4->setText(QCoreApplication::translate("ShaderViewer", "Source Type:", nullptr));
        label_3->setText(QCoreApplication::translate("ShaderViewer", "Compiler:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShaderViewer: public Ui_ShaderViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADERVIEWER_H
