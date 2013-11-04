#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count = 0;
    ck = 0;
    ck2 = 0;
    ck3 = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::check_sum(){
    return (ck + ck2 + ck3);
}

void MainWindow::on_pushButton_clicked()
{
    count = count + check_sum();
    if (count >= 99){
    count = count - 99; }
    this->ui->lcdNumber->display(count);
    volume_changed(count);
    std::cout << "for them! " <<"\n";
}


void MainWindow::on_checkBox_3_clicked(bool ck)
{
    if (ck== true){   /*!< return 1 if true otherwise 0 */
        ck = 1;
    }
    else
        ck = 0;
}

void MainWindow::on_checkBox_2_clicked(bool ck)
{
    if (ck= true){
        ck2 = 1;
    }
    else
        ck2 = 0;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if (checked == true){   /*!< return 1 if true otherwise 0 */
        ck3 = 1;
    }
    else
        ck3 = 0;
}

void MainWindow::on_pushButton_2_clicked()
{
    std::cout << std::endl << "it's all our pizza now"<<"\n";
    ui->~MainWindow();
    exit(0);
}
