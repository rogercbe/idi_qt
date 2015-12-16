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
#include "MyLabel.h"

QT_BEGIN_NAMESPACE

class Ui_myForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    MyLabel *lblResultat;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn0;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSurt;

    void setupUi(QWidget *myForm)
    {
        if (myForm->objectName().isEmpty())
            myForm->setObjectName(QString::fromUtf8("myForm"));
        myForm->resize(414, 58);
        verticalLayout = new QVBoxLayout(myForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblResultat = new MyLabel(myForm);
        lblResultat->setObjectName(QString::fromUtf8("lblResultat"));

        horizontalLayout->addWidget(lblResultat);

        btn1 = new QPushButton(myForm);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        horizontalLayout->addWidget(btn1);

        btn2 = new QPushButton(myForm);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        horizontalLayout->addWidget(btn2);

        btn0 = new QPushButton(myForm);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        horizontalLayout->addWidget(btn0);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSurt = new QPushButton(myForm);
        btnSurt->setObjectName(QString::fromUtf8("btnSurt"));

        horizontalLayout->addWidget(btnSurt);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(myForm);
        QObject::connect(btnSurt, SIGNAL(pressed()), myForm, SLOT(close()));
        QObject::connect(btn1, SIGNAL(pressed()), lblResultat, SLOT(sumarU()));
        QObject::connect(btn2, SIGNAL(pressed()), lblResultat, SLOT(sumarDos()));
        QObject::connect(btn0, SIGNAL(pressed()), lblResultat, SLOT(reiniciar()));

        QMetaObject::connectSlotsByName(myForm);
    } // setupUi

    void retranslateUi(QWidget *myForm)
    {
        myForm->setWindowTitle(QApplication::translate("myForm", "Form", 0, QApplication::UnicodeUTF8));
        lblResultat->setText(QApplication::translate("myForm", "0", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("myForm", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("myForm", "2", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("myForm", "0", 0, QApplication::UnicodeUTF8));
        btnSurt->setText(QApplication::translate("myForm", "Surt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myForm: public Ui_myForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
