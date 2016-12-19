#include "mywindow.h"
#include "proverka.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "ru_RU");
  QApplication app(argc, argv);

  /*Proverka *w = new Proverka();
  w->show();*/
  MyWindow *w = new MyWindow();
  w->show();
  return app.exec();
}
