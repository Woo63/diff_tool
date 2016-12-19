#ifndef MYWINDOW2_H
#define MYWINDOW2_H

#include <QtCore/QObject>
#include <QtGui/QWindow>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

#include "ui_mywindow2.h"

namespace Ui {
class MyWindow2;
}

class MyWindow2 : public QDialog {
  Q_OBJECT

 public:
  explicit MyWindow2(QString s1, QString s2);
  ~MyWindow2();

 private:
  Ui::MyWindow2 *ui2;
};

#endif  // MYWINDOW2_H
