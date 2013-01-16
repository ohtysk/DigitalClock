#include "DigitalClock.h"

const char DAYS_OF_WEEK[7][4] =
  {"Man", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

DigitalClock::DigitalClock(QWidget* parent)
  : QDialog(parent)
{
  label = new QLabel(tr("") );
  updateClock();
  QPalette palette = label->palette();
  palette.setColor(QPalette::WindowText, QColor("#000000"));
  label->setPalette(palette);
  layout = new QHBoxLayout;
  layout->addWidget(label);
  setLayout(layout);
  
  timer = new QTimer( this );
  connect(timer, SIGNAL(timeout()),
          this, SLOT(updateClock()) );
  timer->start(1000);
}

DigitalClock::~DigitalClock()
{
  delete layout;
  delete timer;
  delete label;
}

void DigitalClock::updateClock()
{
  char str[30];
  
  sprintf(str, "%s\n%s %s"
          , QDate::currentDate().toString("yyyy/MM/dd").toStdString().c_str()
          , QTime::currentTime().toString("hh:mm").toStdString().c_str()
          , DAYS_OF_WEEK[QDate::currentDate().dayOfWeek() - 1]
          );
  label->setText(str);
}

//Copyright (C) 2013  OHTA Yuusuke
