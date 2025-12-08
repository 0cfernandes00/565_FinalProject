/********************************************************************************
** Form generated from reading UI file 'VirtualFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALFILEDIALOG_H
#define UI_VIRTUALFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "Widgets/Extended/RDLineEdit.h"
#include "Widgets/Extended/RDTreeView.h"

QT_BEGIN_NAMESPACE

class Ui_VirtualFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *back;
    QToolButton *forward;
    QFrame *line;
    QToolButton *upFolder;
    QFrame *line_2;
    QLabel *locationLabel;
    RDLineEdit *location;
    QHBoxLayout *horizontalLayout;
    QTreeView *dirList;
    RDTreeView *fileList;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fileLabel;
    RDLineEdit *filename;
    QComboBox *filter;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QCheckBox *showHidden;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VirtualFileDialog)
    {
        if (VirtualFileDialog->objectName().isEmpty())
            VirtualFileDialog->setObjectName(QString::fromUtf8("VirtualFileDialog"));
        VirtualFileDialog->resize(750, 454);
        verticalLayout = new QVBoxLayout(VirtualFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        back = new QToolButton(VirtualFileDialog);
        back->setObjectName(QString::fromUtf8("back"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(24, 24));
        back->setAutoRaise(true);

        horizontalLayout_3->addWidget(back);

        forward = new QToolButton(VirtualFileDialog);
        forward->setObjectName(QString::fromUtf8("forward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon1);
        forward->setIconSize(QSize(24, 24));
        forward->setAutoRaise(true);

        horizontalLayout_3->addWidget(forward);

        line = new QFrame(VirtualFileDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        upFolder = new QToolButton(VirtualFileDialog);
        upFolder->setObjectName(QString::fromUtf8("upFolder"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/upfolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        upFolder->setIcon(icon2);
        upFolder->setIconSize(QSize(24, 24));
        upFolder->setAutoRaise(true);

        horizontalLayout_3->addWidget(upFolder);

        line_2 = new QFrame(VirtualFileDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        locationLabel = new QLabel(VirtualFileDialog);
        locationLabel->setObjectName(QString::fromUtf8("locationLabel"));

        horizontalLayout_3->addWidget(locationLabel);

        location = new RDLineEdit(VirtualFileDialog);
        location->setObjectName(QString::fromUtf8("location"));

        horizontalLayout_3->addWidget(location);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dirList = new QTreeView(VirtualFileDialog);
        dirList->setObjectName(QString::fromUtf8("dirList"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirList->sizePolicy().hasHeightForWidth());
        dirList->setSizePolicy(sizePolicy);
        dirList->setProperty("showDropIndicator", QVariant(false));
        dirList->setHeaderHidden(true);

        horizontalLayout->addWidget(dirList);

        fileList = new RDTreeView(VirtualFileDialog);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy1);
        fileList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        fileList->setIndentation(0);
        fileList->setRootIsDecorated(false);
        fileList->setItemsExpandable(false);
        fileList->setSortingEnabled(true);
        fileList->setAllColumnsShowFocus(true);
        fileList->header()->setProperty("showSortIndicator", QVariant(true));
        fileList->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(fileList);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fileLabel = new QLabel(VirtualFileDialog);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        horizontalLayout_2->addWidget(fileLabel);

        filename = new RDLineEdit(VirtualFileDialog);
        filename->setObjectName(QString::fromUtf8("filename"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filename->sizePolicy().hasHeightForWidth());
        filename->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(filename);

        filter = new QComboBox(VirtualFileDialog);
        filter->setObjectName(QString::fromUtf8("filter"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filter->sizePolicy().hasHeightForWidth());
        filter->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(filter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        showHidden = new QCheckBox(VirtualFileDialog);
        showHidden->setObjectName(QString::fromUtf8("showHidden"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(showHidden->sizePolicy().hasHeightForWidth());
        showHidden->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(showHidden);

        buttonBox = new QDialogButtonBox(VirtualFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy5);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(VirtualFileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VirtualFileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VirtualFileDialog);
    } // setupUi

    void retranslateUi(QDialog *VirtualFileDialog)
    {
        VirtualFileDialog->setWindowTitle(QCoreApplication::translate("VirtualFileDialog", "File Browser", nullptr));
        back->setText(QCoreApplication::translate("VirtualFileDialog", "...", nullptr));
        forward->setText(QCoreApplication::translate("VirtualFileDialog", "...", nullptr));
        upFolder->setText(QCoreApplication::translate("VirtualFileDialog", "...", nullptr));
        locationLabel->setText(QCoreApplication::translate("VirtualFileDialog", "Location:", nullptr));
        fileLabel->setText(QCoreApplication::translate("VirtualFileDialog", "Filename:", nullptr));
        showHidden->setText(QCoreApplication::translate("VirtualFileDialog", "Show hidden files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VirtualFileDialog: public Ui_VirtualFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALFILEDIALOG_H
