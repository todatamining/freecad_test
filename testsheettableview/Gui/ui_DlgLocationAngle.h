/********************************************************************************
** Form generated from reading UI file 'DlgLocationAngle.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGLOCATIONANGLE_H
#define UI_DLGLOCATIONANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Angle
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *vectorA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *vectorB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *vectorC;
    QCheckBox *checkBoxSnap;
    QComboBox *comboGridSize;

    void setupUi(QWidget *Angle)
    {
        if (Angle->objectName().isEmpty())
            Angle->setObjectName(QStringLiteral("Angle"));
        Angle->resize(145, 147);
        verticalLayout = new QVBoxLayout(Angle);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Angle);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        vectorA = new QDoubleSpinBox(Angle);
        vectorA->setObjectName(QStringLiteral("vectorA"));
        vectorA->setMinimum(-2.14748e+09);
        vectorA->setMaximum(2.14748e+09);

        horizontalLayout->addWidget(vectorA);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Angle);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        vectorB = new QDoubleSpinBox(Angle);
        vectorB->setObjectName(QStringLiteral("vectorB"));
        vectorB->setMinimum(-2.14748e+09);
        vectorB->setMaximum(2.14748e+09);

        horizontalLayout_2->addWidget(vectorB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Angle);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        vectorC = new QDoubleSpinBox(Angle);
        vectorC->setObjectName(QStringLiteral("vectorC"));
        vectorC->setMinimum(-2.14748e+09);
        vectorC->setMaximum(2.14748e+09);
        vectorC->setValue(1);

        horizontalLayout_3->addWidget(vectorC);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxSnap = new QCheckBox(Angle);
        checkBoxSnap->setObjectName(QStringLiteral("checkBoxSnap"));

        verticalLayout->addWidget(checkBoxSnap);

        comboGridSize = new QComboBox(Angle);
        comboGridSize->setObjectName(QStringLiteral("comboGridSize"));
        comboGridSize->setEditable(true);

        verticalLayout->addWidget(comboGridSize);


        retranslateUi(Angle);

        QMetaObject::connectSlotsByName(Angle);
    } // setupUi

    void retranslateUi(QWidget *Angle)
    {
        Angle->setWindowTitle(QApplication::translate("Angle", "Form", 0));
        label->setText(QApplication::translate("Angle", "A:", 0));
        label_2->setText(QApplication::translate("Angle", "B:", 0));
        label_3->setText(QApplication::translate("Angle", "C:", 0));
        checkBoxSnap->setText(QApplication::translate("Angle", "Angle Snap", 0));
        comboGridSize->clear();
        comboGridSize->insertItems(0, QStringList()
         << QApplication::translate("Angle", "1 \302\260", 0)
         << QApplication::translate("Angle", "2 \302\260", 0)
         << QApplication::translate("Angle", "5 \302\260", 0)
         << QApplication::translate("Angle", "10 \302\260", 0)
         << QApplication::translate("Angle", "20 \302\260", 0)
         << QApplication::translate("Angle", "45 \302\260", 0)
         << QApplication::translate("Angle", "90 \302\260", 0)
         << QApplication::translate("Angle", "180 \302\260", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Angle: public Ui_Angle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGLOCATIONANGLE_H
