#include	"BabelAddContact.hpp"

BabelAddContact::BabelAddContact()
{
	this->setupUi(this);
	this->pushButtonAddContact->setEnabled(false);
	this->connect();
}

BabelAddContact::~BabelAddContact()
{
}

void	BabelAddContact::connect()
{
	QApplication::connect(pushButtonAddContact, SIGNAL(clicked()), this, SLOT(addAction()));
	QApplication::connect(lineEditContactName, SIGNAL(textChanged(QString const &)), this, SLOT(buttonEffect(QString const &)));
}

void		BabelAddContact::buttonEffect(QString const &text)
{
	(void) text;
	if (lineEditContactName->text().length() == 0)
		this->pushButtonAddContact->setEnabled(false);
	else
		this->pushButtonAddContact->setEnabled(true);
}

void		BabelAddContact::addAction()
{
	QMessageBox::information(this, "Add action", lineEditContactName->text().toStdString().c_str());
	lineEditContactName->setText("");
}

