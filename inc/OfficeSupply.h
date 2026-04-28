#ifndef OFFICE_SUPPLY_H
#define OFFICE_SUPPLY_H

#include "Product.h"

class OfficeSupply : public Product {
private:
    string category;
    string material;

public:
    OfficeSupply();
    OfficeSupply(int id, string n, double p, int q, string cat, string mat);
    
    void setCategory(string cat);
    void setMaterial(string mat);
    string getCategory() const;
    string getMaterial() const;
    
    void display() const override;
};

#endif