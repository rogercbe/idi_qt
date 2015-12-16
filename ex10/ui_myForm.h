/********************************************************************************
** Form generated from reading UI file 'myForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "MyLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    MyLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_7;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(myForm);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(25, 25, 25, 25);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(myForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(myForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(myForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(myForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(myForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_6 = new QPushButton(myForm);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        lineEdit = new MyLineEdit(myForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_7 = new QPushButton(myForm);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);


        retranslateUi(myForm);
        QObject::connect(pushButton_7, SIGNAL(pressed()), myForm, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(pressed()), lineEdit, SLOT(setA()));
        QObject::connect(pushButton_2, SIGNAL(pressed()), lineEdit, SLOT(setE()));
        QObject::connect(pushButton_4, SIGNAL(pressed()), lineEdit, SLOT(setI()));
        QObject::connect(pushButton_3, SIGNAL(pressed()), lineEdit, SLOT(setO()));
        QObject::connect(pushButton_5, SIGNAL(pressed()), lineEdit, SLOT(setU()));
        QObject::connect(pushButton_6, SIGNAL(pressed()), lineEdit, SLOT(setUpper()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myForm", "A", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myForm", "E", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myForm", "I", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myForm", "O", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("myForm", "U", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("myForm", "Shift", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("myForm", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
