/********************************************************************************
** Form generated from reading UI file 'AnalyticsConfirmDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYTICSCONFIRMDIALOG_H
#define UI_ANALYTICSCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnalyticsConfirmDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *analyticsReport;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AnalyticsConfirmDialog)
    {
        if (AnalyticsConfirmDialog->objectName().isEmpty())
            AnalyticsConfirmDialog->setObjectName(QString::fromUtf8("AnalyticsConfirmDialog"));
        AnalyticsConfirmDialog->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnalyticsConfirmDialog->sizePolicy().hasHeightForWidth());
        AnalyticsConfirmDialog->setSizePolicy(sizePolicy);
        AnalyticsConfirmDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AnalyticsConfirmDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AnalyticsConfirmDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        analyticsReport = new QTextEdit(AnalyticsConfirmDialog);
        analyticsReport->setObjectName(QString::fromUtf8("analyticsReport"));
        analyticsReport->setReadOnly(true);

        verticalLayout->addWidget(analyticsReport);

        buttonBox = new QDialogButtonBox(AnalyticsConfirmDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AnalyticsConfirmDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnalyticsConfirmDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnalyticsConfirmDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnalyticsConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalyticsConfirmDialog)
    {
        AnalyticsConfirmDialog->setWindowTitle(QCoreApplication::translate("AnalyticsConfirmDialog", "Analytics Report", nullptr));
        label->setText(QCoreApplication::translate("AnalyticsConfirmDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Analytics Report Ready</span></p><p><br/>RenderDoc has gathered analytics from your usage over the past month. This is now ready to send to the server for processing.</p><p>As requested, the full report is listed below where you can check the data and ensure you are happy with what's being sent.</p><p>When ready, click OK to send the report. Clicking Discard will throw away this report and begin again for next month. <a href=\"#documentreport\"><span style=\" text-decoration: underline; color:#0000ff;\">Click here</span></a> to see an explanation of the report properties.</p><p>If you want, you can manually copy-paste this report and send it through here: <a href=\"https://renderdoc.org/analytics\"><span style=\" text-decoration: underline; color:#0000ff;\">https://renderdoc.org/analytics</span></a>.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyticsConfirmDialog: public Ui_AnalyticsConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYTICSCONFIRMDIALOG_H
