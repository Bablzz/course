#include <QDebug> // Вывод отладочных сообщений в консоль
#include <QMessageBox> // Вывод окон с сообщениями пользователю
#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_goButton_clicked()
{
  // При нажатии на кнопку Go переходим на адрес
  ui->webView->setUrl(ui->urlEdit->text());
}

// Добавление адреса сайта в закладки
void MainWindow::on_toolButton_clicked() {
  // TODO: реализовать
  QPushButton *favButton = new QPushButton(this);
  favButton->setText(ui->urlEdit->text());
  ui->historyTools->addWidget(favButton);
}

// Переход по кнопке из избранного
void MainWindow::on_goToHistory_clicked() {
  // TODO: реализовать
  QString url = button->text();
    // Выводим URL для отладки
  qDebug() << "URL:" << url;
    // Переходим по заданному адресу
  ui->webView->setUrl(url);
}

// Когда меняется URL в webView => меняем и URL в строке адреса
void MainWindow::on_webView_urlChanged(const QUrl &url)
{
  ui->urlEdit->setText(url.toString());
}
