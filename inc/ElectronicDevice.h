#ifndef ELECTRONIC_DEVICE_H
#define ELECTRONIC_DEVICE_H

#include "Product.h"

class ElectronicDevice : public Product {
private:
    string brand;
    int warrantyMonths;

public:
    ElectronicDevice();
    ElectronicDevice(int id, string n, double p, int q, string br, int warranty);
    
    void setBrand(string br);
    void setWarrantyMonths(int warranty);
    string getBrand() const;
    int getWarrantyMonths() const;
    
    void display() const override;
};

#endif