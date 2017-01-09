/********************************************************************************
** Form generated from reading UI file 'DlgRunExternal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGRUNEXTERNAL_H
#define UI_DLGRUNEXTERNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgRunExternal
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *programName;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonAdvanced;
    QWidget *extensionWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *programPath;
    QPushButton *chooseProgram;
    QTextEdit *output;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonAccept;
    QPushButton *buttonDiscard;
    QPushButton *buttonAbort;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonHelp;

    void setupUi(QDialog *Gui__Dialog__DlgRunExternal)
    {
        if (Gui__Dialog__DlgRunExternal->objectName().isEmpty())
            Gui__Dialog__DlgRunExternal->setObjectName(QStringLiteral("Gui__Dialog__DlgRunExternal"));
        Gui__Dialog__DlgRunExternal->resize(387, 363);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gui__Dialog__DlgRunExternal->sizePolicy().hasHeightForWidth());
        Gui__Dialog__DlgRunExternal->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Gui__Dialog__DlgRunExternal);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        programName = new QLabel(Gui__Dialog__DlgRunExternal);
        programName->setObjectName(QStringLiteral("programName"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        programName->setFont(font);

        horizontalLayout->addWidget(programName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonAdvanced = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAdvanced->setObjectName(QStringLiteral("buttonAdvanced"));

        horizontalLayout->addWidget(buttonAdvanced);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        extensionWidget = new QWidget(Gui__Dialog__DlgRunExternal);
        extensionWidget->setObjectName(QStringLiteral("extensionWidget"));
        verticalLayout = new QVBoxLayout(extensionWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        programPath = new QLineEdit(extensionWidget);
        programPath->setObjectName(QStringLiteral("programPath"));

        hboxLayout->addWidget(programPath);

        chooseProgram = new QPushButton(extensionWidget);
        chooseProgram->setObjectName(QStringLiteral("chooseProgram"));

        hboxLayout->addWidget(chooseProgram);


        verticalLayout->addLayout(hboxLayout);

        output = new QTextEdit(extensionWidget);
        output->setObjectName(QStringLiteral("output"));

        verticalLayout->addWidget(output);


        gridLayout->addWidget(extensionWidget, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonAccept = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAccept->setObjectName(QStringLiteral("buttonAccept"));

        horizontalLayout_2->addWidget(buttonAccept);

        buttonDiscard = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonDiscard->setObjectName(QStringLiteral("buttonDiscard"));

        horizontalLayout_2->addWidget(buttonDiscard);

        buttonAbort = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonAbort->setObjectName(QStringLiteral("buttonAbort"));

        horizontalLayout_2->addWidget(buttonAbort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonHelp = new QPushButton(Gui__Dialog__DlgRunExternal);
        buttonHelp->setObjectName(QStringLiteral("buttonHelp"));

        horizontalLayout_2->addWidget(buttonHelp);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgRunExternal);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgRunExternal);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgRunExternal)
    {
        Gui__Dialog__DlgRunExternal->setWindowTitle(QApplication::translate("Gui::Dialog::DlgRunExternal", "Running external program", 0));
        programName->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "TextLabel", 0));
        buttonAdvanced->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "Advanced >>", 0));
        chooseProgram->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "...", 0));
        buttonAccept->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "Accept changes", 0));
        buttonDiscard->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "Discard changes", 0));
        buttonAbort->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "Abort program", 0));
        buttonHelp->setText(QApplication::translate("Gui::Dialog::DlgRunExternal", "Help", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgRunExternal: public Ui_DlgRunExternal {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGRUNEXTERNAL_H
