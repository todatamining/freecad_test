/********************************************************************************
** Form generated from reading UI file 'TaskSelectLinkProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSELECTLINKPROPERTY_H
#define UI_TASKSELECTLINKPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Gui {
namespace TaskView {

class Ui_TaskSelectLinkProperty
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *Remove;
    QToolButton *Add;
    QToolButton *Invert;
    QSpacerItem *horizontalSpacer;
    QToolButton *Help;
    QListWidget *listWidget;

    void setupUi(QWidget *Gui__TaskView__TaskSelectLinkProperty)
    {
        if (Gui__TaskView__TaskSelectLinkProperty->objectName().isEmpty())
            Gui__TaskView__TaskSelectLinkProperty->setObjectName(QStringLiteral("Gui__TaskView__TaskSelectLinkProperty"));
        Gui__TaskView__TaskSelectLinkProperty->resize(257, 313);
        verticalLayout = new QVBoxLayout(Gui__TaskView__TaskSelectLinkProperty);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Remove = new QToolButton(Gui__TaskView__TaskSelectLinkProperty);
        Remove->setObjectName(QStringLiteral("Remove"));

        horizontalLayout->addWidget(Remove);

        Add = new QToolButton(Gui__TaskView__TaskSelectLinkProperty);
        Add->setObjectName(QStringLiteral("Add"));

        horizontalLayout->addWidget(Add);

        Invert = new QToolButton(Gui__TaskView__TaskSelectLinkProperty);
        Invert->setObjectName(QStringLiteral("Invert"));

        horizontalLayout->addWidget(Invert);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Help = new QToolButton(Gui__TaskView__TaskSelectLinkProperty);
        Help->setObjectName(QStringLiteral("Help"));

        horizontalLayout->addWidget(Help);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(Gui__TaskView__TaskSelectLinkProperty);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(Gui__TaskView__TaskSelectLinkProperty);

        QMetaObject::connectSlotsByName(Gui__TaskView__TaskSelectLinkProperty);
    } // setupUi

    void retranslateUi(QWidget *Gui__TaskView__TaskSelectLinkProperty)
    {
        Gui__TaskView__TaskSelectLinkProperty->setWindowTitle(QApplication::translate("Gui::TaskView::TaskSelectLinkProperty", "Appearance", 0));
        Remove->setText(QApplication::translate("Gui::TaskView::TaskSelectLinkProperty", "...", 0));
        Add->setText(QApplication::translate("Gui::TaskView::TaskSelectLinkProperty", "...", 0));
        Invert->setText(QApplication::translate("Gui::TaskView::TaskSelectLinkProperty", "...", 0));
        Help->setText(QApplication::translate("Gui::TaskView::TaskSelectLinkProperty", "...", 0));
    } // retranslateUi

};

} // namespace TaskView
} // namespace Gui

namespace Gui {
namespace TaskView {
namespace Ui {
    class TaskSelectLinkProperty: public Ui_TaskSelectLinkProperty {};
} // namespace Ui
} // namespace TaskView
} // namespace Gui

#endif // UI_TASKSELECTLINKPROPERTY_H
