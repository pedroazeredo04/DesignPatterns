#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <iostream>
#include <vector>

// The struct Measurements was made to make it easier to add/change weather parameters in the future.
typedef struct Measurements {
    Measurements(float t, float h, float p);
    float temp, humidity, pressure; 
} Measurements;


class Observer {
    public:
        virtual void update() = 0;
};


class Subject {
    public:
        void registerObserver(Observer* o);
        void removeObserver(Observer* o);
        virtual void notifyObservers() = 0;

    protected:
        std::vector<Observer*> observers;
};


class DisplayElement {
    public:
        virtual void display() = 0;
};


#endif  // __OBSERVER_H__
