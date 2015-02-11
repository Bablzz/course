#include "mainwindow.h"
#include "ui_mainwindow.h"

int z = 110;
int b = 60;
int w = 161;
int h = 91;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_downButton_clicked()
{  
  int *ii = &b;
  *ii = *ii + 1;
  b = *ii;
  ui->textEdit->append("Вниз");
  ui->textEdit->setGeometry(z, b, w, h);
  // TODO: реализовать перемещение
}

void MainWindow::on_rightButton_clicked()
{
  int *ii = &z;
  *ii = *ii + 1;
  z = *ii;
  ui->textEdit->append("Вправо");
  ui->textEdit->setGeometry(z, b, w, h);
  // TODO: реализовать перемещение
}

void MainWindow::on_leftButton_clicked()
{
  int *ii = &z;
  *ii = *ii - 1;
  z = *ii;
  ui->textEdit->append("Влево");
  ui->textEdit->setGeometry(z, b, w, h);
  // TODO: реализовать перемещение
}

void MainWindow::on_upButton_clicked()
{
  int *ii = &b;
  *ii = *ii - 1;
  b = *ii;
  ui->textEdit->append("Вверх");
  ui->textEdit->setGeometry(z, b, w, h);
  // TODO: реализовать перемещение
}
