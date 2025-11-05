#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem{
    private:
        std::string name;

    public:
        PreMadeItem(std::string name, std::string size);
        double getPrice();
        std::string composeItem();
        virtual ~PreMadeItem();
};

#endif
