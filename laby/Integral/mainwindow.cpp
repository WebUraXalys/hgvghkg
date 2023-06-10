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

float f (float x)
{
    return x - 5;
}

void MainWindow::on_pushButton_clicked()
{
    float a = ui->textEdit->toPlainText().toFloat();
    float b = ui->textEdit_2->toPlainText().toFloat();
    float N = ui->textEdit_3->toPlainText().toFloat();

    float s = (f(a) + f(b)) / 2;
    double h = (b - a) / N;
    for (int i = 0; i < N; i++)
    {
        s += f(a + i * h);
    }
    float I = s*h;
    ui->label_4->setText("I = " + QString::number(I));

}

