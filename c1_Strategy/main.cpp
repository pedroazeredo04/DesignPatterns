# include <iostream>
# include "Duck.h"

int main() {
    // test to differents types of ducks

    MallarDuck dumbduck = MallarDuck();
    WoodenDuck spruceduck;
    RubberDuck duckDluffy;

    
    std::cout << std::endl << "RUBBER" << std::endl;
    duckDluffy.performFly();
    duckDluffy.performQuack();

    std::cout << std::endl << "WOODEN" << std::endl;
    spruceduck.performFly();
    spruceduck.performQuack();
    
    std::cout << std::endl << "MALLARD" << std::endl;
    dumbduck.performFly();
    dumbduck.performQuack();


    return 0;
}
