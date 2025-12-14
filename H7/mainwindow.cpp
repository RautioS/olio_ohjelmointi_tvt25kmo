#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::increaseCount);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::resetCount);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::increaseCount() {
    qDebug() << "Counter increased : " << counter;
    counter++;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(counter));
}

void MainWindow::resetCount() {
    counter = 0;
    qDebug() << "Counter reset : " << counter;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(counter));
}
