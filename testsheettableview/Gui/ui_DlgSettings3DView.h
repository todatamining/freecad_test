/********************************************************************************
** Form generated from reading UI file 'DlgSettings3DView.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGS3DVIEW_H
#define UI_DLGSETTINGS3DVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettings3DView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GroupBox12;
    QVBoxLayout *verticalLayout;
    Gui::PrefCheckBox *CheckBox_CornerCoordSystem;
    Gui::PrefCheckBox *CheckBox_ShowFPS;
    Gui::PrefCheckBox *CheckBox_UseAutoRotation;
    QGridLayout *gridLayout2;
    QLabel *navigationLabel;
    QComboBox *comboNavigationStyle;
    QPushButton *mouseButton;
    QLabel *orbitLabel;
    QComboBox *comboOrbitStyle;
    QLabel *aliasingLAbel;
    Gui::PrefComboBox *comboAliasing;
    QHBoxLayout *horizontalLayout;
    Gui::PrefCheckBox *checkBoxZoomAtCursor;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    Gui::PrefDoubleSpinBox *spinBoxZoomStep;
    Gui::PrefCheckBox *checkBoxInvertZoom;
    QFrame *line1;
    QHBoxLayout *eyedistanceLayout;
    QLabel *textLabel1;
    Gui::PrefDoubleSpinBox *FloatSpinBox_EyeDistance;
    QGridLayout *backlightLayout;
    Gui::PrefSlider *sliderIntensity;
    Gui::PrefColorButton *backlightColor;
    QLabel *backlightLabel;
    Gui::PrefCheckBox *checkBoxBacklight;
    QGroupBox *groupBoxCamera;
    QGridLayout *gridLayout1;
    Gui::PrefRadioButton *radioOrthographic;
    Gui::PrefRadioButton *radioPerspective;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        if (Gui__Dialog__DlgSettings3DView->objectName().isEmpty())
            Gui__Dialog__DlgSettings3DView->setObjectName(QStringLiteral("Gui__Dialog__DlgSettings3DView"));
        Gui__Dialog__DlgSettings3DView->resize(477, 505);
        verticalLayout_2 = new QVBoxLayout(Gui__Dialog__DlgSettings3DView);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        GroupBox12 = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        GroupBox12->setObjectName(QStringLiteral("GroupBox12"));
        verticalLayout = new QVBoxLayout(GroupBox12);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        CheckBox_CornerCoordSystem = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_CornerCoordSystem->setObjectName(QStringLiteral("CheckBox_CornerCoordSystem"));
        CheckBox_CornerCoordSystem->setChecked(true);
        CheckBox_CornerCoordSystem->setProperty("prefEntry", QVariant(QByteArray("CornerCoordSystem")));
        CheckBox_CornerCoordSystem->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(CheckBox_CornerCoordSystem);

        CheckBox_ShowFPS = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_ShowFPS->setObjectName(QStringLiteral("CheckBox_ShowFPS"));
        CheckBox_ShowFPS->setProperty("prefEntry", QVariant(QByteArray("ShowFPS")));
        CheckBox_ShowFPS->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(CheckBox_ShowFPS);

        CheckBox_UseAutoRotation = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_UseAutoRotation->setObjectName(QStringLiteral("CheckBox_UseAutoRotation"));
        CheckBox_UseAutoRotation->setEnabled(true);
        CheckBox_UseAutoRotation->setChecked(true);
        CheckBox_UseAutoRotation->setProperty("prefEntry", QVariant(QByteArray("UseAutoRotation")));
        CheckBox_UseAutoRotation->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(CheckBox_UseAutoRotation);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        navigationLabel = new QLabel(GroupBox12);
        navigationLabel->setObjectName(QStringLiteral("navigationLabel"));

        gridLayout2->addWidget(navigationLabel, 0, 0, 1, 1);

        comboNavigationStyle = new QComboBox(GroupBox12);
        comboNavigationStyle->setObjectName(QStringLiteral("comboNavigationStyle"));

        gridLayout2->addWidget(comboNavigationStyle, 0, 1, 1, 1);

        mouseButton = new QPushButton(GroupBox12);
        mouseButton->setObjectName(QStringLiteral("mouseButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mouseButton->sizePolicy().hasHeightForWidth());
        mouseButton->setSizePolicy(sizePolicy);

        gridLayout2->addWidget(mouseButton, 0, 2, 1, 1);

        orbitLabel = new QLabel(GroupBox12);
        orbitLabel->setObjectName(QStringLiteral("orbitLabel"));

        gridLayout2->addWidget(orbitLabel, 1, 0, 1, 1);

        comboOrbitStyle = new QComboBox(GroupBox12);
        comboOrbitStyle->setObjectName(QStringLiteral("comboOrbitStyle"));

        gridLayout2->addWidget(comboOrbitStyle, 1, 1, 1, 1);

        aliasingLAbel = new QLabel(GroupBox12);
        aliasingLAbel->setObjectName(QStringLiteral("aliasingLAbel"));

        gridLayout2->addWidget(aliasingLAbel, 2, 0, 1, 1);

        comboAliasing = new Gui::PrefComboBox(GroupBox12);
        comboAliasing->setObjectName(QStringLiteral("comboAliasing"));
        comboAliasing->setProperty("prefEntry", QVariant(QByteArray("AntiAliasing")));
        comboAliasing->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout2->addWidget(comboAliasing, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxZoomAtCursor = new Gui::PrefCheckBox(GroupBox12);
        checkBoxZoomAtCursor->setObjectName(QStringLiteral("checkBoxZoomAtCursor"));
        checkBoxZoomAtCursor->setChecked(true);
        checkBoxZoomAtCursor->setProperty("prefEntry", QVariant(QByteArray("ZoomAtCursor")));
        checkBoxZoomAtCursor->setProperty("prefPath", QVariant(QByteArray("View")));

        horizontalLayout->addWidget(checkBoxZoomAtCursor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(GroupBox12);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBoxZoomStep = new Gui::PrefDoubleSpinBox(GroupBox12);
        spinBoxZoomStep->setObjectName(QStringLiteral("spinBoxZoomStep"));
        spinBoxZoomStep->setMinimum(0.01);
        spinBoxZoomStep->setMaximum(1);
        spinBoxZoomStep->setSingleStep(0.05);
        spinBoxZoomStep->setValue(0.2);
        spinBoxZoomStep->setProperty("prefEntry", QVariant(QByteArray("ZoomStep")));
        spinBoxZoomStep->setProperty("prefPath", QVariant(QByteArray("View")));

        horizontalLayout->addWidget(spinBoxZoomStep);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxInvertZoom = new Gui::PrefCheckBox(GroupBox12);
        checkBoxInvertZoom->setObjectName(QStringLiteral("checkBoxInvertZoom"));
        checkBoxInvertZoom->setChecked(true);
        checkBoxInvertZoom->setProperty("prefEntry", QVariant(QByteArray("InvertZoom")));
        checkBoxInvertZoom->setProperty("prefPath", QVariant(QByteArray("View")));

        verticalLayout->addWidget(checkBoxInvertZoom);

        line1 = new QFrame(GroupBox12);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line1);

        eyedistanceLayout = new QHBoxLayout();
        eyedistanceLayout->setSpacing(6);
        eyedistanceLayout->setObjectName(QStringLiteral("eyedistanceLayout"));
        eyedistanceLayout->setContentsMargins(11, 11, 11, 11);
        textLabel1 = new QLabel(GroupBox12);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        eyedistanceLayout->addWidget(textLabel1);

        FloatSpinBox_EyeDistance = new Gui::PrefDoubleSpinBox(GroupBox12);
        FloatSpinBox_EyeDistance->setObjectName(QStringLiteral("FloatSpinBox_EyeDistance"));
        FloatSpinBox_EyeDistance->setDecimals(1);
        FloatSpinBox_EyeDistance->setMinimum(0.1);
        FloatSpinBox_EyeDistance->setMaximum(1000);
        FloatSpinBox_EyeDistance->setSingleStep(2);
        FloatSpinBox_EyeDistance->setValue(5);
        FloatSpinBox_EyeDistance->setProperty("prefEntry", QVariant(QByteArray("EyeDistance")));
        FloatSpinBox_EyeDistance->setProperty("prefPath", QVariant(QByteArray("View")));

        eyedistanceLayout->addWidget(FloatSpinBox_EyeDistance);


        verticalLayout->addLayout(eyedistanceLayout);

        backlightLayout = new QGridLayout();
        backlightLayout->setSpacing(6);
        backlightLayout->setObjectName(QStringLiteral("backlightLayout"));
        backlightLayout->setContentsMargins(11, 11, 11, 11);
        sliderIntensity = new Gui::PrefSlider(GroupBox12);
        sliderIntensity->setObjectName(QStringLiteral("sliderIntensity"));
        sliderIntensity->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sliderIntensity->sizePolicy().hasHeightForWidth());
        sliderIntensity->setSizePolicy(sizePolicy1);
        sliderIntensity->setMaximum(100);
        sliderIntensity->setSingleStep(1);
        sliderIntensity->setValue(100);
        sliderIntensity->setOrientation(Qt::Horizontal);
        sliderIntensity->setTickPosition(QSlider::TicksBelow);
        sliderIntensity->setTickInterval(10);
        sliderIntensity->setProperty("prefEntry", QVariant(QByteArray("BacklightIntensity")));
        sliderIntensity->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(sliderIntensity, 1, 1, 1, 1);

        backlightColor = new Gui::PrefColorButton(GroupBox12);
        backlightColor->setObjectName(QStringLiteral("backlightColor"));
        backlightColor->setEnabled(false);
        backlightColor->setProperty("color", QVariant(QColor(255, 255, 255)));
        backlightColor->setProperty("prefEntry", QVariant(QByteArray("BacklightColor")));
        backlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(backlightColor, 0, 1, 1, 1);

        backlightLabel = new QLabel(GroupBox12);
        backlightLabel->setObjectName(QStringLiteral("backlightLabel"));

        backlightLayout->addWidget(backlightLabel, 1, 0, 1, 1);

        checkBoxBacklight = new Gui::PrefCheckBox(GroupBox12);
        checkBoxBacklight->setObjectName(QStringLiteral("checkBoxBacklight"));
        checkBoxBacklight->setProperty("prefEntry", QVariant(QByteArray("EnableBacklight")));
        checkBoxBacklight->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(checkBoxBacklight, 0, 0, 1, 1);


        verticalLayout->addLayout(backlightLayout);


        verticalLayout_2->addWidget(GroupBox12);

        groupBoxCamera = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        groupBoxCamera->setObjectName(QStringLiteral("groupBoxCamera"));
        gridLayout1 = new QGridLayout(groupBoxCamera);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        radioOrthographic = new Gui::PrefRadioButton(groupBoxCamera);
        radioOrthographic->setObjectName(QStringLiteral("radioOrthographic"));
        radioOrthographic->setChecked(true);
        radioOrthographic->setProperty("prefEntry", QVariant(QByteArray("Orthographic")));
        radioOrthographic->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(radioOrthographic, 0, 1, 1, 1);

        radioPerspective = new Gui::PrefRadioButton(groupBoxCamera);
        radioPerspective->setObjectName(QStringLiteral("radioPerspective"));
        radioPerspective->setProperty("prefEntry", QVariant(QByteArray("Perspective")));
        radioPerspective->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(radioPerspective, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBoxCamera);

        spacerItem = new QSpacerItem(455, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerItem);

        QWidget::setTabOrder(CheckBox_CornerCoordSystem, CheckBox_ShowFPS);
        QWidget::setTabOrder(CheckBox_ShowFPS, CheckBox_UseAutoRotation);
        QWidget::setTabOrder(CheckBox_UseAutoRotation, comboNavigationStyle);
        QWidget::setTabOrder(comboNavigationStyle, mouseButton);
        QWidget::setTabOrder(mouseButton, comboOrbitStyle);
        QWidget::setTabOrder(comboOrbitStyle, checkBoxZoomAtCursor);
        QWidget::setTabOrder(checkBoxZoomAtCursor, spinBoxZoomStep);
        QWidget::setTabOrder(spinBoxZoomStep, checkBoxInvertZoom);
        QWidget::setTabOrder(checkBoxInvertZoom, FloatSpinBox_EyeDistance);
        QWidget::setTabOrder(FloatSpinBox_EyeDistance, checkBoxBacklight);
        QWidget::setTabOrder(checkBoxBacklight, backlightColor);
        QWidget::setTabOrder(backlightColor, sliderIntensity);
        QWidget::setTabOrder(sliderIntensity, radioPerspective);
        QWidget::setTabOrder(radioPerspective, radioOrthographic);

        retranslateUi(Gui__Dialog__DlgSettings3DView);
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), backlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), sliderIntensity, SLOT(setEnabled(bool)));

        comboNavigationStyle->setCurrentIndex(-1);
        comboOrbitStyle->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettings3DView);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        Gui__Dialog__DlgSettings3DView->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D View", 0));
        GroupBox12->setTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D View settings", 0));
        CheckBox_CornerCoordSystem->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Show coordinate system in the corner", 0));
        CheckBox_ShowFPS->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Show counter of frames per second", 0));
        CheckBox_UseAutoRotation->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Enable animation", 0));
        navigationLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D Navigation", 0));
        mouseButton->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Mouse...", 0));
        orbitLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Orbit style", 0));
        comboOrbitStyle->clear();
        comboOrbitStyle->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "Turntable", 0)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "Trackball", 0)
        );
        aliasingLAbel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Anti-Aliasing", 0));
        comboAliasing->clear();
        comboAliasing->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "None", 0)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "Line Smoothing", 0)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "MSAA 2x", 0)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "MSAA 4x", 0)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "MSAA 8x", 0)
        );
        checkBoxZoomAtCursor->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Zoom at cursor", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Zoom step", 0));
        checkBoxInvertZoom->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Invert zoom", 0));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Eye to eye distance for stereo modes:", 0));
        backlightLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Intensity of backlight", 0));
        checkBoxBacklight->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Enable backlight color", 0));
        groupBoxCamera->setTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Camera type", 0));
        radioOrthographic->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Or&thographic rendering", 0));
        radioPerspective->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Perspective renderin&g", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettings3DView: public Ui_DlgSettings3DView {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGS3DVIEW_H
