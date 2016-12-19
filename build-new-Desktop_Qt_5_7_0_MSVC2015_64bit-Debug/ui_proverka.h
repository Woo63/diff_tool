/********************************************************************************
** Form generated from reading UI file 'proverka.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROVERKA_H
#define UI_PROVERKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Proverka
{
public:
    QLabel *label;
    QLabel *lab;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *closeButton;

    void setupUi(QDialog *Proverka)
    {
        if (Proverka->objectName().isEmpty())
            Proverka->setObjectName(QStringLiteral("Proverka"));
        Proverka->resize(400, 300);
        label = new QLabel(Proverka);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 291, 31));
        lab = new QLabel(Proverka);
        lab->setObjectName(QStringLiteral("lab"));
        lab->setGeometry(QRect(170, 52, 47, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lab->setFont(font);
        lab->setMargin(0);
        lineEdit = new QLineEdit(Proverka);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 160, 221, 20));
        pushButton = new QPushButton(Proverka);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 160, 75, 23));
        closeButton = new QPushButton(Proverka);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(170, 230, 75, 23));

        retranslateUi(Proverka);

        QMetaObject::connectSlotsByName(Proverka);
    } // setupUi

    void retranslateUi(QDialog *Proverka)
    {
        Proverka->setWindowTitle(QApplication::translate("Proverka", "Dialog", 0));
        label->setText(QApplication::translate("Proverka", "\320\255\321\202\320\276 \320\277\321\200\320\276\320\261\320\275\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217! \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\201\321\202\320\260\320\262\321\210\320\270\321\205\321\201\321\217 \320\267\320\260\320\277\321\203\321\201\320\272\320\276\320\262:", 0));
        lab->setText(QString());
        pushButton->setText(QApplication::translate("Proverka", "PushButton", 0));
        closeButton->setText(QApplication::translate("Proverka", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Proverka: public Ui_Proverka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROVERKA_H
