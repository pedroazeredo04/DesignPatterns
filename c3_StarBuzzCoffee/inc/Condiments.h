# ifndef __DECORATOR_H__
# define __DECORATOR_H__

#include "Beverages.h"

// Abstract Class Condiment
class CondimentDecorator : public Beverage {
    public:
        std::string getDescription() override;
        
    protected:
        Beverage* m_beverage;
};

// Mocha Condiment Class 
class Mocha : public CondimentDecorator {
    public:
        Mocha(Beverage* beverage);
        
        std::string getDescription() override;

        double cost() override;
};

// Soy Condiment Class
class Soy : public CondimentDecorator {
    public: 
        Soy(Beverage* beverage);

        std::string getDescription() override;

        double cost() override;
};

// Milk Condiment Class
class Milk : public CondimentDecorator {
    public:
        Milk(Beverage* beverage);

        std::string getDescription() override;

        double cost() override;
};

// Whip Condiment Class
class Whip : public CondimentDecorator {
    public:
        Whip(Beverage* beverage);

        std::string getDescription() override;

        double cost() override;
};

# endif // __DECORATOR_H__
