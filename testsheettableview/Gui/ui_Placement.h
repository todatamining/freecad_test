/********************************************************************************
** Form generated from reading UI file 'Placement.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEMENT_H
#define UI_PLACEMENT_H

#include <Gui/QuantitySpinBox.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

namespace Gui {
namespace Dialog {

class Ui_Placement
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *TextLabelZ;
    QLabel *TextLabelY;
    QLabel *TextLabelX;
    Gui::QuantitySpinBox *xPos;
    Gui::QuantitySpinBox *yPos;
    Gui::QuantitySpinBox *zPos;
    QGroupBox *GroupBox5_3;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem1;
    QLabel *TextLabelZ_5;
    QLabel *TextLabelY_2;
    QLabel *TextLabelX_2;
    Gui::QuantitySpinBox *xCnt;
    Gui::QuantitySpinBox *yCnt;
    Gui::QuantitySpinBox *zCnt;
    QGroupBox *GroupBox5_2;
    QGridLayout *gridLayout3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QLabel *textLabelAngle;
    QComboBox *direction;
    QLabel *TextLabelAxis;
    Gui::QuantitySpinBox *angle;
    QWidget *page_3;
    QGridLayout *gridLayout6;
    QGridLayout *gridLayout7;
    QLabel *TextLabelZ_3;
    QLabel *TextLabelZ_4;
    QLabel *TextLabelZ_2;
    Gui::QuantitySpinBox *yawAngle;
    Gui::QuantitySpinBox *pitchAngle;
    Gui::QuantitySpinBox *rollAngle;
    QWidget *page_2;
    QSpacerItem *spacerItem2;
    QComboBox *rotationInput;
    QCheckBox *applyPlacementChange;
    QCheckBox *applyIncrementalPlacement;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *applyButton;
    QPushButton *resetButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacerItem3;
    QPushButton *oKButton;
    QPushButton *closeButton;

    void setupUi(QDialog *Gui__Dialog__Placement)
    {
        if (Gui__Dialog__Placement->objectName().isEmpty())
            Gui__Dialog__Placement->setObjectName(QStringLiteral("Gui__Dialog__Placement"));
        Gui__Dialog__Placement->resize(277, 474);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Gui__Dialog__Placement->sizePolicy().hasHeightForWidth());
        Gui__Dialog__Placement->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Gui__Dialog__Placement);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GroupBox5 = new QGroupBox(Gui__Dialog__Placement);
        GroupBox5->setObjectName(QStringLiteral("GroupBox5"));
        gridLayout1 = new QGridLayout(GroupBox5);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        spacerItem = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 4, 1, 1, 1);

        TextLabelZ = new QLabel(GroupBox5);
        TextLabelZ->setObjectName(QStringLiteral("TextLabelZ"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TextLabelZ->sizePolicy().hasHeightForWidth());
        TextLabelZ->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(TextLabelZ, 3, 0, 1, 1);

        TextLabelY = new QLabel(GroupBox5);
        TextLabelY->setObjectName(QStringLiteral("TextLabelY"));
        sizePolicy1.setHeightForWidth(TextLabelY->sizePolicy().hasHeightForWidth());
        TextLabelY->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(TextLabelY, 2, 0, 1, 1);

        TextLabelX = new QLabel(GroupBox5);
        TextLabelX->setObjectName(QStringLiteral("TextLabelX"));
        sizePolicy1.setHeightForWidth(TextLabelX->sizePolicy().hasHeightForWidth());
        TextLabelX->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(TextLabelX, 0, 0, 1, 1);

        xPos = new Gui::QuantitySpinBox(GroupBox5);
        xPos->setObjectName(QStringLiteral("xPos"));

        gridLayout1->addWidget(xPos, 0, 1, 1, 1);

        yPos = new Gui::QuantitySpinBox(GroupBox5);
        yPos->setObjectName(QStringLiteral("yPos"));

        gridLayout1->addWidget(yPos, 2, 1, 1, 1);

        zPos = new Gui::QuantitySpinBox(GroupBox5);
        zPos->setObjectName(QStringLiteral("zPos"));

        gridLayout1->addWidget(zPos, 3, 1, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        GroupBox5_3 = new QGroupBox(Gui__Dialog__Placement);
        GroupBox5_3->setObjectName(QStringLiteral("GroupBox5_3"));
        gridLayout2 = new QGridLayout(GroupBox5_3);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        spacerItem1 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 3, 1, 1, 1);

        TextLabelZ_5 = new QLabel(GroupBox5_3);
        TextLabelZ_5->setObjectName(QStringLiteral("TextLabelZ_5"));
        sizePolicy1.setHeightForWidth(TextLabelZ_5->sizePolicy().hasHeightForWidth());
        TextLabelZ_5->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(TextLabelZ_5, 2, 0, 1, 1);

        TextLabelY_2 = new QLabel(GroupBox5_3);
        TextLabelY_2->setObjectName(QStringLiteral("TextLabelY_2"));
        sizePolicy1.setHeightForWidth(TextLabelY_2->sizePolicy().hasHeightForWidth());
        TextLabelY_2->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(TextLabelY_2, 1, 0, 1, 1);

        TextLabelX_2 = new QLabel(GroupBox5_3);
        TextLabelX_2->setObjectName(QStringLiteral("TextLabelX_2"));
        sizePolicy1.setHeightForWidth(TextLabelX_2->sizePolicy().hasHeightForWidth());
        TextLabelX_2->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(TextLabelX_2, 0, 0, 1, 1);

        xCnt = new Gui::QuantitySpinBox(GroupBox5_3);
        xCnt->setObjectName(QStringLiteral("xCnt"));

        gridLayout2->addWidget(xCnt, 0, 1, 1, 1);

        yCnt = new Gui::QuantitySpinBox(GroupBox5_3);
        yCnt->setObjectName(QStringLiteral("yCnt"));

        gridLayout2->addWidget(yCnt, 1, 1, 1, 1);

        zCnt = new Gui::QuantitySpinBox(GroupBox5_3);
        zCnt->setObjectName(QStringLiteral("zCnt"));

        gridLayout2->addWidget(zCnt, 2, 1, 1, 1);


        gridLayout->addWidget(GroupBox5_3, 0, 1, 1, 1);

        GroupBox5_2 = new QGroupBox(Gui__Dialog__Placement);
        GroupBox5_2->setObjectName(QStringLiteral("GroupBox5_2"));
        gridLayout3 = new QGridLayout(GroupBox5_2);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        stackedWidget = new QStackedWidget(GroupBox5_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout4 = new QGridLayout(page);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        textLabelAngle = new QLabel(page);
        textLabelAngle->setObjectName(QStringLiteral("textLabelAngle"));
        sizePolicy1.setHeightForWidth(textLabelAngle->sizePolicy().hasHeightForWidth());
        textLabelAngle->setSizePolicy(sizePolicy1);

        gridLayout5->addWidget(textLabelAngle, 1, 0, 1, 1);

        direction = new QComboBox(page);
        direction->setObjectName(QStringLiteral("direction"));

        gridLayout5->addWidget(direction, 0, 1, 1, 1);

        TextLabelAxis = new QLabel(page);
        TextLabelAxis->setObjectName(QStringLiteral("TextLabelAxis"));
        sizePolicy1.setHeightForWidth(TextLabelAxis->sizePolicy().hasHeightForWidth());
        TextLabelAxis->setSizePolicy(sizePolicy1);

        gridLayout5->addWidget(TextLabelAxis, 0, 0, 1, 1);

        angle = new Gui::QuantitySpinBox(page);
        angle->setObjectName(QStringLiteral("angle"));

        gridLayout5->addWidget(angle, 1, 1, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout6 = new QGridLayout(page_3);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        gridLayout6->setObjectName(QStringLiteral("gridLayout6"));
        gridLayout7 = new QGridLayout();
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(0, 0, 0, 0);
        gridLayout7->setObjectName(QStringLiteral("gridLayout7"));
        TextLabelZ_3 = new QLabel(page_3);
        TextLabelZ_3->setObjectName(QStringLiteral("TextLabelZ_3"));
        sizePolicy1.setHeightForWidth(TextLabelZ_3->sizePolicy().hasHeightForWidth());
        TextLabelZ_3->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(TextLabelZ_3, 1, 0, 1, 1);

        TextLabelZ_4 = new QLabel(page_3);
        TextLabelZ_4->setObjectName(QStringLiteral("TextLabelZ_4"));
        sizePolicy1.setHeightForWidth(TextLabelZ_4->sizePolicy().hasHeightForWidth());
        TextLabelZ_4->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(TextLabelZ_4, 2, 0, 1, 1);

        TextLabelZ_2 = new QLabel(page_3);
        TextLabelZ_2->setObjectName(QStringLiteral("TextLabelZ_2"));
        sizePolicy1.setHeightForWidth(TextLabelZ_2->sizePolicy().hasHeightForWidth());
        TextLabelZ_2->setSizePolicy(sizePolicy1);

        gridLayout7->addWidget(TextLabelZ_2, 0, 0, 1, 1);

        yawAngle = new Gui::QuantitySpinBox(page_3);
        yawAngle->setObjectName(QStringLiteral("yawAngle"));

        gridLayout7->addWidget(yawAngle, 0, 1, 1, 1);

        pitchAngle = new Gui::QuantitySpinBox(page_3);
        pitchAngle->setObjectName(QStringLiteral("pitchAngle"));

        gridLayout7->addWidget(pitchAngle, 1, 1, 1, 1);

        rollAngle = new Gui::QuantitySpinBox(page_3);
        rollAngle->setObjectName(QStringLiteral("rollAngle"));

        gridLayout7->addWidget(rollAngle, 2, 1, 1, 1);


        gridLayout6->addLayout(gridLayout7, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout3->addWidget(stackedWidget, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem2, 2, 0, 1, 1);

        rotationInput = new QComboBox(GroupBox5_2);
        rotationInput->setObjectName(QStringLiteral("rotationInput"));

        gridLayout3->addWidget(rotationInput, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBox5_2, 1, 0, 1, 2);

        applyPlacementChange = new QCheckBox(Gui__Dialog__Placement);
        applyPlacementChange->setObjectName(QStringLiteral("applyPlacementChange"));
        applyPlacementChange->setChecked(true);

        gridLayout->addWidget(applyPlacementChange, 2, 0, 1, 2);

        applyIncrementalPlacement = new QCheckBox(Gui__Dialog__Placement);
        applyIncrementalPlacement->setObjectName(QStringLiteral("applyIncrementalPlacement"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(applyIncrementalPlacement->sizePolicy().hasHeightForWidth());
        applyIncrementalPlacement->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(applyIncrementalPlacement, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(78, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        applyButton = new QPushButton(Gui__Dialog__Placement);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);

        resetButton = new QPushButton(Gui__Dialog__Placement);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        spacerItem3 = new QSpacerItem(88, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem3);

        oKButton = new QPushButton(Gui__Dialog__Placement);
        oKButton->setObjectName(QStringLiteral("oKButton"));

        horizontalLayout_2->addWidget(oKButton);

        closeButton = new QPushButton(Gui__Dialog__Placement);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);

        QWidget::setTabOrder(rotationInput, direction);
        QWidget::setTabOrder(direction, applyPlacementChange);
        QWidget::setTabOrder(applyPlacementChange, applyIncrementalPlacement);
        QWidget::setTabOrder(applyIncrementalPlacement, oKButton);
        QWidget::setTabOrder(oKButton, applyButton);
        QWidget::setTabOrder(applyButton, closeButton);

        retranslateUi(Gui__Dialog__Placement);
        QObject::connect(oKButton, SIGNAL(clicked()), Gui__Dialog__Placement, SLOT(accept()));
        QObject::connect(closeButton, SIGNAL(clicked()), Gui__Dialog__Placement, SLOT(reject()));
        QObject::connect(rotationInput, SIGNAL(activated(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);
        direction->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Gui__Dialog__Placement);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__Placement)
    {
        Gui__Dialog__Placement->setWindowTitle(QApplication::translate("Gui::Dialog::Placement", "Placement", 0));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::Placement", "Translation:", 0));
        TextLabelZ->setText(QApplication::translate("Gui::Dialog::Placement", "Z:", 0));
        TextLabelY->setText(QApplication::translate("Gui::Dialog::Placement", "Y:", 0));
        TextLabelX->setText(QApplication::translate("Gui::Dialog::Placement", "X:", 0));
        GroupBox5_3->setTitle(QApplication::translate("Gui::Dialog::Placement", "Center:", 0));
        TextLabelZ_5->setText(QApplication::translate("Gui::Dialog::Placement", "Z:", 0));
        TextLabelY_2->setText(QApplication::translate("Gui::Dialog::Placement", "Y:", 0));
        TextLabelX_2->setText(QApplication::translate("Gui::Dialog::Placement", "X:", 0));
        GroupBox5_2->setTitle(QApplication::translate("Gui::Dialog::Placement", "Rotation:", 0));
        textLabelAngle->setText(QApplication::translate("Gui::Dialog::Placement", "Angle:", 0));
        TextLabelAxis->setText(QApplication::translate("Gui::Dialog::Placement", "Axis:", 0));
        TextLabelZ_3->setText(QApplication::translate("Gui::Dialog::Placement", "Pitch:", 0));
        TextLabelZ_4->setText(QApplication::translate("Gui::Dialog::Placement", "Roll:", 0));
        TextLabelZ_2->setText(QApplication::translate("Gui::Dialog::Placement", "Yaw:", 0));
        rotationInput->clear();
        rotationInput->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::Placement", "Rotation axis with angle", 0)
         << QApplication::translate("Gui::Dialog::Placement", "Euler angles (XY'Z'')", 0)
        );
        applyPlacementChange->setText(QApplication::translate("Gui::Dialog::Placement", "Apply placement changes immediately", 0));
        applyIncrementalPlacement->setText(QApplication::translate("Gui::Dialog::Placement", "Apply incremental changes to object placement", 0));
        applyButton->setText(QApplication::translate("Gui::Dialog::Placement", "Apply", 0));
        resetButton->setText(QApplication::translate("Gui::Dialog::Placement", "Reset", 0));
        oKButton->setText(QApplication::translate("Gui::Dialog::Placement", "OK", 0));
        closeButton->setText(QApplication::translate("Gui::Dialog::Placement", "Close", 0));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class Placement: public Ui_Placement {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_PLACEMENT_H
