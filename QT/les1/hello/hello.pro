#-------------------------------------------------
#
# Project created by QtCreator 2015-02-05T20:39:00
#
#-------------------------------------------------
# используемые модули
# QtCore - общий для всех компонентов
# QtGui - графический интерфейс
#
QT       += core gui


#QtWidgets - виджеты(всякие кнопочки)
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# имя исполняемого файла
TARGET = hello
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
