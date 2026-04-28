#ifndef A2OOP_ORDER_H
#define A2OOP_ORDER_H

#include <vector>

#include "OrderItems.h"
#include "Customer.h"
#include "Delivery.h"
#include "Payment.h"
using namespace std;

class Order : public OrderItems {
private:
    int orderId;
    string orderDate, status;
    Customer* customer;
    Delivery* delivery;
    Payment* payment;
    vector<OrderItems> items;

public:
    Order();
    Order(int id, Customer* customer);

    void AddItem(Product* product, int quantity);

    void setPayment(Payment* payment);
    void setDelivery(Delivery* delivery);

    //calculations
    double CalculateSubtotal() const;
    double CalculateTotalPrice() const;
    double CalculateDiscount() const;

    void printInvoice() const;

};


#endif //A2OOP_ORDER_H