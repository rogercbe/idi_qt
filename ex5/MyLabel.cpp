#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent){}

void MyLabel::posarCreu()
{
    setText("X");
}

void MyLabel::posarCercle()
{
    setText("O");
}
