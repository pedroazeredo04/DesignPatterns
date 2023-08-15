#include "Duck.h"

void Duck::set_quackBehavior(std::shared_ptr<QuackBehavior> qb) {
    this->quackBehavior_ptr = qb;
}

void Duck::set_flyBehavior(std::shared_ptr<FlyBehavior> fb) {
    this->flyBehavior_ptr = fb;
}

void Duck::performFly() {
    this->flyBehavior_ptr->fly();
}

void Duck::performQuack() {
    this->quackBehavior_ptr->quack();
}

void Duck::display() { }

// Duck child classes functions
MallarDuck::MallarDuck() {
    std::shared_ptr<FlyBehavior> mallard_fly {new FlyWithWings()};
    std::shared_ptr<QuackBehavior> mallard_quack {new Quack()};

    set_flyBehavior(mallard_fly);
    set_quackBehavior(mallard_quack);
}

void MallarDuck::display() {
    std::cout << "im a mallarDuck!" << std::endl;
}


RubberDuck::RubberDuck() {
    std::shared_ptr<FlyBehavior> rubber_fly {new FlyNoWay()};
    std::shared_ptr<QuackBehavior> rubber_quack {new Squeak()};

    set_flyBehavior(rubber_fly);
    set_quackBehavior(rubber_quack);
}

void RubberDuck::display() {
    std::cout << "im a rubber duck" << std::endl;
}


WoodenDuck::WoodenDuck() {
    std::shared_ptr<FlyBehavior> wooden_fly {new FlyNoWay()};
    std::shared_ptr<QuackBehavior> wooden_quack {new MuteSqueak()};

    set_flyBehavior(wooden_fly);
    set_quackBehavior(wooden_quack);
}

void WoodenDuck::display() {
    std::cout << "im a wooden duck" << std::endl;
}
