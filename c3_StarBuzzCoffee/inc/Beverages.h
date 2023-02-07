#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <iostream>
#include <string>

class Beverage {
    public:
        virtual std::string getDescription();
        virtual double cost() = 0;
    
    protected:
        std::string m_description = "Unknown Beverage"; 
};

class Espresso : public Beverage {
    public:
        Espresso();
        double cost() override;
};

class HouseBlend : public Beverage {
    public:
        HouseBlend();
        double cost() override;
};

class Decaf : public Beverage {
    public:
        Decaf();
        double cost() override;
};

class DarkRoast : public Beverage {
    public:
        DarkRoast();
        double cost() override;
};

# endif // __BEVERAGE_H__