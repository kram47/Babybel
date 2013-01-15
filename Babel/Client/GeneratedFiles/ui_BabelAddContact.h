/********************************************************************************
** Form generated from reading UI file 'BabelAddContact.ui'
**
** Created: Mon 14. Jan 01:00:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BABELADDCONTACT_H
#define UI_BABELADDCONTACT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddContact
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEditContactName;
    QPushButton *pushButtonAddContact;
    QLabel *labelAddContact;

    void setupUi(QWidget *FormAddContact)
    {
        if (FormAddContact->objectName().isEmpty())
            FormAddContact->setObjectName(QString::fromUtf8("FormAddContact"));
        FormAddContact->resize(400, 300);
        FormAddContact->setMinimumSize(QSize(400, 300));
        FormAddContact->setMaximumSize(QSize(400, 300));
        FormAddContact->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        formLayoutWidget = new QWidget(FormAddContact);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 80, 261, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 7, 0);
        lineEditContactName = new QLineEdit(formLayoutWidget);
        lineEditContactName->setObjectName(QString::fromUtf8("lineEditContactName"));
        lineEditContactName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditContactName);

        pushButtonAddContact = new QPushButton(formLayoutWidget);
        pushButtonAddContact->setObjectName(QString::fromUtf8("pushButtonAddContact"));
        pushButtonAddContact->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 237, 237);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButtonAddContact);

        labelAddContact = new QLabel(formLayoutWidget);
        labelAddContact->setObjectName(QString::fromUtf8("labelAddContact"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelAddContact);


        retranslateUi(FormAddContact);

        QMetaObject::connectSlotsByName(FormAddContact);
    } // setupUi

    void retranslateUi(QWidget *FormAddContact)
    {
        FormAddContact->setWindowTitle(QApplication::translate("FormAddContact", "Babel - Add contact", 0, QApplication::UnicodeUTF8));
        pushButtonAddContact->setText(QApplication::translate("FormAddContact", "Add contact", 0, QApplication::UnicodeUTF8));
        labelAddContact->setText(QApplication::translate("FormAddContact", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">Contact name to add</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormAddContact: public Ui_FormAddContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BABELADDCONTACT_H
