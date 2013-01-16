#ifndef DIGIGAL_CLOCK_H_
#define DIGIGAL_CLOCK_H_

#include <QtGui>
#include <QDialog>

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

#endif //DIGIGAL_CLOCK_H_

//Copyright (C) 2013  OHTA Yuusuke
