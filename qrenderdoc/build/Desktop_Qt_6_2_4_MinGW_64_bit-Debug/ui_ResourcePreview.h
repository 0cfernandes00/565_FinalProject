/********************************************************************************
** Form generated from reading UI file 'ResourcePreview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEPREVIEW_H
#define UI_RESOURCEPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include "Widgets/CustomPaintWidget.h"
#include "Widgets/Extended/RDLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ResourcePreview
{
public:
    QGridLayout *gridLayout;
    CustomPaintWidget *thumbnail;
    RDLabel *slotLabel;
    RDLabel *descriptionLabel;

    void setupUi(QFrame *ResourcePreview)
    {
        if (ResourcePreview->objectName().isEmpty())
            ResourcePreview->setObjectName(QString::fromUtf8("ResourcePreview"));
        ResourcePreview->resize(168, 127);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResourcePreview->sizePolicy().hasHeightForWidth());
        ResourcePreview->setSizePolicy(sizePolicy);
        ResourcePreview->setFrameShape(QFrame::Box);
        ResourcePreview->setLineWidth(4);
        ResourcePreview->setMidLineWidth(4);
        gridLayout = new QGridLayout(ResourcePreview);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        thumbnail = new CustomPaintWidget(ResourcePreview);
        thumbnail->setObjectName(QString::fromUtf8("thumbnail"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(thumbnail->sizePolicy().hasHeightForWidth());
        thumbnail->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(thumbnail, 0, 0, 1, 2);

        slotLabel = new RDLabel(ResourcePreview);
        slotLabel->setObjectName(QString::fromUtf8("slotLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(slotLabel->sizePolicy().hasHeightForWidth());
        slotLabel->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        slotLabel->setFont(font);
        slotLabel->setMargin(1);

        gridLayout->addWidget(slotLabel, 1, 0, 1, 1);

        descriptionLabel = new RDLabel(ResourcePreview);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(10);
        descriptionLabel->setFont(font1);
        descriptionLabel->setAlignment(Qt::AlignCenter);
        descriptionLabel->setWordWrap(true);
        descriptionLabel->setMargin(0);

        gridLayout->addWidget(descriptionLabel, 1, 1, 1, 1);


        retranslateUi(ResourcePreview);

        QMetaObject::connectSlotsByName(ResourcePreview);
    } // setupUi

    void retranslateUi(QFrame *ResourcePreview)
    {
        ResourcePreview->setWindowTitle(QCoreApplication::translate("ResourcePreview", "Form", nullptr));
        slotLabel->setText(QCoreApplication::translate("ResourcePreview", "PS RW16", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("ResourcePreview", "Texture2D 117", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResourcePreview: public Ui_ResourcePreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEPREVIEW_H
