/********************************************************************************
** Form generated from reading UI file 'DlgKeyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGKEYBOARD_H
#define UI_DLGKEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgCustomKeyboard
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *textLabelDescriptionHeader;
    QLabel *textLabelDescription;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QLabel *TextLabelCategory;
    QComboBox *categoryBox;
    QLabel *TextLabelCommands;
    QTreeWidget *commandTreeWidget;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabelShortcut;
    Gui::AccelLineEdit *accelLineEditShortcut;
    QLabel *textLabelNewShortcut;
    Gui::AccelLineEdit *editShortcut;
    QLabel *textLabelAssigned;
    QTreeWidget *assignedTreeWidget;
    QVBoxLayout *vboxLayout3;
    QPushButton *buttonAssign;
    QPushButton *buttonClear;
    QPushButton *buttonReset;
    QPushButton *buttonResetAll;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        if (Gui__Dialog__DlgCustomKeyboard->objectName().isEmpty())
            Gui__Dialog__DlgCustomKeyboard->setObjectName(QStringLiteral("Gui__Dialog__DlgCustomKeyboard"));
        Gui__Dialog__DlgCustomKeyboard->resize(578, 344);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomKeyboard);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        textLabelDescriptionHeader = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelDescriptionHeader->setObjectName(QStringLiteral("textLabelDescriptionHeader"));

        vboxLayout->addWidget(textLabelDescriptionHeader);

        textLabelDescription = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelDescription->setObjectName(QStringLiteral("textLabelDescription"));

        vboxLayout->addWidget(textLabelDescription);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        TextLabelCategory = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        TextLabelCategory->setObjectName(QStringLiteral("TextLabelCategory"));

        vboxLayout1->addWidget(TextLabelCategory);

        categoryBox = new QComboBox(Gui__Dialog__DlgCustomKeyboard);
        categoryBox->setObjectName(QStringLiteral("categoryBox"));

        vboxLayout1->addWidget(categoryBox);

        TextLabelCommands = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        TextLabelCommands->setObjectName(QStringLiteral("TextLabelCommands"));

        vboxLayout1->addWidget(TextLabelCommands);

        commandTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomKeyboard);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        commandTreeWidget->setHeaderItem(__qtreewidgetitem);
        commandTreeWidget->setObjectName(QStringLiteral("commandTreeWidget"));
        commandTreeWidget->setMinimumSize(QSize(220, 0));
        commandTreeWidget->setRootIsDecorated(false);

        vboxLayout1->addWidget(commandTreeWidget);


        gridLayout->addLayout(vboxLayout1, 0, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        textLabelShortcut = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelShortcut->setObjectName(QStringLiteral("textLabelShortcut"));

        vboxLayout2->addWidget(textLabelShortcut);

        accelLineEditShortcut = new Gui::AccelLineEdit(Gui__Dialog__DlgCustomKeyboard);
        accelLineEditShortcut->setObjectName(QStringLiteral("accelLineEditShortcut"));
        accelLineEditShortcut->setEnabled(false);

        vboxLayout2->addWidget(accelLineEditShortcut);

        textLabelNewShortcut = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelNewShortcut->setObjectName(QStringLiteral("textLabelNewShortcut"));

        vboxLayout2->addWidget(textLabelNewShortcut);

        editShortcut = new Gui::AccelLineEdit(Gui__Dialog__DlgCustomKeyboard);
        editShortcut->setObjectName(QStringLiteral("editShortcut"));

        vboxLayout2->addWidget(editShortcut);

        textLabelAssigned = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelAssigned->setObjectName(QStringLiteral("textLabelAssigned"));

        vboxLayout2->addWidget(textLabelAssigned);

        assignedTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomKeyboard);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        assignedTreeWidget->setHeaderItem(__qtreewidgetitem1);
        assignedTreeWidget->setObjectName(QStringLiteral("assignedTreeWidget"));
        assignedTreeWidget->setEnabled(false);
        assignedTreeWidget->setMinimumSize(QSize(220, 0));
        assignedTreeWidget->setRootIsDecorated(false);

        vboxLayout2->addWidget(assignedTreeWidget);


        gridLayout->addLayout(vboxLayout2, 0, 1, 1, 1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        buttonAssign = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonAssign->setObjectName(QStringLiteral("buttonAssign"));

        vboxLayout3->addWidget(buttonAssign);

        buttonClear = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonClear->setObjectName(QStringLiteral("buttonClear"));

        vboxLayout3->addWidget(buttonClear);

        buttonReset = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonReset->setObjectName(QStringLiteral("buttonReset"));

        vboxLayout3->addWidget(buttonReset);

        buttonResetAll = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonResetAll->setObjectName(QStringLiteral("buttonResetAll"));

        vboxLayout3->addWidget(buttonResetAll);

        spacerItem1 = new QSpacerItem(41, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem1);


        gridLayout->addLayout(vboxLayout3, 0, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabelCategory->setBuddy(categoryBox);
        TextLabelCommands->setBuddy(commandTreeWidget);
        textLabelNewShortcut->setBuddy(editShortcut);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(categoryBox, commandTreeWidget);
        QWidget::setTabOrder(commandTreeWidget, accelLineEditShortcut);
        QWidget::setTabOrder(accelLineEditShortcut, buttonAssign);
        QWidget::setTabOrder(buttonAssign, buttonReset);
        QWidget::setTabOrder(buttonReset, buttonResetAll);

        retranslateUi(Gui__Dialog__DlgCustomKeyboard);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomKeyboard);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        Gui__Dialog__DlgCustomKeyboard->setWindowTitle(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Keyboard", 0));
        textLabelDescriptionHeader->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Description:", 0));
        textLabelDescription->setText(QString());
        TextLabelCategory->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Category:", 0));
        TextLabelCommands->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "C&ommands:", 0));
        textLabelShortcut->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Current shortcut:", 0));
        textLabelNewShortcut->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Press &new shortcut:", 0));
        textLabelAssigned->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Currently assigned to:", 0));
        buttonAssign->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Assign", 0));
        buttonAssign->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+A", 0));
        buttonClear->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Clear", 0));
        buttonReset->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Reset", 0));
        buttonReset->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+R", 0));
        buttonResetAll->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Re&set All", 0));
        buttonResetAll->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+S", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomKeyboard: public Ui_DlgCustomKeyboard {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGKEYBOARD_H
