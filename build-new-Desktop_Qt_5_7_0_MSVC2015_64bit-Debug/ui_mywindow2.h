/********************************************************************************
** Form generated from reading UI file 'mywindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW2_H
#define UI_MYWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow2
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QFrame *line;
    QLabel *l2;
    QLabel *l1;

    void setupUi(QDialog *MyWindow2)
    {
        if (MyWindow2->objectName().isEmpty())
            MyWindow2->setObjectName(QStringLiteral("MyWindow2"));
        MyWindow2->resize(514, 329);
        gridLayout = new QGridLayout(MyWindow2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        scrollArea = new QScrollArea(MyWindow2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 494, 309));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 1, 2, 1);

        l2 = new QLabel(scrollAreaWidgetContents);
        l2->setObjectName(QStringLiteral("l2"));
        l2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(l2, 0, 2, 2, 1);

        l1 = new QLabel(scrollAreaWidgetContents);
        l1->setObjectName(QStringLiteral("l1"));
        l1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(l1, 0, 0, 2, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(MyWindow2);

        QMetaObject::connectSlotsByName(MyWindow2);
    } // setupUi

    void retranslateUi(QDialog *MyWindow2)
    {
        MyWindow2->setWindowTitle(QApplication::translate("MyWindow2", "Dialog", 0));
        l2->setText(QString());
        l1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyWindow2: public Ui_MyWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW2_H
