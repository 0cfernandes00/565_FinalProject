/********************************************************************************
** Form generated from reading UI file 'CrashDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHDIALOG_H
#define UI_CRASHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLabel.h"

QT_BEGIN_NAMESPACE

class Ui_CrashDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    RDLabel *rdocLogo;
    QLabel *rdocName;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *reportGroup;
    QGridLayout *gridLayout;
    QLabel *reportText;
    QFrame *line;
    QLabel *addressLabel;
    QLineEdit *email;
    QCheckBox *rememberEmail;
    QLabel *captureLabel;
    QCheckBox *captureUpload;
    QLabel *captureFilename;
    QFrame *capturePreviewFrame;
    QHBoxLayout *horizontalLayout_3;
    RDLabel *capturePreview;
    QLabel *descriptionLabel;
    QTextEdit *description;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancel;
    QPushButton *send;
    QGroupBox *uploadingGroup;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *progressText;
    QProgressBar *progressBar;
    QHBoxLayout *uploadButtonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *uploadRetry;
    QPushButton *uploadCancel;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *reportedGroup;
    QVBoxLayout *verticalLayout_2;
    QLabel *finishedText;
    QCheckBox *checkUpdates;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CrashDialog)
    {
        if (CrashDialog->objectName().isEmpty())
            CrashDialog->setObjectName(QString::fromUtf8("CrashDialog"));
        CrashDialog->setWindowModality(Qt::ApplicationModal);
        CrashDialog->resize(593, 1004);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CrashDialog->sizePolicy().hasHeightForWidth());
        CrashDialog->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(CrashDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(CrashDialog);
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

        rdocName = new QLabel(frame);
        rdocName->setObjectName(QString::fromUtf8("rdocName"));
        sizePolicy1.setHeightForWidth(rdocName->sizePolicy().hasHeightForWidth());
        rdocName->setSizePolicy(sizePolicy1);
        QPalette palette1;
        rdocName->setPalette(palette1);
        QFont font;
        font.setPointSize(20);
        rdocName->setFont(font);

        horizontalLayout->addWidget(rdocName);


        verticalLayout_4->addWidget(frame);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        reportGroup = new QGroupBox(CrashDialog);
        reportGroup->setObjectName(QString::fromUtf8("reportGroup"));
        gridLayout = new QGridLayout(reportGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        reportText = new QLabel(reportGroup);
        reportText->setObjectName(QString::fromUtf8("reportText"));
        reportText->setText(QString::fromUtf8("Filled out at runtime"));
        reportText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        reportText->setWordWrap(true);
        reportText->setOpenExternalLinks(true);

        gridLayout->addWidget(reportText, 0, 0, 1, 2);

        line = new QFrame(reportGroup);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        addressLabel = new QLabel(reportGroup);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));

        gridLayout->addWidget(addressLabel, 3, 0, 1, 1);

        email = new QLineEdit(reportGroup);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 3, 1, 1, 1);

        rememberEmail = new QCheckBox(reportGroup);
        rememberEmail->setObjectName(QString::fromUtf8("rememberEmail"));

        gridLayout->addWidget(rememberEmail, 4, 1, 1, 1);

        captureLabel = new QLabel(reportGroup);
        captureLabel->setObjectName(QString::fromUtf8("captureLabel"));

        gridLayout->addWidget(captureLabel, 5, 0, 1, 1);

        captureUpload = new QCheckBox(reportGroup);
        captureUpload->setObjectName(QString::fromUtf8("captureUpload"));

        gridLayout->addWidget(captureUpload, 5, 1, 1, 1);

        captureFilename = new QLabel(reportGroup);
        captureFilename->setObjectName(QString::fromUtf8("captureFilename"));

        gridLayout->addWidget(captureFilename, 6, 1, 1, 1);

        capturePreviewFrame = new QFrame(reportGroup);
        capturePreviewFrame->setObjectName(QString::fromUtf8("capturePreviewFrame"));
        capturePreviewFrame->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(capturePreviewFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        capturePreview = new RDLabel(capturePreviewFrame);
        capturePreview->setObjectName(QString::fromUtf8("capturePreview"));
        sizePolicy.setHeightForWidth(capturePreview->sizePolicy().hasHeightForWidth());
        capturePreview->setSizePolicy(sizePolicy);
        capturePreview->setMinimumSize(QSize(320, 180));
        capturePreview->setMaximumSize(QSize(320, 180));
        capturePreview->setScaledContents(true);

        horizontalLayout_3->addWidget(capturePreview);


        gridLayout->addWidget(capturePreviewFrame, 7, 1, 1, 1);

        descriptionLabel = new QLabel(reportGroup);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setWordWrap(true);

        gridLayout->addWidget(descriptionLabel, 8, 0, 1, 1);

        description = new QTextEdit(reportGroup);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);
        description->setMinimumSize(QSize(0, 100));
        description->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(description, 8, 1, 1, 1);

        frame_2 = new QFrame(reportGroup);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cancel = new QPushButton(frame_2);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout_2->addWidget(cancel);

        send = new QPushButton(frame_2);
        send->setObjectName(QString::fromUtf8("send"));

        horizontalLayout_2->addWidget(send);


        gridLayout->addWidget(frame_2, 9, 1, 1, 1);


        verticalLayout_3->addWidget(reportGroup);

        uploadingGroup = new QGroupBox(CrashDialog);
        uploadingGroup->setObjectName(QString::fromUtf8("uploadingGroup"));
        verticalLayout = new QVBoxLayout(uploadingGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        progressText = new QLabel(uploadingGroup);
        progressText->setObjectName(QString::fromUtf8("progressText"));
        progressText->setWordWrap(true);

        verticalLayout->addWidget(progressText);

        progressBar = new QProgressBar(uploadingGroup);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));

        verticalLayout->addWidget(progressBar);

        uploadButtonLayout = new QHBoxLayout();
        uploadButtonLayout->setObjectName(QString::fromUtf8("uploadButtonLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        uploadButtonLayout->addItem(horizontalSpacer);

        uploadRetry = new QPushButton(uploadingGroup);
        uploadRetry->setObjectName(QString::fromUtf8("uploadRetry"));
        uploadRetry->setEnabled(false);

        uploadButtonLayout->addWidget(uploadRetry);

        uploadCancel = new QPushButton(uploadingGroup);
        uploadCancel->setObjectName(QString::fromUtf8("uploadCancel"));

        uploadButtonLayout->addWidget(uploadCancel);


        verticalLayout->addLayout(uploadButtonLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(uploadingGroup);

        reportedGroup = new QGroupBox(CrashDialog);
        reportedGroup->setObjectName(QString::fromUtf8("reportedGroup"));
        verticalLayout_2 = new QVBoxLayout(reportedGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        finishedText = new QLabel(reportedGroup);
        finishedText->setObjectName(QString::fromUtf8("finishedText"));
        finishedText->setText(QString::fromUtf8("Filled out at runtime"));
        finishedText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        finishedText->setWordWrap(true);
        finishedText->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(finishedText);

        checkUpdates = new QCheckBox(reportedGroup);
        checkUpdates->setObjectName(QString::fromUtf8("checkUpdates"));
        checkUpdates->setChecked(true);

        verticalLayout_2->addWidget(checkUpdates);

        buttonBox = new QDialogButtonBox(reportedGroup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addWidget(reportedGroup);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(CrashDialog);

        QMetaObject::connectSlotsByName(CrashDialog);
    } // setupUi

    void retranslateUi(QDialog *CrashDialog)
    {
        CrashDialog->setWindowTitle(QCoreApplication::translate("CrashDialog", "RenderDoc Bug Reporter", nullptr));
        rdocLogo->setText(QString());
        rdocName->setText(QCoreApplication::translate("CrashDialog", "RenderDoc Bug Reporter", nullptr));
        reportGroup->setTitle(QCoreApplication::translate("CrashDialog", "Bug Report", nullptr));
        addressLabel->setText(QCoreApplication::translate("CrashDialog", "Email Address", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("CrashDialog", "Enter your contact info to help fix this bug", nullptr));
        rememberEmail->setText(QCoreApplication::translate("CrashDialog", "Remember email address for next time", nullptr));
        captureLabel->setText(QCoreApplication::translate("CrashDialog", "Last Capture", nullptr));
        captureUpload->setText(QCoreApplication::translate("CrashDialog", "Upload this capture with bug report", nullptr));
        captureFilename->setText(QCoreApplication::translate("CrashDialog", "filename_of_capture.rdc", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("CrashDialog", "Description of Problem", nullptr));
        cancel->setText(QCoreApplication::translate("CrashDialog", "Cancel", nullptr));
        send->setText(QCoreApplication::translate("CrashDialog", "Send", nullptr));
        uploadingGroup->setTitle(QCoreApplication::translate("CrashDialog", "Uploading", nullptr));
        progressText->setText(QCoreApplication::translate("CrashDialog", "Uploading Bug Report", nullptr));
        uploadRetry->setText(QCoreApplication::translate("CrashDialog", "Retry", nullptr));
        uploadCancel->setText(QCoreApplication::translate("CrashDialog", "Cancel", nullptr));
        reportedGroup->setTitle(QCoreApplication::translate("CrashDialog", "Reported", nullptr));
        checkUpdates->setText(QCoreApplication::translate("CrashDialog", "Check for updates to this bug report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrashDialog: public Ui_CrashDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHDIALOG_H
