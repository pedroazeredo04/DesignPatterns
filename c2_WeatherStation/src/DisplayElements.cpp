#include "DisplayElements.h"

// Current Conditions Display
CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData* wd) {
    this->weatherdata = wd;
    this->weatherdata->registerObserver(this);
    this->measurements = wd->getMeasurements();
}

void CurrentConditionsDisplay::display() {
    std::cout << "CURRENT CONDITIONS" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Temperature = " << this->measurements->temp << " celcius" << std::endl;
    std::cout << "Humidity = " << this->measurements->humidity << " %" << std::endl;
    std::cout << "Temperature = " << this->measurements->pressure << " Pa" << std::endl;
}

void CurrentConditionsDisplay::update() {
    this->measurements = this->weatherdata->getMeasurements();
    this->display();
}

// Head Index Display
HeatIndexDisplay::HeatIndexDisplay(WeatherData* wd) {
    this->weatherdata = wd;
    this->weatherdata->registerObserver(this);
    this->temperature = weatherdata->getTemperature();
    this->humidity = weatherdata->getHumidity();
    this->heatindex = computeHeatIndex(this->temperature, this->humidity);
}

void HeatIndexDisplay::display() {
    std::cout << "Heat Index = " << this->heatindex << std::endl;
}

float HeatIndexDisplay::computeHeatIndex(float t, float rh) {
    return (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) +
    (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) +
    (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
    (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *  
    (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
    (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +     
    0.000000000843296 * (t * t * rh * rh * rh)) -
    (0.0000000000481975 * (t * t * t * rh * rh * rh)));
}

void HeatIndexDisplay::update() {
    this->temperature = weatherdata->getTemperature();
    this->humidity = weatherdata->getHumidity();
    this->heatindex = computeHeatIndex(this->temperature, this->humidity);
    this->display();
}
