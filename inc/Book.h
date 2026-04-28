#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

class Book : public Product {
private:
    string author;
    int pages;

public:
    Book();
    Book(int id, string n, double p, int q, string auth, int pg);
    
    void setAuthor(string auth);
    void setPages(int pg);
    string getAuthor() const;
    int getPages() const;
    
    void display() const override;
};

#endif