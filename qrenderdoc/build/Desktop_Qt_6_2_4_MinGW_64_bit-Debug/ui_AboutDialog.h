/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *rdocName;
    QLabel *rdocLogo;
    QVBoxLayout *verticalLayout_2;
    QLabel *version;
    QLabel *owner;
    QLabel *contact;
    QLabel *copyright;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(534, 447);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
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
        rdocName = new QLabel(frame);
        rdocName->setObjectName(QString::fromUtf8("rdocName"));
        QPalette palette1;
        rdocName->setPalette(palette1);
        QFont font;
        font.setPointSize(36);
        rdocName->setFont(font);

        horizontalLayout->addWidget(rdocName);

        rdocLogo = new QLabel(frame);
        rdocLogo->setObjectName(QString::fromUtf8("rdocLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rdocLogo->sizePolicy().hasHeightForWidth());
        rdocLogo->setSizePolicy(sizePolicy);
        rdocLogo->setMinimumSize(QSize(256, 256));
        rdocLogo->setMaximumSize(QSize(256, 256));
        rdocLogo->setPixmap(QPixmap(QString::fromUtf8(":/logo.svg")));
        rdocLogo->setScaledContents(true);

        horizontalLayout->addWidget(rdocLogo);


        verticalLayout->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        version = new QLabel(AboutDialog);
        version->setObjectName(QString::fromUtf8("version"));
        QFont font1;
        font1.setPointSize(14);
        version->setFont(font1);
        version->setTextFormat(Qt::RichText);
        version->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(version);

        owner = new QLabel(AboutDialog);
        owner->setObjectName(QString::fromUtf8("owner"));
        owner->setFont(font1);

        verticalLayout_2->addWidget(owner);

        contact = new QLabel(AboutDialog);
        contact->setObjectName(QString::fromUtf8("contact"));
        QFont font2;
        font2.setPointSize(11);
        contact->setFont(font2);
        contact->setTextFormat(Qt::RichText);
        contact->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(contact);

        copyright = new QLabel(AboutDialog);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        copyright->setFont(font2);
        copyright->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(copyright);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About RenderDoc", nullptr));
        rdocName->setText(QCoreApplication::translate("AboutDialog", "RenderDoc", nullptr));
        rdocLogo->setText(QString());
        version->setText(QCoreApplication::translate("AboutDialog", "Version v0.00 (built from abcdef01)", nullptr));
        owner->setText(QCoreApplication::translate("AboutDialog", "Baldur Karlsson", nullptr));
        contact->setText(QCoreApplication::translate("AboutDialog", "<a href='mailto:baldurk@baldurk.org'>baldurk@baldurk.org</a>\n"
"&bull;\n"
"<a href='https://renderdoc.org/'>https://renderdoc.org</a>", nullptr));
        copyright->setText(QCoreApplication::translate("AboutDialog", "Copyright &copy; Baldur Karlsson 2025", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
