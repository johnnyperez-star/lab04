#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <string>
#include <map>

class CustomItem : public IceCreamItem{
    private:
        std::map<std::string, int> toppings;
    public:
        CustomItem(std::string size);
        virtual ~CustomItem();
        void addTopping(std::string topping);
        std::string composeItem();
        double getPrice();
};

#endif
