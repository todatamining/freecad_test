/********************************************************************************
** Form generated from reading UI file 'DlgChooseIcon.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCHOOSEICON_H
#define UI_DLGCHOOSEICON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_DlgChooseIcon
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgChooseIcon)
    {
        if (Gui__Dialog__DlgChooseIcon->objectName().isEmpty())
            Gui__Dialog__DlgChooseIcon->setObjectName(QStringLiteral("Gui__Dialog__DlgChooseIcon"));
        Gui__Dialog__DlgChooseIcon->resize(430, 370);
        gridLayout = new QGridLayout(Gui__Dialog__DlgChooseIcon);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(Gui__Dialog__DlgChooseIcon);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGridSize(QSize(50, 50));
        listWidget->setViewMode(QListView::IconMode);
        listWidget->setUniformItemSizes(false);

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QPushButton(Gui__Dialog__DlgChooseIcon);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout->addWidget(addButton);

        spacerItem = new QSpacerItem(38, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgChooseIcon);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgChooseIcon);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgChooseIcon, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgChooseIcon, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgChooseIcon);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgChooseIcon)
    {
        Gui__Dialog__DlgChooseIcon->setWindowTitle(QApplication::translate("Gui::Dialog::DlgChooseIcon", "Choose Icon", 0));
        addButton->setText(QApplication::translate("Gui::Dialog::DlgChooseIcon", "Icon folders...", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgChooseIcon: public Ui_DlgChooseIcon {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGCHOOSEICON_H
