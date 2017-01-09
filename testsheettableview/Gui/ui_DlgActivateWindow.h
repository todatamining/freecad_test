/********************************************************************************
** Form generated from reading UI file 'DlgActivateWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACTIVATEWINDOW_H
#define UI_DLGACTIVATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgActivateWindow
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgActivateWindow)
    {
        if (Gui__Dialog__DlgActivateWindow->objectName().isEmpty())
            Gui__Dialog__DlgActivateWindow->setObjectName(QStringLiteral("Gui__Dialog__DlgActivateWindow"));
        Gui__Dialog__DlgActivateWindow->resize(341, 267);
        Gui__Dialog__DlgActivateWindow->setSizeGripEnabled(true);
        Gui__Dialog__DlgActivateWindow->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgActivateWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(Gui__Dialog__DlgActivateWindow);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgActivateWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgActivateWindow);
        QObject::connect(treeWidget, SIGNAL(activated(QModelIndex)), Gui__Dialog__DlgActivateWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgActivateWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgActivateWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgActivateWindow);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgActivateWindow)
    {
        Gui__Dialog__DlgActivateWindow->setWindowTitle(QApplication::translate("Gui::Dialog::DlgActivateWindow", "Choose Window", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgActivateWindow: public Ui_DlgActivateWindow {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGACTIVATEWINDOW_H
