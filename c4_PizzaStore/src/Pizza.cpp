#include "Pizza.h"
#include <memory>

// Abstract Pizza Implementations
void Pizza::prepare() {
    std::cout << "pizza prepared" << std::endl;
}

void Pizza::bake() {
    std::cout << "pizza baked" << std::endl;
}

void Pizza::cut() {
    std::cout << "pizza cutted" << std::endl;
}

void Pizza::box() {
    std::cout << "pizza boxed" << std::endl;
}

void Pizza::display() {
    std::cout << "abstract pizza" << std::endl;
}


// Concrete Pizza Implementations
void CheesePizza::display() {
    std::cout << "cheese pizza" << std::endl;
}

void PepperoniPizza::display() {
    std::cout << "pepperoni pizza" << std::endl;
}

void VeggiePizza::display() {
    std::cout << "veggie pizza" << std::endl;
}


// Pizza factory
Pizza* SimplePizzaFactory::createPizza(PizzaType type) {
    Pizza* pizza = nullptr;

    switch (type) {
        case Cheese:
            pizza = std::make_shared<CheesePizza>().get();
            std::cout << "cheese pizza created" << std::endl;
            break;
            
        case Pepperoni:
            pizza = std::make_shared<PepperoniPizza>().get();
            std::cout << "pepps pizza created" << std::endl;
            break;

        case Veggie:
            pizza = std::make_shared<VeggiePizza>().get();
            std::cout << "vg pizza created" << std::endl;
            break;
    }

    return pizza;
}
