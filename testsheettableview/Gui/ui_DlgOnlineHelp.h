/********************************************************************************
** Form generated from reading UI file 'DlgOnlineHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGONLINEHELP_H
#define UI_DLGONLINEHELP_H

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

namespace Gui {
namespace Dialog {

class Ui_DlgOnlineHelp
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGroupBox *GroupBoxOther;
    QGridLayout *gridLayout1;
    QLabel *TextLabelURL;
    Gui::PrefFileChooser *prefStartPage;

    void setupUi(QWidget *Gui__Dialog__DlgOnlineHelp)
    {
        if (Gui__Dialog__DlgOnlineHelp->objectName().isEmpty())
            Gui__Dialog__DlgOnlineHelp->setObjectName(QStringLiteral("Gui__Dialog__DlgOnlineHelp"));
        Gui__Dialog__DlgOnlineHelp->resize(395, 440);
        gridLayout = new QGridLayout(Gui__Dialog__DlgOnlineHelp);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacerItem = new QSpacerItem(373, 291, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        GroupBoxOther = new QGroupBox(Gui__Dialog__DlgOnlineHelp);
        GroupBoxOther->setObjectName(QStringLiteral("GroupBoxOther"));
        gridLayout1 = new QGridLayout(GroupBoxOther);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        TextLabelURL = new QLabel(GroupBoxOther);
        TextLabelURL->setObjectName(QStringLiteral("TextLabelURL"));

        gridLayout1->addWidget(TextLabelURL, 0, 0, 1, 1);

        prefStartPage = new Gui::PrefFileChooser(GroupBoxOther);
        prefStartPage->setObjectName(QStringLiteral("prefStartPage"));
        prefStartPage->setProperty("prefEntry", QVariant(QByteArray("Startpage")));
        prefStartPage->setProperty("prefPath", QVariant(QByteArray("OnlineHelp")));

        gridLayout1->addWidget(prefStartPage, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBoxOther, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgOnlineHelp);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgOnlineHelp);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgOnlineHelp)
    {
        Gui__Dialog__DlgOnlineHelp->setWindowTitle(QApplication::translate("Gui::Dialog::DlgOnlineHelp", "On-line help", 0));
        GroupBoxOther->setTitle(QApplication::translate("Gui::Dialog::DlgOnlineHelp", "Help viewer", 0));
        TextLabelURL->setText(QApplication::translate("Gui::Dialog::DlgOnlineHelp", "Location of start page", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgOnlineHelp: public Ui_DlgOnlineHelp {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGONLINEHELP_H
