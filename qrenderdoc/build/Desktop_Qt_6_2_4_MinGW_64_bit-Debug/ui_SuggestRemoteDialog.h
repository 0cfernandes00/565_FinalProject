/********************************************************************************
** Form generated from reading UI file 'SuggestRemoteDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTREMOTEDIALOG_H
#define UI_SUGGESTREMOTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SuggestRemoteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *topFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *warning;
    QFrame *bottomFrame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *alwaysLocal;
    QSpacerItem *horizontalSpacer;
    QPushButton *remote;
    QPushButton *local;
    QPushButton *cancel;

    void setupUi(QDialog *SuggestRemoteDialog)
    {
        if (SuggestRemoteDialog->objectName().isEmpty())
            SuggestRemoteDialog->setObjectName(QString::fromUtf8("SuggestRemoteDialog"));
        SuggestRemoteDialog->resize(389, 191);
        verticalLayout = new QVBoxLayout(SuggestRemoteDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topFrame = new QFrame(SuggestRemoteDialog);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setFrameShape(QFrame::NoFrame);
        topFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(topFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, 16, 16, 16);
        warning = new QLabel(topFrame);
        warning->setObjectName(QString::fromUtf8("warning"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(warning->sizePolicy().hasHeightForWidth());
        warning->setSizePolicy(sizePolicy);
        warning->setMinimumSize(QSize(0, 120));
        warning->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(warning);


        verticalLayout->addWidget(topFrame);

        bottomFrame = new QFrame(SuggestRemoteDialog);
        bottomFrame->setObjectName(QString::fromUtf8("bottomFrame"));
        bottomFrame->setFrameShape(QFrame::NoFrame);
        bottomFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(bottomFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        alwaysLocal = new QCheckBox(bottomFrame);
        alwaysLocal->setObjectName(QString::fromUtf8("alwaysLocal"));

        horizontalLayout->addWidget(alwaysLocal);

        horizontalSpacer = new QSpacerItem(127, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        remote = new QPushButton(bottomFrame);
        remote->setObjectName(QString::fromUtf8("remote"));

        horizontalLayout->addWidget(remote);

        local = new QPushButton(bottomFrame);
        local->setObjectName(QString::fromUtf8("local"));

        horizontalLayout->addWidget(local);

        cancel = new QPushButton(bottomFrame);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addWidget(bottomFrame);


        retranslateUi(SuggestRemoteDialog);

        QMetaObject::connectSlotsByName(SuggestRemoteDialog);
    } // setupUi

    void retranslateUi(QDialog *SuggestRemoteDialog)
    {
        SuggestRemoteDialog->setWindowTitle(QCoreApplication::translate("SuggestRemoteDialog", "Choose Remote Host?", nullptr));
        warning->setText(QCoreApplication::translate("SuggestRemoteDialog", "Warning", nullptr));
        alwaysLocal->setText(QCoreApplication::translate("SuggestRemoteDialog", "Don't prompt again,\n"
"always replay locally.", nullptr));
        remote->setText(QCoreApplication::translate("SuggestRemoteDialog", "Remote", nullptr));
        local->setText(QCoreApplication::translate("SuggestRemoteDialog", "Local", nullptr));
        cancel->setText(QCoreApplication::translate("SuggestRemoteDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuggestRemoteDialog: public Ui_SuggestRemoteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTREMOTEDIALOG_H
