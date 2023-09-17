#include "tictactoe.h"
#include "ui_tictactoe.h"

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
}

TicTacToe::~TicTacToe()
{
    delete ui;
}


void TicTacToe::on_pushButton_6_clicked()
{
    int player = playerTurn(6);
    if (player == 1)
    {
    ui->pushButton_6->setText("X");
    }
    else if (player == 2)
    ui->pushButton_6->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(6);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_5_clicked()
{
    int player = playerTurn(3);
    if (player == 1)
    {
    ui->pushButton_5->setText("X");
    }
    else if (player == 2)
    ui->pushButton_5->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(3);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_4_clicked()
{
    int player = playerTurn(0);
    if (player == 1)
    {
    ui->pushButton_4->setText("X");
    }
    else if (player == 2)
    ui->pushButton_4->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(0);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_clicked()
{
    int player = playerTurn(1);
    if (player == 1)
    {
    ui->pushButton->setText("X");
    }
    else if (player == 2)
    ui->pushButton->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(1);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_2_clicked()
{
    int player = playerTurn(4);
    if (player == 1)
    {
    ui->pushButton_2->setText("X");
    }
    else if (player == 2)
    ui->pushButton_2->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(4);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_3_clicked()
{
    int player = playerTurn(7);
    if (player == 1)
    {
    ui->pushButton_3->setText("X");
    }
    else if (player == 2)
    ui->pushButton_3->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(7);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_8_clicked()
{
    int player = playerTurn(2);
    if (player == 1)
    {
    ui->pushButton_8->setText("X");
    }
    else if (player == 2)
    ui->pushButton_8->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(2);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_7_clicked()
{
    int player = playerTurn(5);
    if (player == 1)
    {
    ui->pushButton_7->setText("X");
    }
    else if (player == 2)
    ui->pushButton_7->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(5);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}

void TicTacToe::on_pushButton_9_clicked()
{
    int player = playerTurn(8);
    if (player == 1)
    {
    ui->pushButton_9->setText("X");
    }
    else if (player == 2)
    ui->pushButton_9->setText("O");
    else if (player == 3)
        ui->label_2->setText("player 1 won");
    else if (player == 4)
          ui->label_2->setText("player 2 won");
    player = playerTurn(8);
    if (player == 3)
            ui->label_2->setText("player 1 won");
        else if (player == 4)
              ui->label_2->setText("player 2 won");
}


int TicTacToe::playerTurn(int buttonIndex)
{
   QString x;
     x = Win(clickedButton);
   if (x == "win1"){
        return 3;
   }

   else if (x == "win2"){
       return 4;
   }

  else if (x == "c") {
       if (clickedButton[buttonIndex] == 0)
{
counter++;
int modulus = counter % 2;
if (modulus == 1)
{
ui->label_2->setText("Player 2");
clickedButton[buttonIndex] = 1;
return 1;
}
else
{
ui->label_2->setText("Player 1");
clickedButton[buttonIndex] = 2;
return 2;
}
       }}

return 0;
   }

QString TicTacToe::Win(int x[]){
    int wincombs[8][3] = {{0,1,2}, {0,3,6}, {6,7,8}, {2,5,8}, {0,4,8}, {2,4,6}, {1,4,7}, {3,4,5}};
    int y, a, b;
    for (int i = 0; i < 8; i++){
        y = wincombs[i][0];
        a = wincombs[i][1];
        b = wincombs[i][2];
        if (x[y] == x[a] && x[a] == x[b] && x[b] == 1){
            return "win1";
            i = 8;

        }
        else if (x[y] == x[a] && x[a] == x[b] && x[b] == 2){
            return "win2";
            i = 8;
        }}

        return "c";
}

