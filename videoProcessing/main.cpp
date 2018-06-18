#include "videoprocessing.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	videoProcessing w;
	w.show();
	return a.exec();
}
