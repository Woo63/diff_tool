#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <iostream>
#include "mywindow2.h"
#include "mywindow.h"

MyWindow::MyWindow(QWidget *parent) : QMainWindow(parent) {
    ui = new Ui::MyWindow();
    ui->setupUi(this);
    connect(ui->open1push, &QPushButton::clicked, [this] { this->open1(); });
    connect(ui->open2push, &QPushButton::clicked, [this] { this->open2(); });
    connect(ui->pushButton_2, &QPushButton::clicked, [this] { this->close(); });
    connect(ui->ok, &QPushButton::clicked, [this] { this->okf(); });
}

void MyWindow::open1() {
    QString fileName = QFileDialog::getOpenFileName(
                this, tr("Open File"), "",
                tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (fileName != "") {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        } else {
            s1 = fileName;
            ui->lb3->setText(fileName);
            ui->lb3->repaint();
        }
    }
}

void MyWindow::open2() {
    QString fileName = QFileDialog::getOpenFileName(
                this, tr("Open File"), "",
                tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (fileName != "") {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
    }
    s2 = fileName;
    ui->lb4->setText(fileName);
    ui->lb4->repaint();
}

QString MyWindow::html(QVector<QString> &arr1, QVector<QString> &arr2) {
    QString str =
            "<html><style> q {background-color: rgba(255,0,0, 0.25); opacity: 0.5;} "
            "</style><body>";
    int tmp1 = 1;
    int tmp2 = 1;
    int a = 0;
    int b = 0;
    int o = 0;
    QVector<QString>::iterator i;
    QVector<QString>::iterator j;
    i = arr1.begin();
    j = arr2.begin();
    while ((i != arr1.end()) && (j != arr2.end())) {
        o++;
        if (*i == *j) {
            str += "<p><font color=blue>" + QString::number(o) + ". </font>" + *i +
                    "</p>";
            i++;
            j++;
        } else {
            if (*i=="\n") i++;
            if (*j=="/n") j++;
            for (QVector<QString>::iterator k = j; k != arr2.end(); k++) {
                tmp1++;
                if (*i == *k) {
                    a = tmp1;
                    break;
                }
            }
            for (QVector<QString>::iterator c = i; c != arr1.end(); c++) {
                tmp2++;
                if (*j == *c) {
                    b = tmp2;
                    break;
                }
            }
            if ((a==0)&&(b==0))
            {
                str += "<p><font color=blue>" + QString::number(o) + ". </font><q>" +
                        *i + " </q></p>";
                i++;
                j++;
            }
            else if (a < b) {
                str += "<p><font color=blue>" + QString::number(o) + ". </font><q>" +
                        *i + " </q></p>";
                i++;
                a = 0;
                b = 0;
            } else {
                j++;
                a = 0;
                b = 0;
                o--;
            }
            tmp1 = 1;
            tmp2 = 1;
        }

    }
    str += "</body></html>";
    return str;
}

void MyWindow::okf() {
  if ((s1 != "") && (s2 != "")) {
    QFile f1(s1);
    QFile f2(s2);
    f1.open(QIODevice::ReadOnly);
    f2.open(QIODevice::ReadOnly);
    QVector<QString> arr1;
    QTextStream stream1(&f1);
    QString str1;
    while (!stream1.atEnd()) {
      str1 = stream1.readLine();
      arr1.push_back(str1);
    }

    QVector<QString> arr2;
    QTextStream stream2(&f2);
    QString str2;
    while (!stream2.atEnd()) {
      str2 = stream2.readLine();
      arr2.push_back(str2);
    }

    f1.close();
    f2.close();
    QString str;
    str = html(arr1, arr2);
    QString str3;
    str3 = html(arr2, arr1);
    MyWindow2 *win = new MyWindow2(str, str3);
    win->exec();
  } else {
    QMessageBox::critical(this, tr("Ошибка"),
                          tr("Ошибка!\n Для сравнения выберите два файла."));
    return;
  }
}

MyWindow::~MyWindow() {}
