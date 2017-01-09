/********************************************************************************
** Form generated from reading UI file 'PropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESDIALOG_H
#define UI_PROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtcolorpicker.h"

QT_BEGIN_NAMESPACE

class Ui_PropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QtColorPicker *foregroundColor;
    QLabel *label_2;
    QtColorPicker *backgroundColor;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QRadioButton *alignLeft;
    QRadioButton *alignHCenter;
    QRadioButton *alignRight;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QRadioButton *alignTop;
    QRadioButton *alignVCenter;
    QRadioButton *alignBottom;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *styleBold;
    QCheckBox *styleItalic;
    QCheckBox *styleUnderline;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QLineEdit *displayUnit;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QLineEdit *alias;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *PropertiesDialog)
    {
        if (PropertiesDialog->objectName().isEmpty())
            PropertiesDialog->setObjectName(QStringLiteral("PropertiesDialog"));
        PropertiesDialog->resize(426, 249);
        gridLayout = new QGridLayout(PropertiesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(PropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(PropertiesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(240, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        foregroundColor = new QtColorPicker(tab);
        foregroundColor->setObjectName(QStringLiteral("foregroundColor"));

        gridLayout_2->addWidget(foregroundColor, 0, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        backgroundColor = new QtColorPicker(tab);
        backgroundColor->setObjectName(QStringLiteral("backgroundColor"));

        gridLayout_2->addWidget(backgroundColor, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        alignLeft = new QRadioButton(tab_2);
        alignLeft->setObjectName(QStringLiteral("alignLeft"));

        verticalLayout_2->addWidget(alignLeft);

        alignHCenter = new QRadioButton(tab_2);
        alignHCenter->setObjectName(QStringLiteral("alignHCenter"));

        verticalLayout_2->addWidget(alignHCenter);

        alignRight = new QRadioButton(tab_2);
        alignRight->setObjectName(QStringLiteral("alignRight"));

        verticalLayout_2->addWidget(alignRight);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout_6 = new QHBoxLayout(frame_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        alignTop = new QRadioButton(frame_2);
        alignTop->setObjectName(QStringLiteral("alignTop"));

        verticalLayout_3->addWidget(alignTop);

        alignVCenter = new QRadioButton(frame_2);
        alignVCenter->setObjectName(QStringLiteral("alignVCenter"));

        verticalLayout_3->addWidget(alignVCenter);

        alignBottom = new QRadioButton(frame_2);
        alignBottom->setObjectName(QStringLiteral("alignBottom"));

        verticalLayout_3->addWidget(alignBottom);


        horizontalLayout_6->addLayout(verticalLayout_3);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        styleBold = new QCheckBox(tab_3);
        styleBold->setObjectName(QStringLiteral("styleBold"));

        verticalLayout->addWidget(styleBold);

        styleItalic = new QCheckBox(tab_3);
        styleItalic->setObjectName(QStringLiteral("styleItalic"));

        verticalLayout->addWidget(styleItalic);

        styleUnderline = new QCheckBox(tab_3);
        styleUnderline->setObjectName(QStringLiteral("styleUnderline"));

        verticalLayout->addWidget(styleUnderline);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        displayUnit = new QLineEdit(tab_4);
        displayUnit->setObjectName(QStringLiteral("displayUnit"));

        gridLayout_5->addWidget(displayUnit, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 1, 1, 1);

        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        alias = new QLineEdit(tab_5);
        alias->setObjectName(QStringLiteral("alias"));

        gridLayout_6->addWidget(alias, 0, 1, 1, 1);

        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 1, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertiesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertiesDialog)
    {
        PropertiesDialog->setWindowTitle(QApplication::translate("PropertiesDialog", "Cell properties", 0));
        label->setText(QApplication::translate("PropertiesDialog", "Text", 0));
        label_2->setText(QApplication::translate("PropertiesDialog", "Background", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PropertiesDialog", "&Color", 0));
        label_4->setText(QApplication::translate("PropertiesDialog", "Horizontal", 0));
        alignLeft->setText(QApplication::translate("PropertiesDialog", "Left", 0));
        alignHCenter->setText(QApplication::translate("PropertiesDialog", "Center", 0));
        alignRight->setText(QApplication::translate("PropertiesDialog", "Right", 0));
        label_5->setText(QApplication::translate("PropertiesDialog", "Vertical", 0));
        alignTop->setText(QApplication::translate("PropertiesDialog", "Top", 0));
        alignVCenter->setText(QApplication::translate("PropertiesDialog", "Center", 0));
        alignBottom->setText(QApplication::translate("PropertiesDialog", "Bottom", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PropertiesDialog", "&Alignment", 0));
        styleBold->setText(QApplication::translate("PropertiesDialog", "Bold", 0));
        styleItalic->setText(QApplication::translate("PropertiesDialog", "Italic", 0));
        styleUnderline->setText(QApplication::translate("PropertiesDialog", "Underline", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PropertiesDialog", "&Style", 0));
        label_3->setText(QApplication::translate("PropertiesDialog", "Unit string", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("PropertiesDialog", "&Display unit", 0));
        label_6->setText(QApplication::translate("PropertiesDialog", "Alias for this cell", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("PropertiesDialog", "A&lias", 0));
    } // retranslateUi

};

namespace Ui {
    class PropertiesDialog: public Ui_PropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESDIALOG_H
