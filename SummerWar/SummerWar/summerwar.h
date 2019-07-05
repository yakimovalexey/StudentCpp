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
	void Operation(char sign);
	void EnterNumber(char number);
	void on_pushButton0_clicked();
	void on_pushButton1_clicked();
	void on_pushButton2_clicked();
	void on_pushButton3_clicked();
	void on_pushButton4_clicked();
	void on_pushButton5_clicked();
	void on_pushButton6_clicked();
	void on_pushButton7_clicked();
	void on_pushButton8_clicked();
	void on_pushButton9_clicked();
	void on_pushButtonDot_clicked();
	void on_pushButtonErase_clicked();
	void on_pushButtonPlus_clicked();
	void on_pushButtonMinus_clicked();
	void on_pushButtonMultiply_clicked();
	void on_pushButtonDivision_clicked();
	void on_pushButtonEqual_clicked();
	void on_pushButtonSqrt_clicked();
	void on_pushButtonSqr_clicked();
	void on_pushButtonClear_clicked();
	void on_pushButtonClearEntry_clicked();
	void on_pushButtonNegate_clicked();
	void on_pushButtonUndo_clicked();
	void on_pushButtonRedo_clicked();
	void keyPressEvent(QKeyEvent *event);
};

#endif // SUMMERWAR_H
