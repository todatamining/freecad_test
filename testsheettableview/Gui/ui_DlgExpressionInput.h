/********************************************************************************
** Form generated from reading UI file 'DlgExpressionInput.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEXPRESSIONINPUT_H
#define UI_DLGEXPRESSIONINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ExpressionCompleter.h"

QT_BEGIN_NAMESPACE

class Ui_DlgExpressionInput
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFrame *ctrlArea;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *msg;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    Gui::ExpressionLineEdit *expression;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *discardBtn;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DlgExpressionInput)
    {
        if (DlgExpressionInput->objectName().isEmpty())
            DlgExpressionInput->setObjectName(QStringLiteral("DlgExpressionInput"));
        DlgExpressionInput->resize(414, 95);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DlgExpressionInput->sizePolicy().hasHeightForWidth());
        DlgExpressionInput->setSizePolicy(sizePolicy);
        DlgExpressionInput->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(DlgExpressionInput);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(DlgExpressionInput);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ctrlArea = new QFrame(widget);
        ctrlArea->setObjectName(QStringLiteral("ctrlArea"));
        ctrlArea->setAutoFillBackground(true);
        ctrlArea->setFrameShape(QFrame::StyledPanel);
        ctrlArea->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(ctrlArea);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(ctrlArea);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        msg = new QLabel(ctrlArea);
        msg->setObjectName(QStringLiteral("msg"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        msg->setPalette(palette);

        horizontalLayout_4->addWidget(msg);


        verticalLayout_2->addWidget(ctrlArea);


        horizontalLayout_2->addWidget(widget);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        expression = new Gui::ExpressionLineEdit(DlgExpressionInput);
        expression->setObjectName(QStringLiteral("expression"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(expression->sizePolicy().hasHeightForWidth());
        expression->setSizePolicy(sizePolicy1);
        expression->setMinimumSize(QSize(10, 10));

        horizontalLayout_5->addWidget(expression);

        horizontalSpacer_3 = new QSpacerItem(0, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        discardBtn = new QPushButton(DlgExpressionInput);
        discardBtn->setObjectName(QStringLiteral("discardBtn"));
        discardBtn->setAutoDefault(false);

        horizontalLayout->addWidget(discardBtn);

        okBtn = new QPushButton(DlgExpressionInput);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout->addWidget(okBtn);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label->raise();
        expression->raise();
        widget->raise();
        ctrlArea->raise();

        retranslateUi(DlgExpressionInput);
        QObject::connect(okBtn, SIGNAL(clicked()), DlgExpressionInput, SLOT(accept()));

        discardBtn->setDefault(false);


        QMetaObject::connectSlotsByName(DlgExpressionInput);
    } // setupUi

    void retranslateUi(QDialog *DlgExpressionInput)
    {
        DlgExpressionInput->setWindowTitle(QApplication::translate("DlgExpressionInput", "Formula editor", 0));
        label->setText(QApplication::translate("DlgExpressionInput", "Result:", 0));
        msg->setText(QString());
        discardBtn->setText(QApplication::translate("DlgExpressionInput", "&Discard", 0));
        okBtn->setText(QApplication::translate("DlgExpressionInput", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class DlgExpressionInput: public Ui_DlgExpressionInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGEXPRESSIONINPUT_H
