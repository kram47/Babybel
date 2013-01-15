#ifndef	__BABEL_HOME_HPP__
#define	__BABEL_HOME_HPP__

#include	<iostream>
#include	<string>
#include	<QMainWindow>
#include	<QMessageBox>
#include	"ui_BabelClientDesign.h"
#include	"BabelAddContact.hpp"


class	BabelHome : public QMainWindow, public Ui_MainWindow
{
	Q_OBJECT

public:
	BabelHome();
	~BabelHome();

public:
	void	connect();

	public slots:
		void		addContactAction();

};

#endif