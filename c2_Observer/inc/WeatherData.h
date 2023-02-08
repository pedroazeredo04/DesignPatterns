#ifndef __WEATHERDATA_H__
#define __WEATHERDATA_H__

#include "ObsDesign.h"

class WeatherData:public Subject {
    public:
        // Constructors
        WeatherData();
        WeatherData(Measurements* measures);

        // Getters
        Measurements* getMeasurements() const;
        float getTemperature() const;
        float getHumidity() const;
        float getPressure() const;

        // Setters
        void setMeasurements(Measurements* newMeasures);

        // Update Functions
        void measurementsChanged();
        void notifyObservers() override;

    private:
        Measurements* measures;
};

#endif  // __WEATHERDATA_H__
