#include "Condiments.h"
#include "Beverages.h"

int main() {
    Espresso beverage;
    std::cout << beverage.getDescription() << std::endl;
    std::cout << beverage.cost() << std::endl;

    Soy beverage2(&beverage);
    std::cout << beverage2.getDescription() << std::endl;
    std::cout << beverage2.cost() << std::endl;

    Mocha beverage3(&beverage2);
    std::cout << beverage3.getDescription() << std::endl;
    std::cout << beverage3.cost() << std::endl;

    Mocha beverage4(&beverage3);
    std::cout << beverage4.getDescription() << std::endl;
    std::cout << beverage4.cost() << std::endl;
    // In order for us to print "double mocha" instead of "Mocha, mocha"
    // the implementation would be to pass an array of decorators to the next one
}