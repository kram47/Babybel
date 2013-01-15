#ifndef	__BABEL_ADD_CONTACT_HPP__
#define	__BABEL_ADD_CONTACT_HPP__

#include	<QWidget>
#include	<QMessageBox>
#include	<QString>
#include	"ui_BabelAddContact.h"

class	BabelAddContact : public QWidget, public Ui_FormAddContact
{
	Q_OBJECT

public:
	BabelAddContact();
	~BabelAddContact();

public:
	void	connect();

	public slots:
		void		addAction();
		void		buttonEffect(QString const &);
};

#endif