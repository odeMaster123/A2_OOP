#include "../inc/Order.h"
#include <iostream>

using namespace std;

Order::Order() {
    orderId = 0;
    customer = nullptr;
    payment = nullptr;
    delivery = nullptr;
}

Order::Order(int id, Customer *customer) {
    if (customer == nullptr) {
        throw "Error: customer is null";
    }
    orderId = id;
    this->customer = customer;
    payment = nullptr;
    delivery = nullptr;
}

//Add item
void Order::AddItem(Product* product, int quantity) {
    OrderItems item(product, quantity); // new order item

    product->setQuantity(product->getQuantity() - quantity); // تقليل كميه المخزون

    items.push_back(item); // add item to order
}

// Payment
void Order::setPayment(Payment *payment) {
    if (payment == nullptr) {
        throw "Error : payment is null! ";
    }
    this->payment = payment;
}

// Delivery
void Order::setDelivery(Delivery *delivery) {
    this->delivery = delivery;
}

// Subtotal
double Order::CalculateSubtotal() const {
    double total = 0;
    // for (int i = 0; i < items.size(); i++) {
    //     Product *product = items[i].first;
    //     int quantity= items[i].second;
    //
    //     total += product->getPrice() * quantity;
    // }
    for (const auto& item : items) {
        total += item.getTotalPrice();
    }
    return total;
}

// calc Discount
double Order::CalculateDiscount() const {
    if (customer == nullptr) return 0;

    double subtotal = CalculateSubtotal();
    return subtotal * 0.1;
}

// calc total price
double Order::CalculateTotalPrice() const {
    double subtotal = CalculateSubtotal();
    double discount = CalculateDiscount();
    double deliveryFee = 0;

    if (delivery != nullptr) {
        deliveryFee = delivery->getFee();
    }
    return subtotal - discount + deliveryFee;
}

// print invoice
void Order::printInvoice() const {
    cout << "\n====== INVOICE ======" << endl;
    cout << "Customer: " << customer->getName() << endl;

    cout << "\nItems\n";
    for (int i = 0; i < items.size(); i++) {
        items[i].display();
    }

    double subtotal = CalculateSubtotal();
    double discount = CalculateDiscount();
    double total = CalculateTotalPrice();

    cout << "\nSubtotal: " << subtotal << endl;
    cout << "Discount: " << discount << endl;

    if (delivery != nullptr) {
        cout << "Delivery Fee: " << delivery->getFee() << "EGP\n";
    } else {
        cout << "Delivery: Pickup (0 EGP) \n";
    }

    cout << "Final total: " << total <<"EGP\n";
    if (payment != nullptr) {
        cout << "Payment Method: ";
        payment->Pay();
    }

    cout << "======================\n";
}






