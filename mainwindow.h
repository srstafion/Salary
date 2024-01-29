#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "worker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSort_clicked();
    void updateTable();

    void on_btnAddWorker_clicked();

private:
    Ui::MainWindow *ui;
    QMap <int, Worker> workers;
};
#endif // MAINWINDOW_H
