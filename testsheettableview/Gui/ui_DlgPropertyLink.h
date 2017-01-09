/********************************************************************************
** Form generated from reading UI file 'DlgPropertyLink.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROPERTYLINK_H
#define UI_DLGPROPERTYLINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgPropertyLink
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QCheckBox *checkObjectType;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgPropertyLink)
    {
        if (Gui__Dialog__DlgPropertyLink->objectName().isEmpty())
            Gui__Dialog__DlgPropertyLink->setObjectName(QStringLiteral("Gui__Dialog__DlgPropertyLink"));
        Gui__Dialog__DlgPropertyLink->resize(257, 428);
        gridLayout = new QGridLayout(Gui__Dialog__DlgPropertyLink);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(Gui__Dialog__DlgPropertyLink);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        checkObjectType = new QCheckBox(Gui__Dialog__DlgPropertyLink);
        checkObjectType->setObjectName(QStringLiteral("checkObjectType"));

        gridLayout->addWidget(checkObjectType, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgPropertyLink);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgPropertyLink);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgPropertyLink, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgPropertyLink, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgPropertyLink);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgPropertyLink)
    {
        Gui__Dialog__DlgPropertyLink->setWindowTitle(QApplication::translate("Gui::Dialog::DlgPropertyLink", "Link", 0));
        checkObjectType->setText(QApplication::translate("Gui::Dialog::DlgPropertyLink", "Show all object types", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgPropertyLink: public Ui_DlgPropertyLink {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROPERTYLINK_H
