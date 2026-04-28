#ifndef A2OOP_CUSTOMER_H
#define A2OOP_CUSTOMER_H
#include <string>
using namespace std;

// base class
class Customer {
protected:
    int customerId;
    string name, phone;

    public:
    Customer(int id ,string name, string phone);

    virtual double getDiscount(double totalPrice) = 0;
    virtual void displayinfo() = 0;

    string getName() {return name;}
    string getPhone() {return phone;}

    virtual ~Customer();
};

// ==== regular customer ===
class RegularCustomer : public Customer {
    public:
    RegularCustomer(int id, string name, string phone);

    virtual double getDiscount(double totalPrice) override;
    virtual void displayinfo() override;
};

// ==== Premium Customer =====
class PremiumCustomer : public Customer {
    private:
    double discountRate;

    public:
    PremiumCustomer(int id, string name, string phone, double discountRate);

    virtual double getDiscount(double totalPrice) override;
    virtual void displayinfo() override;

};


#endif //A2OOP_CUSTOMER_H