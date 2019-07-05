#include "summerwar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SummerWar w;
	w.show();
	return a.exec();
}
