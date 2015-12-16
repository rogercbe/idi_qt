#include <QLabel>
class MyLabel: public QLabel
{
  Q_OBJECT
  public:
  MyLabel(QWidget *parent);
  
  private:
  int valor;
    
  public slots:

  void canviarColor();  
    
};
