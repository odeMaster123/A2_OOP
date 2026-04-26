#ifndef DERIVED_PRODUCTS_H
#define DERIVED_PRODUCTS_H

#include "Product.h"

// Book class
class Book : public Product {
private:
    string author;
    int pages;

public:
    Book();
    Book(int id, string n, double p, int q, string auth, int pg);
    
    void setAuthor(string auth);
    void setPages(int pg);
    string getAuthor() const;
    int getPages() const;
    
    void display() const override;
};

// ElectronicDevice class
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

// OfficeSupply class
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