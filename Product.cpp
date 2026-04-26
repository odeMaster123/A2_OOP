#include "Product.h"

// Initialize static member
int Product::totalProductsCreated = 0;

// Constructors
Product::Product() {
    productId = 0;
    name = "";
    price = 0.0;
    quantity = 0;
}

Product::Product(int id, string n, double p, int q) {
    productId = id;
    name = n;
    price = p;
    quantity = q;
    totalProductsCreated++;
}

Product::~Product() {
    totalProductsCreated--;
}

// Getters
int Product::getId() const { return productId; }
string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }

// Setters
void Product::setPrice(double p) {
    if (p < 0) {
        throw "Error: Price cannot be negative!";
    }
    price = p;
}

void Product::setQuantity(int q) {
    if (q < 0) {
        throw "Error: Quantity cannot be negative!";
    }
    quantity = q;
}

void Product::updateQuantity(int qty) {
    if (qty < 0) {
        throw "Error: Cannot update with negative quantity!";
    }
    quantity += qty;
}

// Operator + (add quantity)
Product& Product::operator+(int qty) {
    this->quantity += qty;
    return *this;
}

// Operator == (compare products)
bool Product::operator==(const Product& other) {
    return (this->productId == other.productId);
}

// Operator << (print product)
ostream& operator<<(ostream& os, const Product& p) {
    os << "ID: " << p.productId << " | Name: " << p.name 
       << " | Price: " << p.price << " | Quantity: " << p.quantity;
    return os;
}

// Friend function to compare prices
bool comparePrice(const Product& p1, const Product& p2) {
    return p1.price > p2.price;
}

// Static function
int Product::getTotalProducts() {
    return totalProductsCreated;
}