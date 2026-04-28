#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    int productId;
    string name;
    double price;
    int quantity;

public:
    // Static member to count total products created
    static int totalProductsCreated;

    // Constructors
    Product();
    Product(int id, string n, double p, int q);
    virtual ~Product();

    // Getters
    int getId() const;
    string getName() const;
    double getPrice() const;
    int getQuantity() const;

    // Setters
    void setPrice(double p);
    void setQuantity(int q);

    // Update quantity after purchase
    void updateQuantity(int qty);

    // Pure virtual function (makes Product abstract)
    virtual void display() const = 0;

    // Operator overloading
    Product& operator+(int qty);           // Add quantity
    bool operator==(const Product& other); // Compare products
    friend ostream& operator<<(ostream& os, const Product& p); // Print product

    // Friend function to compare prices
    friend bool comparePrice(const Product& p1, const Product& p2);

    // Static function to get total products created
    static int getTotalProducts();
};

#endif