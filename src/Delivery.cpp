#include <iostream>
#include "../inc/Delivery.h"
using namespace std;
 // ====== Base Class ======
Delivery::Delivery(int id, string drivername, string address, double Fee)
:deliveryid(id),address(address),deliveryFee(Fee),drivername(drivername){};

double Delivery::getFee() {
    return deliveryFee;
}

// ======== Home Delivery ========

HomeDelivery::HomeDelivery(int id, string drivername, string address, double Fee)
    : Delivery(id, drivername, address, Fee){};

double HomeDelivery::getFee() {
    return deliveryFee;
}

void HomeDelivery::displayDeliveryInfo() {
    cout << "\n=====Home delivery info======\n";
    cout << "ID: " << deliveryid << endl;
    cout << "Address: " << address << endl;
    cout << "Driver name: " << drivername << endl;
    cout << "Fee: " << deliveryFee << endl;
}


// ========== Pickup Delivery ===============

PickupDelivery::PickupDelivery(int id):Delivery(id,"No Driver", "Store Pickup",0 ){}

void PickupDelivery::displayDeliveryInfo() {
    cout << "\n=====Pickup delivery info======\n";
    cout << "ID: " << deliveryid << endl;
}
