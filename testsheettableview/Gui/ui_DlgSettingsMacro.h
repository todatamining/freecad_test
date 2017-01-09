/********************************************************************************
** Form generated from reading UI file 'DlgSettingsMacro.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSMACRO_H
#define UI_DLGSETTINGSMACRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/FileDialog.h"
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsMacro
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *PrefCheckBox_LocalEnv;
    QGroupBox *GroupBox6;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox4;
    QVBoxLayout *vboxLayout;
    Gui::PrefCheckBox *PConsoleCheckBox;
    Gui::PrefCheckBox *FileLogCheckBox;
    Gui::PrefFileChooser *MacroPath_2;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout2;
    Gui::PrefCheckBox *PrefCheckBox_RecordGui;
    Gui::PrefCheckBox *PrefCheckBox_GuiAsComment;
    QGroupBox *GroupBox8;
    QGridLayout *gridLayout3;
    Gui::PrefFileChooser *MacroPath;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsMacro)
    {
        if (Gui__Dialog__DlgSettingsMacro->objectName().isEmpty())
            Gui__Dialog__DlgSettingsMacro->setObjectName(QStringLiteral("Gui__Dialog__DlgSettingsMacro"));
        Gui__Dialog__DlgSettingsMacro->resize(391, 407);
        gridLayout_2 = new QGridLayout(Gui__Dialog__DlgSettingsMacro);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsMacro);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        PrefCheckBox_LocalEnv = new Gui::PrefCheckBox(groupBox);
        PrefCheckBox_LocalEnv->setObjectName(QStringLiteral("PrefCheckBox_LocalEnv"));
        PrefCheckBox_LocalEnv->setChecked(true);
        PrefCheckBox_LocalEnv->setProperty("prefEntry", QVariant(QByteArray("LocalEnvironment")));
        PrefCheckBox_LocalEnv->setProperty("prefPath", QVariant(QByteArray("Macro")));

        gridLayout->addWidget(PrefCheckBox_LocalEnv, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        GroupBox6 = new QGroupBox(Gui__Dialog__DlgSettingsMacro);
        GroupBox6->setObjectName(QStringLiteral("GroupBox6"));
        gridLayout1 = new QGridLayout(GroupBox6);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 3, 0, 1, 1);

        groupBox4 = new QGroupBox(GroupBox6);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        vboxLayout = new QVBoxLayout(groupBox4);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        PConsoleCheckBox = new Gui::PrefCheckBox(groupBox4);
        PConsoleCheckBox->setObjectName(QStringLiteral("PConsoleCheckBox"));
        PConsoleCheckBox->setChecked(true);
        PConsoleCheckBox->setProperty("prefEntry", QVariant(QByteArray("ScriptToPyConsole")));
        PConsoleCheckBox->setProperty("prefPath", QVariant(QByteArray("Macro")));

        vboxLayout->addWidget(PConsoleCheckBox);

        FileLogCheckBox = new Gui::PrefCheckBox(groupBox4);
        FileLogCheckBox->setObjectName(QStringLiteral("FileLogCheckBox"));
        FileLogCheckBox->setProperty("prefEntry", QVariant(QByteArray("ScriptToFile")));
        FileLogCheckBox->setProperty("prefPath", QVariant(QByteArray("Macro")));

        vboxLayout->addWidget(FileLogCheckBox);

        MacroPath_2 = new Gui::PrefFileChooser(groupBox4);
        MacroPath_2->setObjectName(QStringLiteral("MacroPath_2"));
        MacroPath_2->setProperty("prefEntry", QVariant(QByteArray("ScriptFile")));
        MacroPath_2->setProperty("prefPath", QVariant(QByteArray("Macro")));

        vboxLayout->addWidget(MacroPath_2);


        gridLayout1->addWidget(groupBox4, 2, 0, 1, 1);

        GroupBox7 = new QGroupBox(GroupBox6);
        GroupBox7->setObjectName(QStringLiteral("GroupBox7"));
        gridLayout2 = new QGridLayout(GroupBox7);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        PrefCheckBox_RecordGui = new Gui::PrefCheckBox(GroupBox7);
        PrefCheckBox_RecordGui->setObjectName(QStringLiteral("PrefCheckBox_RecordGui"));
        PrefCheckBox_RecordGui->setChecked(true);
        PrefCheckBox_RecordGui->setProperty("prefEntry", QVariant(QByteArray("RecordGui")));
        PrefCheckBox_RecordGui->setProperty("prefPath", QVariant(QByteArray("Macro")));

        gridLayout2->addWidget(PrefCheckBox_RecordGui, 0, 0, 1, 1);

        PrefCheckBox_GuiAsComment = new Gui::PrefCheckBox(GroupBox7);
        PrefCheckBox_GuiAsComment->setObjectName(QStringLiteral("PrefCheckBox_GuiAsComment"));
        PrefCheckBox_GuiAsComment->setChecked(true);
        PrefCheckBox_GuiAsComment->setProperty("prefEntry", QVariant(QByteArray("GuiAsComment")));
        PrefCheckBox_GuiAsComment->setProperty("prefPath", QVariant(QByteArray("Macro")));

        gridLayout2->addWidget(PrefCheckBox_GuiAsComment, 1, 0, 1, 1);


        gridLayout1->addWidget(GroupBox7, 1, 0, 1, 1);

        GroupBox8 = new QGroupBox(GroupBox6);
        GroupBox8->setObjectName(QStringLiteral("GroupBox8"));
        gridLayout3 = new QGridLayout(GroupBox8);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        MacroPath = new Gui::PrefFileChooser(GroupBox8);
        MacroPath->setObjectName(QStringLiteral("MacroPath"));
        MacroPath->setMode(Gui::FileChooser::Directory);
        MacroPath->setProperty("prefEntry", QVariant(QByteArray("MacroPath")));
        MacroPath->setProperty("prefPath", QVariant(QByteArray("Macro")));

        gridLayout3->addWidget(MacroPath, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox8, 0, 0, 1, 1);


        gridLayout_2->addWidget(GroupBox6, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgSettingsMacro);
        QObject::connect(PrefCheckBox_RecordGui, SIGNAL(toggled(bool)), PrefCheckBox_GuiAsComment, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsMacro);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsMacro)
    {
        Gui__Dialog__DlgSettingsMacro->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Macro", 0));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "General macro settings", 0));
        PrefCheckBox_LocalEnv->setText(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Run macros in local environment", 0));
        GroupBox6->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Macro recording settings", 0));
        groupBox4->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Logging Commands", 0));
        PConsoleCheckBox->setText(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Show script commands in python console", 0));
        FileLogCheckBox->setText(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Log all commands issued by menus to file:", 0));
        MacroPath_2->setFileName(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "FullScript.FCScript", 0));
        GroupBox7->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Gui commands", 0));
        PrefCheckBox_RecordGui->setText(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Recording GUI commands", 0));
        PrefCheckBox_GuiAsComment->setText(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Record as comment", 0));
        GroupBox8->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsMacro", "Macro path", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsMacro: public Ui_DlgSettingsMacro {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSMACRO_H
