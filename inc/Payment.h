#ifndef A2OOP_PAYMENT_H
#define A2OOP_PAYMENT_H
#include <iostream>
#include <string>
using namespace std;

// ========Base class =======
class Payment {
protected:
    int paymentid;
    double amount;

    public:
    Payment(int id, double amount );

    virtual void Pay() = 0;
    virtual void display() = 0;

    virtual ~Payment();
};

// ============= Cash Payment ==========
class CashPayment : public Payment {
    public:
    CashPayment(int id, double amount );
    virtual void Pay();
    virtual void display() ;
};

// ========== class Card Payment ===========
class CardPayment : public Payment {
    private:
    string cardNumber;

    bool validateCardNum();

public:
    CardPayment(int id, double amount, string cardNumber );

    virtual void Pay();
    virtual void display();
};

#endif //A2OOP_PAYMENT_H