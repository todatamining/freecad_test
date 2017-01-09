/********************************************************************************
** Form generated from reading UI file 'DlgParameter.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARAMETER_H
#define UI_DLGPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>

namespace Gui {
namespace Dialog {

class Ui_DlgParameter
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonSaveToDisk;
    QPushButton *closeButton;
    QSplitter *splitter3;
    QComboBox *parameterSet;

    void setupUi(QDialog *Gui__Dialog__DlgParameter)
    {
        if (Gui__Dialog__DlgParameter->objectName().isEmpty())
            Gui__Dialog__DlgParameter->setObjectName(QStringLiteral("Gui__Dialog__DlgParameter"));
        Gui__Dialog__DlgParameter->resize(657, 558);
        Gui__Dialog__DlgParameter->setSizeGripEnabled(true);
        Gui__Dialog__DlgParameter->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgParameter);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(351, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonSaveToDisk = new QPushButton(Gui__Dialog__DlgParameter);
        buttonSaveToDisk->setObjectName(QStringLiteral("buttonSaveToDisk"));
        buttonSaveToDisk->setAutoDefault(true);

        hboxLayout->addWidget(buttonSaveToDisk);

        closeButton = new QPushButton(Gui__Dialog__DlgParameter);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setAutoDefault(true);

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        splitter3 = new QSplitter(Gui__Dialog__DlgParameter);
        splitter3->setObjectName(QStringLiteral("splitter3"));
        splitter3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(splitter3, 1, 0, 1, 1);

        parameterSet = new QComboBox(Gui__Dialog__DlgParameter);
        parameterSet->setObjectName(QStringLiteral("parameterSet"));

        gridLayout->addWidget(parameterSet, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgParameter);

        buttonSaveToDisk->setDefault(true);
        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgParameter);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgParameter)
    {
        Gui__Dialog__DlgParameter->setWindowTitle(QApplication::translate("Gui::Dialog::DlgParameter", "Parameter Editor", 0));
        buttonSaveToDisk->setText(QApplication::translate("Gui::Dialog::DlgParameter", "Save to disk", 0));
        buttonSaveToDisk->setShortcut(QApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", 0));
        closeButton->setText(QApplication::translate("Gui::Dialog::DlgParameter", "&Close", 0));
        closeButton->setShortcut(QApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgParameter: public Ui_DlgParameter {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPARAMETER_H
