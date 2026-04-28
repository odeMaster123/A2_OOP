#include "ElectronicDevice.h"
#include <iostream>

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