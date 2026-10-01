// main.cpp

#include <QApplication>
#include <QTimer>

#include "traffic_light.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  TrafficLight light;
  int ret;

  // sets up a timer that fires every half second
  QTimer timer;
  timer.setInterval(500);

  // connects the timer's timeout signal to the light_update slot
  QObject::connect(&timer, &QTimer::timeout, &light, &TrafficLight::light_update);

  // starts the timer so it begins firing immediately
  timer.start();

  light.show();
  ret = app.exec();
    
  return ret;
}
