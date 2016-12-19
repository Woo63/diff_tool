#include "mywindow2.h"
#include "ui_mywindow2.h"

#include <QtCore/QFile>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

MyWindow2::MyWindow2(QString s11, QString s21)
    : QDialog()
{
  ui2 = new Ui::MyWindow2();
  ui2->setupUi(this);
  ui2->l1->setText(s11);
  ui2->l2->setText(s21);
}

MyWindow2::~MyWindow2() { delete ui2; }
