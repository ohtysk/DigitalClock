#include "DigitalClock.h"

int main(int argc, char** argv)
{
  QApplication app(argc,argv);
  DigitalClock* clock = new DigitalClock;
  
  clock->setWindowOpacity(0.6);
  clock->move(1750, 1000);
  clock->setStyleSheet("background-color: #aaa;font-size: 20px");
  clock->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);

  clock->show();
  return app.exec();
}
