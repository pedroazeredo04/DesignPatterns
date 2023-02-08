#include "Beverages.h"

// Abstract class Beverage
std::string Beverage::getDescription() {
    return m_description;
}

// Class Espresso
Espresso::Espresso() {
    this->m_description = "Espresso";
}

double Espresso::cost() {
    return 1.99;
}


// Class HouseBlend
HouseBlend::HouseBlend() {
    this->m_description = "HouseBlend";
}

double HouseBlend::cost() {
    return 0.89;
}


// Class Decaf
Decaf::Decaf() {
    this->m_description = "Decaf";
}

double Decaf::cost() {
    return 0.89;
}


// Class Dark Roast
DarkRoast::DarkRoast() {
    this->m_description = "DarkRoast";
}

double DarkRoast::cost() {
    return 0.99;
}
