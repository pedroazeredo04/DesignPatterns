#include "PizzaStore.h"
#include <memory>

int main() {
    SimplePizzaFactory* factory = std::make_shared<SimplePizzaFactory>().get();

    Pizza* cheese_pizza = factory->createPizza(Cheese); 
    // not equivalent to a "new CheesePizza()" statement, since smart pointers are used
    cheese_pizza->display();

    PizzaStore store = PizzaStore(factory);

    store.orderPizza(Cheese);

    return 0;
}
