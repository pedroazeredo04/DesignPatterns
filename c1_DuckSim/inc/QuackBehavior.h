#ifndef __QUACKBEHAVIOR_H__
#define __QUACKBEHAVIOR_H__

#include <iostream>

// Quack behavior interface
class QuackBehavior {
    public:
        virtual void quack() = 0;
};

// Quack behavior implementations
class Quack:public QuackBehavior {
    public:
        void quack() override;
};

class Squeak:public QuackBehavior {
    public:
        void quack() override;
};

class MuteSqueak:public QuackBehavior {
    public:
        void quack() override;
};

#endif  // __QUACKBEHAVIOR_H__
