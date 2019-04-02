#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../salary_calc.h"
#include <QMessageBox>
#include <QDoubleValidator>
enum language_t  {EN = 0 , AR};
static language_t app_lang = EN;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->lineEdit->setValidator( new QDoubleValidator(0, 100, 8, ui->lineEdit) );
    ui->lineEdit_2->setValidator( new QDoubleValidator(0, 100,8, ui->lineEdit_2) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CalculateButton_clicked()
{
    QString GrossMonthly = ui->lineEdit->text();
    QString Socialinsurance = ui->lineEdit_2->text();
    double NetSalary = 0;
    NetSalary = calcMonthlyNet(GrossMonthly.toDouble(), Socialinsurance.toDouble());
    if(app_lang == EN)
    {
        QString NetSalaryStr = "Net Salary " + QString::number(NetSalary);
        QMessageBox::information(0, "Done!", NetSalaryStr);
    }
    else if (app_lang == AR)
    {
        QString NetSalaryStr =   " الدخل الاجمالي" + QString::number(NetSalary);
        QMessageBox::information(0, "Done!", NetSalaryStr);
    }

}

void MainWindow::on_pushButton_clicked()
{
    /*english*/
    ui->label_mongros->setText("Gross Salary");
    ui->label_mongros_2->setText("Insurance");
    ui->CalculateButton->setText("Calculate");
    app_lang = EN;
}

void MainWindow::on_pushButton_2_clicked()
{
    /*arabic*/
    ui->label_mongros->setText("الدخل الاجمالي");
    ui->label_mongros_2->setText("التامين");
    ui->CalculateButton->setText("أحسب");
    app_lang = AR;
 }
