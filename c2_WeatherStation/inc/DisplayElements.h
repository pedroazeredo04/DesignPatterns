#ifndef __DISPLAYS_H__
#define __DISPLAYS_H__

#include "ObsDesign.h"
#include "WeatherData.h"

// Current Conditions Display
class CurrentConditionsDisplay : public Observer, public DisplayElement {
    public:
        CurrentConditionsDisplay(WeatherData* wd);
        void display() override;
        void update() override;

    private:
        WeatherData* weatherdata;
        Measurements* measurements;
};

// Heat Index Display
class HeatIndexDisplay : public Observer, public DisplayElement {
    public:
        HeatIndexDisplay(WeatherData* wd);
        void display() override;
        void update() override;
    private:
        float computeHeatIndex(float t, float rh);

        WeatherData* weatherdata;
        float temperature, humidity;
        float heatindex;
};

#endif  // __DISPLAYS_H__
