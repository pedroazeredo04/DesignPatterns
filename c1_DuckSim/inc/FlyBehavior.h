#ifndef __FLYBEHAVIOR_H__
#define __FLYBEHAVIOR_H__

#include <iostream>

// Fly behaviors interfaces
class FlyBehavior {
    public:
        virtual void fly() = 0;
};

// Fly behavior implementations
class FlyWithWings:public FlyBehavior {
    public:
        void fly() override;
};

class FlyNoWay:public FlyBehavior {
    public:
        void fly() override;
};

#endif  // __FLYBEHAVIOR_H__
