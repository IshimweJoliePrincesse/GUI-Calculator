/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *Add;
    QPushButton *Clear;
    QPushButton *ChangeSign;
    QPushButton *Multiply;
    QPushButton *Button3;
    QPushButton *Subtract;
    QPushButton *Button6;
    QPushButton *Divide;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *MemAdd;
    QPushButton *MemClear;
    QPushButton *MemGet;
    QPushButton *Equals;
    QLineEdit *Display;
    QPushButton *Button0;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(460, 426);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(85, 0, 0);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName("MemClear");
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(58, 58, 58);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgb(34, 34, 34);\n"
"border-color: rgb(11, 11, 11);\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 460, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);
        toolBar = new QToolBar(Calculator);
        toolBar->setObjectName("toolBar");
        Calculator->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Calculator", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
