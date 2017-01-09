/********************************************************************************
** Form generated from reading UI file 'TaskEditControl.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKEDITCONTROL_H
#define UI_TASKEDITCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

namespace Gui {
namespace TaskView {

class Ui_TaskEditControl
{
public:
    QHBoxLayout *hboxLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Gui__TaskView__TaskEditControl)
    {
        if (Gui__TaskView__TaskEditControl->objectName().isEmpty())
            Gui__TaskView__TaskEditControl->setObjectName(QStringLiteral("Gui__TaskView__TaskEditControl"));
        Gui__TaskView__TaskEditControl->resize(193, 41);
        hboxLayout = new QHBoxLayout(Gui__TaskView__TaskEditControl);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        buttonBox = new QDialogButtonBox(Gui__TaskView__TaskEditControl);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        hboxLayout->addWidget(buttonBox);


        retranslateUi(Gui__TaskView__TaskEditControl);

        QMetaObject::connectSlotsByName(Gui__TaskView__TaskEditControl);
    } // setupUi

    void retranslateUi(QWidget *Gui__TaskView__TaskEditControl)
    {
        Gui__TaskView__TaskEditControl->setWindowTitle(QApplication::translate("Gui::TaskView::TaskEditControl", "Edit", 0));
    } // retranslateUi

};

} // namespace TaskView
} // namespace Gui

namespace Gui {
namespace TaskView {
namespace Ui {
    class TaskEditControl: public Ui_TaskEditControl {};
} // namespace Ui
} // namespace TaskView
} // namespace Gui

#endif // UI_TASKEDITCONTROL_H
