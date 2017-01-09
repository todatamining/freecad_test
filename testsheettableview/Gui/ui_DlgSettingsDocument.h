/********************************************************************************
** Form generated from reading UI file 'DlgSettingsDocument.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSDOCUMENT_H
#define UI_DLGSETTINGSDOCUMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsDocument
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *spacerItem;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout_4;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    Gui::PrefSpinBox *prefCompression;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_2;
    Gui::PrefSpinBox *prefUndoRedoSize;
    Gui::PrefCheckBox *prefCheckNewDoc;
    QFrame *line1;
    QFrame *line1_2;
    Gui::PrefCheckBox *prefUndoRedo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    Gui::PrefCheckBox *prefSaveTransaction;
    Gui::PrefCheckBox *prefDiscardTransaction;
    Gui::PrefCheckBox *prefRecovery;
    QHBoxLayout *horizontalLayout;
    Gui::PrefCheckBox *prefAutoSaveEnabled;
    Gui::PrefSpinBox *prefAutoSaveTimeout;
    QFrame *line1_2_3;
    Gui::PrefCheckBox *prefSaveThumbnail;
    QHBoxLayout *hboxLayout2;
    Gui::PrefCheckBox *prefSaveBackupFiles;
    QSpacerItem *spacerItem1;
    Gui::PrefSpinBox *prefCountBackupFiles;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    Gui::PrefCheckBox *prefDuplicateLabel;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    Gui::PrefLineEdit *prefAuthor;
    Gui::PrefCheckBox *prefSetAuthorOnSave;
    QLabel *label_4;
    Gui::PrefLineEdit *prefCompany;
    QLabel *label;
    Gui::PrefComboBox *prefLicenseType;
    QLabel *label_2;
    Gui::PrefLineEdit *prefLicenseUrl;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsDocument)
    {
        if (Gui__Dialog__DlgSettingsDocument->objectName().isEmpty())
            Gui__Dialog__DlgSettingsDocument->setObjectName(QStringLiteral("Gui__Dialog__DlgSettingsDocument"));
        Gui__Dialog__DlgSettingsDocument->resize(500, 593);
        gridLayout_3 = new QGridLayout(Gui__Dialog__DlgSettingsDocument);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        spacerItem = new QSpacerItem(429, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(spacerItem, 4, 0, 1, 1);

        GroupBox5 = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        GroupBox5->setObjectName(QStringLiteral("GroupBox5"));
        gridLayout_4 = new QGridLayout(GroupBox5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(9, 9, 9, 9);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        textLabel1 = new QLabel(GroupBox5);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        prefCompression = new Gui::PrefSpinBox(GroupBox5);
        prefCompression->setObjectName(QStringLiteral("prefCompression"));
        prefCompression->setValue(3);
        prefCompression->setProperty("prefEntry", QVariant(QByteArray("CompressionLevel")));
        prefCompression->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout->addWidget(prefCompression);


        gridLayout_4->addLayout(hboxLayout, 2, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        textLabel1_2 = new QLabel(GroupBox5);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        hboxLayout1->addWidget(textLabel1_2);

        prefUndoRedoSize = new Gui::PrefSpinBox(GroupBox5);
        prefUndoRedoSize->setObjectName(QStringLiteral("prefUndoRedoSize"));
        prefUndoRedoSize->setValue(20);
        prefUndoRedoSize->setProperty("prefEntry", QVariant(QByteArray("MaxUndoSize")));
        prefUndoRedoSize->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout1->addWidget(prefUndoRedoSize);


        gridLayout_4->addLayout(hboxLayout1, 5, 0, 1, 1);

        prefCheckNewDoc = new Gui::PrefCheckBox(GroupBox5);
        prefCheckNewDoc->setObjectName(QStringLiteral("prefCheckNewDoc"));
        prefCheckNewDoc->setChecked(false);
        prefCheckNewDoc->setProperty("prefEntry", QVariant(QByteArray("CreateNewDoc")));
        prefCheckNewDoc->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_4->addWidget(prefCheckNewDoc, 0, 0, 1, 1);

        line1 = new QFrame(GroupBox5);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line1, 1, 0, 1, 1);

        line1_2 = new QFrame(GroupBox5);
        line1_2->setObjectName(QStringLiteral("line1_2"));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);
        line1_2->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line1_2, 3, 0, 1, 1);

        prefUndoRedo = new Gui::PrefCheckBox(GroupBox5);
        prefUndoRedo->setObjectName(QStringLiteral("prefUndoRedo"));
        prefUndoRedo->setChecked(true);
        prefUndoRedo->setProperty("prefEntry", QVariant(QByteArray("UsingUndo")));
        prefUndoRedo->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_4->addWidget(prefUndoRedo, 4, 0, 1, 1);


        gridLayout_3->addWidget(GroupBox5, 0, 0, 1, 1);

        groupBox = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        prefSaveTransaction = new Gui::PrefCheckBox(groupBox);
        prefSaveTransaction->setObjectName(QStringLiteral("prefSaveTransaction"));
        prefSaveTransaction->setEnabled(false);
        prefSaveTransaction->setProperty("prefEntry", QVariant(QByteArray("SaveTransactions")));
        prefSaveTransaction->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefSaveTransaction, 0, 0, 1, 1);

        prefDiscardTransaction = new Gui::PrefCheckBox(groupBox);
        prefDiscardTransaction->setObjectName(QStringLiteral("prefDiscardTransaction"));
        prefDiscardTransaction->setEnabled(false);
        prefDiscardTransaction->setProperty("prefEntry", QVariant(QByteArray("TransactionsDiscard")));
        prefDiscardTransaction->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefDiscardTransaction, 1, 0, 1, 1);

        prefRecovery = new Gui::PrefCheckBox(groupBox);
        prefRecovery->setObjectName(QStringLiteral("prefRecovery"));
        prefRecovery->setChecked(true);
        prefRecovery->setProperty("prefEntry", QVariant(QByteArray("RecoveryEnabled")));
        prefRecovery->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefRecovery, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        prefAutoSaveEnabled = new Gui::PrefCheckBox(groupBox);
        prefAutoSaveEnabled->setObjectName(QStringLiteral("prefAutoSaveEnabled"));
        prefAutoSaveEnabled->setChecked(true);
        prefAutoSaveEnabled->setProperty("prefEntry", QVariant(QByteArray("AutoSaveEnabled")));
        prefAutoSaveEnabled->setProperty("prefPath", QVariant(QByteArray("Document")));

        horizontalLayout->addWidget(prefAutoSaveEnabled);

        prefAutoSaveTimeout = new Gui::PrefSpinBox(groupBox);
        prefAutoSaveTimeout->setObjectName(QStringLiteral("prefAutoSaveTimeout"));
        prefAutoSaveTimeout->setSuffix(QStringLiteral(" min"));
        prefAutoSaveTimeout->setMinimum(1);
        prefAutoSaveTimeout->setMaximum(60);
        prefAutoSaveTimeout->setValue(15);
        prefAutoSaveTimeout->setProperty("prefEntry", QVariant(QByteArray("AutoSaveTimeout")));
        prefAutoSaveTimeout->setProperty("prefPath", QVariant(QByteArray("Document")));

        horizontalLayout->addWidget(prefAutoSaveTimeout);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        line1_2_3 = new QFrame(groupBox);
        line1_2_3->setObjectName(QStringLiteral("line1_2_3"));
        line1_2_3->setFrameShape(QFrame::HLine);
        line1_2_3->setFrameShadow(QFrame::Sunken);
        line1_2_3->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line1_2_3, 4, 0, 1, 1);

        prefSaveThumbnail = new Gui::PrefCheckBox(groupBox);
        prefSaveThumbnail->setObjectName(QStringLiteral("prefSaveThumbnail"));
        prefSaveThumbnail->setProperty("prefEntry", QVariant(QByteArray("SaveThumbnail")));
        prefSaveThumbnail->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_2->addWidget(prefSaveThumbnail, 5, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        prefSaveBackupFiles = new Gui::PrefCheckBox(groupBox);
        prefSaveBackupFiles->setObjectName(QStringLiteral("prefSaveBackupFiles"));
        prefSaveBackupFiles->setChecked(true);
        prefSaveBackupFiles->setProperty("prefEntry", QVariant(QByteArray("CreateBackupFiles")));
        prefSaveBackupFiles->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout2->addWidget(prefSaveBackupFiles);

        spacerItem1 = new QSpacerItem(91, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        prefCountBackupFiles = new Gui::PrefSpinBox(groupBox);
        prefCountBackupFiles->setObjectName(QStringLiteral("prefCountBackupFiles"));
        prefCountBackupFiles->setMinimum(1);
        prefCountBackupFiles->setProperty("prefEntry", QVariant(QByteArray("CountBackupFiles")));
        prefCountBackupFiles->setProperty("prefPath", QVariant(QByteArray("Document")));

        hboxLayout2->addWidget(prefCountBackupFiles);


        gridLayout_2->addLayout(hboxLayout2, 6, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        prefDuplicateLabel = new Gui::PrefCheckBox(groupBox_2);
        prefDuplicateLabel->setObjectName(QStringLiteral("prefDuplicateLabel"));
        prefDuplicateLabel->setProperty("prefEntry", QVariant(QByteArray("DuplicateLabels")));
        prefDuplicateLabel->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout->addWidget(prefDuplicateLabel, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(Gui__Dialog__DlgSettingsDocument);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        prefAuthor = new Gui::PrefLineEdit(groupBox_3);
        prefAuthor->setObjectName(QStringLiteral("prefAuthor"));
        prefAuthor->setProperty("prefEntry", QVariant(QByteArray("prefAuthor")));
        prefAuthor->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_5->addWidget(prefAuthor, 0, 1, 1, 1);

        prefSetAuthorOnSave = new Gui::PrefCheckBox(groupBox_3);
        prefSetAuthorOnSave->setObjectName(QStringLiteral("prefSetAuthorOnSave"));
        prefSetAuthorOnSave->setProperty("prefEntry", QVariant(QByteArray("prefSetAuthorOnSave")));
        prefSetAuthorOnSave->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_5->addWidget(prefSetAuthorOnSave, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        prefCompany = new Gui::PrefLineEdit(groupBox_3);
        prefCompany->setObjectName(QStringLiteral("prefCompany"));
        prefCompany->setProperty("prefEntry", QVariant(QByteArray("prefCompany")));
        prefCompany->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_5->addWidget(prefCompany, 1, 1, 1, 2);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 2, 0, 1, 1);

        prefLicenseType = new Gui::PrefComboBox(groupBox_3);
        prefLicenseType->setObjectName(QStringLiteral("prefLicenseType"));
        prefLicenseType->setEnabled(true);
        prefLicenseType->setEditable(false);
        prefLicenseType->setProperty("prefEntry", QVariant(QByteArray("prefLicenseType")));
        prefLicenseType->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_5->addWidget(prefLicenseType, 2, 1, 1, 2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 3, 0, 1, 1);

        prefLicenseUrl = new Gui::PrefLineEdit(groupBox_3);
        prefLicenseUrl->setObjectName(QStringLiteral("prefLicenseUrl"));
        prefLicenseUrl->setText(QStringLiteral("http://en.wikipedia.org/wiki/All_rights_reserved"));
        prefLicenseUrl->setReadOnly(false);
        prefLicenseUrl->setProperty("prefEntry", QVariant(QByteArray("prefLicenseUrl")));
        prefLicenseUrl->setProperty("prefPath", QVariant(QByteArray("Document")));

        gridLayout_5->addWidget(prefLicenseUrl, 3, 1, 1, 2);


        gridLayout_3->addWidget(groupBox_3, 3, 0, 1, 1);

        QWidget::setTabOrder(prefCheckNewDoc, prefCompression);
        QWidget::setTabOrder(prefCompression, prefUndoRedo);
        QWidget::setTabOrder(prefUndoRedo, prefUndoRedoSize);
        QWidget::setTabOrder(prefUndoRedoSize, prefSaveTransaction);
        QWidget::setTabOrder(prefSaveTransaction, prefDiscardTransaction);
        QWidget::setTabOrder(prefDiscardTransaction, prefSaveThumbnail);

        retranslateUi(Gui__Dialog__DlgSettingsDocument);
        QObject::connect(prefSaveBackupFiles, SIGNAL(toggled(bool)), prefCountBackupFiles, SLOT(setEnabled(bool)));
        QObject::connect(prefAutoSaveEnabled, SIGNAL(toggled(bool)), prefAutoSaveTimeout, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsDocument);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsDocument)
    {
        Gui__Dialog__DlgSettingsDocument->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document", 0));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "General", 0));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document save compression level\n"
"(0 = none, 9 = highest, 3 = default)", 0));
        textLabel1_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Maximum Undo/Redo steps", 0));
        prefCheckNewDoc->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Create new document at start up", 0));
        prefUndoRedo->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Using Undo/Redo on documents", 0));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Storage", 0));
        prefSaveTransaction->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Saving transactions (Auto-save)", 0));
        prefDiscardTransaction->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Discard saved transaction after saving document", 0));
        prefRecovery->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Run AutoRecovery at startup", 0));
        prefAutoSaveEnabled->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Save AutoRecovery information every", 0));
        prefSaveThumbnail->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Save thumbnail into project file when saving document", 0));
        prefSaveBackupFiles->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Create up to backup files when resaving document", 0));
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Document objects", 0));
        prefDuplicateLabel->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Allow duplicate object labels in one document", 0));
        groupBox_3->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Authoring and License", 0));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Author name", 0));
#ifndef QT_NO_TOOLTIP
        prefAuthor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "<html><head/><body><p>The name to use on document creation.</p><p>Keep blank for anonymous.</p><p>You can also use the form:</p><p>John Doe &lt;john@doe.com&gt;</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        prefSetAuthorOnSave->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "If this is checked, the \"Last modified by\" field will be set when saving the file", 0));
#endif // QT_NO_TOOLTIP
        prefSetAuthorOnSave->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Set on save", 0));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Company", 0));
#ifndef QT_NO_TOOLTIP
        prefCompany->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "The default company to use for new files", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Default license", 0));
        prefLicenseType->clear();
        prefLicenseType->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "All rights reserved", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution-ShareAlike", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution-NoDerivatives", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution-NonCommercial", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution-NonCommercial-ShareAlike", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "CreativeCommons Attribution-NonCommercial-NoDerivatives", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Public Domain", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "FreeArt", 0)
         << QApplication::translate("Gui::Dialog::DlgSettingsDocument", "Other", 0)
        );
#ifndef QT_NO_TOOLTIP
        prefLicenseType->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "The default license for new documents", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "License URL", 0));
#ifndef QT_NO_TOOLTIP
        prefLicenseUrl->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsDocument", "An URL where the user can find more details about the license", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsDocument: public Ui_DlgSettingsDocument {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSDOCUMENT_H
