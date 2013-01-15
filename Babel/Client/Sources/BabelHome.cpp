#include	"BabelHome.hpp"

BabelHome::BabelHome()
{
	this->setupUi(this);
	this->connect();
}

BabelHome::~BabelHome()
{
}

void	BabelHome::connect()
{
	QApplication::connect(action_Add_contact, SIGNAL(triggered()), this, SLOT(addContactAction()));
}

void		BabelHome::addContactAction()
{
	QMessageBox::information(this, "coucou", "coucou");
	BabelAddContact	*bac = new BabelAddContact();
	bac->show();
}
