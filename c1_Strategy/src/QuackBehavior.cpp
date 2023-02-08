#include "QuackBehavior.h"

// Quack behavior functions implementations
void Quack::quack() {
    std::cout << "quack!" << std::endl;
}

void Squeak::quack() {
    std::cout << "squeak!" << std::endl;
}

void MuteSqueak::quack() {
    std::cout << "*silence*" << std::endl;
}
