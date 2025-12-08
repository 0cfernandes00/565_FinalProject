/********************************************************************************
** Form generated from reading UI file 'StatisticsViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICSVIEWER_H
#define UI_STATISTICSVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_StatisticsViewer
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *statistics;

    void setupUi(QFrame *StatisticsViewer)
    {
        if (StatisticsViewer->objectName().isEmpty())
            StatisticsViewer->setObjectName(QString::fromUtf8("StatisticsViewer"));
        StatisticsViewer->resize(400, 300);
        horizontalLayout = new QHBoxLayout(StatisticsViewer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        statistics = new QTextEdit(StatisticsViewer);
        statistics->setObjectName(QString::fromUtf8("statistics"));
        statistics->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        statistics->setReadOnly(true);

        horizontalLayout->addWidget(statistics);


        retranslateUi(StatisticsViewer);

        QMetaObject::connectSlotsByName(StatisticsViewer);
    } // setupUi

    void retranslateUi(QFrame *StatisticsViewer)
    {
        StatisticsViewer->setWindowTitle(QCoreApplication::translate("StatisticsViewer", "Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticsViewer: public Ui_StatisticsViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICSVIEWER_H
