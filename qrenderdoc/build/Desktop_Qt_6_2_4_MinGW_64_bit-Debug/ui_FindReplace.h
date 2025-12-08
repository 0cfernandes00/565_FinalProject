/********************************************************************************
** Form generated from reading UI file 'FindReplace.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACE_H
#define UI_FINDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FindReplace
{
public:
    QGridLayout *gridLayout_2;
    QFrame *modeChangeFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *findMode;
    QToolButton *replaceMode;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QLabel *findLabel;
    QComboBox *findText;
    QLabel *replaceLabel;
    QComboBox *replaceText;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *matchCase;
    QLabel *searchContextLabel;
    QCheckBox *matchWord;
    QComboBox *searchContext;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *regexp;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *findPrev;
    QPushButton *find;
    QPushButton *findAll;
    QPushButton *replace;
    QPushButton *replaceAll;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *FindReplace)
    {
        if (FindReplace->objectName().isEmpty())
            FindReplace->setObjectName(QString::fromUtf8("FindReplace"));
        FindReplace->resize(321, 291);
        gridLayout_2 = new QGridLayout(FindReplace);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        modeChangeFrame = new QFrame(FindReplace);
        modeChangeFrame->setObjectName(QString::fromUtf8("modeChangeFrame"));
        modeChangeFrame->setFrameShape(QFrame::Panel);
        horizontalLayout = new QHBoxLayout(modeChangeFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        findMode = new QToolButton(modeChangeFrame);
        findMode->setObjectName(QString::fromUtf8("findMode"));
        findMode->setCheckable(true);
        findMode->setChecked(true);
        findMode->setAutoRaise(true);

        horizontalLayout->addWidget(findMode);

        replaceMode = new QToolButton(modeChangeFrame);
        replaceMode->setObjectName(QString::fromUtf8("replaceMode"));
        replaceMode->setCheckable(true);
        replaceMode->setAutoRaise(true);

        horizontalLayout->addWidget(replaceMode);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addWidget(modeChangeFrame, 0, 0, 1, 2);

        frame_2 = new QFrame(FindReplace);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        findLabel = new QLabel(frame_2);
        findLabel->setObjectName(QString::fromUtf8("findLabel"));

        gridLayout_4->addWidget(findLabel, 0, 0, 1, 1);

        findText = new QComboBox(frame_2);
        findText->setObjectName(QString::fromUtf8("findText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(findText->sizePolicy().hasHeightForWidth());
        findText->setSizePolicy(sizePolicy1);
        findText->setEditable(true);
        findText->setInsertPolicy(QComboBox::InsertAtTop);

        gridLayout_4->addWidget(findText, 0, 1, 1, 1);

        replaceLabel = new QLabel(frame_2);
        replaceLabel->setObjectName(QString::fromUtf8("replaceLabel"));

        gridLayout_4->addWidget(replaceLabel, 1, 0, 1, 1);

        replaceText = new QComboBox(frame_2);
        replaceText->setObjectName(QString::fromUtf8("replaceText"));
        sizePolicy1.setHeightForWidth(replaceText->sizePolicy().hasHeightForWidth());
        replaceText->setSizePolicy(sizePolicy1);
        replaceText->setEditable(true);
        replaceText->setInsertPolicy(QComboBox::InsertAtTop);

        gridLayout_4->addWidget(replaceText, 1, 1, 1, 1);


        gridLayout_2->addWidget(frame_2, 3, 0, 1, 2);

        groupBox = new QGroupBox(FindReplace);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        matchCase = new QCheckBox(groupBox);
        matchCase->setObjectName(QString::fromUtf8("matchCase"));

        gridLayout->addWidget(matchCase, 0, 0, 1, 1);

        searchContextLabel = new QLabel(groupBox);
        searchContextLabel->setObjectName(QString::fromUtf8("searchContextLabel"));

        gridLayout->addWidget(searchContextLabel, 0, 2, 1, 1);

        matchWord = new QCheckBox(groupBox);
        matchWord->setObjectName(QString::fromUtf8("matchWord"));

        gridLayout->addWidget(matchWord, 1, 0, 1, 1);

        searchContext = new QComboBox(groupBox);
        searchContext->addItem(QString());
        searchContext->addItem(QString());
        searchContext->setObjectName(QString::fromUtf8("searchContext"));
        searchContext->setInsertPolicy(QComboBox::NoInsert);
        searchContext->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(searchContext, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        regexp = new QCheckBox(groupBox);
        regexp->setObjectName(QString::fromUtf8("regexp"));

        gridLayout->addWidget(regexp, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 0, 1, 1);

        frame = new QFrame(FindReplace);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        findPrev = new QPushButton(frame);
        findPrev->setObjectName(QString::fromUtf8("findPrev"));

        gridLayout_3->addWidget(findPrev, 1, 1, 1, 1);

        find = new QPushButton(frame);
        find->setObjectName(QString::fromUtf8("find"));

        gridLayout_3->addWidget(find, 1, 2, 1, 1);

        findAll = new QPushButton(frame);
        findAll->setObjectName(QString::fromUtf8("findAll"));

        gridLayout_3->addWidget(findAll, 1, 3, 1, 1);

        replace = new QPushButton(frame);
        replace->setObjectName(QString::fromUtf8("replace"));

        gridLayout_3->addWidget(replace, 2, 2, 1, 1);

        replaceAll = new QPushButton(frame);
        replaceAll->setObjectName(QString::fromUtf8("replaceAll"));

        gridLayout_3->addWidget(replaceAll, 2, 3, 1, 1);


        gridLayout_2->addWidget(frame, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer, 7, 1, 1, 1);


        retranslateUi(FindReplace);

        QMetaObject::connectSlotsByName(FindReplace);
    } // setupUi

    void retranslateUi(QFrame *FindReplace)
    {
        findMode->setText(QCoreApplication::translate("FindReplace", "Find", nullptr));
        replaceMode->setText(QCoreApplication::translate("FindReplace", "Replace", nullptr));
        findLabel->setText(QCoreApplication::translate("FindReplace", "Find", nullptr));
        replaceLabel->setText(QCoreApplication::translate("FindReplace", "Replace with", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindReplace", "Context", nullptr));
        matchCase->setText(QCoreApplication::translate("FindReplace", "Match case", nullptr));
        searchContextLabel->setText(QCoreApplication::translate("FindReplace", "Search in:", nullptr));
        matchWord->setText(QCoreApplication::translate("FindReplace", "Match whole word", nullptr));
        searchContext->setItemText(0, QCoreApplication::translate("FindReplace", "Current File", nullptr));
        searchContext->setItemText(1, QCoreApplication::translate("FindReplace", "All Files", nullptr));

        regexp->setText(QCoreApplication::translate("FindReplace", "Use Regular Expressions", nullptr));
        findPrev->setText(QCoreApplication::translate("FindReplace", "Find Previous", nullptr));
        find->setText(QCoreApplication::translate("FindReplace", "Find Next", nullptr));
        findAll->setText(QCoreApplication::translate("FindReplace", "Find All", nullptr));
        replace->setText(QCoreApplication::translate("FindReplace", "Replace", nullptr));
        replaceAll->setText(QCoreApplication::translate("FindReplace", "Replace All", nullptr));
        (void)FindReplace;
    } // retranslateUi

};

namespace Ui {
    class FindReplace: public Ui_FindReplace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACE_H
