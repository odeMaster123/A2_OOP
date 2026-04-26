#include "DerivedProducts.cpp"
#include "Product.cpp"
#include <iostream>

int main() {
    // Create products
    Book book1(1, "C++ Programming", 250, 10, "Bjarne Stroustrup", 500);
    ElectronicDevice laptop1(2, "Gaming Laptop", 25000, 5, "Dell", 24);
    OfficeSupply pen1(3, "Pen", 15, 100, "Writing", "Plastic");
    
    // Display products
    book1.display();
    cout << endl;
    laptop1.display();
    cout << endl;
    pen1.display();
    cout << endl;
    
    // Test operators
    cout << "After adding 5 pens:" << endl;
    pen1 + 5;
    cout << pen1 << endl;
    
    // Test friend function
    if (comparePrice(book1, laptop1)) {
        cout << "Book is more expensive than Laptop" << endl;
    } else {
        cout << "Laptop is more expensive than Book" << endl;
    }
    
    // Test static count
    cout << "\nTotal products created: " << Product::getTotalProducts() << endl;
    
    return 0;
}