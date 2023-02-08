#ifndef __PIZZAFACTORY_H__
#define __PIZZAFACTORY_H__

#include <iostream>

// abstract pizza class
class Pizza {
    public:
        void prepare();
        void bake();
        void cut();
        void box();
        virtual void display();
};

// concrete pizza classes
class CheesePizza : public Pizza {
    public:
        void display() override;
};

class PepperoniPizza : public Pizza {
    public:
        void display() override;
};

class VeggiePizza : public Pizza {
    public:
        void display() override;
};

// other pizzas

typedef enum PizzaType {
    Cheese,  // cheese = 0,
    Pepperoni,
    Veggie,
} PizzaType;

// pizza simple factory
class SimplePizzaFactory {
    public:
        Pizza* createPizza(PizzaType type);
};

#endif  // __PIZZAFACTORY_H__
