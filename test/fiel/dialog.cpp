#include <QLayout>
#include "dialog.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent)
{
  this->setWindowTitle("hello");

  label_test = new QLabel(this);
  label_test->setText("HelloWorld");

  QGridLayout *main_layout = new QGridLayout(this);
  main_layout->addWidget(label_test, 0, 0);
}

Dialog::~Dialog()
{
}