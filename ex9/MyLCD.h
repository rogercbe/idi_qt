#include <QLCDNumber>
class MyLCD: public QLCDNumber
{
  Q_OBJECT
  public:
    MyLCD(QWidget *parent);

  private:
    int numero;
    int valor;
    int anterior;
    bool desferOp;

  public slots:

  void reiniciar();
  void setNumero(int);
  void opSumar();
  void opRestar();
  void desfer();
    
};
