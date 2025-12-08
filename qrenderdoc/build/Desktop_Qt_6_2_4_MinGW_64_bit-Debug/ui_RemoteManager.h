/********************************************************************************
** Form generated from reading UI file 'RemoteManager.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEMANAGER_H
#define UI_REMOTEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_RemoteManager
{
public:
    RDTreeWidget *hosts;
    QLabel *progressIcon;
    QLabel *progressText;
    QLabel *progressCount;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *bottomLayout;
    QGroupBox *configGroup;
    QGridLayout *gridLayout;
    QLabel *hostnameLabel;
    RDLineEdit *hostname;
    QPushButton *addUpdateHost;
    QLabel *runCommandLabel;
    RDLineEdit *runCommand;
    QGroupBox *opsGroup;
    QVBoxLayout *verticalLayout;
    QPushButton *refreshOne;
    QPushButton *refreshAll;
    QPushButton *connect;
    QPushButton *deleteHost;

    void setupUi(QDialog *RemoteManager)
    {
        if (RemoteManager->objectName().isEmpty())
            RemoteManager->setObjectName(QString::fromUtf8("RemoteManager"));
        RemoteManager->resize(783, 545);
        hosts = new RDTreeWidget(RemoteManager);
        hosts->setObjectName(QString::fromUtf8("hosts"));
        hosts->setGeometry(QRect(180, 20, 256, 192));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hosts->sizePolicy().hasHeightForWidth());
        hosts->setSizePolicy(sizePolicy);
        hosts->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        hosts->header()->setStretchLastSection(false);
        progressIcon = new QLabel(RemoteManager);
        progressIcon->setObjectName(QString::fromUtf8("progressIcon"));
        progressIcon->setGeometry(QRect(180, 300, 47, 13));
        progressIcon->setPixmap(QPixmap(QString::fromUtf8(":/hourglass.png")));
        progressText = new QLabel(RemoteManager);
        progressText->setObjectName(QString::fromUtf8("progressText"));
        progressText->setGeometry(QRect(260, 300, 47, 13));
        progressCount = new QLabel(RemoteManager);
        progressCount->setObjectName(QString::fromUtf8("progressCount"));
        progressCount->setGeometry(QRect(320, 300, 47, 13));
        horizontalLayoutWidget = new QWidget(RemoteManager);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 360, 381, 155));
        bottomLayout = new QHBoxLayout(horizontalLayoutWidget);
        bottomLayout->setObjectName(QString::fromUtf8("bottomLayout"));
        bottomLayout->setContentsMargins(0, 0, 0, 0);
        configGroup = new QGroupBox(horizontalLayoutWidget);
        configGroup->setObjectName(QString::fromUtf8("configGroup"));
        gridLayout = new QGridLayout(configGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hostnameLabel = new QLabel(configGroup);
        hostnameLabel->setObjectName(QString::fromUtf8("hostnameLabel"));
        hostnameLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(hostnameLabel, 0, 0, 1, 1);

        hostname = new RDLineEdit(configGroup);
        hostname->setObjectName(QString::fromUtf8("hostname"));

        gridLayout->addWidget(hostname, 1, 0, 1, 1);

        addUpdateHost = new QPushButton(configGroup);
        addUpdateHost->setObjectName(QString::fromUtf8("addUpdateHost"));

        gridLayout->addWidget(addUpdateHost, 1, 1, 1, 1);

        runCommandLabel = new QLabel(configGroup);
        runCommandLabel->setObjectName(QString::fromUtf8("runCommandLabel"));
        runCommandLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        runCommandLabel->setWordWrap(true);

        gridLayout->addWidget(runCommandLabel, 2, 0, 1, 1);

        runCommand = new RDLineEdit(configGroup);
        runCommand->setObjectName(QString::fromUtf8("runCommand"));

        gridLayout->addWidget(runCommand, 3, 0, 1, 1);


        bottomLayout->addWidget(configGroup);

        opsGroup = new QGroupBox(horizontalLayoutWidget);
        opsGroup->setObjectName(QString::fromUtf8("opsGroup"));
        verticalLayout = new QVBoxLayout(opsGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        refreshOne = new QPushButton(opsGroup);
        refreshOne->setObjectName(QString::fromUtf8("refreshOne"));

        verticalLayout->addWidget(refreshOne);

        refreshAll = new QPushButton(opsGroup);
        refreshAll->setObjectName(QString::fromUtf8("refreshAll"));

        verticalLayout->addWidget(refreshAll);

        connect = new QPushButton(opsGroup);
        connect->setObjectName(QString::fromUtf8("connect"));

        verticalLayout->addWidget(connect);

        deleteHost = new QPushButton(opsGroup);
        deleteHost->setObjectName(QString::fromUtf8("deleteHost"));

        verticalLayout->addWidget(deleteHost);


        bottomLayout->addWidget(opsGroup);


        retranslateUi(RemoteManager);

        QMetaObject::connectSlotsByName(RemoteManager);
    } // setupUi

    void retranslateUi(QDialog *RemoteManager)
    {
        RemoteManager->setWindowTitle(QCoreApplication::translate("RemoteManager", "Remote Host Manager", nullptr));
        progressIcon->setText(QString());
        progressText->setText(QCoreApplication::translate("RemoteManager", "Remote connections in progress. Please wait...", nullptr));
        progressCount->setText(QCoreApplication::translate("RemoteManager", "999 connections active", nullptr));
        configGroup->setTitle(QCoreApplication::translate("RemoteManager", "Host configuration", nullptr));
        hostnameLabel->setText(QCoreApplication::translate("RemoteManager", "Hostname:", nullptr));
        addUpdateHost->setText(QCoreApplication::translate("RemoteManager", "Add", nullptr));
        runCommandLabel->setText(QCoreApplication::translate("RemoteManager", "Run Command: Configure a command to run that launches the remote server on this host.", nullptr));
        opsGroup->setTitle(QCoreApplication::translate("RemoteManager", "Operations", nullptr));
        refreshOne->setText(QCoreApplication::translate("RemoteManager", "Refresh Selected", nullptr));
        refreshAll->setText(QCoreApplication::translate("RemoteManager", "Refresh All", nullptr));
        connect->setText(QCoreApplication::translate("RemoteManager", "Connect to App", nullptr));
        deleteHost->setText(QCoreApplication::translate("RemoteManager", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoteManager: public Ui_RemoteManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEMANAGER_H
