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

float f(float x)
{
    return x*x/4 + x + 1.2502;
}

void MainWindow::on_pushButton_clicked()
{
    float a = ui->textEdit->toPlainText().toFloat();
    float b = ui->textEdit_2->toPlainText().toFloat();
    float dx =  ui->textEdit_3->toPlainText().toFloat();
    for(float i = a; i <= b; i += dx)
    {
        ui->label_4->setText(ui->label_4->text() + "\n x = " + QString::number(i) + ", f(x) = " + QString::number(f(i)));
    }
}

