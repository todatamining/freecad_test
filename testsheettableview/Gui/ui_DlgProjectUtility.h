/********************************************************************************
** Form generated from reading UI file 'DlgProjectUtility.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROJECTUTILITY_H
#define UI_DLGPROJECTUTILITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_DlgProjectUtility
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    Gui::FileChooser *extractSource;
    QLabel *label_2;
    Gui::FileChooser *extractDest;
    QPushButton *extractButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    Gui::FileChooser *createSource;
    QLabel *label_4;
    Gui::FileChooser *createDest;
    QPushButton *createButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkLoadProject;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__DlgProjectUtility)
    {
        if (Gui__Dialog__DlgProjectUtility->objectName().isEmpty())
            Gui__Dialog__DlgProjectUtility->setObjectName(QStringLiteral("Gui__Dialog__DlgProjectUtility"));
        Gui__Dialog__DlgProjectUtility->resize(445, 262);
        gridLayout_4 = new QGridLayout(Gui__Dialog__DlgProjectUtility);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(Gui__Dialog__DlgProjectUtility);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        extractSource = new Gui::FileChooser(groupBox);
        extractSource->setObjectName(QStringLiteral("extractSource"));
        extractSource->setFilter(QStringLiteral("Project file (*.fcstd)"));

        gridLayout->addWidget(extractSource, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        extractDest = new Gui::FileChooser(groupBox);
        extractDest->setObjectName(QStringLiteral("extractDest"));
        extractDest->setMode(Gui::FileChooser::Directory);

        gridLayout->addWidget(extractDest, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        extractButton = new QPushButton(Gui__Dialog__DlgProjectUtility);
        extractButton->setObjectName(QStringLiteral("extractButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(extractButton->sizePolicy().hasHeightForWidth());
        extractButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(extractButton, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgProjectUtility);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        createSource = new Gui::FileChooser(groupBox_2);
        createSource->setObjectName(QStringLiteral("createSource"));
        createSource->setFilter(QStringLiteral("Document.xml"));

        gridLayout_2->addWidget(createSource, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        createDest = new Gui::FileChooser(groupBox_2);
        createDest->setObjectName(QStringLiteral("createDest"));
        createDest->setMode(Gui::FileChooser::Directory);

        gridLayout_2->addWidget(createDest, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        createButton = new QPushButton(Gui__Dialog__DlgProjectUtility);
        createButton->setObjectName(QStringLiteral("createButton"));
        sizePolicy.setHeightForWidth(createButton->sizePolicy().hasHeightForWidth());
        createButton->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(createButton, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        checkLoadProject = new QCheckBox(Gui__Dialog__DlgProjectUtility);
        checkLoadProject->setObjectName(QStringLiteral("checkLoadProject"));

        gridLayout_4->addWidget(checkLoadProject, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__DlgProjectUtility);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_4->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(Gui__Dialog__DlgProjectUtility);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__DlgProjectUtility, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__DlgProjectUtility, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgProjectUtility);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgProjectUtility)
    {
        Gui__Dialog__DlgProjectUtility->setWindowTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Project utility", 0));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Extract project", 0));
        label->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Source", 0));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Destination", 0));
        extractButton->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Extract", 0));
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Create project", 0));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Source", 0));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Destination", 0));
        createButton->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Create", 0));
        checkLoadProject->setText(QApplication::translate("Gui::Dialog::DlgProjectUtility", "Load project file after creation", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgProjectUtility: public Ui_DlgProjectUtility {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROJECTUTILITY_H
