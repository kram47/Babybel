#include	"Babel.hpp"
#include	"BabelHome.hpp"
#include	<QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Babel	b;

	//b.show();

	BabelHome	bh;

	bh.show();
	return a.exec();
}
