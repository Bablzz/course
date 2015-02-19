#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //connect to DB
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/ProjectQt/QtSql/QtSql/qtSql/test.sqlite");
    bool ok = db.open();
    if (!ok) {
        qDebug() << "Error";
    } else {
        qDebug() << "Good";
    }

    //Add Query
    QSqlQuery query;
    QString str = "SELECT id, name, sex FROM people";
    query.exec(str);
    while (query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        QString sex = query.value(2).toString();
        qDebug() << id << " " << name << " " << sex << endl;
}
    qDebug() << db.lastError();

    return a.exec();
}
