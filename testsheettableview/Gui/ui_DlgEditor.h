/********************************************************************************
** Form generated from reading UI file 'DlgEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEDITOR_H
#define UI_DLGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgEditorSettings
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox2;
    QVBoxLayout *vboxLayout;
    Gui::PrefCheckBox *EnableLineNumber;
    Gui::PrefCheckBox *EnableFolding;
    QSpacerItem *spacerItem;
    QGroupBox *groupBoxIndent;
    QGridLayout *gridLayout1;
    Gui::PrefRadioButton *radioSpaces;
    QLabel *textLabel1;
    Gui::PrefSpinBox *tabSize;
    QLabel *textLabel2;
    Gui::PrefSpinBox *indentSize;
    Gui::PrefRadioButton *radioTabs;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout2;
    Gui::PrefSpinBox *fontSize;
    QTreeWidget *displayItems;
    Gui::ColorButton *colorButton;
    QLabel *TextLabel3;
    QLabel *TextLabel4;
    QComboBox *fontFamily;
    QLabel *label;
    QTextEdit *textEdit1;

    void setupUi(QWidget *Gui__Dialog__DlgEditorSettings)
    {
        if (Gui__Dialog__DlgEditorSettings->objectName().isEmpty())
            Gui__Dialog__DlgEditorSettings->setObjectName(QStringLiteral("Gui__Dialog__DlgEditorSettings"));
        Gui__Dialog__DlgEditorSettings->resize(494, 553);
        gridLayout = new QGridLayout(Gui__Dialog__DlgEditorSettings);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GroupBox2 = new QGroupBox(Gui__Dialog__DlgEditorSettings);
        GroupBox2->setObjectName(QStringLiteral("GroupBox2"));
        vboxLayout = new QVBoxLayout(GroupBox2);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        EnableLineNumber = new Gui::PrefCheckBox(GroupBox2);
        EnableLineNumber->setObjectName(QStringLiteral("EnableLineNumber"));
        EnableLineNumber->setFocusPolicy(Qt::TabFocus);
        EnableLineNumber->setChecked(true);
        EnableLineNumber->setProperty("prefEntry", QVariant(QByteArray("EnableLineNumber")));
        EnableLineNumber->setProperty("prefPath", QVariant(QByteArray("Editor")));

        vboxLayout->addWidget(EnableLineNumber);

        EnableFolding = new Gui::PrefCheckBox(GroupBox2);
        EnableFolding->setObjectName(QStringLiteral("EnableFolding"));
        EnableFolding->setChecked(true);
        EnableFolding->setProperty("prefEntry", QVariant(QByteArray("EnableFolding")));
        EnableFolding->setProperty("prefPath", QVariant(QByteArray("Editor")));

        vboxLayout->addWidget(EnableFolding);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        vboxLayout->addItem(spacerItem);


        gridLayout->addWidget(GroupBox2, 1, 0, 1, 1);

        groupBoxIndent = new QGroupBox(Gui__Dialog__DlgEditorSettings);
        groupBoxIndent->setObjectName(QStringLiteral("groupBoxIndent"));
        gridLayout1 = new QGridLayout(groupBoxIndent);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        radioSpaces = new Gui::PrefRadioButton(groupBoxIndent);
        radioSpaces->setObjectName(QStringLiteral("radioSpaces"));
        radioSpaces->setProperty("prefEntry", QVariant(QByteArray("Spaces")));
        radioSpaces->setProperty("prefPath", QVariant(QByteArray("Editor")));

        gridLayout1->addWidget(radioSpaces, 3, 0, 1, 2);

        textLabel1 = new QLabel(groupBoxIndent);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        tabSize = new Gui::PrefSpinBox(groupBoxIndent);
        tabSize->setObjectName(QStringLiteral("tabSize"));
        tabSize->setValue(4);
        tabSize->setProperty("prefEntry", QVariant(QByteArray("TabSize")));
        tabSize->setProperty("prefPath", QVariant(QByteArray("Editor")));

        gridLayout1->addWidget(tabSize, 0, 1, 1, 1);

        textLabel2 = new QLabel(groupBoxIndent);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout1->addWidget(textLabel2, 1, 0, 1, 1);

        indentSize = new Gui::PrefSpinBox(groupBoxIndent);
        indentSize->setObjectName(QStringLiteral("indentSize"));
        indentSize->setValue(4);
        indentSize->setProperty("prefEntry", QVariant(QByteArray("IndentSize")));
        indentSize->setProperty("prefPath", QVariant(QByteArray("Editor")));

        gridLayout1->addWidget(indentSize, 1, 1, 1, 1);

        radioTabs = new Gui::PrefRadioButton(groupBoxIndent);
        radioTabs->setObjectName(QStringLiteral("radioTabs"));
        radioTabs->setChecked(true);
        radioTabs->setProperty("prefEntry", QVariant(QByteArray("Tabs")));
        radioTabs->setProperty("prefPath", QVariant(QByteArray("Editor")));

        gridLayout1->addWidget(radioTabs, 2, 0, 1, 2);


        gridLayout->addWidget(groupBoxIndent, 1, 1, 1, 1);

        GroupBox5 = new QGroupBox(Gui__Dialog__DlgEditorSettings);
        GroupBox5->setObjectName(QStringLiteral("GroupBox5"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupBox5->sizePolicy().hasHeightForWidth());
        GroupBox5->setSizePolicy(sizePolicy);
        gridLayout2 = new QGridLayout(GroupBox5);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        fontSize = new Gui::PrefSpinBox(GroupBox5);
        fontSize->setObjectName(QStringLiteral("fontSize"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontSize->sizePolicy().hasHeightForWidth());
        fontSize->setSizePolicy(sizePolicy1);
        fontSize->setMinimum(1);
        fontSize->setValue(10);
        fontSize->setProperty("prefEntry", QVariant(QByteArray("FontSize")));
        fontSize->setProperty("prefPath", QVariant(QByteArray("Editor")));

        gridLayout2->addWidget(fontSize, 1, 2, 1, 1);

        displayItems = new QTreeWidget(GroupBox5);
        displayItems->setObjectName(QStringLiteral("displayItems"));
        displayItems->setRootIsDecorated(false);

        gridLayout2->addWidget(displayItems, 0, 0, 4, 1);

        colorButton = new Gui::ColorButton(GroupBox5);
        colorButton->setObjectName(QStringLiteral("colorButton"));
        colorButton->setMinimumSize(QSize(140, 0));
        colorButton->setFocusPolicy(Qt::TabFocus);

        gridLayout2->addWidget(colorButton, 4, 0, 1, 1);

        TextLabel3 = new QLabel(GroupBox5);
        TextLabel3->setObjectName(QStringLiteral("TextLabel3"));

        gridLayout2->addWidget(TextLabel3, 0, 1, 1, 1);

        TextLabel4 = new QLabel(GroupBox5);
        TextLabel4->setObjectName(QStringLiteral("TextLabel4"));

        gridLayout2->addWidget(TextLabel4, 1, 1, 1, 1);

        fontFamily = new QComboBox(GroupBox5);
        fontFamily->setObjectName(QStringLiteral("fontFamily"));
        sizePolicy1.setHeightForWidth(fontFamily->sizePolicy().hasHeightForWidth());
        fontFamily->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(fontFamily, 0, 2, 1, 1);

        label = new QLabel(GroupBox5);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(label, 2, 1, 1, 2);

        textEdit1 = new QTextEdit(GroupBox5);
        textEdit1->setObjectName(QStringLiteral("textEdit1"));
        textEdit1->setTabStopWidth(40);

        gridLayout2->addWidget(textEdit1, 3, 1, 2, 2);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 2);

        QWidget::setTabOrder(fontFamily, EnableLineNumber);
        QWidget::setTabOrder(EnableLineNumber, EnableFolding);
        QWidget::setTabOrder(EnableFolding, tabSize);
        QWidget::setTabOrder(tabSize, indentSize);
        QWidget::setTabOrder(indentSize, colorButton);

        retranslateUi(Gui__Dialog__DlgEditorSettings);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgEditorSettings);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgEditorSettings)
    {
        Gui__Dialog__DlgEditorSettings->setWindowTitle(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Editor", 0));
        GroupBox2->setTitle(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Options", 0));
        EnableLineNumber->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Enable line numbers", 0));
        EnableFolding->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Enable folding", 0));
        groupBoxIndent->setTitle(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Indentation", 0));
        radioSpaces->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Insert spaces", 0));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Tab size:", 0));
        textLabel2->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Indent size:", 0));
        radioTabs->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Keep tabs", 0));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Display Items", 0));
        colorButton->setText(QString());
        TextLabel3->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Family:", 0));
        TextLabel4->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Size:", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgEditorSettings", "Preview:", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgEditorSettings: public Ui_DlgEditorSettings {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGEDITOR_H
