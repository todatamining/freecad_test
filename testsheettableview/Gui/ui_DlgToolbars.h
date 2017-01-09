/********************************************************************************
** Form generated from reading UI file 'DlgToolbars.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTOOLBARS_H
#define UI_DLGTOOLBARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgCustomToolbars
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *moveActionRightButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *moveActionLeftButton;
    QPushButton *moveActionDownButton;
    QPushButton *moveActionUpButton;
    QVBoxLayout *vboxLayout;
    QComboBox *categoryBox;
    QTreeWidget *commandTreeWidget;
    QVBoxLayout *vboxLayout1;
    QComboBox *workbenchBox;
    QTreeWidget *toolbarTreeWidget;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *newButton;
    QPushButton *renameButton;
    QPushButton *deleteButton;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *Gui__Dialog__DlgCustomToolbars)
    {
        if (Gui__Dialog__DlgCustomToolbars->objectName().isEmpty())
            Gui__Dialog__DlgCustomToolbars->setObjectName(QStringLiteral("Gui__Dialog__DlgCustomToolbars"));
        Gui__Dialog__DlgCustomToolbars->resize(576, 318);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomToolbars);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Gui__Dialog__DlgCustomToolbars);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 6, 0, 1, 4);

        moveActionRightButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        moveActionRightButton->setObjectName(QStringLiteral("moveActionRightButton"));
        moveActionRightButton->setEnabled(true);
        moveActionRightButton->setMinimumSize(QSize(30, 30));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/button_right.svg"));
        moveActionRightButton->setIcon(icon);

        gridLayout->addWidget(moveActionRightButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(33, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        spacerItem1 = new QSpacerItem(33, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 0, 1, 1, 1);

        moveActionLeftButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        moveActionLeftButton->setObjectName(QStringLiteral("moveActionLeftButton"));
        moveActionLeftButton->setEnabled(true);
        moveActionLeftButton->setMinimumSize(QSize(30, 30));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/button_left.svg"));
        moveActionLeftButton->setIcon(icon1);
        moveActionLeftButton->setAutoDefault(true);

        gridLayout->addWidget(moveActionLeftButton, 2, 1, 1, 1);

        moveActionDownButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        moveActionDownButton->setObjectName(QStringLiteral("moveActionDownButton"));
        moveActionDownButton->setEnabled(true);
        moveActionDownButton->setMinimumSize(QSize(30, 30));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/icons/button_down.svg"));
        moveActionDownButton->setIcon(icon2);
        moveActionDownButton->setAutoDefault(true);

        gridLayout->addWidget(moveActionDownButton, 4, 1, 1, 1);

        moveActionUpButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        moveActionUpButton->setObjectName(QStringLiteral("moveActionUpButton"));
        moveActionUpButton->setEnabled(true);
        moveActionUpButton->setMinimumSize(QSize(30, 30));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/icons/button_up.svg"));
        moveActionUpButton->setIcon(icon3);

        gridLayout->addWidget(moveActionUpButton, 3, 1, 1, 1);

        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        categoryBox = new QComboBox(Gui__Dialog__DlgCustomToolbars);
        categoryBox->setObjectName(QStringLiteral("categoryBox"));

        vboxLayout->addWidget(categoryBox);

        commandTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomToolbars);
        commandTreeWidget->setObjectName(QStringLiteral("commandTreeWidget"));
        commandTreeWidget->setRootIsDecorated(false);

        vboxLayout->addWidget(commandTreeWidget);


        gridLayout->addLayout(vboxLayout, 0, 0, 6, 1);

        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        workbenchBox = new QComboBox(Gui__Dialog__DlgCustomToolbars);
        workbenchBox->setObjectName(QStringLiteral("workbenchBox"));

        vboxLayout1->addWidget(workbenchBox);

        toolbarTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomToolbars);
        toolbarTreeWidget->setObjectName(QStringLiteral("toolbarTreeWidget"));
        toolbarTreeWidget->setColumnCount(0);

        vboxLayout1->addWidget(toolbarTreeWidget);


        gridLayout->addLayout(vboxLayout1, 0, 2, 6, 1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        spacerItem2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Fixed);

        vboxLayout2->addItem(spacerItem2);

        newButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        newButton->setObjectName(QStringLiteral("newButton"));

        vboxLayout2->addWidget(newButton);

        renameButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        renameButton->setObjectName(QStringLiteral("renameButton"));

        vboxLayout2->addWidget(renameButton);

        deleteButton = new QPushButton(Gui__Dialog__DlgCustomToolbars);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        vboxLayout2->addWidget(deleteButton);

        spacerItem3 = new QSpacerItem(20, 152, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem3);


        gridLayout->addLayout(vboxLayout2, 0, 3, 6, 1);


        retranslateUi(Gui__Dialog__DlgCustomToolbars);

        moveActionLeftButton->setDefault(false);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomToolbars);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomToolbars)
    {
        Gui__Dialog__DlgCustomToolbars->setWindowTitle(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Toolbars", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Note:</span> The changes become active the next time you load the appropriate workbench</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        moveActionRightButton->setToolTip(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move right", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        moveActionRightButton->setWhatsThis(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item one level down.</b><p>This will also change the level of the parent item.</p>", 0));
#endif // QT_NO_WHATSTHIS
        moveActionRightButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveActionLeftButton->setToolTip(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move left", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        moveActionLeftButton->setWhatsThis(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item one level up.</b><p>This will also change the level of the parent item.</p>", 0));
#endif // QT_NO_WHATSTHIS
        moveActionLeftButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveActionDownButton->setToolTip(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move down", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        moveActionDownButton->setWhatsThis(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item down.</b><p>The item will be moved within the hierarchy level.</p>", 0));
#endif // QT_NO_WHATSTHIS
        moveActionDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveActionUpButton->setToolTip(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Move up", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        moveActionUpButton->setWhatsThis(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "<b>Move the selected item up.</b><p>The item will be moved within the hierarchy level.</p>", 0));
#endif // QT_NO_WHATSTHIS
        moveActionUpButton->setText(QString());
        newButton->setText(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "New...", 0));
        renameButton->setText(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Rename...", 0));
        deleteButton->setText(QApplication::translate("Gui::Dialog::DlgCustomToolbars", "Delete", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomToolbars: public Ui_DlgCustomToolbars {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGTOOLBARS_H
