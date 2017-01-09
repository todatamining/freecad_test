/********************************************************************************
** Form generated from reading UI file 'DlgMacroExecute.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMACROEXECUTE_H
#define UI_DLGMACROEXECUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_DlgMacroExecute
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *MacroNameGroup;
    QGridLayout *gridLayout2;
    QTabWidget *tabMacroWidget;
    QWidget *userSpecificTab;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *userMacroListBox;
    QWidget *systemWideTag;
    QVBoxLayout *verticalLayout;
    QTreeWidget *systemMacroListBox;
    QLineEdit *LineEditMacroName;
    QGroupBox *DestinationGroup;
    QGridLayout *gridLayout3;
    Gui::FileChooser *fileChooser;
    QVBoxLayout *vboxLayout;
    QPushButton *executeButton;
    QPushButton *closeButton;
    QSpacerItem *spacerItem;
    QPushButton *createButton;
    QPushButton *deleteButton;
    QPushButton *editButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *Gui__Dialog__DlgMacroExecute)
    {
        if (Gui__Dialog__DlgMacroExecute->objectName().isEmpty())
            Gui__Dialog__DlgMacroExecute->setObjectName(QStringLiteral("Gui__Dialog__DlgMacroExecute"));
        Gui__Dialog__DlgMacroExecute->resize(640, 480);
        Gui__Dialog__DlgMacroExecute->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgMacroExecute);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        MacroNameGroup = new QGroupBox(Gui__Dialog__DlgMacroExecute);
        MacroNameGroup->setObjectName(QStringLiteral("MacroNameGroup"));
        gridLayout2 = new QGridLayout(MacroNameGroup);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        tabMacroWidget = new QTabWidget(MacroNameGroup);
        tabMacroWidget->setObjectName(QStringLiteral("tabMacroWidget"));
        tabMacroWidget->setTabPosition(QTabWidget::North);
        userSpecificTab = new QWidget();
        userSpecificTab->setObjectName(QStringLiteral("userSpecificTab"));
        verticalLayout_2 = new QVBoxLayout(userSpecificTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        userMacroListBox = new QTreeWidget(userSpecificTab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        userMacroListBox->setHeaderItem(__qtreewidgetitem);
        userMacroListBox->setObjectName(QStringLiteral("userMacroListBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userMacroListBox->sizePolicy().hasHeightForWidth());
        userMacroListBox->setSizePolicy(sizePolicy);
        userMacroListBox->setRootIsDecorated(false);

        verticalLayout_2->addWidget(userMacroListBox);

        tabMacroWidget->addTab(userSpecificTab, QString());
        systemWideTag = new QWidget();
        systemWideTag->setObjectName(QStringLiteral("systemWideTag"));
        verticalLayout = new QVBoxLayout(systemWideTag);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        systemMacroListBox = new QTreeWidget(systemWideTag);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        systemMacroListBox->setHeaderItem(__qtreewidgetitem1);
        systemMacroListBox->setObjectName(QStringLiteral("systemMacroListBox"));
        sizePolicy.setHeightForWidth(systemMacroListBox->sizePolicy().hasHeightForWidth());
        systemMacroListBox->setSizePolicy(sizePolicy);
        systemMacroListBox->setRootIsDecorated(false);

        verticalLayout->addWidget(systemMacroListBox);

        tabMacroWidget->addTab(systemWideTag, QString());

        gridLayout2->addWidget(tabMacroWidget, 1, 0, 1, 1);

        LineEditMacroName = new QLineEdit(MacroNameGroup);
        LineEditMacroName->setObjectName(QStringLiteral("LineEditMacroName"));
        LineEditMacroName->setEnabled(false);

        gridLayout2->addWidget(LineEditMacroName, 0, 0, 1, 1);


        gridLayout1->addWidget(MacroNameGroup, 0, 0, 1, 1);

        DestinationGroup = new QGroupBox(Gui__Dialog__DlgMacroExecute);
        DestinationGroup->setObjectName(QStringLiteral("DestinationGroup"));
        gridLayout3 = new QGridLayout(DestinationGroup);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        fileChooser = new Gui::FileChooser(DestinationGroup);
        fileChooser->setObjectName(QStringLiteral("fileChooser"));
        fileChooser->setFocusPolicy(Qt::StrongFocus);
        fileChooser->setMode(Gui::FileChooser::Directory);

        gridLayout3->addWidget(fileChooser, 0, 0, 1, 1);


        gridLayout1->addWidget(DestinationGroup, 1, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        executeButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        executeButton->setObjectName(QStringLiteral("executeButton"));
        executeButton->setEnabled(false);

        vboxLayout->addWidget(executeButton);

        closeButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        vboxLayout->addWidget(closeButton);

        spacerItem = new QSpacerItem(77, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        createButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setEnabled(true);

        vboxLayout->addWidget(createButton);

        deleteButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setEnabled(false);

        vboxLayout->addWidget(deleteButton);

        editButton = new QPushButton(Gui__Dialog__DlgMacroExecute);
        editButton->setObjectName(QStringLiteral("editButton"));

        vboxLayout->addWidget(editButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        gridLayout1->addLayout(vboxLayout, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(LineEditMacroName, executeButton);
        QWidget::setTabOrder(executeButton, closeButton);
        QWidget::setTabOrder(closeButton, createButton);
        QWidget::setTabOrder(createButton, deleteButton);
        QWidget::setTabOrder(deleteButton, editButton);
        QWidget::setTabOrder(editButton, fileChooser);

        retranslateUi(Gui__Dialog__DlgMacroExecute);
        QObject::connect(closeButton, SIGNAL(clicked()), Gui__Dialog__DlgMacroExecute, SLOT(reject()));
        QObject::connect(userMacroListBox, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), Gui__Dialog__DlgMacroExecute, SLOT(accept()));
        QObject::connect(systemMacroListBox, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), Gui__Dialog__DlgMacroExecute, SLOT(accept()));
        QObject::connect(executeButton, SIGNAL(clicked()), Gui__Dialog__DlgMacroExecute, SLOT(accept()));

        tabMacroWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgMacroExecute);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgMacroExecute)
    {
        Gui__Dialog__DlgMacroExecute->setWindowTitle(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Execute macro", 0));
        MacroNameGroup->setTitle(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Macro name:", 0));
        tabMacroWidget->setTabText(tabMacroWidget->indexOf(userSpecificTab), QApplication::translate("Gui::Dialog::DlgMacroExecute", "User macros", 0));
        tabMacroWidget->setTabText(tabMacroWidget->indexOf(systemWideTag), QApplication::translate("Gui::Dialog::DlgMacroExecute", "System macros", 0));
        DestinationGroup->setTitle(QApplication::translate("Gui::Dialog::DlgMacroExecute", "User macros location:", 0));
        executeButton->setText(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Execute", 0));
        closeButton->setText(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Close", 0));
        createButton->setText(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Create", 0));
        deleteButton->setText(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Delete", 0));
        editButton->setText(QApplication::translate("Gui::Dialog::DlgMacroExecute", "Edit", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgMacroExecute: public Ui_DlgMacroExecute {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGMACROEXECUTE_H
