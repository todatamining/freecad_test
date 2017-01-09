/********************************************************************************
** Form generated from reading UI file 'DlgCustomizeSpNavSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCUSTOMIZESPNAVSETTINGS_H
#define UI_DLGCUSTOMIZESPNAVSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCustomizeSpNavSettings
{
public:
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSlow;
    QSlider *SliderGlobal;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *CBDominant;
    QCheckBox *CBFlipYZ;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *CBTranslations;
    QCheckBox *CBRotations;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonCalibrate;
    QPushButton *ButtonDefaultSpNavMotions;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ImagePanLR;
    QLabel *ImagePanUD;
    QLabel *ImageZoom;
    QLabel *imageTilt;
    QLabel *ImageRoll;
    QLabel *ImageSpin;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *CBEnablePanLR;
    QCheckBox *CBReversePanLR;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *CBEnablePanUD;
    QCheckBox *CBReversePanUD;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *CBEnableZoom;
    QCheckBox *CBReverseZoom;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *CBEnableTilt;
    QCheckBox *CBReverseTilt;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *CBEnableRoll;
    QCheckBox *CBReverseRoll;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *CBEnableSpin;
    QCheckBox *CBReverseSpin;
    QVBoxLayout *verticalLayout_3;
    QSlider *SliderPanLR;
    QSlider *SliderPanUD;
    QSlider *SliderZoom;
    QSlider *SliderTilt;
    QSlider *SliderRoll;
    QSlider *SliderSpin;

    void setupUi(QWidget *DlgCustomizeSpNavSettings)
    {
        if (DlgCustomizeSpNavSettings->objectName().isEmpty())
            DlgCustomizeSpNavSettings->setObjectName(QStringLiteral("DlgCustomizeSpNavSettings"));
        DlgCustomizeSpNavSettings->resize(439, 537);
        verticalLayout_12 = new QVBoxLayout(DlgCustomizeSpNavSettings);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelSlow = new QLabel(DlgCustomizeSpNavSettings);
        labelSlow->setObjectName(QStringLiteral("labelSlow"));

        horizontalLayout_2->addWidget(labelSlow);

        SliderGlobal = new QSlider(DlgCustomizeSpNavSettings);
        SliderGlobal->setObjectName(QStringLiteral("SliderGlobal"));
        SliderGlobal->setMinimum(-50);
        SliderGlobal->setMaximum(50);
        SliderGlobal->setOrientation(Qt::Horizontal);
        SliderGlobal->setTickPosition(QSlider::TicksBelow);
        SliderGlobal->setTickInterval(10);

        horizontalLayout_2->addWidget(SliderGlobal);


        verticalLayout_12->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        CBDominant = new QCheckBox(DlgCustomizeSpNavSettings);
        CBDominant->setObjectName(QStringLiteral("CBDominant"));

        verticalLayout_10->addWidget(CBDominant);

        CBFlipYZ = new QCheckBox(DlgCustomizeSpNavSettings);
        CBFlipYZ->setObjectName(QStringLiteral("CBFlipYZ"));

        verticalLayout_10->addWidget(CBFlipYZ);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        CBTranslations = new QCheckBox(DlgCustomizeSpNavSettings);
        CBTranslations->setObjectName(QStringLiteral("CBTranslations"));
        CBTranslations->setChecked(true);

        verticalLayout_11->addWidget(CBTranslations);

        CBRotations = new QCheckBox(DlgCustomizeSpNavSettings);
        CBRotations->setObjectName(QStringLiteral("CBRotations"));
        CBRotations->setChecked(true);

        verticalLayout_11->addWidget(CBRotations);


        horizontalLayout_3->addLayout(verticalLayout_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ButtonCalibrate = new QPushButton(DlgCustomizeSpNavSettings);
        ButtonCalibrate->setObjectName(QStringLiteral("ButtonCalibrate"));

        horizontalLayout_3->addWidget(ButtonCalibrate);

        ButtonDefaultSpNavMotions = new QPushButton(DlgCustomizeSpNavSettings);
        ButtonDefaultSpNavMotions->setObjectName(QStringLiteral("ButtonDefaultSpNavMotions"));

        horizontalLayout_3->addWidget(ButtonDefaultSpNavMotions);


        verticalLayout_12->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 116, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ImagePanLR = new QLabel(DlgCustomizeSpNavSettings);
        ImagePanLR->setObjectName(QStringLiteral("ImagePanLR"));
        ImagePanLR->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-PanLR")));

        verticalLayout->addWidget(ImagePanLR);

        ImagePanUD = new QLabel(DlgCustomizeSpNavSettings);
        ImagePanUD->setObjectName(QStringLiteral("ImagePanUD"));
        ImagePanUD->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-PanUD")));

        verticalLayout->addWidget(ImagePanUD);

        ImageZoom = new QLabel(DlgCustomizeSpNavSettings);
        ImageZoom->setObjectName(QStringLiteral("ImageZoom"));
        ImageZoom->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Zoom")));

        verticalLayout->addWidget(ImageZoom);

        imageTilt = new QLabel(DlgCustomizeSpNavSettings);
        imageTilt->setObjectName(QStringLiteral("imageTilt"));
        imageTilt->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Tilt")));

        verticalLayout->addWidget(imageTilt);

        ImageRoll = new QLabel(DlgCustomizeSpNavSettings);
        ImageRoll->setObjectName(QStringLiteral("ImageRoll"));
        ImageRoll->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Roll")));

        verticalLayout->addWidget(ImageRoll);

        ImageSpin = new QLabel(DlgCustomizeSpNavSettings);
        ImageSpin->setObjectName(QStringLiteral("ImageSpin"));
        ImageSpin->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Spin")));

        verticalLayout->addWidget(ImageSpin);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        CBEnablePanLR = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnablePanLR->setObjectName(QStringLiteral("CBEnablePanLR"));
        CBEnablePanLR->setChecked(true);

        verticalLayout_2->addWidget(CBEnablePanLR);

        CBReversePanLR = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReversePanLR->setObjectName(QStringLiteral("CBReversePanLR"));

        verticalLayout_2->addWidget(CBReversePanLR);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        CBEnablePanUD = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnablePanUD->setObjectName(QStringLiteral("CBEnablePanUD"));
        CBEnablePanUD->setChecked(true);

        verticalLayout_4->addWidget(CBEnablePanUD);

        CBReversePanUD = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReversePanUD->setObjectName(QStringLiteral("CBReversePanUD"));

        verticalLayout_4->addWidget(CBReversePanUD);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        CBEnableZoom = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableZoom->setObjectName(QStringLiteral("CBEnableZoom"));
        CBEnableZoom->setChecked(true);

        verticalLayout_5->addWidget(CBEnableZoom);

        CBReverseZoom = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseZoom->setObjectName(QStringLiteral("CBReverseZoom"));

        verticalLayout_5->addWidget(CBReverseZoom);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        CBEnableTilt = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableTilt->setObjectName(QStringLiteral("CBEnableTilt"));
        CBEnableTilt->setChecked(true);

        verticalLayout_6->addWidget(CBEnableTilt);

        CBReverseTilt = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseTilt->setObjectName(QStringLiteral("CBReverseTilt"));

        verticalLayout_6->addWidget(CBReverseTilt);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        CBEnableRoll = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableRoll->setObjectName(QStringLiteral("CBEnableRoll"));
        CBEnableRoll->setChecked(true);

        verticalLayout_7->addWidget(CBEnableRoll);

        CBReverseRoll = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseRoll->setObjectName(QStringLiteral("CBReverseRoll"));

        verticalLayout_7->addWidget(CBReverseRoll);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        CBEnableSpin = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableSpin->setObjectName(QStringLiteral("CBEnableSpin"));
        CBEnableSpin->setChecked(true);

        verticalLayout_8->addWidget(CBEnableSpin);

        CBReverseSpin = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseSpin->setObjectName(QStringLiteral("CBReverseSpin"));

        verticalLayout_8->addWidget(CBReverseSpin);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        SliderPanLR = new QSlider(DlgCustomizeSpNavSettings);
        SliderPanLR->setObjectName(QStringLiteral("SliderPanLR"));
        SliderPanLR->setMinimum(-50);
        SliderPanLR->setMaximum(50);
        SliderPanLR->setSingleStep(1);
        SliderPanLR->setPageStep(1);
        SliderPanLR->setValue(0);
        SliderPanLR->setOrientation(Qt::Horizontal);
        SliderPanLR->setTickPosition(QSlider::TicksBelow);
        SliderPanLR->setTickInterval(10);

        verticalLayout_3->addWidget(SliderPanLR);

        SliderPanUD = new QSlider(DlgCustomizeSpNavSettings);
        SliderPanUD->setObjectName(QStringLiteral("SliderPanUD"));
        SliderPanUD->setMinimum(-50);
        SliderPanUD->setMaximum(50);
        SliderPanUD->setSingleStep(1);
        SliderPanUD->setPageStep(1);
        SliderPanUD->setValue(0);
        SliderPanUD->setOrientation(Qt::Horizontal);
        SliderPanUD->setTickPosition(QSlider::TicksBelow);
        SliderPanUD->setTickInterval(10);

        verticalLayout_3->addWidget(SliderPanUD);

        SliderZoom = new QSlider(DlgCustomizeSpNavSettings);
        SliderZoom->setObjectName(QStringLiteral("SliderZoom"));
        SliderZoom->setMinimum(-50);
        SliderZoom->setMaximum(50);
        SliderZoom->setSingleStep(1);
        SliderZoom->setPageStep(1);
        SliderZoom->setValue(0);
        SliderZoom->setOrientation(Qt::Horizontal);
        SliderZoom->setTickPosition(QSlider::TicksBelow);
        SliderZoom->setTickInterval(10);

        verticalLayout_3->addWidget(SliderZoom);

        SliderTilt = new QSlider(DlgCustomizeSpNavSettings);
        SliderTilt->setObjectName(QStringLiteral("SliderTilt"));
        SliderTilt->setMinimum(-50);
        SliderTilt->setMaximum(50);
        SliderTilt->setSingleStep(1);
        SliderTilt->setPageStep(1);
        SliderTilt->setValue(0);
        SliderTilt->setOrientation(Qt::Horizontal);
        SliderTilt->setTickPosition(QSlider::TicksBelow);
        SliderTilt->setTickInterval(10);

        verticalLayout_3->addWidget(SliderTilt);

        SliderRoll = new QSlider(DlgCustomizeSpNavSettings);
        SliderRoll->setObjectName(QStringLiteral("SliderRoll"));
        SliderRoll->setMinimum(-50);
        SliderRoll->setMaximum(50);
        SliderRoll->setSingleStep(1);
        SliderRoll->setPageStep(1);
        SliderRoll->setValue(0);
        SliderRoll->setOrientation(Qt::Horizontal);
        SliderRoll->setTickPosition(QSlider::TicksBelow);
        SliderRoll->setTickInterval(10);

        verticalLayout_3->addWidget(SliderRoll);

        SliderSpin = new QSlider(DlgCustomizeSpNavSettings);
        SliderSpin->setObjectName(QStringLiteral("SliderSpin"));
        SliderSpin->setMinimum(-50);
        SliderSpin->setMaximum(50);
        SliderSpin->setSingleStep(1);
        SliderSpin->setPageStep(1);
        SliderSpin->setValue(0);
        SliderSpin->setOrientation(Qt::Horizontal);
        SliderSpin->setTickPosition(QSlider::TicksBelow);
        SliderSpin->setTickInterval(10);

        verticalLayout_3->addWidget(SliderSpin);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_12->addLayout(horizontalLayout);


        retranslateUi(DlgCustomizeSpNavSettings);

        QMetaObject::connectSlotsByName(DlgCustomizeSpNavSettings);
    } // setupUi

    void retranslateUi(QWidget *DlgCustomizeSpNavSettings)
    {
        DlgCustomizeSpNavSettings->setWindowTitle(QApplication::translate("DlgCustomizeSpNavSettings", "Spaceball Motion", 0));
        labelSlow->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Global Sensitivity:  ", 0));
        CBDominant->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Dominant Mode", 0));
        CBFlipYZ->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Flip Y/Z", 0));
        CBTranslations->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable Translations", 0));
        CBRotations->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable Rotations", 0));
        ButtonCalibrate->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Calibrate", 0));
        ButtonDefaultSpNavMotions->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Default", 0));
        ImagePanLR->setText(QString());
        ImagePanUD->setText(QString());
        ImageZoom->setText(QString());
        imageTilt->setText(QString());
        ImageRoll->setText(QString());
        ImageSpin->setText(QString());
        CBEnablePanLR->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReversePanLR->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
        CBEnablePanUD->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReversePanUD->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
        CBEnableZoom->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReverseZoom->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
        CBEnableTilt->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReverseTilt->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
        CBEnableRoll->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReverseRoll->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
        CBEnableSpin->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0));
        CBReverseSpin->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgCustomizeSpNavSettings: public Ui_DlgCustomizeSpNavSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCUSTOMIZESPNAVSETTINGS_H
