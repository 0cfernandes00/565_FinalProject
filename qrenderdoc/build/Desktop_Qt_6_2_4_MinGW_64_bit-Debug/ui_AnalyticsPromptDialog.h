/********************************************************************************
** Form generated from reading UI file 'AnalyticsPromptDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYTICSPROMPTDIALOG_H
#define UI_ANALYTICSPROMPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnalyticsPromptDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *autoSubmit;
    QRadioButton *manualCheck;
    QRadioButton *optOut;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AnalyticsPromptDialog)
    {
        if (AnalyticsPromptDialog->objectName().isEmpty())
            AnalyticsPromptDialog->setObjectName(QString::fromUtf8("AnalyticsPromptDialog"));
        AnalyticsPromptDialog->resize(492, 439);
        AnalyticsPromptDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AnalyticsPromptDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AnalyticsPromptDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(AnalyticsPromptDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        autoSubmit = new QRadioButton(groupBox);
        autoSubmit->setObjectName(QString::fromUtf8("autoSubmit"));
        autoSubmit->setChecked(true);

        verticalLayout_3->addWidget(autoSubmit);

        manualCheck = new QRadioButton(groupBox);
        manualCheck->setObjectName(QString::fromUtf8("manualCheck"));

        verticalLayout_3->addWidget(manualCheck);

        optOut = new QRadioButton(groupBox);
        optOut->setObjectName(QString::fromUtf8("optOut"));

        verticalLayout_3->addWidget(optOut);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(AnalyticsPromptDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AnalyticsPromptDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnalyticsPromptDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnalyticsPromptDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnalyticsPromptDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalyticsPromptDialog)
    {
        AnalyticsPromptDialog->setWindowTitle(QCoreApplication::translate("AnalyticsPromptDialog", "Analytics", nullptr));
        label->setText(QCoreApplication::translate("AnalyticsPromptDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Anonymous Analytics</span></p><p><br/>RenderDoc has some very minimal analytics gathering. The data is gathered only in the UI and <span style=\" font-weight:600; text-decoration: underline;\">not during capture</span>. It is <span style=\" font-weight:600; text-decoration: underline;\">not personally identifiable</span> and contains <span style=\" font-weight:600; text-decoration: underline;\">absolutely no data from captures</span>. <a href=\"https://github.com/baldurk/renderdoc/blob/v1.x/qrenderdoc/Code/Interface/Analytics.h\"><span style=\" text-decoration: underline; color:#0000ff;\">The source</span></a> is freely available and auditable.</p><p>A report is generated monthly and sent securely to RenderDoc's server. If you want, you can choose to manually approve each report before it's sent.</p><p>If you wish to opt-out entirely then no statistics will be gathered or reported. However please consider this carefully as"
                        " it will make it harder for me to decide which features to prioritise.</p><p>To see a complete list of what data is gathered, <a href=\"#documentreport\"><span style=\" text-decoration: underline; color:#0000ff;\">click here</span></a>. You can change your mind at any point in the settings window.</p><p>For more information go to <a href=\"https://renderdoc.org/analytics\"><span style=\" text-decoration: underline; color:#0000ff;\">https://renderdoc.org/analytics</span></a>.</p><p>Thanks!<br/>Baldur Karlsson (RenderDoc author)</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AnalyticsPromptDialog", "Select your preference", nullptr));
        autoSubmit->setText(QCoreApplication::translate("AnalyticsPromptDialog", "Gather anonymous low-detail statistics and submit automatically.", nullptr));
        manualCheck->setText(QCoreApplication::translate("AnalyticsPromptDialog", "Gather anonymous low-detail statistics, but manually verify before submitting.", nullptr));
        optOut->setText(QCoreApplication::translate("AnalyticsPromptDialog", "Do not gather or submit any statistics.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyticsPromptDialog: public Ui_AnalyticsPromptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYTICSPROMPTDIALOG_H
