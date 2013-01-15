#ifndef	__BABEL_HPP__
#define	__BABEL_HPP__

#include	<iostream>
#include	<string>
#include	<QMainWindow>
#include	<QMessageBox>
#include	"ui_BabelDesign.h"
#include	"BabelConfServer.hpp"

#define	BASIC_IP	"127.0.0.1"
#define	BASIC_PORT	"4242"

class	Babel : public QMainWindow, public Ui_ClientBabel
{
	Q_OBJECT

private:
	BabelConfServer	*_conf;
	std::string		_server;
	std::string		_port;

public:
	Babel();
	~Babel();

public:
	void	connect();
	std::string	getLogin() const;
	std::string	getPassword() const;
	std::string	getServerAddress() const;
	std::string	getPort() const;

	public slots:
		void		connectAction();
		void		configureServer();
		void		configureServerDestroy(QObject *);
		void		buttonEffect(QString const &);
};


#endif