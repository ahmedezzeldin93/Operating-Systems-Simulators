#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "process.h"
#include "processlist.h"

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

int row=0;

void MainWindow::on_add_process_btn_clicked()
{

    ui->tableWidget->insertRow(row);
    QTableWidgetItem item = ui->tableWidget->itemAt(2,row);

    int arrivalTime;

    int index = ui->algo_comboBox->currentIndex();
    if(index == 0){
        ui->type_comboBox->setCurrentIndex(1);
    }
    else if(index == 1){
        //
    }
    else if(index == 2){
        //
    }
    else if(index == 3){
        ui->type_comboBox->setCurrentIndex(0);
    }

    row++;
}
