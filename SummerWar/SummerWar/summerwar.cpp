#include "summerwar.h"
#include <QKeyEvent>
#include <QMessageBox>
#include <stack>
#include <limits>

using namespace std;

double value;
unsigned short operation_code = 0;
char operation_name = NULL;

struct Undo
{
	stack <double> value;
	stack <QString> expression;
} undo;

struct Redo
{
	stack <double> value;
	stack <QString> expression;
} redo;

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
		value += ui.labelEntry->text().toDouble();
		break;
	case '-':
		value -= ui.labelEntry->text().toDouble();
		break;
	case '*':
		value *= ui.labelEntry->text().toDouble();
		break;
	case '/':
		if (ui.labelEntry->text().toDouble() != 0)
			value /= ui.labelEntry->text().toDouble();
		else
		{
			QMessageBox::critical(NULL, QObject::tr("Error"), tr("Cannot divide by zero"));
			ui.labelExpression->setText(ui.labelExpression->text().replace(" / 0", ""));
			undo.value.pop();
			undo.expression.pop();
		}
		break;
	default:
		break;
	}
	if (operation_name == NULL)
		value = ui.labelEntry->text().toDouble();
	else
	{
		if (value <= numeric_limits<double>::max() && value >= numeric_limits<double>::lowest())
			ui.labelEntry->setText(QString::number(value));
		else
			QMessageBox::critical(NULL, QObject::tr("Error"), tr("Overflow")), on_pushButtonClear_clicked();
	}
	operation_code = 1;
	operation_name = NULL;
}

void SummerWar::EnterNumber(char number)
{
	if (ui.labelEntry->text() == "0" || operation_code != 0)
	{
		ui.labelEntry->setText(QString::number(number - 48));
		operation_code = 0;
	}
	else if (ui.labelEntry->text().size() < 16)
		ui.labelEntry->setText(ui.labelEntry->text() + number);
}

void SummerWar::on_pushButton0_clicked() { EnterNumber('0'); }
void SummerWar::on_pushButton1_clicked() { EnterNumber('1'); }
void SummerWar::on_pushButton2_clicked() { EnterNumber('2'); }
void SummerWar::on_pushButton3_clicked() { EnterNumber('3'); }
void SummerWar::on_pushButton4_clicked() { EnterNumber('4'); }
void SummerWar::on_pushButton5_clicked() { EnterNumber('5'); }
void SummerWar::on_pushButton6_clicked() { EnterNumber('6'); }
void SummerWar::on_pushButton7_clicked() { EnterNumber('7'); }
void SummerWar::on_pushButton8_clicked() { EnterNumber('8'); }
void SummerWar::on_pushButton9_clicked() { EnterNumber('9'); }

void SummerWar::on_pushButtonDot_clicked()
{
	if (operation_code != 0)
	{
		ui.labelEntry->setText("0.");
		operation_code = 0;
	}
	else if (ui.labelEntry->text().lastIndexOf('.') == -1)
		ui.labelEntry->setText(ui.labelEntry->text() + '.');
}

void SummerWar::on_pushButtonErase_clicked()
{
	if (ui.labelEntry->text() != "0" && operation_code == 0)
		ui.labelEntry->text().size() == 1 ? ui.labelEntry->setText("0") : ui.labelEntry->setText(ui.labelEntry->text().remove(ui.labelEntry->text().size() - 1, 1));
}

void SummerWar::Operation(char sign)
{
	if (operation_name == NULL)
	{
		ui.labelExpression->setText(ui.labelExpression->text() + ui.labelEntry->text() + ' ' + sign + ' ');
		value = ui.labelEntry->text().toDouble();
	}
	else if (operation_code != 1)
	{
		undo.value.push(value);
		undo.expression.push(ui.labelExpression->text());
		ui.labelExpression->setText(ui.labelExpression->text() + ui.labelEntry->text() + ' ' + sign + ' ');
		Calculate();
	}
	else
	{
		ui.labelExpression->setText(ui.labelExpression->text().remove(ui.labelExpression->text().size() - 3, 3));
		ui.labelExpression->setText(ui.labelExpression->text() + ' ' + sign + ' ');
	}
	operation_code = 1;
	operation_name = sign;
}

void SummerWar::on_pushButtonPlus_clicked() { Operation('+'); }
void SummerWar::on_pushButtonMinus_clicked() { Operation('-'); }
void SummerWar::on_pushButtonMultiply_clicked() { Operation('*'); }
void SummerWar::on_pushButtonDivision_clicked() { Operation('/'); }

void SummerWar::on_pushButtonEqual_clicked()
{
	undo.value.push(value);
	undo.expression.push(ui.labelExpression->text());
	ui.labelExpression->setText(ui.labelExpression->text() + ui.labelEntry->text());
	Calculate();
	ui.labelExpression->setText("");
	while (!undo.value.empty())
	{
		undo.value.pop();
		undo.expression.pop();
	}
}

void SummerWar::on_pushButtonSqrt_clicked()
{
	if (ui.labelEntry->text().toDouble() < 0)
		QMessageBox::critical(NULL, QObject::tr("Error"), tr("Cannot extract the root from a negative number"));
	else
	{
		ui.labelEntry->setText(QString::number(sqrt(ui.labelEntry->text().toDouble())));
		if (operation_name == NULL)
		{
			value = ui.labelEntry->text().toDouble();
		}
		operation_code = 0;
	}
}

void SummerWar::on_pushButtonSqr_clicked()
{
	if (pow(ui.labelEntry->text().toDouble(), 2) <= numeric_limits<double>::max() && pow(ui.labelEntry->text().toDouble(), 2) >= numeric_limits<double>::lowest())
		ui.labelEntry->setText(QString::number(pow(ui.labelEntry->text().toDouble(), 2)));
	else
		QMessageBox::critical(NULL, QObject::tr("Error"), tr("Overflow")), on_pushButtonClear_clicked();
	if (operation_name == NULL)
	{
		value = ui.labelEntry->text().toDouble();
	}
	operation_code = 0;
}

void SummerWar::on_pushButtonClear_clicked()
{
	value = 0;
	operation_code = 0;
	operation_name = NULL;
	ui.labelEntry->setText("0");
	ui.labelExpression->setText("");
	while (!undo.value.empty())
	{
		undo.value.pop();
		undo.expression.pop();
	}
}

void SummerWar::on_pushButtonClearEntry_clicked()
{
	ui.labelEntry->setText("0");
	operation_code = 0;
}

void SummerWar::on_pushButtonNegate_clicked()
{
	ui.labelEntry->setText(QString::number(ui.labelEntry->text().toDouble() * -1));
	operation_code = 0;
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
<<<<<<< HEAD

void SummerWar::on_pushButtonUndo_clicked()
{
	if (operation_code != 2)
		while (!redo.value.empty())
		{
			redo.value.pop();
			redo.expression.pop();
		}
	if (undo.value.size() != 0)
	{
		redo.value.push(value);
		redo.expression.push(ui.labelExpression->text());
		value = undo.value.top();
		ui.labelExpression->setText(undo.expression.top());
		ui.labelEntry->setText(QString::number(value));
		undo.value.pop();
		undo.expression.pop();
		operation_code = 2;
	}
}

void SummerWar::on_pushButtonRedo_clicked()
{
	if (operation_code == 2 && !redo.value.empty())
	{
		undo.value.push(value);
		undo.expression.push(ui.labelExpression->text());
		value = redo.value.top();
		ui.labelExpression->setText(redo.expression.top());
		ui.labelEntry->setText(QString::number(value));
		redo.value.pop();
		redo.expression.pop();
	}
}
=======
>>>>>>> master
