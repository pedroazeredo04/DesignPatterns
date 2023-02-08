#include "ObsDesign.h"
#include <bits/stdc++.h>

// Measurements constructor
Measurements::Measurements(float t, float h, float p) {
    this->temp = t;
    this->humidity = h;
    this->pressure = p;
}

// Subject bodies definitions
void Subject::registerObserver(Observer* o) {
    this->observers.push_back(o);
}

void Subject::removeObserver(Observer* o) {
    // std::find(observers.begin(), observers.end(), o) defines an iterator at the position of observer "o".
    // @see: https://www.geeksforgeeks.org/std-find-in-cpp/
    this->observers.erase(std::find(observers.begin(), observers.end(), o));
}
