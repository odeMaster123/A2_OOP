#include "DerivedProducts.h"
#include <iostream>

// ========== Book ==========
Book::Book() : Product() {
    author = "";
    pages = 0;
}

Book::Book(int id, string n, double p, int q, string auth, int pg)
    : Product(id, n, p, q) {
    author = auth;
    pages = pg;
}

void Book::setAuthor(string auth) { author = auth; }
void Book::setPages(int pg) { pages = pg; }
string Book::getAuthor() const { return author; }
int Book::getPages() const { return pages; }

void Book::display() const {
    cout << "=== BOOK ===" << endl;
    cout << "ID: " << productId << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << " EGP" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}

// ========== ElectronicDevice ==========
ElectronicDevice::ElectronicDevice() : Product() {
    brand = "";
    warrantyMonths = 0;
}

ElectronicDevice::ElectronicDevice(int id, string n, double p, int q, string br, int warranty)
    : Product(id, n, p, q) {
    brand = br;
    warrantyMonths = warranty;
}

void ElectronicDevice::setBrand(string br) { brand = br; }
void ElectronicDevice::setWarrantyMonths(int warranty) { warrantyMonths = warranty; }
string ElectronicDevice::getBrand() const { return brand; }
int ElectronicDevice::getWarrantyMonths() const { return warrantyMonths; }

void ElectronicDevice::display() const {
    cout << "=== ELECTRONIC DEVICE ===" << endl;
    cout << "ID: " << productId << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << " EGP" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Brand: " << brand << endl;
    cout << "Warranty: " << warrantyMonths << " months" << endl;
}

// ========== OfficeSupply ==========
OfficeSupply::OfficeSupply() : Product() {
    category = "";
    material = "";
}

OfficeSupply::OfficeSupply(int id, string n, double p, int q, string cat, string mat)
    : Product(id, n, p, q) {
    category = cat;
    material = mat;
}

void OfficeSupply::setCategory(string cat) { category = cat; }
void OfficeSupply::setMaterial(string mat) { material = mat; }
string OfficeSupply::getCategory() const { return category; }
string OfficeSupply::getMaterial() const { return material; }

void OfficeSupply::display() const {
    cout << "=== OFFICE SUPPLY ===" << endl;
    cout << "ID: " << productId << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << " EGP" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Category: " << category << endl;
    cout << "Material: " << material << endl;
}