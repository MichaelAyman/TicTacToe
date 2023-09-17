#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToe; }
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();
    int playerTurn(int buttonIndex);
    QString Win(int x[]);

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::TicTacToe *ui;
    int counter = 0;
    int clickedButton[9]= {0,0,0,0,0,0,0,0,0};
};
#endif // TICTACTOE_H
