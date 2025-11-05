#include "CustomItem.h"
#include <iostream>
#include <sstream>
#include <iomanip>

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if (size == "small") { price = 3.0; }
    else if (size == "medium") { price = 5.0; }
    else if (size == "large") { price = 6.5; }
}

double CustomItem::getPrice(){
    return price;
}

void CustomItem::addTopping(std::string topping){
    price += 0.40;
    toppings[topping] += 1;
}

std::string CustomItem::composeItem(){
    std::ostringstream oss;
    oss << "Custom Size: "
        << size << '\n'
        << "Toppings:" << '\n';
        for(auto pair : toppings){
            oss << pair.first << ": " << pair.second << " oz" << '\n';
        }
    oss << "Price: $" << std::fixed << std::setprecision(2) << price << '\n';
    return oss.str();
}

CustomItem::~CustomItem(){}
