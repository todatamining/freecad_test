/********************************************************************************
** Form generated from reading UI file 'DlgUnitsCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGUNITSCALCULATOR_H
#define UI_DLGUNITSCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "Gui/InputField.h"
#include "Gui/QuantitySpinBox.h"

namespace Gui {
namespace Dialog {

class Ui_DlgUnitCalculator
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    Gui::InputField *ValueInput;
    QLabel *label;
    Gui::InputField *UnitInput;
    QLabel *label_2;
    QLineEdit *ValueOutput;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    Gui::QuantitySpinBox *quantitySpinBox;
    QLabel *label_4;
    QComboBox *unitsBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Help;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Copy;
    QPushButton *pushButton_Close;

    void setupUi(QWidget *Gui__Dialog__DlgUnitCalculator)
    {
        if (Gui__Dialog__DlgUnitCalculator->objectName().isEmpty())
            Gui__Dialog__DlgUnitCalculator->setObjectName(QStringLiteral("Gui__Dialog__DlgUnitCalculator"));
        Gui__Dialog__DlgUnitCalculator->resize(425, 187);
        gridLayout = new QGridLayout(Gui__Dialog__DlgUnitCalculator);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ValueInput = new Gui::InputField(Gui__Dialog__DlgUnitCalculator);
        ValueInput->setObjectName(QStringLiteral("ValueInput"));
        ValueInput->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(ValueInput);

        label = new QLabel(Gui__Dialog__DlgUnitCalculator);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        UnitInput = new Gui::InputField(Gui__Dialog__DlgUnitCalculator);
        UnitInput->setObjectName(QStringLiteral("UnitInput"));
        UnitInput->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(UnitInput);

        label_2 = new QLabel(Gui__Dialog__DlgUnitCalculator);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ValueOutput = new QLineEdit(Gui__Dialog__DlgUnitCalculator);
        ValueOutput->setObjectName(QStringLiteral("ValueOutput"));
        ValueOutput->setMinimumSize(QSize(150, 0));
        ValueOutput->setReadOnly(true);

        horizontalLayout_2->addWidget(ValueOutput);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(Gui__Dialog__DlgUnitCalculator);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Gui__Dialog__DlgUnitCalculator);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        quantitySpinBox = new Gui::QuantitySpinBox(Gui__Dialog__DlgUnitCalculator);
        quantitySpinBox->setObjectName(QStringLiteral("quantitySpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quantitySpinBox->sizePolicy().hasHeightForWidth());
        quantitySpinBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(quantitySpinBox);

        label_4 = new QLabel(Gui__Dialog__DlgUnitCalculator);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        unitsBox = new QComboBox(Gui__Dialog__DlgUnitCalculator);
        unitsBox->setObjectName(QStringLiteral("unitsBox"));
        sizePolicy.setHeightForWidth(unitsBox->sizePolicy().hasHeightForWidth());
        unitsBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(unitsBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_Help = new QPushButton(Gui__Dialog__DlgUnitCalculator);
        pushButton_Help->setObjectName(QStringLiteral("pushButton_Help"));

        horizontalLayout->addWidget(pushButton_Help);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Copy = new QPushButton(Gui__Dialog__DlgUnitCalculator);
        pushButton_Copy->setObjectName(QStringLiteral("pushButton_Copy"));

        horizontalLayout->addWidget(pushButton_Copy);

        pushButton_Close = new QPushButton(Gui__Dialog__DlgUnitCalculator);
        pushButton_Close->setObjectName(QStringLiteral("pushButton_Close"));

        horizontalLayout->addWidget(pushButton_Close);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgUnitCalculator);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgUnitCalculator);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgUnitCalculator)
    {
        Gui__Dialog__DlgUnitCalculator->setWindowTitle(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Units calculator", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "as:", 0));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "=>", 0));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Quantity:", 0));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Units:", 0));
        pushButton_Help->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Help", 0));
        pushButton_Copy->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Copy", 0));
        pushButton_Close->setText(QApplication::translate("Gui::Dialog::DlgUnitCalculator", "Close", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgUnitCalculator: public Ui_DlgUnitCalculator {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGUNITSCALCULATOR_H
