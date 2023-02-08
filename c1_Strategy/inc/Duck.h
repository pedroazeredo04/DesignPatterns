#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
    public:
        ~Duck();
        void set_quackBehavior(QuackBehavior* qb);
        void set_flyBehavior(FlyBehavior* fb);

        void performFly();
        void performQuack();
        virtual void display();

    private:
        FlyBehavior* flyBehavior_ptr;
        QuackBehavior* quackBehavior_ptr;
};


class MallarDuck:public Duck {
    public:
        MallarDuck();

        void display() override;
};

class RubberDuck:public Duck {
    public:
        RubberDuck();

        void display() override;
};

class WoodenDuck : public Duck {
    public:
        WoodenDuck();

        void display() override;
};

#endif  // __DUCK_H__
