#include "mainwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  QPushButton *button = (QPushButton *)QObject::sender();
  connect(button, SIGNAL(clicked()), this, SLOT(on_goToHistory_clicked()));
  return a.exec();
}
