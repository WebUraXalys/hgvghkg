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
    return x - 1/(3 - sin(3.6*x));
}

void MainWindow::on_pushButton_clicked()
{
    float a = ui->textEdit->toPlainText().toFloat();
    float b = ui->textEdit_2->toPlainText().toFloat();
    float eps = ui->textEdit_3->toPlainText().toFloat();
    float c;
    while (fabs(b-a)> eps)
    {
         c = a + (b-a)/2;
        if(f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    ui->label_4->setText("x = " + QString::number(c) + "  f(x) = " + QString::number(f(c)));

}

