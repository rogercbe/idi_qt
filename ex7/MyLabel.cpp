#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent){
    this->valor = 0;
}

void MyLabel::canviarColor()
{
    switch(this->valor) {
        case 0:
            this->valor = 1;
            setStyleSheet("background-color: yellow");
            break;
        case 1:
            this->valor = 2;
            setStyleSheet("background-color:green");
            break;
        case 2:
            this->valor = 0;
            setStyleSheet("background-color:red");
            break;

    }
}
