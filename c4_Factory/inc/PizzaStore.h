#ifndef __PIZZASTORE_H__
#define __PIZZASTORE_H__

#include "Pizza.h"

class PizzaStore {
    public:
        PizzaStore(SimplePizzaFactory* factory);

        void orderPizza(PizzaType type);

    private:
        SimplePizzaFactory* factory;
};

#endif  // __PIZZASTORE_H__
