/********************************************************************************
** Form generated from reading UI file 'TipsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPSDIALOG_H
#define UI_TIPSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TipsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *tipsGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleLabel;
    QLabel *tipTextLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *tipUrlLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *randomButton;
    QPushButton *nextButton;
    QPushButton *closeButton;

    void setupUi(QDialog *TipsDialog)
    {
        if (TipsDialog->objectName().isEmpty())
            TipsDialog->setObjectName(QString::fromUtf8("TipsDialog"));
        TipsDialog->setWindowModality(Qt::NonModal);
        TipsDialog->resize(751, 442);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TipsDialog->sizePolicy().hasHeightForWidth());
        TipsDialog->setSizePolicy(sizePolicy);
        TipsDialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayout_2 = new QVBoxLayout(TipsDialog);
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        tipsGroupBox = new QGroupBox(TipsDialog);
        tipsGroupBox->setObjectName(QString::fromUtf8("tipsGroupBox"));
        sizePolicy.setHeightForWidth(tipsGroupBox->sizePolicy().hasHeightForWidth());
        tipsGroupBox->setSizePolicy(sizePolicy);
        tipsGroupBox->setMinimumSize(QSize(725, 351));
        QFont font;
        font.setPointSize(9);
        tipsGroupBox->setFont(font);
        verticalLayout = new QVBoxLayout(tipsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        titleLabel = new QLabel(tipsGroupBox);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(titleLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        tipTextLabel = new QLabel(tipsGroupBox);
        tipTextLabel->setObjectName(QString::fromUtf8("tipTextLabel"));
        sizePolicy.setHeightForWidth(tipTextLabel->sizePolicy().hasHeightForWidth());
        tipTextLabel->setSizePolicy(sizePolicy);
        tipTextLabel->setMinimumSize(QSize(709, 283));
        QFont font2;
        font2.setPointSize(12);
        tipTextLabel->setFont(font2);
        tipTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tipTextLabel->setWordWrap(true);

        verticalLayout->addWidget(tipTextLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        tipUrlLabel = new QLabel(tipsGroupBox);
        tipUrlLabel->setObjectName(QString::fromUtf8("tipUrlLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tipUrlLabel->sizePolicy().hasHeightForWidth());
        tipUrlLabel->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(10);
        tipUrlLabel->setFont(font3);
        tipUrlLabel->setTextFormat(Qt::RichText);
        tipUrlLabel->setOpenExternalLinks(true);
        tipUrlLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout_2->addWidget(tipUrlLabel);

        horizontalSpacer_4 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(tipsGroupBox, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        randomButton = new QPushButton(TipsDialog);
        randomButton->setObjectName(QString::fromUtf8("randomButton"));
        sizePolicy1.setHeightForWidth(randomButton->sizePolicy().hasHeightForWidth());
        randomButton->setSizePolicy(sizePolicy1);
        randomButton->setMinimumSize(QSize(0, 28));
        randomButton->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(randomButton);

        nextButton = new QPushButton(TipsDialog);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setMinimumSize(QSize(0, 28));
        nextButton->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(nextButton);

        closeButton = new QPushButton(TipsDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(0, 28));
        closeButton->setMaximumSize(QSize(16777215, 28));

        horizontalLayout->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(TipsDialog);

        QMetaObject::connectSlotsByName(TipsDialog);
    } // setupUi

    void retranslateUi(QDialog *TipsDialog)
    {
        TipsDialog->setWindowTitle(QCoreApplication::translate("TipsDialog", "RenderDoc Tips", nullptr));
        tipsGroupBox->setTitle(QCoreApplication::translate("TipsDialog", "Tip #X", nullptr));
        titleLabel->setText(QCoreApplication::translate("TipsDialog", "Tip #X: Tip Title", nullptr));
        tipTextLabel->setText(QCoreApplication::translate("TipsDialog", "TextLabel", nullptr));
        tipUrlLabel->setText(QCoreApplication::translate("TipsDialog", "https://renderdoc.org/tips/1", nullptr));
        randomButton->setText(QCoreApplication::translate("TipsDialog", "Random Tip", nullptr));
        nextButton->setText(QCoreApplication::translate("TipsDialog", "Next Tip", nullptr));
        closeButton->setText(QCoreApplication::translate("TipsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TipsDialog: public Ui_TipsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPSDIALOG_H
