#include "dialog.h"
#include "ui_dialog.h"

const static double PI=3.1416;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valuestr=ui->radiusLineEdit->text();
    double valuelnt=valuestr.toDouble(&ok);
    double area = valuelnt*valuelnt*PI;
    ui->areaLabel_1->setText(tempStr.setNum(area));
}
