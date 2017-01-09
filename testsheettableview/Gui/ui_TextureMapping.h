/********************************************************************************
** Form generated from reading UI file 'TextureMapping.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTUREMAPPING_H
#define UI_TEXTUREMAPPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include "Gui/FileDialog.h"

namespace Gui {
namespace Dialog {

class Ui_TextureMapping
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkGlobal;
    QCheckBox *checkEnv;
    Gui::FileChooser *fileChooser;

    void setupUi(QDialog *Gui__Dialog__TextureMapping)
    {
        if (Gui__Dialog__TextureMapping->objectName().isEmpty())
            Gui__Dialog__TextureMapping->setObjectName(QStringLiteral("Gui__Dialog__TextureMapping"));
        Gui__Dialog__TextureMapping->resize(218, 122);
        gridLayout_2 = new QGridLayout(Gui__Dialog__TextureMapping);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(Gui__Dialog__TextureMapping);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkGlobal = new QCheckBox(groupBox);
        checkGlobal->setObjectName(QStringLiteral("checkGlobal"));

        gridLayout->addWidget(checkGlobal, 0, 0, 1, 1);

        checkEnv = new QCheckBox(groupBox);
        checkEnv->setObjectName(QStringLiteral("checkEnv"));

        gridLayout->addWidget(checkEnv, 0, 1, 1, 1);

        fileChooser = new Gui::FileChooser(groupBox);
        fileChooser->setObjectName(QStringLiteral("fileChooser"));

        gridLayout->addWidget(fileChooser, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__TextureMapping);

        QMetaObject::connectSlotsByName(Gui__Dialog__TextureMapping);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__TextureMapping)
    {
        Gui__Dialog__TextureMapping->setWindowTitle(QApplication::translate("Gui::Dialog::TextureMapping", "Texture", 0));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::TextureMapping", "Texture mapping", 0));
        checkGlobal->setText(QApplication::translate("Gui::Dialog::TextureMapping", "Global", 0));
        checkEnv->setText(QApplication::translate("Gui::Dialog::TextureMapping", "Environment", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class TextureMapping: public Ui_TextureMapping {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_TEXTUREMAPPING_H
