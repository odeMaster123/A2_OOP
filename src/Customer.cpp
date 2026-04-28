#include <iostream>
#include "../inc/Customer.h"
using namespace std;

// base class
Customer::Customer(int id, string name, string phone) {
    this->customerId = id;
    this->name = name;
    this->phone = phone;
}

Customer::~Customer(){}

// ====== regular customer ==========

RegularCustomer::RegularCustomer(int id, string name, string phone)
    :Customer(id, name, phone) {}

    double RegularCustomer::getDiscount(double totalPrice) {
    return totalPrice;
}


    void RegularCustomer::displayinfo(){
        cout << "Regular Customer\n";
        cout << "ID : " << customerId << endl;
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
};

// ========= PremiumCustomer ==============
PremiumCustomer::PremiumCustomer( int id, string name, string phone, double discountRate):
Customer(id, name, phone) {
    this->discountRate = discountRate;
}

double PremiumCustomer::getDiscount(double totalPrice){
    return totalPrice*discountRate;
}

void PremiumCustomer::displayinfo() {
    cout << "Premium Customer\n";
    cout << "ID : " << customerId << endl;
    cout << "Name : " << name << endl;
    cout << "Phone : " << phone << endl;
    cout << "Discount Rate : " << discountRate << endl;
};
