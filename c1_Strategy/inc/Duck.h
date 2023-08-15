#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>
#include <memory>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
    public:
        void set_quackBehavior(std::shared_ptr<QuackBehavior> qb);
        void set_flyBehavior(std::shared_ptr<FlyBehavior> fb);

        void performFly();
        void performQuack();
        virtual void display();

    private:
        std::shared_ptr<FlyBehavior> flyBehavior_ptr;
        std::shared_ptr<QuackBehavior> quackBehavior_ptr;
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
