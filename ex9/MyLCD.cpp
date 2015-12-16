#include "MyLCD.h"

MyLCD::MyLCD(QWidget *parent):QLCDNumber(parent)
{
    valor = desferOp = anterior = 0;
    numero = 1;
}

void MyLCD::reiniciar()
{
    valor = desferOp = anterior = 0;
    numero = 1;
    display(numero);
}

void MyLCD::setNumero(int n)
{
    numero = n;
}

void MyLCD::opSumar()
{
    anterior = valor;
    valor += numero;
    display(valor);
}

void MyLCD::opRestar()
{
    anterior = valor;
    valor -= numero;
    display(valor);
}

void MyLCD::desfer()
{
    if(!desferOp) {
        valor = anterior;
        desferOp = true;
    }

    display(valor);
}


