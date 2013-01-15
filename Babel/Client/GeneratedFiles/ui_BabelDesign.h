/********************************************************************************
** Form generated from reading UI file 'BabelDesign.ui'
**
** Created: Mon 14. Jan 01:00:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BABELDESIGN_H
#define UI_BABELDESIGN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientBabel
{
public:
    QAction *actionServer;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonConnect;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuConfiguration;

    void setupUi(QMainWindow *ClientBabel)
    {
        if (ClientBabel->objectName().isEmpty())
            ClientBabel->setObjectName(QString::fromUtf8("ClientBabel"));
        ClientBabel->resize(600, 400);
        ClientBabel->setMinimumSize(QSize(600, 400));
        ClientBabel->setMaximumSize(QSize(600, 400));
        QPalette palette;
        ClientBabel->setPalette(palette);
        ClientBabel->setStyleSheet(QString::fromUtf8(""));
        ClientBabel->setTabShape(QTabWidget::Rounded);
        actionServer = new QAction(ClientBabel);
        actionServer->setObjectName(QString::fromUtf8("actionServer"));
        centralwidget = new QWidget(ClientBabel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(160, 80, 281, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 7, 0);
        labelLogin = new QLabel(formLayoutWidget);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelLogin);

        lineEditLogin = new QLineEdit(formLayoutWidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(formLayoutWidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelPassword);

        lineEditPassword = new QLineEdit(formLayoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPassword);

        pushButtonConnect = new QPushButton(formLayoutWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setEnabled(false);
        pushButtonConnect->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButtonConnect);

        ClientBabel->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ClientBabel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ClientBabel->setStatusBar(statusbar);
        menubar = new QMenuBar(ClientBabel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menubar->setMinimumSize(QSize(600, 0));
        menubar->setMaximumSize(QSize(600, 50));
        menubar->setBaseSize(QSize(600, 50));
        QPalette palette1;
        menubar->setPalette(palette1);
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(true);
        menuConfiguration = new QMenu(menubar);
        menuConfiguration->setObjectName(QString::fromUtf8("menuConfiguration"));
        ClientBabel->setMenuBar(menubar);

        menubar->addAction(menuConfiguration->menuAction());
        menuConfiguration->addAction(actionServer);
        menuConfiguration->addSeparator();

        retranslateUi(ClientBabel);

        QMetaObject::connectSlotsByName(ClientBabel);
    } // setupUi

    void retranslateUi(QMainWindow *ClientBabel)
    {
        ClientBabel->setWindowTitle(QApplication::translate("ClientBabel", "Babel", 0, QApplication::UnicodeUTF8));
        actionServer->setText(QApplication::translate("ClientBabel", "&Server", 0, QApplication::UnicodeUTF8));
        labelLogin->setText(QApplication::translate("ClientBabel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">Login:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelPassword->setText(QApplication::translate("ClientBabel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#ffffff;\">Password:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonConnect->setText(QApplication::translate("ClientBabel", "Connect", 0, QApplication::UnicodeUTF8));
        menuConfiguration->setTitle(QApplication::translate("ClientBabel", "&Configuration", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClientBabel: public Ui_ClientBabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BABELDESIGN_H
