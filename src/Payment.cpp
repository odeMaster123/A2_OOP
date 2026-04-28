#include <iostream>
#include "../inc/Payment.h"
using namespace std;

// ==========Base Class ============
Payment::Payment(int id, double amount)
: paymentid(id), amount(amount) {}

Payment::~Payment() {}

//========= Cash Payment ============
CashPayment::CashPayment(int id, double amount) :Payment(id, amount) {}

void CashPayment::Pay() {
    cout << "\n Processing Cash Payment...\n";
    cout << "Amount is " << amount << "\n";
}
void CashPayment::display() {
    cout << "\n ===== CashPayment ======\n";
    cout <<"Payment id : " << paymentid<< endl;
    cout << "Amount is " << amount << "\n";
}

//======= Card Payment ===========
CardPayment::CardPayment(int id, double amount, string cardNumber)
    :Payment(id, amount), cardNumber(cardNumber) {}

bool CardPayment::validateCardNum() {
    return cardNumber.length() == 16;
}

void CardPayment::Pay() {
    cout << "\n Processing Card Payment...\n";

    if (validateCardNum()) {
        cout << "\n CardNum is valid " <<  "\n";
        cout << "\n Amount is " << amount << "\n";
    }else {
        cout << "\n CardNum is invalid " << "\n";
    }
}

void CardPayment::display() {
    cout << "\n ====Card Payment====\n";
    cout << "Payment id : " << paymentid << endl;
    cout << "Amount is " << amount << "\n";
    cout << "\n CardNum is " << cardNumber << "\n";
}




