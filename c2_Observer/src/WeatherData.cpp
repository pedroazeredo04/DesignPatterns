#include "WeatherData.h"

// Constructors
WeatherData::WeatherData() {
    this->measures = new Measurements(0, 0, 0);
}

WeatherData::WeatherData(Measurements* measures) {
    this->measures = measures;
}

// Getters
float WeatherData::getHumidity() const {
    return this->measures->humidity;
}

float WeatherData::getPressure() const {
    return this->measures->pressure;
}

float WeatherData::getTemperature() const {
    return this->measures->temp;
}

// Setter
void WeatherData::setMeasurements(Measurements* measures) {
    this->measures = measures;
    measurementsChanged();  // Method called to notify observers that measurements changed
}

// Getter
Measurements* WeatherData::getMeasurements() const {
    return this->measures;
}

// Update Functions
void WeatherData::measurementsChanged() {
    std::cout << std::endl << "MEASUREMENTS UPDATED" << std::endl;
    notifyObservers();
}

void WeatherData::notifyObservers() {
    for (int i = 0; i < this->observers.size(); i++) {
        observers[i]->update();
    }
}
