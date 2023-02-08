#include "Condiments.h"

// Condiment Class
std::string CondimentDecorator::getDescription() {
    return ("Unknown Condimented Beverage");
}

// Mocha Condiment Class
Mocha::Mocha(Beverage* beverage) {
    this->m_beverage = beverage;
}

std::string Mocha::getDescription() {
    return (std::string(m_beverage->getDescription()) + ", Mocha");
}

double Mocha::cost() {
    return (m_beverage->cost() + 0.20);
}


// Soy Condiment Class
Soy::Soy(Beverage* beverage) {
    this->m_beverage = beverage;
}

std::string Soy::getDescription() {
    return (std::string(m_beverage->getDescription()) + ", Soy");
}

double Soy::cost() {
    return (m_beverage->cost() + 0.15);
}


// Milk Condiment Class
Milk::Milk(Beverage* beverage) {
    this->m_beverage = beverage;
}

std::string Milk::getDescription() {
    return (std::string(m_beverage->getDescription()) + ", Milk");
}

double Milk::cost() {
    return (m_beverage->cost() + 0.10);
}


// Whip Condiment Class
Whip::Whip(Beverage* beverage) {
    this->m_beverage = beverage;
}

std::string Whip::getDescription() {
    return (std::string(m_beverage->getDescription()) + ", Whip");
}

double Whip::cost() {
    return (m_beverage->cost() + 0.10);
}
