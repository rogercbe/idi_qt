#include "MyTextEdit.h"

MyTextEdit::MyTextEdit(QWidget *parent):QTextEdit(parent){
    numero = "";
    text = "";
}

void MyTextEdit::setNumero(QString valor) {
    this->numero = valor;
}

void MyTextEdit::setTextEditat(QString text) {
    this->text = text;
}

void MyTextEdit::displayText()
{
    append(this->numero + " " + this->text);
}

void MyTextEdit::desfer() {
    undo();
}
