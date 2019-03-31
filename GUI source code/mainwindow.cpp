#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "salary_calc.h"

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

void MainWindow::on_CalculateButton_clicked()
{
    QString GrossMonthly = ui->plainTextEditmg->toPlainText();
    QString Socialinsurance = ui->plainTextEdit_si->toPlainText();
    double NetSalary = 0;
    NetSalary = calcMonthlyNet(GrossMonthly.toDouble(), Socialinsurance.toDouble());
    ui->textEdit_outsalary->setPlainText(QString::number(NetSalary));
}
