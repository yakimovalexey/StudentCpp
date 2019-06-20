#ifndef SUMMERWAR_H
#define SUMMERWAR_H

#include <QtWidgets/QMainWindow>
#include "ui_summerwar.h"

class SummerWar : public QMainWindow
{
	Q_OBJECT

public:
	SummerWar(QWidget *parent = 0);
	~SummerWar();

private:
	Ui::SummerWarClass ui;
	private slots:
	void Calculate();
	void EnterNumber(char number);
	void on_pushButtonNumberZero_clicked();
	void on_pushButtonNumberOne_clicked();
	void on_pushButtonNumberTwo_clicked();
	void on_pushButtonNumberThree_clicked();
	void on_pushButtonNumberFour_clicked();
	void on_pushButtonNumberFive_clicked();
	void on_pushButtonNumberSix_clicked();
	void on_pushButtonNumberSeven_clicked();
	void on_pushButtonNumberEight_clicked();
	void on_pushButtonNumberNine_clicked();
	void on_pushButtonDot_clicked();
	void on_pushButtonErase_clicked();
	void on_pushButtonPlus_clicked();
	void on_pushButtonMinus_clicked();
	void on_pushButtonMultiply_clicked();
	void on_pushButtonDivision_clicked();
	void on_pushButtonEqual_clicked();
	void on_pushButtonReset_clicked();
	void on_pushButtonResetNumber_clicked();
	void on_pushButtonNegate_clicked();
	void keyPressEvent(QKeyEvent *event);
};

#endif // SUMMERWAR_H
