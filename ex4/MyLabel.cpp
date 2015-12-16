#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent){
    this->valor = 0;
}

void MyLabel::reiniciar()
{
    this->valor = 0;
    setNum(this->valor);
}

void MyLabel::sumarU()
{
    this->valor += 1;
    setNum(this->valor);
}

void MyLabel::sumarDos()
{
    this->valor += 2;
    setNum(this->valor);
}
