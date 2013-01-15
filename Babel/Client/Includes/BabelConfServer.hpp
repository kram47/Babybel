#ifndef	__BABEL_CONF_SERVER_HPP__
#define	__BABEL_CONF_SERVER_HPP__

#include	<QWidget>
#include	<QMessageBox>
#include	<QString>
#include	<sstream>
#include	"ui_BabelConfServer.h"

class	BabelConfServer : public QWidget, public Ui_FormConf
{
	Q_OBJECT

private:
	std::string		*_server;
	std::string		*_port;

public:
	BabelConfServer(std::string * const, std::string * const);
	~BabelConfServer();

public:
	void	connect();

	public slots:
		void		confirmAction();
		void		buttonEffect(QString const &);
};

#endif