#include "MyLabel.h"

MyLabel::MyLabel(QWidget *parent):QLabel(parent)
{
    r = g = b = 0;
}

void MyLabel::setR(int r)
{
    this->r = r;
}

void MyLabel::setG(int g)
{
    this->g = g;
}

void MyLabel::setB(int b)
{
    this->b = b;
}

void MyLabel::setColor()
{
    setStyleSheet("background-color: rgb(" + QString::number(r, 10) + "," + QString::number(g, 10) + "," + QString::number(b, 10) + ")");
}
