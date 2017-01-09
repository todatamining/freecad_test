/********************************************************************************
** Form generated from reading UI file 'DlgSettingsViewColor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSVIEWCOLOR_H
#define UI_DLGSETTINGSVIEWCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsViewColor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxSelection;
    QGridLayout *gridLayout1;
    QSpacerItem *spacer_4;
    QGridLayout *_3;
    Gui::PrefColorButton *SelectionColor;
    Gui::PrefCheckBox *checkBoxPreselection;
    Gui::PrefColorButton *HighlightColor;
    Gui::PrefCheckBox *checkBoxSelection;
    QLabel *label;
    Gui::PrefDoubleSpinBox *spinPickRadius;
    QGroupBox *groupBoxColor;
    QGridLayout *gridLayout2;
    QSpacerItem *spacer;
    QGridLayout *_4;
    QSpacerItem *spacer_2;
    Gui::PrefColorButton *SelectionColor_Background;
    Gui::PrefCheckBox *checkMidColor;
    Gui::PrefColorButton *backgroundColorTo;
    Gui::PrefColorButton *backgroundColorMid;
    Gui::PrefRadioButton *radioButtonGradient;
    Gui::PrefColorButton *backgroundColorFrom;
    Gui::PrefRadioButton *radioButtonSimple;
    QSpacerItem *spacer_3;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsViewColor)
    {
        if (Gui__Dialog__DlgSettingsViewColor->objectName().isEmpty())
            Gui__Dialog__DlgSettingsViewColor->setObjectName(QStringLiteral("Gui__Dialog__DlgSettingsViewColor"));
        Gui__Dialog__DlgSettingsViewColor->resize(601, 598);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsViewColor);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        groupBoxSelection = new QGroupBox(Gui__Dialog__DlgSettingsViewColor);
        groupBoxSelection->setObjectName(QStringLiteral("groupBoxSelection"));
        gridLayout1 = new QGridLayout(groupBoxSelection);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        spacer_4 = new QSpacerItem(183, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer_4, 0, 1, 1, 1);

        _3 = new QGridLayout();
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        SelectionColor = new Gui::PrefColorButton(groupBoxSelection);
        SelectionColor->setObjectName(QStringLiteral("SelectionColor"));
        SelectionColor->setEnabled(false);
        SelectionColor->setProperty("color", QVariant(QColor(28, 173, 28)));
        SelectionColor->setProperty("prefEntry", QVariant(QByteArray("SelectionColor")));
        SelectionColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(SelectionColor, 1, 1, 1, 1);

        checkBoxPreselection = new Gui::PrefCheckBox(groupBoxSelection);
        checkBoxPreselection->setObjectName(QStringLiteral("checkBoxPreselection"));
        checkBoxPreselection->setMinimumSize(QSize(240, 0));
        checkBoxPreselection->setChecked(true);
        checkBoxPreselection->setProperty("prefEntry", QVariant(QByteArray("EnablePreselection")));
        checkBoxPreselection->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(checkBoxPreselection, 0, 0, 1, 1);

        HighlightColor = new Gui::PrefColorButton(groupBoxSelection);
        HighlightColor->setObjectName(QStringLiteral("HighlightColor"));
        HighlightColor->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HighlightColor->sizePolicy().hasHeightForWidth());
        HighlightColor->setSizePolicy(sizePolicy);
        HighlightColor->setProperty("color", QVariant(QColor(225, 225, 20)));
        HighlightColor->setProperty("prefEntry", QVariant(QByteArray("HighlightColor")));
        HighlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(HighlightColor, 0, 1, 1, 1);

        checkBoxSelection = new Gui::PrefCheckBox(groupBoxSelection);
        checkBoxSelection->setObjectName(QStringLiteral("checkBoxSelection"));
        checkBoxSelection->setChecked(true);
        checkBoxSelection->setProperty("prefEntry", QVariant(QByteArray("EnableSelection")));
        checkBoxSelection->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(checkBoxSelection, 1, 0, 1, 1);

        label = new QLabel(groupBoxSelection);
        label->setObjectName(QStringLiteral("label"));

        _3->addWidget(label, 2, 0, 1, 1);

        spinPickRadius = new Gui::PrefDoubleSpinBox(groupBoxSelection);
        spinPickRadius->setObjectName(QStringLiteral("spinPickRadius"));
        spinPickRadius->setInputMethodHints(Qt::ImhPreferNumbers);
        spinPickRadius->setDecimals(1);
        spinPickRadius->setMinimum(0.5);
        spinPickRadius->setMaximum(200);
        spinPickRadius->setValue(5);

        _3->addWidget(spinPickRadius, 2, 1, 1, 1);


        gridLayout1->addLayout(_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxSelection, 0, 0, 1, 1);

        groupBoxColor = new QGroupBox(Gui__Dialog__DlgSettingsViewColor);
        groupBoxColor->setObjectName(QStringLiteral("groupBoxColor"));
        gridLayout2 = new QGridLayout(groupBoxColor);
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer, 0, 1, 1, 1);

        _4 = new QGridLayout();
        _4->setSpacing(6);
        _4->setObjectName(QStringLiteral("_4"));
        _4->setContentsMargins(0, 0, 0, 0);
        spacer_2 = new QSpacerItem(171, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        _4->addItem(spacer_2, 2, 0, 1, 1);

        SelectionColor_Background = new Gui::PrefColorButton(groupBoxColor);
        SelectionColor_Background->setObjectName(QStringLiteral("SelectionColor_Background"));
        SelectionColor_Background->setEnabled(false);
        sizePolicy.setHeightForWidth(SelectionColor_Background->sizePolicy().hasHeightForWidth());
        SelectionColor_Background->setSizePolicy(sizePolicy);
        SelectionColor_Background->setProperty("color", QVariant(QColor(20, 20, 163)));
        SelectionColor_Background->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor")));
        SelectionColor_Background->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(SelectionColor_Background, 0, 1, 1, 1);

        checkMidColor = new Gui::PrefCheckBox(groupBoxColor);
        checkMidColor->setObjectName(QStringLiteral("checkMidColor"));
        checkMidColor->setProperty("prefEntry", QVariant(QByteArray("UseBackgroundColorMid")));
        checkMidColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(checkMidColor, 3, 0, 1, 1);

        backgroundColorTo = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorTo->setObjectName(QStringLiteral("backgroundColorTo"));
        backgroundColorTo->setProperty("color", QVariant(QColor(151, 151, 170)));
        backgroundColorTo->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor3")));
        backgroundColorTo->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorTo, 2, 1, 1, 1);

        backgroundColorMid = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorMid->setObjectName(QStringLiteral("backgroundColorMid"));
        backgroundColorMid->setEnabled(false);
        backgroundColorMid->setProperty("color", QVariant(QColor(111, 111, 147)));
        backgroundColorMid->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor4")));
        backgroundColorMid->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorMid, 3, 1, 1, 1);

        radioButtonGradient = new Gui::PrefRadioButton(groupBoxColor);
        radioButtonGradient->setObjectName(QStringLiteral("radioButtonGradient"));
        radioButtonGradient->setChecked(true);
        radioButtonGradient->setProperty("prefEntry", QVariant(QByteArray("Gradient")));
        radioButtonGradient->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(radioButtonGradient, 1, 0, 1, 1);

        backgroundColorFrom = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorFrom->setObjectName(QStringLiteral("backgroundColorFrom"));
        backgroundColorFrom->setProperty("color", QVariant(QColor(51, 51, 101)));
        backgroundColorFrom->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor2")));
        backgroundColorFrom->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorFrom, 1, 1, 1, 1);

        radioButtonSimple = new Gui::PrefRadioButton(groupBoxColor);
        radioButtonSimple->setObjectName(QStringLiteral("radioButtonSimple"));
        radioButtonSimple->setMinimumSize(QSize(240, 0));
        radioButtonSimple->setProperty("prefEntry", QVariant(QByteArray("Simple")));
        radioButtonSimple->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(radioButtonSimple, 0, 0, 1, 1);


        gridLayout2->addLayout(_4, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxColor, 1, 0, 1, 1);

        spacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer_3, 2, 0, 1, 1);

        QWidget::setTabOrder(checkBoxPreselection, HighlightColor);
        QWidget::setTabOrder(HighlightColor, checkBoxSelection);
        QWidget::setTabOrder(checkBoxSelection, SelectionColor);
        QWidget::setTabOrder(SelectionColor, spinPickRadius);
        QWidget::setTabOrder(spinPickRadius, radioButtonSimple);
        QWidget::setTabOrder(radioButtonSimple, SelectionColor_Background);
        QWidget::setTabOrder(SelectionColor_Background, radioButtonGradient);
        QWidget::setTabOrder(radioButtonGradient, backgroundColorFrom);
        QWidget::setTabOrder(backgroundColorFrom, backgroundColorTo);
        QWidget::setTabOrder(backgroundColorTo, checkMidColor);
        QWidget::setTabOrder(checkMidColor, backgroundColorMid);

        retranslateUi(Gui__Dialog__DlgSettingsViewColor);
        QObject::connect(checkBoxPreselection, SIGNAL(toggled(bool)), HighlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxSelection, SIGNAL(toggled(bool)), SelectionColor, SLOT(setEnabled(bool)));
        QObject::connect(checkMidColor, SIGNAL(toggled(bool)), backgroundColorMid, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonSimple, SIGNAL(toggled(bool)), SelectionColor_Background, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonGradient, SIGNAL(toggled(bool)), backgroundColorFrom, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonGradient, SIGNAL(toggled(bool)), backgroundColorTo, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonSimple, SIGNAL(toggled(bool)), checkMidColor, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsViewColor);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsViewColor)
    {
        Gui__Dialog__DlgSettingsViewColor->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Colors", 0));
        groupBoxSelection->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Selection", 0));
        SelectionColor->setText(QString());
        checkBoxPreselection->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Enable preselection highlighting", 0));
        HighlightColor->setText(QString());
        checkBoxSelection->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Enable selection highlighting", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Pick radius (px):", 0));
#ifndef QT_NO_TOOLTIP
        spinPickRadius->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Sets the area of confusion for picking elements in 3D view. Larger value make it easier to pick stuff, but will make some small features impossible to select.", 0));
#endif // QT_NO_TOOLTIP
        spinPickRadius->setProperty("prefEntry", QVariant(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "PickRadius", 0)));
        spinPickRadius->setProperty("prefPath", QVariant(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "View", 0)));
        groupBoxColor->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Background color", 0));
        SelectionColor_Background->setText(QString());
        checkMidColor->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Middle color", 0));
        backgroundColorTo->setText(QString());
        backgroundColorMid->setText(QString());
        radioButtonGradient->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Color gradient", 0));
        backgroundColorFrom->setText(QString());
        radioButtonSimple->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Simple color", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsViewColor: public Ui_DlgSettingsViewColor {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSVIEWCOLOR_H
