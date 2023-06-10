#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    float a = ui->textEdit->toPlainText().toFloat();
    float b = ui->textEdit_2->toPlainText().toFloat();
    float N = ui->textEdit_3->toPlainText().toFloat();
    //I =..
    ui->label_4->setText("a = " + QString::number(a) + "  b = " + QString::number(b));
}

