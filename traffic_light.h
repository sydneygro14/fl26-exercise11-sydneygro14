// traffic_light.h
#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <QWidget>

class QRadioButton;

class TrafficLight: public QWidget{
  Q_OBJECT

public:
  TrafficLight(QWidget * parent = nullptr);

public slots:
  // advances the light to the next one in the red -> green -> yellow sequence
  void light_update();

private:
  QRadioButton * redlight;
  QRadioButton * yellowlight;
  QRadioButton * greenlight;

  // tracks which light is currently on, 0 = red, 1 = green, 2 = yellow
  int current_light;
};

#endif