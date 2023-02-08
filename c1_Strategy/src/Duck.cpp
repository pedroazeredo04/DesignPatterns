#include "Duck.h"

// Duck superclass functions
Duck::~Duck() {
    delete this->flyBehavior_ptr;
    delete this->quackBehavior_ptr;
    // there's need for a destructor because we're using "new" to set the behavior_ptrs
    // @see smart pointers
}

void Duck::set_quackBehavior(QuackBehavior* qb) {
    this->quackBehavior_ptr = qb;
}

void Duck::set_flyBehavior(FlyBehavior* fb) {
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
    set_flyBehavior(new FlyWithWings());
    set_quackBehavior(new Quack());
}

void MallarDuck::display() {
    std::cout << "im a mallarDuck!" << std::endl;
}


RubberDuck::RubberDuck() {
    set_flyBehavior(new FlyNoWay());
    set_quackBehavior(new Squeak());
}

void RubberDuck::display() {
    std::cout << "im a rubber duck" << std::endl;
}


WoodenDuck::WoodenDuck() {
    set_flyBehavior(new FlyNoWay());
    set_quackBehavior(new MuteSqueak());
}

void WoodenDuck::display() {
    std::cout << "im a wooden duck" << std::endl;
}
