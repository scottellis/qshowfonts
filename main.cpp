#include "qshowfonts.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication *app = new QApplication(argc, argv);
	QShowFonts *w = new QShowFonts;

#ifdef Q_OS_LINUX
	w->showFullScreen();
#else
	w->show();
#endif

	return app->exec();
}
