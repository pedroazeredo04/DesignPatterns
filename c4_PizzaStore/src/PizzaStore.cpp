#include "PizzaStore.h"
#include <memory>

PizzaStore::PizzaStore(SimplePizzaFactory* factory) {
    this->factory = factory;
}

void PizzaStore::orderPizza(PizzaType type) {
    Pizza* pizza = factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    // return pizza;
}
