/********************************************************************************
** Form generated from reading UI file 'CommentView.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTVIEW_H
#define UI_COMMENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CommentView
{
public:
    QVBoxLayout *mainLayout;

    void setupUi(QFrame *CommentView)
    {
        if (CommentView->objectName().isEmpty())
            CommentView->setObjectName(QString::fromUtf8("CommentView"));
        CommentView->resize(400, 300);
        mainLayout = new QVBoxLayout(CommentView);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(3, 3, 3, 3);

        retranslateUi(CommentView);

        QMetaObject::connectSlotsByName(CommentView);
    } // setupUi

    void retranslateUi(QFrame *CommentView)
    {
        CommentView->setWindowTitle(QCoreApplication::translate("CommentView", "Capture Comments", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommentView: public Ui_CommentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTVIEW_H
