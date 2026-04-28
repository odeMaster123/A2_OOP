#include "../inc/OrderItems.h"
#include <iostream>
using namespace std;

// default constructor
OrderItems::OrderItems() {
    product = nullptr;
    quantity = 0;
}

// parameterized constructor
OrderItems::OrderItems(Product *product, int quantity) {
        if (quantity <= 0) {
            throw "Erorr : Quantity must be greater than 0 :";
        }
        if (product == nullptr) {
            throw "Error : Product is nullptr";
        }
        if (quantity > product->getQuantity()) {
            throw "Error : Quantity exceeds the maximum quantity :";
        }

        this->product = product;
        this->quantity = quantity;
}

Product* OrderItems::getProduct() const {
    return product;
}
int OrderItems::getQuantity() const {
    return quantity;
}

void OrderItems::setQuantity(int quantity) {
    if (quantity <= 0) {
        throw "Erorr : Quantity must be greater than 0 :";
    }
    if (product == nullptr) {
        throw "Error : Product is nullptr";
    }

    quantity = quantity;
}

// calc. Total price for this item
double OrderItems::getTotalPrice() const {
    return product->getPrice() * quantity;
}

void OrderItems::display() const {
    cout << "Product : " << product->getName()
        << " | Quantity : " << quantity
        << " | Total Price : " << getTotalPrice() << "EGP" << endl;
}


