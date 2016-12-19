#include "proverka.h"
#include "ui_proverka.h"
#include "mywindow.h"

#include <QtCore/QFile>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <vector>
#include <string>
#include <algorithm>
#include <QTextStream>

Proverka::Proverka(QWidget *parent) : QDialog()
{
  QString strin=stroutfile();
  std::vector<int> dec=decode(strin);
  n=access_value(dec);
  Ui_Proverka *ui3 = new Ui_Proverka();
  ui3->setupUi(this);
  ui3->lab->setNum(n-1);
  ui3->lab->repaint();
  connect(ui3->closeButton, &QPushButton::clicked, [this] { this->close1(); });
}

void Proverka::close1()
{
    if(n<10)
    {
        n--;
        QString strin=encode(n);
        strinfile(strin);
        MyWindow *window = new MyWindow();
        window->show();
    }
    else if (n==10)
    {
        MyWindow *window = new MyWindow();
        window->show();
    }
    else std::exit(1337);
}

QString Proverka::stroutfile()
{
    QFile f("pr.txt");
    if (!f.open(QIODevice::ReadWrite)){
        QMessageBox::critical(this, tr("error"),tr("not open file"));
        std::exit(133);
    }
    f.open(QIODevice::ReadWrite);
    QTextStream stream(&f);
    QString str;
    str=stream.readLine();
    f.close();
    return str;
}

void Proverka::strinfile(QString str)
{
    QFile f("pr.txt");
    f.open(QIODevice::ReadWrite);
    QTextStream stream(&f);
    stream<<str;
    f.close();
}

std::vector<int> Proverka::decode(QString data){
    QStringList output_list = data.split(' ');
    std::vector<int> xored_data;
    bool ok;
    for (auto& value : output_list){
        xored_data.emplace_back(value.toInt(&ok, 10));
    }
    std::vector<int> unxored_data;
    for (int i = 0; i < KEY_LEN; i++)
    {
        unxored_data.emplace_back(KEY[i] ^ xored_data[i]);
    }
    return unxored_data;
}

QString Proverka::encode(int access_value) {
    QString encoded_data;
    std::vector<int> xored_data;
    for (auto k : KEY){
        xored_data.emplace_back(k ^ access_value);
    }
    for (auto integer : xored_data){
        encoded_data += QString::number(integer);
        encoded_data += " ";
    }
    encoded_data.remove(encoded_data.length()-1, 1);
    return encoded_data;
}


int Proverka::access_value(std::vector<int> decoded){
    std::vector<int> full_access{65, 67, 67, 69, 83, 83};
    bool is_accessed = std::equal(full_access.begin(), full_access.end(), decoded.begin());
    if (is_accessed){
        return 10;
    }
    else {
        return(decoded[0]);
    }
}
Proverka::~Proverka() { delete ui3; }
