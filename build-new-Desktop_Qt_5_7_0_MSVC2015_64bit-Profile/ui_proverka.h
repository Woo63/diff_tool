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
    QLabel *label_2;

    void setupUi(QDialog *Proverka)
    {
        if (Proverka->objectName().isEmpty())
            Proverka->setObjectName(QStringLiteral("Proverka"));
        Proverka->resize(400, 300);
        Proverka->setMaximumSize(QSize(400, 300));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Proverka->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-new-Desktop_Qt_5_7_0_MSVC2015_64bit-Profile/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Proverka->setWindowIcon(icon);
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
        closeButton->setGeometry(QRect(130, 230, 131, 23));
        label_2 = new QLabel(Proverka);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 181, 16));

        retranslateUi(Proverka);

        QMetaObject::connectSlotsByName(Proverka);
    } // setupUi

    void retranslateUi(QDialog *Proverka)
    {
        Proverka->setWindowTitle(QApplication::translate("Proverka", "\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265!", 0));
        label->setText(QApplication::translate("Proverka", "\320\255\321\202\320\276 \320\277\321\200\320\276\320\261\320\275\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217! \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\201\321\202\320\260\320\262\321\210\320\270\321\205\321\201\321\217 \320\267\320\260\320\277\321\203\321\201\320\272\320\276\320\262:", 0));
        lab->setText(QString());
        pushButton->setText(QApplication::translate("Proverka", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", 0));
        closeButton->setText(QApplication::translate("Proverka", "\320\220\320\272\321\202\320\270\320\262\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276\320\267\320\266\320\265", 0));
        label_2->setText(QApplication::translate("Proverka", "\320\224\320\273\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207:", 0));
    } // retranslateUi

};

namespace Ui {
    class Proverka: public Ui_Proverka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROVERKA_H
