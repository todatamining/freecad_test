/********************************************************************************
** Form generated from reading UI file 'DlgProjectInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROJECTINFORMATION_H
#define UI_DLGPROJECTINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

namespace Gui {
namespace Dialog {

class Ui_DlgProjectInformation
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxInfo;
    QGridLayout *gridLayout1;
    QLabel *textLabelName;
    QLineEdit *lineEditName;
    QLabel *textLabelPath;
    QLineEdit *lineEditPath;
    QLabel *textLabelUuid;
    QLineEdit *lineEditUuid;
    QLabel *textLabelCreator;
    QLineEdit *lineEditCreator;
    QLabel *textLabelCreateDate;
    QLineEdit *lineEditDate;
    QLabel *textLabelLastMod;
    QLineEdit *lineEditLastMod;
    QLabel *textLabelLastModDate;
    QLineEdit *lineEditLastModDate;
    QLabel *textLabelCompany;
    QLineEdit *lineEditCompany;
    QLabel *textLabelLicense;
    QComboBox *comboLicense;
    QLabel *textLabelLicenseURL;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditLicenseURL;
    QPushButton *pushButtonOpenURL;
    QLabel *textLabelComment;
    QTextEdit *textEditComment;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgProjectInformation)
    {
        if (Gui__Dialog__DlgProjectInformation->objectName().isEmpty())
            Gui__Dialog__DlgProjectInformation->setObjectName(QStringLiteral("Gui__Dialog__DlgProjectInformation"));
        Gui__Dialog__DlgProjectInformation->resize(597, 540);
        Gui__Dialog__DlgProjectInformation->setSizeGripEnabled(true);
        Gui__Dialog__DlgProjectInformation->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgProjectInformation);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBoxInfo = new QGroupBox(Gui__Dialog__DlgProjectInformation);
        groupBoxInfo->setObjectName(QStringLiteral("groupBoxInfo"));
        gridLayout1 = new QGridLayout(groupBoxInfo);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        textLabelName = new QLabel(groupBoxInfo);
        textLabelName->setObjectName(QStringLiteral("textLabelName"));
        textLabelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelName, 0, 0, 1, 1);

        lineEditName = new QLineEdit(groupBoxInfo);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setMinimumSize(QSize(0, 25));
        lineEditName->setReadOnly(true);

        gridLayout1->addWidget(lineEditName, 0, 1, 1, 1);

        textLabelPath = new QLabel(groupBoxInfo);
        textLabelPath->setObjectName(QStringLiteral("textLabelPath"));
        textLabelPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelPath, 1, 0, 1, 1);

        lineEditPath = new QLineEdit(groupBoxInfo);
        lineEditPath->setObjectName(QStringLiteral("lineEditPath"));
        lineEditPath->setMinimumSize(QSize(0, 25));
        lineEditPath->setReadOnly(true);

        gridLayout1->addWidget(lineEditPath, 1, 1, 1, 1);

        textLabelUuid = new QLabel(groupBoxInfo);
        textLabelUuid->setObjectName(QStringLiteral("textLabelUuid"));
        textLabelUuid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelUuid, 2, 0, 1, 1);

        lineEditUuid = new QLineEdit(groupBoxInfo);
        lineEditUuid->setObjectName(QStringLiteral("lineEditUuid"));
        lineEditUuid->setMinimumSize(QSize(0, 25));
        lineEditUuid->setReadOnly(true);

        gridLayout1->addWidget(lineEditUuid, 2, 1, 1, 1);

        textLabelCreator = new QLabel(groupBoxInfo);
        textLabelCreator->setObjectName(QStringLiteral("textLabelCreator"));
        textLabelCreator->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCreator, 3, 0, 1, 1);

        lineEditCreator = new QLineEdit(groupBoxInfo);
        lineEditCreator->setObjectName(QStringLiteral("lineEditCreator"));
        lineEditCreator->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditCreator, 3, 1, 1, 1);

        textLabelCreateDate = new QLabel(groupBoxInfo);
        textLabelCreateDate->setObjectName(QStringLiteral("textLabelCreateDate"));
        textLabelCreateDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCreateDate, 4, 0, 1, 1);

        lineEditDate = new QLineEdit(groupBoxInfo);
        lineEditDate->setObjectName(QStringLiteral("lineEditDate"));
        lineEditDate->setMinimumSize(QSize(0, 25));
        lineEditDate->setReadOnly(true);

        gridLayout1->addWidget(lineEditDate, 4, 1, 1, 1);

        textLabelLastMod = new QLabel(groupBoxInfo);
        textLabelLastMod->setObjectName(QStringLiteral("textLabelLastMod"));
        textLabelLastMod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLastMod, 5, 0, 1, 1);

        lineEditLastMod = new QLineEdit(groupBoxInfo);
        lineEditLastMod->setObjectName(QStringLiteral("lineEditLastMod"));
        lineEditLastMod->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditLastMod, 5, 1, 1, 1);

        textLabelLastModDate = new QLabel(groupBoxInfo);
        textLabelLastModDate->setObjectName(QStringLiteral("textLabelLastModDate"));
        textLabelLastModDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLastModDate, 6, 0, 1, 1);

        lineEditLastModDate = new QLineEdit(groupBoxInfo);
        lineEditLastModDate->setObjectName(QStringLiteral("lineEditLastModDate"));
        lineEditLastModDate->setMinimumSize(QSize(0, 25));
        lineEditLastModDate->setReadOnly(true);

        gridLayout1->addWidget(lineEditLastModDate, 6, 1, 1, 1);

        textLabelCompany = new QLabel(groupBoxInfo);
        textLabelCompany->setObjectName(QStringLiteral("textLabelCompany"));
        textLabelCompany->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCompany, 7, 0, 1, 1);

        lineEditCompany = new QLineEdit(groupBoxInfo);
        lineEditCompany->setObjectName(QStringLiteral("lineEditCompany"));
        lineEditCompany->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditCompany, 7, 1, 1, 1);

        textLabelLicense = new QLabel(groupBoxInfo);
        textLabelLicense->setObjectName(QStringLiteral("textLabelLicense"));
        textLabelLicense->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLicense, 8, 0, 1, 1);

        comboLicense = new QComboBox(groupBoxInfo);
        comboLicense->setObjectName(QStringLiteral("comboLicense"));

        gridLayout1->addWidget(comboLicense, 8, 1, 1, 1);

        textLabelLicenseURL = new QLabel(groupBoxInfo);
        textLabelLicenseURL->setObjectName(QStringLiteral("textLabelLicenseURL"));
        textLabelLicenseURL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLicenseURL, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEditLicenseURL = new QLineEdit(groupBoxInfo);
        lineEditLicenseURL->setObjectName(QStringLiteral("lineEditLicenseURL"));

        horizontalLayout_2->addWidget(lineEditLicenseURL);

        pushButtonOpenURL = new QPushButton(groupBoxInfo);
        pushButtonOpenURL->setObjectName(QStringLiteral("pushButtonOpenURL"));

        horizontalLayout_2->addWidget(pushButtonOpenURL);


        gridLayout1->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        textLabelComment = new QLabel(groupBoxInfo);
        textLabelComment->setObjectName(QStringLiteral("textLabelComment"));
        textLabelComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelComment, 10, 0, 1, 1);

        textEditComment = new QTextEdit(groupBoxInfo);
        textEditComment->setObjectName(QStringLiteral("textEditComment"));

        gridLayout1->addWidget(textEditComment, 10, 1, 2, 1);

        spacerItem = new QSpacerItem(91, 240, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 11, 0, 1, 1);


        gridLayout->addWidget(groupBoxInfo, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgProjectInformation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabelName->setBuddy(lineEditName);
        textLabelCreator->setBuddy(lineEditCreator);
        textLabelCreateDate->setBuddy(lineEditDate);
        textLabelLastMod->setBuddy(lineEditLastMod);
        textLabelLastModDate->setBuddy(lineEditLastModDate);
        textLabelCompany->setBuddy(lineEditCompany);
        textLabelComment->setBuddy(textEditComment);
#endif // QT_NO_SHORTCUT

        retranslateUi(Gui__Dialog__DlgProjectInformation);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgProjectInformation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgProjectInformation, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgProjectInformation);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgProjectInformation)
    {
        Gui__Dialog__DlgProjectInformation->setWindowTitle(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Project information", 0));
        groupBoxInfo->setTitle(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Information", 0));
        textLabelName->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&Name:", 0));
        textLabelPath->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Path:", 0));
        textLabelUuid->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "UUID:", 0));
        textLabelCreator->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Created &by:", 0));
        textLabelCreateDate->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Creation &date:", 0));
        textLabelLastMod->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&Last modified by:", 0));
        textLabelLastModDate->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Last &modification date:", 0));
        textLabelCompany->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Com&pany:", 0));
        textLabelLicense->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "License information:", 0));
        textLabelLicenseURL->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "License URL", 0));
        pushButtonOpenURL->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Open in browser", 0));
        textLabelComment->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Commen&t:", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgProjectInformation: public Ui_DlgProjectInformation {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROJECTINFORMATION_H
