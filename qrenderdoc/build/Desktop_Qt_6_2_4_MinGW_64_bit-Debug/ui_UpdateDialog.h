/********************************************************************************
** Form generated from reading UI file 'UpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLabel.h"

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    RDLabel *rdocLogo;
    QLabel *updateVer;
    QVBoxLayout *verticalLayout_3;
    RDLabel *updateText;
    QFrame *metadataFrame;
    QGridLayout *gridLayout_2;
    QLabel *curLabel;
    QLabel *currentVersion;
    QSpacerItem *horizontalSpacer_2;
    QLabel *newLabel;
    QLabel *newVersion;
    QLabel *sizeLabel;
    QLabel *downloadSize;
    QLabel *progressText;
    QProgressBar *progressBar;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *releaseNotes;
    QPushButton *update;
    QPushButton *close;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->setWindowModality(Qt::ApplicationModal);
        UpdateDialog->resize(465, 505);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UpdateDialog->sizePolicy().hasHeightForWidth());
        UpdateDialog->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(UpdateDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(UpdateDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(59, 183, 121, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(106, 104, 100, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame->setPalette(palette);
        frame->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        rdocLogo = new RDLabel(frame);
        rdocLogo->setObjectName(QString::fromUtf8("rdocLogo"));
        sizePolicy.setHeightForWidth(rdocLogo->sizePolicy().hasHeightForWidth());
        rdocLogo->setSizePolicy(sizePolicy);
        rdocLogo->setMinimumSize(QSize(128, 128));
        rdocLogo->setMaximumSize(QSize(128, 128));
        rdocLogo->setPixmap(QPixmap(QString::fromUtf8(":/logo.svg")));
        rdocLogo->setScaledContents(true);

        horizontalLayout->addWidget(rdocLogo);

        updateVer = new QLabel(frame);
        updateVer->setObjectName(QString::fromUtf8("updateVer"));
        sizePolicy1.setHeightForWidth(updateVer->sizePolicy().hasHeightForWidth());
        updateVer->setSizePolicy(sizePolicy1);
        QPalette palette1;
        updateVer->setPalette(palette1);
        QFont font;
        font.setPointSize(20);
        updateVer->setFont(font);

        horizontalLayout->addWidget(updateVer);


        verticalLayout_4->addWidget(frame);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(12, 12, 12, 12);
        updateText = new RDLabel(UpdateDialog);
        updateText->setObjectName(QString::fromUtf8("updateText"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateText->sizePolicy().hasHeightForWidth());
        updateText->setSizePolicy(sizePolicy2);
        updateText->setMinimumSize(QSize(0, 200));
        updateText->setAutoFillBackground(true);
        updateText->setFrameShape(QFrame::Box);
        updateText->setTextFormat(Qt::RichText);
        updateText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        updateText->setWordWrap(true);
        updateText->setMargin(6);
        updateText->setOpenExternalLinks(true);
        updateText->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_3->addWidget(updateText);

        metadataFrame = new QFrame(UpdateDialog);
        metadataFrame->setObjectName(QString::fromUtf8("metadataFrame"));
        gridLayout_2 = new QGridLayout(metadataFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        curLabel = new QLabel(metadataFrame);
        curLabel->setObjectName(QString::fromUtf8("curLabel"));
        curLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(curLabel, 0, 1, 1, 1);

        currentVersion = new QLabel(metadataFrame);
        currentVersion->setObjectName(QString::fromUtf8("currentVersion"));

        gridLayout_2->addWidget(currentVersion, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        newLabel = new QLabel(metadataFrame);
        newLabel->setObjectName(QString::fromUtf8("newLabel"));
        newLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(newLabel, 1, 1, 1, 1);

        newVersion = new QLabel(metadataFrame);
        newVersion->setObjectName(QString::fromUtf8("newVersion"));

        gridLayout_2->addWidget(newVersion, 1, 2, 1, 1);

        sizeLabel = new QLabel(metadataFrame);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sizeLabel, 2, 1, 1, 1);

        downloadSize = new QLabel(metadataFrame);
        downloadSize->setObjectName(QString::fromUtf8("downloadSize"));

        gridLayout_2->addWidget(downloadSize, 2, 2, 1, 1);


        verticalLayout_3->addWidget(metadataFrame);

        progressText = new QLabel(UpdateDialog);
        progressText->setObjectName(QString::fromUtf8("progressText"));
        progressText->setWordWrap(true);

        verticalLayout_3->addWidget(progressText);

        progressBar = new QProgressBar(UpdateDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));

        verticalLayout_3->addWidget(progressBar);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        releaseNotes = new QPushButton(UpdateDialog);
        releaseNotes->setObjectName(QString::fromUtf8("releaseNotes"));

        buttonLayout->addWidget(releaseNotes);

        update = new QPushButton(UpdateDialog);
        update->setObjectName(QString::fromUtf8("update"));

        buttonLayout->addWidget(update);

        close = new QPushButton(UpdateDialog);
        close->setObjectName(QString::fromUtf8("close"));

        buttonLayout->addWidget(close);


        verticalLayout_3->addLayout(buttonLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QCoreApplication::translate("UpdateDialog", "Update Available", nullptr));
        rdocLogo->setText(QString());
        updateVer->setText(QCoreApplication::translate("UpdateDialog", "Update Available - vX.YZ", nullptr));
        curLabel->setText(QCoreApplication::translate("UpdateDialog", "Current Version:", nullptr));
        currentVersion->setText(QCoreApplication::translate("UpdateDialog", "vX.YY", nullptr));
        newLabel->setText(QCoreApplication::translate("UpdateDialog", "New Version:", nullptr));
        newVersion->setText(QCoreApplication::translate("UpdateDialog", "vX.YZ", nullptr));
        sizeLabel->setText(QCoreApplication::translate("UpdateDialog", "Download Size:", nullptr));
        downloadSize->setText(QCoreApplication::translate("UpdateDialog", "12.34 MB", nullptr));
        progressText->setText(QCoreApplication::translate("UpdateDialog", "Downloading", nullptr));
        releaseNotes->setText(QCoreApplication::translate("UpdateDialog", "Full Release Notes", nullptr));
        update->setText(QCoreApplication::translate("UpdateDialog", "Install Update", nullptr));
        close->setText(QCoreApplication::translate("UpdateDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
