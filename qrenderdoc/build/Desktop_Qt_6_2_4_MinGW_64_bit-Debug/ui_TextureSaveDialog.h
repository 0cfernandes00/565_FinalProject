/********************************************************************************
** Form generated from reading UI file 'TextureSaveDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTURESAVEDIALOG_H
#define UI_TEXTURESAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextureSaveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *pathGroup;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filename;
    QToolButton *browse;
    QGroupBox *texSelectionGroup;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *mainTex;
    QRadioButton *overlayTex;
    QGroupBox *formatGroup;
    QGridLayout *gridLayout;
    QLabel *formatLabel;
    QComboBox *fileFormat;
    QLabel *jpegLabel;
    QDoubleSpinBox *jpegCompression;
    QGroupBox *mipGroup;
    QGridLayout *gridLayout_2;
    QCheckBox *exportAllMips;
    QCheckBox *oneMip;
    QComboBox *mipSelect;
    QGroupBox *sampleGroup;
    QGridLayout *gridLayout_3;
    QCheckBox *mapSampleArray;
    QCheckBox *resolveSamples;
    QCheckBox *oneSample;
    QComboBox *sampleSelect;
    QGroupBox *sliceGroup;
    QGridLayout *gridLayout_4;
    QCheckBox *exportAllSlices;
    QCheckBox *oneSlice;
    QComboBox *sliceSelect;
    QCheckBox *mapSlicesToGrid;
    QDoubleSpinBox *gridWidth;
    QCheckBox *cubeCruciform;
    QGroupBox *alphaGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *alphaLayout1;
    QLabel *alphaLabel;
    QComboBox *alphaMap;
    QPushButton *alphaCol;
    QHBoxLayout *alphaLayout2;
    QLabel *blackLabel;
    QLineEdit *blackPoint;
    QLabel *whiteLabel;
    QLineEdit *whitePoint;
    QDialogButtonBox *saveCancelButtons;

    void setupUi(QDialog *TextureSaveDialog)
    {
        if (TextureSaveDialog->objectName().isEmpty())
            TextureSaveDialog->setObjectName(QString::fromUtf8("TextureSaveDialog"));
        TextureSaveDialog->resize(400, 550);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextureSaveDialog->sizePolicy().hasHeightForWidth());
        TextureSaveDialog->setSizePolicy(sizePolicy);
        TextureSaveDialog->setMinimumSize(QSize(400, 0));
        TextureSaveDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(TextureSaveDialog);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        pathGroup = new QGroupBox(TextureSaveDialog);
        pathGroup->setObjectName(QString::fromUtf8("pathGroup"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pathGroup->sizePolicy().hasHeightForWidth());
        pathGroup->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(pathGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        filename = new QLineEdit(pathGroup);
        filename->setObjectName(QString::fromUtf8("filename"));

        horizontalLayout->addWidget(filename);

        browse = new QToolButton(pathGroup);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        verticalLayout_2->addWidget(pathGroup);

        texSelectionGroup = new QGroupBox(TextureSaveDialog);
        texSelectionGroup->setObjectName(QString::fromUtf8("texSelectionGroup"));
        sizePolicy1.setHeightForWidth(texSelectionGroup->sizePolicy().hasHeightForWidth());
        texSelectionGroup->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(texSelectionGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        mainTex = new QRadioButton(texSelectionGroup);
        mainTex->setObjectName(QString::fromUtf8("mainTex"));
        mainTex->setChecked(true);

        horizontalLayout_2->addWidget(mainTex);

        overlayTex = new QRadioButton(texSelectionGroup);
        overlayTex->setObjectName(QString::fromUtf8("overlayTex"));

        horizontalLayout_2->addWidget(overlayTex);


        verticalLayout_2->addWidget(texSelectionGroup);

        formatGroup = new QGroupBox(TextureSaveDialog);
        formatGroup->setObjectName(QString::fromUtf8("formatGroup"));
        sizePolicy1.setHeightForWidth(formatGroup->sizePolicy().hasHeightForWidth());
        formatGroup->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(formatGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        formatLabel = new QLabel(formatGroup);
        formatLabel->setObjectName(QString::fromUtf8("formatLabel"));

        gridLayout->addWidget(formatLabel, 0, 0, 1, 1);

        fileFormat = new QComboBox(formatGroup);
        fileFormat->setObjectName(QString::fromUtf8("fileFormat"));

        gridLayout->addWidget(fileFormat, 0, 1, 1, 1);

        jpegLabel = new QLabel(formatGroup);
        jpegLabel->setObjectName(QString::fromUtf8("jpegLabel"));

        gridLayout->addWidget(jpegLabel, 1, 0, 1, 1);

        jpegCompression = new QDoubleSpinBox(formatGroup);
        jpegCompression->setObjectName(QString::fromUtf8("jpegCompression"));
        jpegCompression->setDecimals(0);
        jpegCompression->setValue(100.000000000000000);

        gridLayout->addWidget(jpegCompression, 1, 1, 1, 1);


        verticalLayout_2->addWidget(formatGroup);

        mipGroup = new QGroupBox(TextureSaveDialog);
        mipGroup->setObjectName(QString::fromUtf8("mipGroup"));
        gridLayout_2 = new QGridLayout(mipGroup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        exportAllMips = new QCheckBox(mipGroup);
        exportAllMips->setObjectName(QString::fromUtf8("exportAllMips"));

        gridLayout_2->addWidget(exportAllMips, 0, 0, 1, 2);

        oneMip = new QCheckBox(mipGroup);
        oneMip->setObjectName(QString::fromUtf8("oneMip"));

        gridLayout_2->addWidget(oneMip, 1, 0, 1, 1);

        mipSelect = new QComboBox(mipGroup);
        mipSelect->setObjectName(QString::fromUtf8("mipSelect"));

        gridLayout_2->addWidget(mipSelect, 1, 1, 1, 1);


        verticalLayout_2->addWidget(mipGroup);

        sampleGroup = new QGroupBox(TextureSaveDialog);
        sampleGroup->setObjectName(QString::fromUtf8("sampleGroup"));
        gridLayout_3 = new QGridLayout(sampleGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        mapSampleArray = new QCheckBox(sampleGroup);
        mapSampleArray->setObjectName(QString::fromUtf8("mapSampleArray"));

        gridLayout_3->addWidget(mapSampleArray, 0, 0, 1, 1);

        resolveSamples = new QCheckBox(sampleGroup);
        resolveSamples->setObjectName(QString::fromUtf8("resolveSamples"));

        gridLayout_3->addWidget(resolveSamples, 1, 0, 1, 1);

        oneSample = new QCheckBox(sampleGroup);
        oneSample->setObjectName(QString::fromUtf8("oneSample"));

        gridLayout_3->addWidget(oneSample, 2, 0, 1, 1);

        sampleSelect = new QComboBox(sampleGroup);
        sampleSelect->setObjectName(QString::fromUtf8("sampleSelect"));

        gridLayout_3->addWidget(sampleSelect, 2, 1, 1, 1);


        verticalLayout_2->addWidget(sampleGroup);

        sliceGroup = new QGroupBox(TextureSaveDialog);
        sliceGroup->setObjectName(QString::fromUtf8("sliceGroup"));
        gridLayout_4 = new QGridLayout(sliceGroup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        exportAllSlices = new QCheckBox(sliceGroup);
        exportAllSlices->setObjectName(QString::fromUtf8("exportAllSlices"));

        gridLayout_4->addWidget(exportAllSlices, 0, 0, 1, 1);

        oneSlice = new QCheckBox(sliceGroup);
        oneSlice->setObjectName(QString::fromUtf8("oneSlice"));

        gridLayout_4->addWidget(oneSlice, 1, 0, 1, 1);

        sliceSelect = new QComboBox(sliceGroup);
        sliceSelect->setObjectName(QString::fromUtf8("sliceSelect"));

        gridLayout_4->addWidget(sliceSelect, 1, 1, 1, 1);

        mapSlicesToGrid = new QCheckBox(sliceGroup);
        mapSlicesToGrid->setObjectName(QString::fromUtf8("mapSlicesToGrid"));

        gridLayout_4->addWidget(mapSlicesToGrid, 2, 0, 1, 1);

        gridWidth = new QDoubleSpinBox(sliceGroup);
        gridWidth->setObjectName(QString::fromUtf8("gridWidth"));
        gridWidth->setDecimals(0);

        gridLayout_4->addWidget(gridWidth, 2, 1, 1, 1);

        cubeCruciform = new QCheckBox(sliceGroup);
        cubeCruciform->setObjectName(QString::fromUtf8("cubeCruciform"));

        gridLayout_4->addWidget(cubeCruciform, 3, 0, 1, 1);


        verticalLayout_2->addWidget(sliceGroup);

        alphaGroup = new QGroupBox(TextureSaveDialog);
        alphaGroup->setObjectName(QString::fromUtf8("alphaGroup"));
        verticalLayout = new QVBoxLayout(alphaGroup);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        alphaLayout1 = new QHBoxLayout();
        alphaLayout1->setObjectName(QString::fromUtf8("alphaLayout1"));
        alphaLabel = new QLabel(alphaGroup);
        alphaLabel->setObjectName(QString::fromUtf8("alphaLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(alphaLabel->sizePolicy().hasHeightForWidth());
        alphaLabel->setSizePolicy(sizePolicy2);

        alphaLayout1->addWidget(alphaLabel);

        alphaMap = new QComboBox(alphaGroup);
        alphaMap->setObjectName(QString::fromUtf8("alphaMap"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(alphaMap->sizePolicy().hasHeightForWidth());
        alphaMap->setSizePolicy(sizePolicy3);

        alphaLayout1->addWidget(alphaMap);

        alphaCol = new QPushButton(alphaGroup);
        alphaCol->setObjectName(QString::fromUtf8("alphaCol"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(alphaCol->sizePolicy().hasHeightForWidth());
        alphaCol->setSizePolicy(sizePolicy4);

        alphaLayout1->addWidget(alphaCol);


        verticalLayout->addLayout(alphaLayout1);

        alphaLayout2 = new QHBoxLayout();
        alphaLayout2->setObjectName(QString::fromUtf8("alphaLayout2"));
        blackLabel = new QLabel(alphaGroup);
        blackLabel->setObjectName(QString::fromUtf8("blackLabel"));

        alphaLayout2->addWidget(blackLabel);

        blackPoint = new QLineEdit(alphaGroup);
        blackPoint->setObjectName(QString::fromUtf8("blackPoint"));

        alphaLayout2->addWidget(blackPoint);

        whiteLabel = new QLabel(alphaGroup);
        whiteLabel->setObjectName(QString::fromUtf8("whiteLabel"));

        alphaLayout2->addWidget(whiteLabel);

        whitePoint = new QLineEdit(alphaGroup);
        whitePoint->setObjectName(QString::fromUtf8("whitePoint"));

        alphaLayout2->addWidget(whitePoint);


        verticalLayout->addLayout(alphaLayout2);


        verticalLayout_2->addWidget(alphaGroup);

        saveCancelButtons = new QDialogButtonBox(TextureSaveDialog);
        saveCancelButtons->setObjectName(QString::fromUtf8("saveCancelButtons"));
        saveCancelButtons->setOrientation(Qt::Horizontal);
        saveCancelButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        saveCancelButtons->setCenterButtons(false);

        verticalLayout_2->addWidget(saveCancelButtons);


        retranslateUi(TextureSaveDialog);

        QMetaObject::connectSlotsByName(TextureSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *TextureSaveDialog)
    {
        TextureSaveDialog->setWindowTitle(QCoreApplication::translate("TextureSaveDialog", "Save Texture", nullptr));
        pathGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "Path", nullptr));
        browse->setText(QCoreApplication::translate("TextureSaveDialog", "...", nullptr));
        texSelectionGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "Texture To Save", nullptr));
        mainTex->setText(QCoreApplication::translate("TextureSaveDialog", "Selected Texture", nullptr));
        overlayTex->setText(QCoreApplication::translate("TextureSaveDialog", "Overlay Texture", nullptr));
        formatGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "File Format", nullptr));
        formatLabel->setText(QCoreApplication::translate("TextureSaveDialog", "File Format:", nullptr));
        jpegLabel->setText(QCoreApplication::translate("TextureSaveDialog", "JPEG Compression:", nullptr));
        mipGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "Mips", nullptr));
        exportAllMips->setText(QCoreApplication::translate("TextureSaveDialog", "Export All Mips", nullptr));
        oneMip->setText(QCoreApplication::translate("TextureSaveDialog", "Select Mip:", nullptr));
        sampleGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "MSAA Samples", nullptr));
        mapSampleArray->setText(QCoreApplication::translate("TextureSaveDialog", "Map Samples as Array Slices", nullptr));
        resolveSamples->setText(QCoreApplication::translate("TextureSaveDialog", "Resolve Samples", nullptr));
        oneSample->setText(QCoreApplication::translate("TextureSaveDialog", "Select Sample:", nullptr));
        sliceGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "Array/Depth Slices", nullptr));
        exportAllSlices->setText(QCoreApplication::translate("TextureSaveDialog", "Export All Slices", nullptr));
        oneSlice->setText(QCoreApplication::translate("TextureSaveDialog", "Select Slice:", nullptr));
        mapSlicesToGrid->setText(QCoreApplication::translate("TextureSaveDialog", "Show Slices as Grid. Grid Width:", nullptr));
        cubeCruciform->setText(QCoreApplication::translate("TextureSaveDialog", "Show Cubemap as Cross", nullptr));
        alphaGroup->setTitle(QCoreApplication::translate("TextureSaveDialog", "Alpha Handling", nullptr));
        alphaLabel->setText(QCoreApplication::translate("TextureSaveDialog", "Alpha mapping:", nullptr));
        alphaCol->setText(QCoreApplication::translate("TextureSaveDialog", "Background Colour", nullptr));
        blackLabel->setText(QCoreApplication::translate("TextureSaveDialog", "Black Point:", nullptr));
        whiteLabel->setText(QCoreApplication::translate("TextureSaveDialog", "White Point:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextureSaveDialog: public Ui_TextureSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTURESAVEDIALOG_H
