/********************************************************************************
** Form generated from reading UI file 'DlgGeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGGENERAL_H
#define UI_DLGGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgGeneral
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QGroupBox *GroupBox10;
    QGridLayout *gridLayout2;
    Gui::PrefCheckBox *SplashScreen;
    QGridLayout *gridLayout3;
    QLabel *tabReportLabel;
    QComboBox *AutoloadModuleCombo;
    Gui::PrefComboBox *AutoloadTabCombo;
    QLabel *autoModuleLabel;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout4;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_4;
    QComboBox *Languages;
    QGroupBox *GroupBox3;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *recentFileListLabel;
    QSpacerItem *spacerItem1;
    Gui::PrefSpinBox *RecentFiles;
    QHBoxLayout *hboxLayout2;
    QCheckBox *tiledBackground;
    QHBoxLayout *hboxLayout3;
    QLabel *styleSheetLabel;
    QComboBox *StyleSheets;
    QHBoxLayout *hboxLayout4;
    QLabel *windowStyleLabel;
    QComboBox *WindowStyle;
    QHBoxLayout *hboxLayout5;
    QLabel *iconSizeLabel;
    QComboBox *toolbarIconSize;

    void setupUi(QWidget *Gui__Dialog__DlgGeneral)
    {
        if (Gui__Dialog__DlgGeneral->objectName().isEmpty())
            Gui__Dialog__DlgGeneral->setObjectName(QStringLiteral("Gui__Dialog__DlgGeneral"));
        Gui__Dialog__DlgGeneral->resize(390, 553);
        gridLayout = new QGridLayout(Gui__Dialog__DlgGeneral);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GroupBox5 = new QGroupBox(Gui__Dialog__DlgGeneral);
        GroupBox5->setObjectName(QStringLiteral("GroupBox5"));
        gridLayout1 = new QGridLayout(GroupBox5);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        spacerItem = new QSpacerItem(352, 221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 3, 0, 1, 1);

        GroupBox10 = new QGroupBox(GroupBox5);
        GroupBox10->setObjectName(QStringLiteral("GroupBox10"));
        gridLayout2 = new QGridLayout(GroupBox10);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        SplashScreen = new Gui::PrefCheckBox(GroupBox10);
        SplashScreen->setObjectName(QStringLiteral("SplashScreen"));
        SplashScreen->setChecked(true);
        SplashScreen->setProperty("prefEntry", QVariant(QByteArray("ShowSplasher")));
        SplashScreen->setProperty("prefPath", QVariant(QByteArray("General")));

        gridLayout2->addWidget(SplashScreen, 1, 0, 1, 1);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        tabReportLabel = new QLabel(GroupBox10);
        tabReportLabel->setObjectName(QStringLiteral("tabReportLabel"));

        gridLayout3->addWidget(tabReportLabel, 1, 0, 1, 1);

        AutoloadModuleCombo = new QComboBox(GroupBox10);
        AutoloadModuleCombo->setObjectName(QStringLiteral("AutoloadModuleCombo"));

        gridLayout3->addWidget(AutoloadModuleCombo, 0, 1, 1, 1);

        AutoloadTabCombo = new Gui::PrefComboBox(GroupBox10);
        AutoloadTabCombo->setObjectName(QStringLiteral("AutoloadTabCombo"));
        AutoloadTabCombo->setProperty("prefEntry", QVariant(QByteArray("AutoloadTab")));
        AutoloadTabCombo->setProperty("prefPath", QVariant(QByteArray("General")));

        gridLayout3->addWidget(AutoloadTabCombo, 1, 1, 1, 1);

        autoModuleLabel = new QLabel(GroupBox10);
        autoModuleLabel->setObjectName(QStringLiteral("autoModuleLabel"));

        gridLayout3->addWidget(autoModuleLabel, 0, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox10, 2, 0, 1, 1);

        GroupBox7 = new QGroupBox(GroupBox5);
        GroupBox7->setObjectName(QStringLiteral("GroupBox7"));
        gridLayout4 = new QGridLayout(GroupBox7);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        TextLabel1_4 = new QLabel(GroupBox7);
        TextLabel1_4->setObjectName(QStringLiteral("TextLabel1_4"));

        hboxLayout->addWidget(TextLabel1_4);

        Languages = new QComboBox(GroupBox7);
        Languages->setObjectName(QStringLiteral("Languages"));

        hboxLayout->addWidget(Languages);


        gridLayout4->addLayout(hboxLayout, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox7, 0, 0, 1, 1);

        GroupBox3 = new QGroupBox(GroupBox5);
        GroupBox3->setObjectName(QStringLiteral("GroupBox3"));
        vboxLayout = new QVBoxLayout(GroupBox3);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        recentFileListLabel = new QLabel(GroupBox3);
        recentFileListLabel->setObjectName(QStringLiteral("recentFileListLabel"));

        hboxLayout1->addWidget(recentFileListLabel);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        RecentFiles = new Gui::PrefSpinBox(GroupBox3);
        RecentFiles->setObjectName(QStringLiteral("RecentFiles"));
        RecentFiles->setValue(4);
        RecentFiles->setProperty("prefEntry", QVariant(QByteArray("RecentFiles")));
        RecentFiles->setProperty("prefPath", QVariant(QByteArray("RecentFiles")));

        hboxLayout1->addWidget(RecentFiles);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        tiledBackground = new QCheckBox(GroupBox3);
        tiledBackground->setObjectName(QStringLiteral("tiledBackground"));

        hboxLayout2->addWidget(tiledBackground);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        styleSheetLabel = new QLabel(GroupBox3);
        styleSheetLabel->setObjectName(QStringLiteral("styleSheetLabel"));

        hboxLayout3->addWidget(styleSheetLabel);

        StyleSheets = new QComboBox(GroupBox3);
        StyleSheets->setObjectName(QStringLiteral("StyleSheets"));

        hboxLayout3->addWidget(StyleSheets);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        windowStyleLabel = new QLabel(GroupBox3);
        windowStyleLabel->setObjectName(QStringLiteral("windowStyleLabel"));

        hboxLayout4->addWidget(windowStyleLabel);

        WindowStyle = new QComboBox(GroupBox3);
        WindowStyle->setObjectName(QStringLiteral("WindowStyle"));

        hboxLayout4->addWidget(WindowStyle);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        iconSizeLabel = new QLabel(GroupBox3);
        iconSizeLabel->setObjectName(QStringLiteral("iconSizeLabel"));

        hboxLayout5->addWidget(iconSizeLabel);

        toolbarIconSize = new QComboBox(GroupBox3);
        toolbarIconSize->setObjectName(QStringLiteral("toolbarIconSize"));

        hboxLayout5->addWidget(toolbarIconSize);


        vboxLayout->addLayout(hboxLayout5);


        gridLayout1->addWidget(GroupBox3, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        QWidget::setTabOrder(Languages, WindowStyle);
        QWidget::setTabOrder(WindowStyle, RecentFiles);
        QWidget::setTabOrder(RecentFiles, SplashScreen);

        retranslateUi(Gui__Dialog__DlgGeneral);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgGeneral);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgGeneral)
    {
        Gui__Dialog__DlgGeneral->setWindowTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "General", 0));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "General", 0));
        GroupBox10->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Start up", 0));
        SplashScreen->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Enable splash screen at start up", 0));
        tabReportLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Switch to tab of report window:", 0));
        autoModuleLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Auto load module after start up:", 0));
        GroupBox7->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Language", 0));
        TextLabel1_4->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Change language:", 0));
        GroupBox3->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Main window", 0));
        recentFileListLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Size of recent file list", 0));
        tiledBackground->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Enable tiled background", 0));
        styleSheetLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Style sheet:", 0));
        windowStyleLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Window style:", 0));
        iconSizeLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Size of toolbar icons:", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgGeneral: public Ui_DlgGeneral {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGGENERAL_H
