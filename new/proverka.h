#ifndef PROVERKA_H
#define PROVERKA_H
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMainWindow>
#include "ui_proverka.h"
#include <vector>
#include <string>
#include <algorithm>

#include <QDialog>

namespace Ui {
class Proverka;
}

class Proverka : public QDialog
{
    Q_OBJECT
public:
    explicit Proverka(QWidget *parent = 0);
    ~Proverka();
  std::string KEY = "133766677777";
  int KEY_LEN = 12;
    //XORED
  QString kod="56 58 58 62 63 63 63 62 62 62 62";
  QString FULL_ACCESS = "64 64 64 66 85 85";
  QString ACCESS = "ACCESS";
  int n;
  QString pas;
  QString stroutfile();
  void strinfile(QString str);
  std::vector<int> decode(QString data);
  QString encode(int access_value);
  int access_value(std::vector<int> decoded);

public slots:
  void close1();
  void keys();
private:
    Ui::Proverka *ui3;
};

#endif // PROVERKA_H
