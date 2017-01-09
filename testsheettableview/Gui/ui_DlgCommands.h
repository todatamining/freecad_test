/********************************************************************************
** Form generated from reading UI file 'DlgCommands.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCOMMANDS_H
#define UI_DLGCOMMANDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgCustomCommands
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *commandTreeWidget;
    QLabel *textLabel;
    QTreeWidget *categoryTreeWidget;

    void setupUi(QWidget *Gui__Dialog__DlgCustomCommands)
    {
        if (Gui__Dialog__DlgCustomCommands->objectName().isEmpty())
            Gui__Dialog__DlgCustomCommands->setObjectName(QStringLiteral("Gui__Dialog__DlgCustomCommands"));
        Gui__Dialog__DlgCustomCommands->resize(459, 286);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomCommands);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        commandTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomCommands);
        commandTreeWidget->setObjectName(QStringLiteral("commandTreeWidget"));
        commandTreeWidget->setRootIsDecorated(false);
        commandTreeWidget->setUniformRowHeights(true);

        gridLayout->addWidget(commandTreeWidget, 0, 1, 1, 1);

        textLabel = new QLabel(Gui__Dialog__DlgCustomCommands);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setMinimumSize(QSize(0, 0));
        textLabel->setMaximumSize(QSize(32767, 32767));

        gridLayout->addWidget(textLabel, 1, 0, 1, 2);

        categoryTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomCommands);
        categoryTreeWidget->setObjectName(QStringLiteral("categoryTreeWidget"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoryTreeWidget->sizePolicy().hasHeightForWidth());
        categoryTreeWidget->setSizePolicy(sizePolicy);
        categoryTreeWidget->setMaximumSize(QSize(150, 16777215));
        categoryTreeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(categoryTreeWidget, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgCustomCommands);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomCommands);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomCommands)
    {
        Gui__Dialog__DlgCustomCommands->setWindowTitle(QApplication::translate("Gui::Dialog::DlgCustomCommands", "Commands", 0));
        textLabel->setText(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomCommands: public Ui_DlgCustomCommands {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGCOMMANDS_H
