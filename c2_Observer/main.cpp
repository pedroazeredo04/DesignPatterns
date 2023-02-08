#include "DisplayElements.h"
#include "ObsDesign.h"
#include "WeatherData.h"

int main() {
    Measurements conditions0(0, 0, 0);

    WeatherData wd(&conditions0);

    CurrentConditionsDisplay ccd(&wd);
    HeatIndexDisplay hid(&wd);

    std::cout << "INITIAL CONDITIONS" << std::endl;
    ccd.display();

    Measurements conditions1(80, 65, 30.4);
    Measurements conditions2(82, 70, 29.2);
    Measurements conditions3(78, 90, 29.2);
    
    wd.setMeasurements(&conditions1);
    wd.setMeasurements(&conditions2);
    wd.setMeasurements(&conditions3);
}
