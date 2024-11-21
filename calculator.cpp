#include "calculator.h"
#include "./ui_calculator.h"
//#include <QRegExp>
#include <QtCore>
    double calcVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; ++i) {
        QString butName = "Button" + QString::number(i); // Corrected button name
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], &QPushButton::released, this, &Calculator::NumPressed);
    }
    connect(ui->Add, &QPushButton::released, this, &Calculator::MathButtonPressed);
    connect(ui->Subtract, &QPushButton::released, this, &Calculator::MathButtonPressed);
    connect(ui->Multiply, &QPushButton::released, this, &Calculator::MathButtonPressed);
    connect(ui->Divide, &QPushButton::released, this, &Calculator::MathButtonPressed);
    connect(ui->Equals, &QPushButton::released, this, &Calculator::EqualButtonPressed);
    connect(ui->ChangeSign, &QPushButton::released, this, &Calculator::ChangeNumberSign);
    connect(ui->Clear, &QPushButton::released, this, &Calculator::Clear); // Connect Clear button
}
Calculator::~Calculator()
{
    delete ui;
}
void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if ((displayVal == "0") || (displayVal == "0.0")) {
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        ui->Display->setText(newVal);
    }
}
void Calculator::MathButtonPressed() {
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    } else {
        subTrigger = true;
    }
    ui->Display->setText("");
}
void Calculator::EqualButtonPressed() {
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if (addTrigger || subTrigger || multTrigger || divTrigger) {
        if (addTrigger) {
            solution = calcVal + dblDisplayVal;
        } else if (subTrigger) {
            solution = calcVal - dblDisplayVal;
        } else if (multTrigger) {
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}
void Calculator::ChangeNumberSign() {
    QString displayVal = ui->Display->text();
    if (!displayVal.isEmpty()) {
        bool ok;
        double dblDisplayVal = displayVal.toDouble(&ok);
        if (ok) {
            dblDisplayVal = -dblDisplayVal;
            ui->Display->setText(QString::number(dblDisplayVal));
        }
    }
}
void Calculator::Clear() {
    calcVal = 0.0;
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    ui->Display->setText("0");
}
