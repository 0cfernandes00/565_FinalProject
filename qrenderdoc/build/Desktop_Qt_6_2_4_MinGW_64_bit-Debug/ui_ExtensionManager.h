/********************************************************************************
** Form generated from reading UI file 'ExtensionManager.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENSIONMANAGER_H
#define UI_EXTENSIONMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ExtensionManager
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    RDTreeWidget *extensions;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *name;
    QLabel *label_3;
    QLabel *version;
    QLabel *label_5;
    QLabel *author;
    QLabel *label_7;
    QLabel *URL;
    QLabel *label_2;
    QTextEdit *description;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *openLocation;
    QPushButton *reload;
    QCheckBox *alwaysLoad;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtensionManager)
    {
        if (ExtensionManager->objectName().isEmpty())
            ExtensionManager->setObjectName(QString::fromUtf8("ExtensionManager"));
        ExtensionManager->resize(556, 544);
        ExtensionManager->setMinimumSize(QSize(400, 0));
        ExtensionManager->setModal(true);
        verticalLayout = new QVBoxLayout(ExtensionManager);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ExtensionManager);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        extensions = new RDTreeWidget(groupBox);
        extensions->setObjectName(QString::fromUtf8("extensions"));
        extensions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        extensions->setIndentation(0);
        extensions->setRootIsDecorated(false);

        horizontalLayout->addWidget(extensions);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ExtensionManager);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        name = new QLabel(groupBox_2);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        version = new QLabel(groupBox_2);
        version->setObjectName(QString::fromUtf8("version"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(version->sizePolicy().hasHeightForWidth());
        version->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(version, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        author = new QLabel(groupBox_2);
        author->setObjectName(QString::fromUtf8("author"));
        author->setOpenExternalLinks(true);

        gridLayout->addWidget(author, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        URL = new QLabel(groupBox_2);
        URL->setObjectName(QString::fromUtf8("URL"));
        URL->setOpenExternalLinks(true);

        gridLayout->addWidget(URL, 5, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        description = new QTextEdit(groupBox_2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setFrameShape(QFrame::Panel);
        description->setFrameShadow(QFrame::Plain);
        description->setReadOnly(true);
        description->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(description, 6, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        openLocation = new QPushButton(groupBox_2);
        openLocation->setObjectName(QString::fromUtf8("openLocation"));

        verticalLayout_2->addWidget(openLocation);

        reload = new QPushButton(groupBox_2);
        reload->setObjectName(QString::fromUtf8("reload"));

        verticalLayout_2->addWidget(reload);

        alwaysLoad = new QCheckBox(groupBox_2);
        alwaysLoad->setObjectName(QString::fromUtf8("alwaysLoad"));

        verticalLayout_2->addWidget(alwaysLoad);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(ExtensionManager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExtensionManager);

        QMetaObject::connectSlotsByName(ExtensionManager);
    } // setupUi

    void retranslateUi(QDialog *ExtensionManager)
    {
        ExtensionManager->setWindowTitle(QCoreApplication::translate("ExtensionManager", "Extension Manager", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExtensionManager", "Extension List", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExtensionManager", "Details", nullptr));
        label->setText(QCoreApplication::translate("ExtensionManager", "Name:", nullptr));
        name->setText(QString());
        label_3->setText(QCoreApplication::translate("ExtensionManager", "Version:", nullptr));
        version->setText(QString());
        label_5->setText(QCoreApplication::translate("ExtensionManager", "Author:", nullptr));
        author->setText(QString());
        label_7->setText(QCoreApplication::translate("ExtensionManager", "URL:", nullptr));
        URL->setText(QString());
        label_2->setText(QCoreApplication::translate("ExtensionManager", "Description:", nullptr));
        openLocation->setText(QCoreApplication::translate("ExtensionManager", "Open Location", nullptr));
        reload->setText(QCoreApplication::translate("ExtensionManager", "Reload", nullptr));
        alwaysLoad->setText(QCoreApplication::translate("ExtensionManager", "Always Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtensionManager: public Ui_ExtensionManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONMANAGER_H
