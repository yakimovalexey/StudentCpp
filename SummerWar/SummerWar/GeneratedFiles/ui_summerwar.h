/********************************************************************************
** Form generated from reading UI file 'summerwar.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMERWAR_H
#define UI_SUMMERWAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SummerWarClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonErase;
    QPushButton *pushButtonSqr;
    QPushButton *pushButtonNegate;
    QPushButton *pushButtonDot;
    QLabel *labelEntry;
    QPushButton *pushButton5;
    QPushButton *pushButton9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *labelExpression;
    QPushButton *pushButtonSqrt;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton1;
    QPushButton *pushButtonClearEntry;
    QPushButton *pushButton0;
    QPushButton *pushButton6;
    QPushButton *pushButton4;
    QPushButton *pushButtonUndo;
    QPushButton *pushButtonRedo;
    QPushButton *pushButton2;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiply;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonEqual;
    QPushButton *pushButtonClear;

    void setupUi(QMainWindow *SummerWarClass)
    {
        if (SummerWarClass->objectName().isEmpty())
            SummerWarClass->setObjectName(QString::fromUtf8("SummerWarClass"));
        SummerWarClass->setEnabled(true);
        SummerWarClass->resize(328, 427);
        SummerWarClass->setMinimumSize(QSize(0, 0));
        SummerWarClass->setLayoutDirection(Qt::LeftToRight);
        SummerWarClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(SummerWarClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"color : #ffffff;\n"
"background-color: #1f1f1f;\n"
"margin: 1px;\n"
"border: none;\n"
"}\n"
"QPushButton {\n"
"width: 80;\n"
"height: 50;\n"
"background-color: #131313;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonMinus = new QPushButton(centralWidget);
        pushButtonMinus->setObjectName(QString::fromUtf8("pushButtonMinus"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(pushButtonMinus->sizePolicy().hasHeightForWidth());
        pushButtonMinus->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        pushButtonMinus->setFont(font);
        pushButtonMinus->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonMinus, 9, 3, 1, 1);

        pushButtonErase = new QPushButton(centralWidget);
        pushButtonErase->setObjectName(QString::fromUtf8("pushButtonErase"));
        sizePolicy.setHeightForWidth(pushButtonErase->sizePolicy().hasHeightForWidth());
        pushButtonErase->setSizePolicy(sizePolicy);
        pushButtonErase->setFont(font);
        pushButtonErase->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonErase, 6, 2, 1, 1);

        pushButtonSqr = new QPushButton(centralWidget);
        pushButtonSqr->setObjectName(QString::fromUtf8("pushButtonSqr"));
        sizePolicy.setHeightForWidth(pushButtonSqr->sizePolicy().hasHeightForWidth());
        pushButtonSqr->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButtonSqr->setFont(font1);

        gridLayout->addWidget(pushButtonSqr, 4, 1, 1, 1);

        pushButtonNegate = new QPushButton(centralWidget);
        pushButtonNegate->setObjectName(QString::fromUtf8("pushButtonNegate"));
        sizePolicy.setHeightForWidth(pushButtonNegate->sizePolicy().hasHeightForWidth());
        pushButtonNegate->setSizePolicy(sizePolicy);
        pushButtonNegate->setFont(font);
        pushButtonNegate->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonNegate, 11, 0, 1, 1);

        pushButtonDot = new QPushButton(centralWidget);
        pushButtonDot->setObjectName(QString::fromUtf8("pushButtonDot"));
        sizePolicy.setHeightForWidth(pushButtonDot->sizePolicy().hasHeightForWidth());
        pushButtonDot->setSizePolicy(sizePolicy);
        pushButtonDot->setFont(font);
        pushButtonDot->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonDot, 11, 2, 1, 1);

        labelEntry = new QLabel(centralWidget);
        labelEntry->setObjectName(QString::fromUtf8("labelEntry"));
        sizePolicy.setHeightForWidth(labelEntry->sizePolicy().hasHeightForWidth());
        labelEntry->setSizePolicy(sizePolicy);
        labelEntry->setMinimumSize(QSize(0, 0));
        labelEntry->setMaximumSize(QSize(16777215, 100));
        QFont font2;
        font2.setPointSize(26);
        labelEntry->setFont(font2);
        labelEntry->setStyleSheet(QString::fromUtf8(""));
        labelEntry->setTextFormat(Qt::AutoText);
        labelEntry->setScaledContents(false);
        labelEntry->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelEntry, 2, 0, 1, 4);

        pushButton5 = new QPushButton(centralWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton5->setFont(font3);
        pushButton5->setAutoFillBackground(false);
        pushButton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton5, 9, 1, 1, 1);

        pushButton9 = new QPushButton(centralWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        pushButton9->setFont(font3);
        pushButton9->setAutoFillBackground(false);
        pushButton9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton9, 7, 2, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMaximumSize(QSize(16777215, 100));
        scrollArea->setLayoutDirection(Qt::RightToLeft);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 326, 69));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        labelExpression = new QLabel(scrollAreaWidgetContents);
        labelExpression->setObjectName(QString::fromUtf8("labelExpression"));
        sizePolicy.setHeightForWidth(labelExpression->sizePolicy().hasHeightForWidth());
        labelExpression->setSizePolicy(sizePolicy);
        labelExpression->setMinimumSize(QSize(0, 0));
        labelExpression->setMaximumSize(QSize(16777215, 100));
        labelExpression->setSizeIncrement(QSize(0, 0));
        labelExpression->setBaseSize(QSize(0, 0));
        QFont font4;
        font4.setPointSize(12);
        labelExpression->setFont(font4);
        labelExpression->setLayoutDirection(Qt::RightToLeft);
        labelExpression->setStyleSheet(QString::fromUtf8("QLabel {\n"
"height: 24;\n"
"}"));
        labelExpression->setFrameShape(QFrame::NoFrame);
        labelExpression->setScaledContents(false);
        labelExpression->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelExpression->setIndent(-1);

        gridLayout_2->addWidget(labelExpression, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 3, 0, 1, 4);

        pushButtonSqrt = new QPushButton(centralWidget);
        pushButtonSqrt->setObjectName(QString::fromUtf8("pushButtonSqrt"));
        sizePolicy.setHeightForWidth(pushButtonSqrt->sizePolicy().hasHeightForWidth());
        pushButtonSqrt->setSizePolicy(sizePolicy);
        pushButtonSqrt->setFont(font);

        gridLayout->addWidget(pushButtonSqrt, 4, 0, 1, 1);

        pushButton7 = new QPushButton(centralWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setFont(font3);
        pushButton7->setAutoFillBackground(false);
        pushButton7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton7, 7, 0, 1, 1);

        pushButton8 = new QPushButton(centralWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setFont(font3);
        pushButton8->setAutoFillBackground(false);
        pushButton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton8, 7, 1, 1, 1);

        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setFont(font3);
        pushButton1->setAutoFillBackground(false);
        pushButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton1, 10, 0, 1, 1);

        pushButtonClearEntry = new QPushButton(centralWidget);
        pushButtonClearEntry->setObjectName(QString::fromUtf8("pushButtonClearEntry"));
        sizePolicy.setHeightForWidth(pushButtonClearEntry->sizePolicy().hasHeightForWidth());
        pushButtonClearEntry->setSizePolicy(sizePolicy);
        pushButtonClearEntry->setFont(font4);
        pushButtonClearEntry->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonClearEntry, 6, 0, 1, 1);

        pushButton0 = new QPushButton(centralWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);
        pushButton0->setFont(font3);
        pushButton0->setAutoFillBackground(false);
        pushButton0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton0, 11, 1, 1, 1);

        pushButton6 = new QPushButton(centralWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setFont(font3);
        pushButton6->setAutoFillBackground(false);
        pushButton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton6, 9, 2, 1, 1);

        pushButton4 = new QPushButton(centralWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        pushButton4->setFont(font3);
        pushButton4->setAutoFillBackground(false);
        pushButton4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton4, 9, 0, 1, 1);

        pushButtonUndo = new QPushButton(centralWidget);
        pushButtonUndo->setObjectName(QString::fromUtf8("pushButtonUndo"));
        sizePolicy.setHeightForWidth(pushButtonUndo->sizePolicy().hasHeightForWidth());
        pushButtonUndo->setSizePolicy(sizePolicy);
        pushButtonUndo->setFont(font4);

        gridLayout->addWidget(pushButtonUndo, 4, 2, 1, 1);

        pushButtonRedo = new QPushButton(centralWidget);
        pushButtonRedo->setObjectName(QString::fromUtf8("pushButtonRedo"));
        sizePolicy.setHeightForWidth(pushButtonRedo->sizePolicy().hasHeightForWidth());
        pushButtonRedo->setSizePolicy(sizePolicy);
        pushButtonRedo->setFont(font4);

        gridLayout->addWidget(pushButtonRedo, 4, 3, 1, 1);

        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        pushButton2->setFont(font3);
        pushButton2->setAutoFillBackground(false);
        pushButton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton2, 10, 1, 1, 1);

        pushButtonPlus = new QPushButton(centralWidget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));
        sizePolicy.setHeightForWidth(pushButtonPlus->sizePolicy().hasHeightForWidth());
        pushButtonPlus->setSizePolicy(sizePolicy);
        pushButtonPlus->setFont(font);
        pushButtonPlus->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonPlus, 10, 3, 1, 1);

        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setFont(font3);
        pushButton3->setAutoFillBackground(false);
        pushButton3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #060606;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #4a4a4a;\n"
"}"));

        gridLayout->addWidget(pushButton3, 10, 2, 1, 1);

        pushButtonMultiply = new QPushButton(centralWidget);
        pushButtonMultiply->setObjectName(QString::fromUtf8("pushButtonMultiply"));
        sizePolicy.setHeightForWidth(pushButtonMultiply->sizePolicy().hasHeightForWidth());
        pushButtonMultiply->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        pushButtonMultiply->setFont(font5);
        pushButtonMultiply->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonMultiply, 7, 3, 1, 1);

        pushButtonDivision = new QPushButton(centralWidget);
        pushButtonDivision->setObjectName(QString::fromUtf8("pushButtonDivision"));
        sizePolicy.setHeightForWidth(pushButtonDivision->sizePolicy().hasHeightForWidth());
        pushButtonDivision->setSizePolicy(sizePolicy);
        pushButtonDivision->setFont(font);
        pushButtonDivision->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonDivision, 6, 3, 1, 1);

        pushButtonEqual = new QPushButton(centralWidget);
        pushButtonEqual->setObjectName(QString::fromUtf8("pushButtonEqual"));
        sizePolicy.setHeightForWidth(pushButtonEqual->sizePolicy().hasHeightForWidth());
        pushButtonEqual->setSizePolicy(sizePolicy);
        pushButtonEqual->setFont(font);
        pushButtonEqual->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonEqual, 11, 3, 1, 1);

        pushButtonClear = new QPushButton(centralWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        sizePolicy.setHeightForWidth(pushButtonClear->sizePolicy().hasHeightForWidth());
        pushButtonClear->setSizePolicy(sizePolicy);
        pushButtonClear->setFont(font4);
        pushButtonClear->setAutoFillBackground(false);

        gridLayout->addWidget(pushButtonClear, 6, 1, 1, 1);

        SummerWarClass->setCentralWidget(centralWidget);

        retranslateUi(SummerWarClass);

        QMetaObject::connectSlotsByName(SummerWarClass);
    } // setupUi

    void retranslateUi(QMainWindow *SummerWarClass)
    {
        SummerWarClass->setWindowTitle(QCoreApplication::translate("SummerWarClass", "Calculator", nullptr));
        pushButtonMinus->setText(QCoreApplication::translate("SummerWarClass", "\342\210\222", nullptr));
        pushButtonErase->setText(QCoreApplication::translate("SummerWarClass", "\342\214\253", nullptr));
        pushButtonSqr->setText(QCoreApplication::translate("SummerWarClass", "x\302\262", nullptr));
        pushButtonNegate->setText(QCoreApplication::translate("SummerWarClass", "\302\261", nullptr));
        pushButtonDot->setText(QCoreApplication::translate("SummerWarClass", ".", nullptr));
        labelEntry->setText(QCoreApplication::translate("SummerWarClass", "0", nullptr));
        pushButton5->setText(QCoreApplication::translate("SummerWarClass", "5", nullptr));
        pushButton9->setText(QCoreApplication::translate("SummerWarClass", "9", nullptr));
        labelExpression->setText(QString());
        pushButtonSqrt->setText(QCoreApplication::translate("SummerWarClass", "\342\210\232", nullptr));
        pushButton7->setText(QCoreApplication::translate("SummerWarClass", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("SummerWarClass", "8", nullptr));
        pushButton1->setText(QCoreApplication::translate("SummerWarClass", "1", nullptr));
        pushButtonClearEntry->setText(QCoreApplication::translate("SummerWarClass", "CE", nullptr));
        pushButton0->setText(QCoreApplication::translate("SummerWarClass", "0", nullptr));
        pushButton6->setText(QCoreApplication::translate("SummerWarClass", "6", nullptr));
        pushButton4->setText(QCoreApplication::translate("SummerWarClass", "4", nullptr));
        pushButtonUndo->setText(QCoreApplication::translate("SummerWarClass", "Undo", nullptr));
        pushButtonRedo->setText(QCoreApplication::translate("SummerWarClass", "Redo", nullptr));
        pushButton2->setText(QCoreApplication::translate("SummerWarClass", "2", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("SummerWarClass", "+", nullptr));
        pushButton3->setText(QCoreApplication::translate("SummerWarClass", "3", nullptr));
        pushButtonMultiply->setText(QCoreApplication::translate("SummerWarClass", "\303\227", nullptr));
        pushButtonDivision->setText(QCoreApplication::translate("SummerWarClass", "\303\267", nullptr));
        pushButtonEqual->setText(QCoreApplication::translate("SummerWarClass", "=", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("SummerWarClass", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SummerWarClass: public Ui_SummerWarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMERWAR_H
