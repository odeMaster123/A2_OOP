#include "Book.h"
#include <iostream>

Book::Book() : Product() {
    author = "";
    pages = 0;
}

Book::Book(int id, string n, double p, int q, string auth, int pg)
    : Product(id, n, p, q) {
    author = auth;
    pages = pg;
}

void Book::setAuthor(string auth) { author = auth; }
void Book::setPages(int pg) { pages = pg; }
string Book::getAuthor() const { return author; }
int Book::getPages() const { return pages; }

void Book::display() const {
    cout << "=== BOOK ===" << endl;
    cout << "ID: " << productId << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << " EGP" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}