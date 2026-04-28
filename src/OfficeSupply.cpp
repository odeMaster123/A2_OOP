#include "OfficeSupply.h"
#include <iostream>

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