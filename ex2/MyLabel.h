#include <QLabel>
class MyLabel: public QLabel
{
  Q_OBJECT
  public:
  MyLabel(QWidget *parent);

  private:
  int r;
  int g;
  int b;
    
  public slots:

  void setR(int r);
  void setG(int g);
  void setB(int b);
  void setColor();
  
    
};
