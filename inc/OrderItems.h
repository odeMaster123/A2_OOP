#ifndef A2OOP_ORDERITEMS_H
#define A2OOP_ORDERITEMS_H

#include "Product.h"

class OrderItems {
private:
        Product* product;
        int quantity;
        double UnitPriceAtPurchase;
public:
        OrderItems();
        OrderItems(Product* product, int quantity, double UnitPriceAtPurchase);

        OrderItems(Product * product, int quantity);

        Product* getProduct() const;
        int getQuantity() const;
        double getUnitPrice() const;

        void setProduct(Product* product);
        void setQuantity(int quantity);
        double setUnitPrice(double UnitPrice);

        double getTotalPrice() const; // calc. total price for this item

        void display() const; // display item

};


#endif //A2OOP_ORDERITEMS_H