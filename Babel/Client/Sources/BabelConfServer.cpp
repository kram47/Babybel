#include	"BabelConfServer.hpp"

BabelConfServer::BabelConfServer(std::string *const server, std::string *const port)
{
	std::istringstream	iss;
	int					tmp;

	this->setupUi(this);
	this->_server = server;
	this->_port = port;
	this->lineEditIp->setText(_server->c_str());
	iss.str(*_port);
	iss >> tmp;
	this->spinBoxPort->setValue(tmp);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->connect();
}

BabelConfServer::~BabelConfServer()
{
}

void	BabelConfServer::connect()
{
	QApplication::connect(lineEditIp, SIGNAL(textChanged(QString const &)), this, SLOT(buttonEffect(QString const &)));
	QApplication::connect(pushButtonValidConf, SIGNAL(clicked()), this, SLOT(confirmAction()));
}

void		BabelConfServer::confirmAction()
{
	std::ostringstream	oss;

	*_server = this->lineEditIp->text().toStdString();
	oss << this->spinBoxPort->value();
	*_port = oss.str();
	this->close();
}

void	BabelConfServer::buttonEffect(QString const &text)
{
	if (lineEditIp->text().length() == 0 || spinBoxPort->text().length() == 0)
		this->pushButtonValidConf->setEnabled(false);
	else
		this->pushButtonValidConf->setEnabled(true);
}