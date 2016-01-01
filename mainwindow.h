#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QFile>
#include <QProcess>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //bool colorQuery(QString cmd);
    bool runColorCore();
    bool sendRequest(QString cmd, QString &result);

    void getBalance();
private slots:
    void readPyOut();
private:
    QStringListModel *model;
    Ui::MainWindow *ui;

    QProcess *serverProc;
};

#endif // MAINWINDOW_H
