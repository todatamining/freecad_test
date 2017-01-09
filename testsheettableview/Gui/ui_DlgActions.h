/********************************************************************************
** Form generated from reading UI file 'DlgActions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACTIONS_H
#define UI_DLGACTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgCustomActions
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout1;
    QTreeWidget *actionListWidget;
    QLabel *TextLabel1_3;
    QSpacerItem *spacerItem;
    QToolButton *buttonChoosePixmap;
    QLabel *TextLabel5_2;
    Gui::AccelLineEdit *actionAccel;
    QLabel *TextLabel1;
    QLineEdit *actionWhatsThis;
    QLabel *TextLabel2;
    QLineEdit *actionStatus;
    QLabel *TextLabel3_2;
    QLineEdit *actionToolTip;
    QLabel *TextLabel2_2;
    QLineEdit *actionMenu;
    QLabel *TextLabel3;
    QComboBox *actionMacros;
    QLabel *pixmapLabel;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QPushButton *buttonAddAction;
    QPushButton *buttonRemoveAction;
    QPushButton *buttonReplaceAction;

    void setupUi(QWidget *Gui__Dialog__DlgCustomActions)
    {
        if (Gui__Dialog__DlgCustomActions->objectName().isEmpty())
            Gui__Dialog__DlgCustomActions->setObjectName(QStringLiteral("Gui__Dialog__DlgCustomActions"));
        Gui__Dialog__DlgCustomActions->resize(523, 383);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomActions);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GroupBox7 = new QGroupBox(Gui__Dialog__DlgCustomActions);
        GroupBox7->setObjectName(QStringLiteral("GroupBox7"));
        gridLayout1 = new QGridLayout(GroupBox7);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        actionListWidget = new QTreeWidget(GroupBox7);
        actionListWidget->setObjectName(QStringLiteral("actionListWidget"));
        actionListWidget->setMaximumSize(QSize(150, 16777215));
        actionListWidget->setRootIsDecorated(false);

        gridLayout1->addWidget(actionListWidget, 0, 0, 9, 1);

        TextLabel1_3 = new QLabel(GroupBox7);
        TextLabel1_3->setObjectName(QStringLiteral("TextLabel1_3"));

        gridLayout1->addWidget(TextLabel1_3, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 6, 4, 1, 2);

        buttonChoosePixmap = new QToolButton(GroupBox7);
        buttonChoosePixmap->setObjectName(QStringLiteral("buttonChoosePixmap"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonChoosePixmap->sizePolicy().hasHeightForWidth());
        buttonChoosePixmap->setSizePolicy(sizePolicy);
        buttonChoosePixmap->setMinimumSize(QSize(40, 30));
        buttonChoosePixmap->setMaximumSize(QSize(40, 30));

        gridLayout1->addWidget(buttonChoosePixmap, 6, 2, 1, 1);

        TextLabel5_2 = new QLabel(GroupBox7);
        TextLabel5_2->setObjectName(QStringLiteral("TextLabel5_2"));

        gridLayout1->addWidget(TextLabel5_2, 6, 1, 1, 1);

        actionAccel = new Gui::AccelLineEdit(GroupBox7);
        actionAccel->setObjectName(QStringLiteral("actionAccel"));

        gridLayout1->addWidget(actionAccel, 5, 2, 1, 4);

        TextLabel1 = new QLabel(GroupBox7);
        TextLabel1->setObjectName(QStringLiteral("TextLabel1"));

        gridLayout1->addWidget(TextLabel1, 5, 1, 1, 1);

        actionWhatsThis = new QLineEdit(GroupBox7);
        actionWhatsThis->setObjectName(QStringLiteral("actionWhatsThis"));

        gridLayout1->addWidget(actionWhatsThis, 4, 2, 1, 4);

        TextLabel2 = new QLabel(GroupBox7);
        TextLabel2->setObjectName(QStringLiteral("TextLabel2"));

        gridLayout1->addWidget(TextLabel2, 4, 1, 1, 1);

        actionStatus = new QLineEdit(GroupBox7);
        actionStatus->setObjectName(QStringLiteral("actionStatus"));

        gridLayout1->addWidget(actionStatus, 3, 2, 1, 4);

        TextLabel3_2 = new QLabel(GroupBox7);
        TextLabel3_2->setObjectName(QStringLiteral("TextLabel3_2"));

        gridLayout1->addWidget(TextLabel3_2, 3, 1, 1, 1);

        actionToolTip = new QLineEdit(GroupBox7);
        actionToolTip->setObjectName(QStringLiteral("actionToolTip"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actionToolTip->sizePolicy().hasHeightForWidth());
        actionToolTip->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(actionToolTip, 2, 2, 1, 4);

        TextLabel2_2 = new QLabel(GroupBox7);
        TextLabel2_2->setObjectName(QStringLiteral("TextLabel2_2"));

        gridLayout1->addWidget(TextLabel2_2, 2, 1, 1, 1);

        actionMenu = new QLineEdit(GroupBox7);
        actionMenu->setObjectName(QStringLiteral("actionMenu"));

        gridLayout1->addWidget(actionMenu, 1, 2, 1, 4);

        TextLabel3 = new QLabel(GroupBox7);
        TextLabel3->setObjectName(QStringLiteral("TextLabel3"));

        gridLayout1->addWidget(TextLabel3, 1, 1, 1, 1);

        actionMacros = new QComboBox(GroupBox7);
        actionMacros->setObjectName(QStringLiteral("actionMacros"));

        gridLayout1->addWidget(actionMacros, 0, 2, 1, 4);

        pixmapLabel = new QLabel(GroupBox7);
        pixmapLabel->setObjectName(QStringLiteral("pixmapLabel"));
        pixmapLabel->setMinimumSize(QSize(40, 40));
        pixmapLabel->setMaximumSize(QSize(40, 40));
        pixmapLabel->setScaledContents(true);

        gridLayout1->addWidget(pixmapLabel, 6, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 7, 1, 1, 1);

        spacerItem2 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 8, 5, 1, 1);

        buttonAddAction = new QPushButton(GroupBox7);
        buttonAddAction->setObjectName(QStringLiteral("buttonAddAction"));

        gridLayout1->addWidget(buttonAddAction, 8, 1, 1, 1);

        buttonRemoveAction = new QPushButton(GroupBox7);
        buttonRemoveAction->setObjectName(QStringLiteral("buttonRemoveAction"));

        gridLayout1->addWidget(buttonRemoveAction, 8, 2, 1, 2);

        buttonReplaceAction = new QPushButton(GroupBox7);
        buttonReplaceAction->setObjectName(QStringLiteral("buttonReplaceAction"));

        gridLayout1->addWidget(buttonReplaceAction, 8, 4, 1, 1);


        gridLayout->addWidget(GroupBox7, 0, 0, 1, 1);

        QWidget::setTabOrder(actionMacros, actionMenu);
        QWidget::setTabOrder(actionMenu, actionToolTip);
        QWidget::setTabOrder(actionToolTip, actionStatus);
        QWidget::setTabOrder(actionStatus, actionWhatsThis);
        QWidget::setTabOrder(actionWhatsThis, actionAccel);
        QWidget::setTabOrder(actionAccel, buttonAddAction);
        QWidget::setTabOrder(buttonAddAction, buttonRemoveAction);

        retranslateUi(Gui__Dialog__DlgCustomActions);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomActions);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomActions)
    {
        Gui__Dialog__DlgCustomActions->setWindowTitle(QApplication::translate("Gui::Dialog::DlgCustomActions", "Macros", 0));
        GroupBox7->setTitle(QApplication::translate("Gui::Dialog::DlgCustomActions", "Setup Custom Macros", 0));
        TextLabel1_3->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Macro:", 0));
        buttonChoosePixmap->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "...", 0));
        TextLabel5_2->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Pixmap", 0));
        TextLabel1->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Accelerator:", 0));
        TextLabel2->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "What's this:", 0));
        TextLabel3_2->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Status text:", 0));
        TextLabel2_2->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Tool tip:", 0));
        TextLabel3->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Menu text:", 0));
        buttonAddAction->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Add", 0));
        buttonRemoveAction->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Remove", 0));
        buttonReplaceAction->setText(QApplication::translate("Gui::Dialog::DlgCustomActions", "Replace", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomActions: public Ui_DlgCustomActions {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGACTIONS_H
