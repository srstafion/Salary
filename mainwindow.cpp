#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(3);
    QTableWidgetItem* item1 = new QTableWidgetItem("Имя");
    QTableWidgetItem* item2 = new QTableWidgetItem("Фамилия");
    QTableWidgetItem* item3 = new QTableWidgetItem("Зарплата");
    ui->tableWidget->setHorizontalHeaderItem(0, item1);
    ui->tableWidget->setHorizontalHeaderItem(1, item2);
    ui->tableWidget->setHorizontalHeaderItem(2, item3);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSort_clicked()
{

}

void MainWindow::updateTable()
{
    int size = workers.size();
    ui->tableWidget->setRowCount(1+size);

    QTableWidgetItem* item1 = new QTableWidgetItem("Имя");
    QTableWidgetItem* item2 = new QTableWidgetItem("Фамилия");
    QTableWidgetItem* item3 = new QTableWidgetItem("Зарплата");
    ui->tableWidget->setHorizontalHeaderItem(0, item1);
    ui->tableWidget->setHorizontalHeaderItem(1, item2);
    ui->tableWidget->setHorizontalHeaderItem(2, item3);

    int count = 0;
    for(auto el : workers){
        QTableWidgetItem* buf1 = new QTableWidgetItem(el.getName());
        QTableWidgetItem* buf2 = new QTableWidgetItem(el.getLastname());
        QTableWidgetItem* buf3 = new QTableWidgetItem(el.getPay());
        ui->tableWidget->setRowCount(count++);
        ui->tableWidget->setItem(count, 0, buf1);
        ui->tableWidget->setItem(count, 1, buf2);
        ui->tableWidget->setItem(count, 2, buf3);
    }
}
void MainWindow::on_btnAddWorker_clicked()
{
    QString name = ui->nameEntry->toPlainText();
    QString lastname = ui->lastnameEntry->toPlainText();
    QString pay = ui->payEntry->toPlainText();
    int salary = pay.toInt();
    Worker(name, lastname, salary);
    updateTable();
}

