#include <QLineEdit>
class MyLineEdit: public QLineEdit
{
  Q_OBJECT
  public:
  MyLineEdit(QWidget *parent);
  
  private:
  bool uppercase;
  QString text;
    
  public slots:

  void setA();
  void setE();
  void setI();
  void setO();
  void setU();
  void setUpper();
    
};
