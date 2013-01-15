/********************************************************************************
** Form generated from reading UI file 'BabelConfServer.ui'
**
** Created: Mon 14. Jan 01:00:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BABELCONFSERVER_H
#define UI_BABELCONFSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConf
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelIp;
    QLineEdit *lineEditIp;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;
    QPushButton *pushButtonValidConf;

    void setupUi(QWidget *FormConf)
    {
        if (FormConf->objectName().isEmpty())
            FormConf->setObjectName(QString::fromUtf8("FormConf"));
        FormConf->resize(400, 400);
        FormConf->setMinimumSize(QSize(200, 200));
        FormConf->setMaximumSize(QSize(400, 400));
        FormConf->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        formLayoutWidget = new QWidget(FormConf);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 110, 251, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 7, 0);
        labelIp = new QLabel(formLayoutWidget);
        labelIp->setObjectName(QString::fromUtf8("labelIp"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelIp);

        lineEditIp = new QLineEdit(formLayoutWidget);
        lineEditIp->setObjectName(QString::fromUtf8("lineEditIp"));
        lineEditIp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditIp);

        labelPort = new QLabel(formLayoutWidget);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelPort);

        spinBoxPort = new QSpinBox(formLayoutWidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        spinBoxPort->setMinimum(1000);
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(1000);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxPort);

        pushButtonValidConf = new QPushButton(formLayoutWidget);
        pushButtonValidConf->setObjectName(QString::fromUtf8("pushButtonValidConf"));
        pushButtonValidConf->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButtonValidConf);


        retranslateUi(FormConf);

        QMetaObject::connectSlotsByName(FormConf);
    } // setupUi

    void retranslateUi(QWidget *FormConf)
    {
        FormConf->setWindowTitle(QApplication::translate("FormConf", "Configuration Server", 0, QApplication::UnicodeUTF8));
        labelIp->setText(QApplication::translate("FormConf", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">IP Adress</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPort->setText(QApplication::translate("FormConf", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">Port</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonValidConf->setText(QApplication::translate("FormConf", "Confirm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormConf: public Ui_FormConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BABELCONFSERVER_H
