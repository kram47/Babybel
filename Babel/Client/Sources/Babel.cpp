#include	"Babel.hpp"

Babel::Babel()
{
	this->setupUi(this);
	this->connect();
	this->_conf = NULL;
	this->_server = BASIC_IP;
	this->_port = BASIC_PORT;
}

Babel::~Babel()
{
}

std::string	Babel::getLogin() const
{
	return (lineEditLogin->text().toStdString());
}

std::string	Babel::getPassword() const
{
	return (lineEditPassword->text().toStdString());
}

std::string	Babel::getServerAddress() const
{
	return (_server);
}

std::string	Babel::getPort() const
{
	return (_port);
}


void		Babel::connectAction()
{
	std::string	login;
	std::string	password;
	std::string	tmp;

	login = getLogin();
	password = getPassword();
	tmp = login + ' ' + password + ' ' + _server + ' ' + _port;
	QMessageBox::information(this, "Login et mot de passe", tmp.c_str());
	if (login.compare("azerty") != 0 || password.compare("azerty") != 0)
		QMessageBox::warning(this, "Error", "Invalid login or password");
	else
		this->centralwidget->close();
}

void	Babel::connect()
{
	QApplication::connect(lineEditLogin, SIGNAL(textChanged(QString const &)), this, SLOT(buttonEffect(QString const &)));
	QApplication::connect(lineEditPassword, SIGNAL(textChanged(QString const &)), this, SLOT(buttonEffect(QString const &)));
	QApplication::connect(pushButtonConnect, SIGNAL(clicked()), this, SLOT(connectAction()));
	QApplication::connect(action_Server, SIGNAL(triggered()), this, SLOT(configureServer()));
}

void	Babel::buttonEffect(QString const &text)
{
	if (lineEditLogin->text().length() == 0 || lineEditPassword->text().length() == 0)
		pushButtonConnect->setEnabled(false);
	else
		pushButtonConnect->setEnabled(true);
}

void		Babel::configureServerDestroy(QObject *obj)
{
	(void) obj;
	this->_conf = NULL;
}


void		Babel::configureServer()
{
	if (_conf == NULL)
	{
		_conf = new BabelConfServer(&_server, &_port);
		_conf->show();
		QApplication::connect(_conf, SIGNAL(destroyed(QObject *)), this, SLOT(configureServerDestroy(QObject *)));
	}
	_conf->activateWindow();
}


