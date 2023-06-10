#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
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
    return x*x/4 + x - 1.2502;
 }
 float f1(float x)
 {
     return (f(x + 0.001)-f(x))/0.001;
 }

void MainWindow::on_pushButton_clicked()
{
    float x = ui->textEdit->toPlainText().toFloat();
    float eps = ui->textEdit_2->toPlainText().toFloat();
    float dx = x;

    while (fabs(dx) > eps)
    {
        dx = f(x) / f1(x);
        x = x - dx;
    }
    ui->label_3->setText("x = " + QString::number(x) + "  f(x) = " + QString::number(f(x)));
}

