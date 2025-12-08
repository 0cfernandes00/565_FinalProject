/********************************************************************************
** Form generated from reading UI file 'BufferFormatSpecifier.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUFFERFORMATSPECIFIER_H
#define UI_BUFFERFORMATSPECIFIER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_BufferFormatSpecifier
{
public:
    QGridLayout *gridLayout;
    QGroupBox *formatGroup;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *helpText;
    QWidget *savedContainer;
    QVBoxLayout *verticalLayout;
    RDTreeWidget *savedList;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *showHelp;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *delDef;
    QToolButton *saveDef;
    QToolButton *loadDef;

    void setupUi(QWidget *BufferFormatSpecifier)
    {
        if (BufferFormatSpecifier->objectName().isEmpty())
            BufferFormatSpecifier->setObjectName(QString::fromUtf8("BufferFormatSpecifier"));
        BufferFormatSpecifier->resize(625, 395);
        gridLayout = new QGridLayout(BufferFormatSpecifier);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        formatGroup = new QGroupBox(BufferFormatSpecifier);
        formatGroup->setObjectName(QString::fromUtf8("formatGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(formatGroup->sizePolicy().hasHeightForWidth());
        formatGroup->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(formatGroup);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        helpText = new QTextBrowser(formatGroup);
        helpText->setObjectName(QString::fromUtf8("helpText"));
        helpText->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse|Qt::LinksAccessibleByMouse|Qt::LinksAccessibleByKeyboard);
        helpText->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(helpText);

        savedContainer = new QWidget(formatGroup);
        savedContainer->setObjectName(QString::fromUtf8("savedContainer"));
        verticalLayout = new QVBoxLayout(savedContainer);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        savedList = new RDTreeWidget(savedContainer);
        savedList->setObjectName(QString::fromUtf8("savedList"));
        savedList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        savedList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        savedList->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        savedList->setProperty("showDropIndicator", QVariant(false));
        savedList->setSelectionMode(QAbstractItemView::SingleSelection);
        savedList->setSelectionBehavior(QAbstractItemView::SelectRows);
        savedList->setIndentation(0);
        savedList->setRootIsDecorated(false);
        savedList->setItemsExpandable(false);

        verticalLayout->addWidget(savedList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        showHelp = new QToolButton(savedContainer);
        showHelp->setObjectName(QString::fromUtf8("showHelp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        showHelp->setIcon(icon);
        showHelp->setCheckable(true);
        showHelp->setAutoRaise(true);

        horizontalLayout_3->addWidget(showHelp);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        delDef = new QToolButton(savedContainer);
        delDef->setObjectName(QString::fromUtf8("delDef"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        delDef->setIcon(icon1);
        delDef->setAutoRaise(true);

        horizontalLayout_3->addWidget(delDef);

        saveDef = new QToolButton(savedContainer);
        saveDef->setObjectName(QString::fromUtf8("saveDef"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveDef->setIcon(icon2);
        saveDef->setAutoRaise(true);

        horizontalLayout_3->addWidget(saveDef);

        loadDef = new QToolButton(savedContainer);
        loadDef->setObjectName(QString::fromUtf8("loadDef"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/action_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadDef->setIcon(icon3);
        loadDef->setAutoRaise(true);

        horizontalLayout_3->addWidget(loadDef);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(savedContainer);


        gridLayout->addWidget(formatGroup, 0, 0, 1, 2);


        retranslateUi(BufferFormatSpecifier);

        QMetaObject::connectSlotsByName(BufferFormatSpecifier);
    } // setupUi

    void retranslateUi(QWidget *BufferFormatSpecifier)
    {
        BufferFormatSpecifier->setWindowTitle(QCoreApplication::translate("BufferFormatSpecifier", "Buffer Format", nullptr));
        formatGroup->setTitle(QCoreApplication::translate("BufferFormatSpecifier", "Format", nullptr));
        helpText->setHtml(QCoreApplication::translate("BufferFormatSpecifier", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Exhaustive documentation can be found in the </span><a href=\"https://renderdoc.org/docs/how/how_buffer_format.html\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">online docs</span></a><span style=\" font-size:8pt;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bl"
                        "ock-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Buffer format declarations are similar to HLSL or GLSL struct definitions with normal vector, matrix and base types (e.g. </span><span style=\" font-family:'Courier New'; font-size:8pt;\">float</span><span style=\" font-size:8pt;\">, </span><span style=\" font-family:'Courier New'; font-size:8pt;\">float4</span><span style=\" font-size:8pt;\"> or </span><span style=\" font-family:'Courier New'; font-size:8pt;\">vec4</span><span style=\" font-size:8pt;\">, etc). In many cases these can be copied and pasted from shader source.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You can define and use structs. The buffer format is defined by all global variables."
                        " If there are no globals defined, the last struct defined will be used.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Most types that can be declared in shaders can be used, including half, short, as well as the usual int, float. All of these can be matrices or arrays.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Packing/padding rules can be specified with </span><span style=\" font-family:'Courier New'; font-size:8pt;\">#pa"
                        "ck(rules)</span><span style=\" font-size:8pt;\">. Supported D3D rules: </span><span style=\" font-family:'Courier New'; font-size:8pt;\">cbuffer</span><span style=\" font-size:8pt;\">, </span><span style=\" font-family:'Courier New'; font-size:8pt;\">uav</span><span style=\" font-size:8pt;\">. Supported GL/VK rules: </span><span style=\" font-family:'Courier New'; font-size:8pt;\">std140</span><span style=\" font-size:8pt;\">, </span><span style=\" font-family:'Courier New'; font-size:8pt;\">std430</span><span style=\" font-size:8pt;\">, </span><span style=\" font-family:'Courier New'; font-size:8pt;\">scalar</span><span style=\" font-size:8pt;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Bitfields are supported "
                        "using C syntax, enums can be defined but all enum values must have explicit decimal or hexadecimal numerical values.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Annotations are supported for explicit layout, bitpacked types like R10G10B10A2, or alternate displays of values including RGB/hexadecimal/octal display. For a complete list see </span><a href=\"https://renderdoc.org/docs/how/how_buffer_format.html\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">the documentation linked above</span></a><span style=\" font-size:8pt;\">.</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        showHelp->setToolTip(QCoreApplication::translate("BufferFormatSpecifier", "Show buffer definition help", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        delDef->setToolTip(QCoreApplication::translate("BufferFormatSpecifier", "Delete selected structure definition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        saveDef->setToolTip(QCoreApplication::translate("BufferFormatSpecifier", "Update selected with current structure definition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        loadDef->setToolTip(QCoreApplication::translate("BufferFormatSpecifier", "Load selected structure definition", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class BufferFormatSpecifier: public Ui_BufferFormatSpecifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUFFERFORMATSPECIFIER_H
