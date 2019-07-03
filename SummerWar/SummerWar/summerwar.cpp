#include "summerwar.h"
#include <QKeyEvent>

using namespace std;

double value = 0;
bool operation = 0;
char operation_name = NULL;

SummerWar::SummerWar(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

SummerWar::~SummerWar() {}

void SummerWar::Calculate()
{
	switch (operation_name)
	{
	case '+':
		value += ui.label->text().toDouble();
		break;
	case '-':
		value -= ui.label->text().toDouble();
		break;
	case '*':
		value *= ui.label->text().toDouble();
		break;
	case '/':
		value /= ui.label->text().toDouble();
		break;
	default:
		break;
	}
	(operation_name == NULL) ? value = ui.label->text().toDouble() : ui.label->setText(QString::number(value));
	operation = 1;
	operation_name = NULL;
}

void SummerWar::EnterNumber(char number)
{
	(ui.label->text() == "0" || operation) ? ui.label->setText(QString::number(number - 48)), operation = 0 : ui.label->setText(ui.label->text() + number);
}

void SummerWar::on_pushButtonNumberZero_clicked()
{
	EnterNumber('0');
}

void SummerWar::on_pushButtonNumberOne_clicked()
{
	EnterNumber('1');
}

void SummerWar::on_pushButtonNumberTwo_clicked()
{
	EnterNumber('2');
}

void SummerWar::on_pushButtonNumberThree_clicked()
{
	EnterNumber('3');
}

void SummerWar::on_pushButtonNumberFour_clicked()
{
	EnterNumber('4');
}

void SummerWar::on_pushButtonNumberFive_clicked()
{
	EnterNumber('5');
}

void SummerWar::on_pushButtonNumberSix_clicked()
{
	EnterNumber('6');
}

void SummerWar::on_pushButtonNumberSeven_clicked()
{
	EnterNumber('7');
}

void SummerWar::on_pushButtonNumberEight_clicked()
{
	EnterNumber('8');
}

void SummerWar::on_pushButtonNumberNine_clicked()
{
	EnterNumber('9');
}

void SummerWar::on_pushButtonDot_clicked()
{
	if (ui.label->text().lastIndexOf('.') == -1)
		ui.label->setText(ui.label->text() + '.');
}

void SummerWar::on_pushButtonErase_clicked()
{
	if (ui.label->text() != "0" && !operation)
		ui.label->text().size() == 1 ? ui.label->setText("0") : ui.label->setText(ui.label->text().remove(ui.label->text().size() - 1, 1));
}

void SummerWar::on_pushButtonPlus_clicked()
{
	if (operation_name == NULL)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + " + ");
		value = ui.label->text().toDouble();
	}
	else if (operation == 0)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + " + ");
		if (operation_name == '+')
		{
			value += ui.label->text().toDouble();
			ui.label->setText(QString::number(value));
		}
		else
			Calculate();
	}
	operation = 1;
	operation_name = '+';
}

void SummerWar::on_pushButtonMinus_clicked()
{
	if (operation_name == NULL)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + " - ");
		value = ui.label->text().toDouble();
	}
	else if (operation == 0)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + " - ");
		if (operation_name == '-')
		{
			value -= ui.label->text().toDouble();
			ui.label->setText(QString::number(value));
		}
		else
			Calculate();
	}
	operation = 1;
	operation_name = '-';
}

void SummerWar::on_pushButtonMultiply_clicked()
{
	if (operation_name == NULL)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + ' ' + QChar(215) + ' ');
		value = ui.label->text().toDouble();
	}
	else if (operation == 0)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + ' ' + QChar(215) + ' ');
		if (operation_name == '*')
		{
			value *= ui.label->text().toDouble();
			ui.label->setText(QString::number(value));
		}
		else
			Calculate();
	}
	operation = 1;
	operation_name = '*';
}

void SummerWar::on_pushButtonDivision_clicked()
{
	if (operation_name == NULL)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + ' ' + QChar(247) + ' ');
		value = ui.label->text().toDouble();
	}
	else if(operation == 0)
	{
		ui.label_2->setText(ui.label_2->text() + ui.label->text() + ' ' + QChar(247) + ' ');
		if (operation_name == '/')
		{
			value /= ui.label->text().toDouble();
			ui.label->setText(QString::number(value));
		}
		else
			Calculate();
	}
	operation = 1;
	operation_name = '/';
}

void SummerWar::on_pushButtonEqual_clicked()
{
	if (operation == 0)
		Calculate();
	ui.label_2->setText("");
}

void SummerWar::on_pushButtonReset_clicked()
{
	value = 0;
	operation = 0;
	operation_name = NULL;
	ui.label->setText("0");
	ui.label_2->setText("");
}

void SummerWar::on_pushButtonResetNumber_clicked()
{
	ui.label->setText("0");
}

void SummerWar::on_pushButtonNegate_clicked()
{
	ui.label->setText(QString::number(ui.label->text().toDouble() * -1));
}

void SummerWar::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
	case Qt::Key_Plus:
		on_pushButtonPlus_clicked();
		break;
	case Qt::Key_Minus:
		on_pushButtonMinus_clicked();
		break;
	case Qt::Key_Asterisk:
		on_pushButtonMultiply_clicked();
		break;
	case Qt::Key_Slash:
		on_pushButtonDivision_clicked();
		break;
	case Qt::Key_Equal:
		on_pushButtonEqual_clicked();
		break;
	case Qt::Key_Period:
		on_pushButtonDot_clicked();
		break;
	case Qt::Key_Comma:
		on_pushButtonDot_clicked();
		break;
	case Qt::Key_Backspace:
		on_pushButtonErase_clicked();
		break;
	default:
		if (event->key() >= Qt::Key_0 && event->key() <= Qt::Key_9)
			EnterNumber(event->key());
		break;
	}
}
