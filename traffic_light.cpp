// traffic_light.cpp

#include "traffic_light.h"
#include <QWidget>
#include <QLayout>
#include <QRadioButton>

TrafficLight::TrafficLight(QWidget * parent): QWidget(parent) {

  // Add the red traffic light
  redlight = new QRadioButton;
  redlight->setEnabled(false);
  redlight->toggle();   // initialize the red light to be ON
  redlight->setStyleSheet("QRadioButton::indicator:checked { background-color: red;}");
  
    yellowlight = new QRadioButton;
    yellowlight->setEnabled(false);
    yellowlight->setStyleSheet("QRadioButton::indicator:checked { background-color: yellow;}");
      
    greenlight = new QRadioButton;
    greenlight->setEnabled(false);
    greenlight->setStyleSheet("QRadioButton::indicator:checked { background-color: green;}");
    
    auto layout = new QVBoxLayout;
    layout->addWidget(redlight);
    layout->addWidget(yellowlight);
    layout->addWidget(greenlight);

    setLayout(layout);

    // starting state matches redlight being toggled on above
    current_light = 0;
}

void TrafficLight::light_update()
{
    // cycles through 0, 1, 2 to represent red, green, yellow in order
    current_light = (current_light + 1) % 3;

    // toggling one radio button automatically turns off the other two
    // since they share the same parent and are auto-exclusive by default
    switch (current_light) {
        case 0:
            redlight->toggle();
            break;
        case 1:
            greenlight->toggle();
            break;
        case 2:
            yellowlight->toggle();
            break;
    }
}