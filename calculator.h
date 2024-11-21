
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE
class Calculator : public QMainWindow
{
    Q_OBJECT
public:
    Calculator(QWidget *parent = 0);
    ~Calculator();
private:
    Ui::Calculator *ui;
private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
    void Clear();
};
#endif // CALCULATOR_H
