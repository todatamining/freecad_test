/********************************************************************************
** Form generated from reading UI file 'DlgSettingsColorGradient.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSCOLORGRADIENT_H
#define UI_DLGSETTINGSCOLORGRADIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsColorGradient
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxModel;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel5;
    QComboBox *comboBoxModel;
    QSpacerItem *spacerItem;
    QGroupBox *buttonGroupStyle;
    QGridLayout *gridLayout1;
    QRadioButton *radioButtonZero;
    QRadioButton *radioButtonFlow;
    QGroupBox *groupBoxVisible;
    QHBoxLayout *hboxLayout2;
    QCheckBox *checkBoxGrayed;
    QCheckBox *checkBoxInvisible;
    QGroupBox *groupBoxRange;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout3;
    QLineEdit *floatLineEditMax;
    QLineEdit *floatLineEditMin;
    QLabel *textLabelMin;
    QLabel *textLabelMax;
    QGridLayout *gridLayout4;
    QSpinBox *spinBoxLabel;
    QSpinBox *spinBoxDecimals;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        if (Gui__Dialog__DlgSettingsColorGradient->objectName().isEmpty())
            Gui__Dialog__DlgSettingsColorGradient->setObjectName(QStringLiteral("Gui__Dialog__DlgSettingsColorGradient"));
        Gui__Dialog__DlgSettingsColorGradient->resize(361, 342);
        Gui__Dialog__DlgSettingsColorGradient->setSizeGripEnabled(true);
        Gui__Dialog__DlgSettingsColorGradient->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsColorGradient);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBoxModel = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxModel->setObjectName(QStringLiteral("groupBoxModel"));
        hboxLayout = new QHBoxLayout(groupBoxModel);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        textLabel5 = new QLabel(groupBoxModel);
        textLabel5->setObjectName(QStringLiteral("textLabel5"));

        hboxLayout1->addWidget(textLabel5);

        comboBoxModel = new QComboBox(groupBoxModel);
        comboBoxModel->setObjectName(QStringLiteral("comboBoxModel"));

        hboxLayout1->addWidget(comboBoxModel);

        spacerItem = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(hboxLayout1);


        gridLayout->addWidget(groupBoxModel, 0, 0, 1, 1);

        buttonGroupStyle = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        buttonGroupStyle->setObjectName(QStringLiteral("buttonGroupStyle"));
        gridLayout1 = new QGridLayout(buttonGroupStyle);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        radioButtonZero = new QRadioButton(buttonGroupStyle);
        radioButtonZero->setObjectName(QStringLiteral("radioButtonZero"));

        gridLayout1->addWidget(radioButtonZero, 0, 1, 1, 1);

        radioButtonFlow = new QRadioButton(buttonGroupStyle);
        radioButtonFlow->setObjectName(QStringLiteral("radioButtonFlow"));
        radioButtonFlow->setChecked(true);

        gridLayout1->addWidget(radioButtonFlow, 0, 0, 1, 1);


        gridLayout->addWidget(buttonGroupStyle, 1, 0, 1, 1);

        groupBoxVisible = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxVisible->setObjectName(QStringLiteral("groupBoxVisible"));
        hboxLayout2 = new QHBoxLayout(groupBoxVisible);
        hboxLayout2->setSpacing(0);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        checkBoxGrayed = new QCheckBox(groupBoxVisible);
        checkBoxGrayed->setObjectName(QStringLiteral("checkBoxGrayed"));

        hboxLayout2->addWidget(checkBoxGrayed);

        checkBoxInvisible = new QCheckBox(groupBoxVisible);
        checkBoxInvisible->setObjectName(QStringLiteral("checkBoxInvisible"));

        hboxLayout2->addWidget(checkBoxInvisible);


        gridLayout->addWidget(groupBoxVisible, 2, 0, 1, 1);

        groupBoxRange = new QGroupBox(Gui__Dialog__DlgSettingsColorGradient);
        groupBoxRange->setObjectName(QStringLiteral("groupBoxRange"));
        gridLayout2 = new QGridLayout(groupBoxRange);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        spacerItem1 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 0, 1, 1, 1);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        floatLineEditMax = new QLineEdit(groupBoxRange);
        floatLineEditMax->setObjectName(QStringLiteral("floatLineEditMax"));

        gridLayout3->addWidget(floatLineEditMax, 0, 1, 1, 1);

        floatLineEditMin = new QLineEdit(groupBoxRange);
        floatLineEditMin->setObjectName(QStringLiteral("floatLineEditMin"));

        gridLayout3->addWidget(floatLineEditMin, 1, 1, 1, 1);

        textLabelMin = new QLabel(groupBoxRange);
        textLabelMin->setObjectName(QStringLiteral("textLabelMin"));

        gridLayout3->addWidget(textLabelMin, 1, 0, 1, 1);

        textLabelMax = new QLabel(groupBoxRange);
        textLabelMax->setObjectName(QStringLiteral("textLabelMax"));

        gridLayout3->addWidget(textLabelMax, 0, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);

        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        spinBoxLabel = new QSpinBox(groupBoxRange);
        spinBoxLabel->setObjectName(QStringLiteral("spinBoxLabel"));

        gridLayout4->addWidget(spinBoxLabel, 0, 1, 1, 1);

        spinBoxDecimals = new QSpinBox(groupBoxRange);
        spinBoxDecimals->setObjectName(QStringLiteral("spinBoxDecimals"));
        spinBoxDecimals->setMaximum(6);
        spinBoxDecimals->setValue(2);

        gridLayout4->addWidget(spinBoxDecimals, 1, 1, 1, 1);

        textLabel1 = new QLabel(groupBoxRange);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout4->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBoxRange);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        gridLayout4->addWidget(textLabel1_2, 1, 0, 1, 1);


        gridLayout2->addLayout(gridLayout4, 0, 2, 1, 1);


        gridLayout->addWidget(groupBoxRange, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgSettingsColorGradient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel5->setBuddy(comboBoxModel);
        textLabelMin->setBuddy(floatLineEditMin);
        textLabelMax->setBuddy(floatLineEditMax);
        textLabel1->setBuddy(spinBoxLabel);
        textLabel1_2->setBuddy(spinBoxDecimals);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboBoxModel, radioButtonFlow);
        QWidget::setTabOrder(radioButtonFlow, checkBoxGrayed);
        QWidget::setTabOrder(checkBoxGrayed, checkBoxInvisible);
        QWidget::setTabOrder(checkBoxInvisible, floatLineEditMax);
        QWidget::setTabOrder(floatLineEditMax, floatLineEditMin);
        QWidget::setTabOrder(floatLineEditMin, spinBoxLabel);

        retranslateUi(Gui__Dialog__DlgSettingsColorGradient);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgSettingsColorGradient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgSettingsColorGradient, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsColorGradient);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgSettingsColorGradient)
    {
        Gui__Dialog__DlgSettingsColorGradient->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color-gradient settings", 0));
        groupBoxModel->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Color model", 0));
        textLabel5->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Gradient:", 0));
        comboBoxModel->clear();
        comboBoxModel->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "red-yellow-green-cyan-blue", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "blue-cyan-green-yellow-red", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "white-black", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "black-white", 0)
        );
        buttonGroupStyle->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Style", 0));
        radioButtonZero->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Zero", 0));
        radioButtonZero->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+Z", 0));
        radioButtonFlow->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Flow", 0));
        radioButtonFlow->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+F", 0));
        groupBoxVisible->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Visibility", 0));
        checkBoxGrayed->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out g&rayed", 0));
        checkBoxGrayed->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+R", 0));
        checkBoxInvisible->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Out &invisible", 0));
        checkBoxInvisible->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Alt+I", 0));
        groupBoxRange->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Parameter range", 0));
        textLabelMin->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Mi&nimum:", 0));
        textLabelMax->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "Ma&ximum:", 0));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Labels:", 0));
        textLabel1_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsColorGradient", "&Decimals:", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsColorGradient: public Ui_DlgSettingsColorGradient {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSCOLORGRADIENT_H
