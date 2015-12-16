#include <QTextEdit>
class MyTextEdit: public QTextEdit
{
  Q_OBJECT
  public:
  MyTextEdit(QWidget *parent);
  
  private:
  QString numero;
  QString text;
    
  public slots:

  void displayText();  
  void setTextEditat(QString);
  void setNumero(QString);
  void desfer();
    
};
