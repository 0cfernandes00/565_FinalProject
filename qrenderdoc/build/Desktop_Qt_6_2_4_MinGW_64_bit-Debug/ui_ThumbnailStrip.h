/********************************************************************************
** Form generated from reading UI file 'ThumbnailStrip.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUMBNAILSTRIP_H
#define UI_THUMBNAILSTRIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThumbnailStrip
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ThumbnailStrip)
    {
        if (ThumbnailStrip->objectName().isEmpty())
            ThumbnailStrip->setObjectName(QString::fromUtf8("ThumbnailStrip"));
        ThumbnailStrip->resize(159, 440);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThumbnailStrip->sizePolicy().hasHeightForWidth());
        ThumbnailStrip->setSizePolicy(sizePolicy);
        ThumbnailStrip->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(ThumbnailStrip);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(ThumbnailStrip);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 440));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ThumbnailStrip);

        QMetaObject::connectSlotsByName(ThumbnailStrip);
    } // setupUi

    void retranslateUi(QWidget *ThumbnailStrip)
    {
        ThumbnailStrip->setWindowTitle(QCoreApplication::translate("ThumbnailStrip", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThumbnailStrip: public Ui_ThumbnailStrip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THUMBNAILSTRIP_H
