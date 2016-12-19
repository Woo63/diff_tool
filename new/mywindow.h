#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMainWindow>
#include "ui_mywindow.h"

class MyWindow : public QMainWindow, public Ui::MyWindow {
 public:
  explicit MyWindow(QWidget *parent = 0);
  virtual ~MyWindow();

  QString html(QVector<QString> &arr1, QVector<QString> &arr2);

 private:
  void open1();
  void open2();
  void okf();

 private:
  QString s1;
  QString s2;

  Ui::MyWindow *ui;
};

#endif  // MYWINDOW_H
