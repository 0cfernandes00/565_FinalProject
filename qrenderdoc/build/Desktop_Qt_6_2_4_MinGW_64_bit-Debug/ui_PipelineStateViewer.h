/********************************************************************************
** Form generated from reading UI file 'PipelineStateViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIPELINESTATEVIEWER_H
#define UI_PIPELINESTATEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include "Widgets/CustomPaintWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PipelineStateViewer
{
public:
    QHBoxLayout *layout;
    CustomPaintWidget *thumbnail;

    void setupUi(QFrame *PipelineStateViewer)
    {
        if (PipelineStateViewer->objectName().isEmpty())
            PipelineStateViewer->setObjectName(QString::fromUtf8("PipelineStateViewer"));
        PipelineStateViewer->resize(400, 300);
        layout = new QHBoxLayout(PipelineStateViewer);
        layout->setSpacing(0);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(3, 3, 3, 3);
        thumbnail = new CustomPaintWidget(PipelineStateViewer);
        thumbnail->setObjectName(QString::fromUtf8("thumbnail"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(thumbnail->sizePolicy().hasHeightForWidth());
        thumbnail->setSizePolicy(sizePolicy);

        layout->addWidget(thumbnail);


        retranslateUi(PipelineStateViewer);

        QMetaObject::connectSlotsByName(PipelineStateViewer);
    } // setupUi

    void retranslateUi(QFrame *PipelineStateViewer)
    {
        PipelineStateViewer->setWindowTitle(QCoreApplication::translate("PipelineStateViewer", "Pipeline State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PipelineStateViewer: public Ui_PipelineStateViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIPELINESTATEVIEWER_H
