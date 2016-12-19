#include "mywindow.h"
#include "proverka.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "ru_RU");
  QApplication app(argc, argv);
  Proverka *w = new Proverka();
  if (w->n==113)
  {
     MyWindow *window= new MyWindow();
     window->show();
     w->close();
   } else w->show();
  return app.exec();
}
