/********************************************************************************
** Form generated from reading UI file 'DlgAuthorization.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGAUTHORIZATION_H
#define UI_DLGAUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_DlgAuthorization
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *username;
    QLabel *textLabel2;
    QLineEdit *password;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *siteDescription;

    void setupUi(QDialog *Gui__Dialog__DlgAuthorization)
    {
        if (Gui__Dialog__DlgAuthorization->objectName().isEmpty())
            Gui__Dialog__DlgAuthorization->setObjectName(QStringLiteral("Gui__Dialog__DlgAuthorization"));
        Gui__Dialog__DlgAuthorization->resize(284, 128);
        Gui__Dialog__DlgAuthorization->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgAuthorization);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1 = new QLabel(Gui__Dialog__DlgAuthorization);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        username = new QLineEdit(Gui__Dialog__DlgAuthorization);
        username->setObjectName(QStringLiteral("username"));

        gridLayout->addWidget(username, 1, 1, 1, 1);

        textLabel2 = new QLabel(Gui__Dialog__DlgAuthorization);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        password = new QLineEdit(Gui__Dialog__DlgAuthorization);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(21, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgAuthorization);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        label_4 = new QLabel(Gui__Dialog__DlgAuthorization);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        siteDescription = new QLabel(Gui__Dialog__DlgAuthorization);
        siteDescription->setObjectName(QStringLiteral("siteDescription"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        siteDescription->setFont(font);
        siteDescription->setWordWrap(true);

        gridLayout->addWidget(siteDescription, 0, 1, 1, 1);

        QWidget::setTabOrder(username, password);

        retranslateUi(Gui__Dialog__DlgAuthorization);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgAuthorization);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgAuthorization)
    {
        Gui__Dialog__DlgAuthorization->setWindowTitle(QApplication::translate("Gui::Dialog::DlgAuthorization", "Authorization", 0));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "Username:", 0));
        textLabel2->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "Password:", 0));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "Site:", 0));
        siteDescription->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "%1 at %2", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgAuthorization: public Ui_DlgAuthorization {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGAUTHORIZATION_H
