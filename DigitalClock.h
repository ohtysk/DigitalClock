#ifndef MAIN_H_
#define MAIN_H_

#include <QtGui>
#include <QDialog>

class QLabel;
class QTimer;
class QPalette;
class QHBoxLayout;

class DigitalClock : public QDialog
{
  Q_OBJECT
public:
  DigitalClock(QWidget* parent = 0);
  ~DigitalClock();
private slots:
  void updateClock();
private:
  QLabel* label;
  QTimer* timer;
  QHBoxLayout *layout;
};

#endif
