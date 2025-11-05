#include "PreMadeItem.h"
#include <iostream>
#include <sstream>
#include <iomanip>

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name) {}

double PreMadeItem::getPrice(){
    if (size == "small") { price = 4.0; }
    else if (size == "medium") { price = 6.0; }
    else if (size == "large") { price = 7.5; }
    return price;
}

std::string PreMadeItem::composeItem(){
    std::ostringstream oss;
    oss << "Pre-made Size: " 
        << size << '\n'
        << "Pre-made Item: " 
        << name << '\n'
        << "Price: $" 
        << std::fixed << std::setprecision(2) << getPrice() << '\n';
        return oss.str();
}

PreMadeItem::~PreMadeItem(){}
