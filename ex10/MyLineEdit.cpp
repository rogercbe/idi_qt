#include "MyLineEdit.h"

MyLineEdit::MyLineEdit(QWidget *parent):QLineEdit(parent)
{
    uppercase = 0;
    text = "";
}

void MyLineEdit::setA()
{
    if(uppercase) text += "A";
    else text += "a";
    setText(text);
}

void MyLineEdit::setE()
{
    if(uppercase) text += "E";
    else text += "e";
    setText(text);
}


void MyLineEdit::setI()
{
    if(uppercase) text += "I";
    else text += "i";
    setText(text);
}


void MyLineEdit::setO()
{
    if(uppercase) text += "O";
    else text += "o";
    setText(text);
}


void MyLineEdit::setU()
{
    if(uppercase) text += "U";
    else text += "u";
    setText(text);
}


void MyLineEdit::setUpper()
{
    uppercase = !uppercase;
}
