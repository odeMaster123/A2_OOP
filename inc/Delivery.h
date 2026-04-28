#ifndef A2OOP_DELIVERY_H
#define A2OOP_DELIVERY_H
#include <string>
using namespace std;

// Base Clase
class Delivery {
protected:
    int deliveryid;
    string drivername, address;
    double deliveryFee;

    public:
    Delivery(int id, string drivername , string address, double Fee);

    virtual double getFee();
    virtual void displayDeliveryInfo() = 0;

     ~Delivery() {};
};

// ====== Home Delivery ========
class HomeDelivery : public Delivery {
    public:
    HomeDelivery(int id, string drivername, string address, double Fee);

    virtual double getFee();
    void displayDeliveryInfo() override;
};

// ====== PickupDelivery =========
class PickupDelivery : public Delivery {
    public:
    PickupDelivery(int id);

    void displayDeliveryInfo() override;
};


#endif //A2OOP_DELIVERY_H