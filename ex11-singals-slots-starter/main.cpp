// main.cpp

#include <QApplication>

#include "traffic_light.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  TrafficLight light;
  int ret;

  // TO DO:
  // set up the timer and signal/slot connection here

  light.show();
  ret = app.exec();
    
  return ret;
}

