//
//  main.cpp
//  structBookstoreInventory
//
//  Created by Sonia Lopchan on 11/5/24.

#include <iostream>
#include <string>
#include <vector>
#include "bookStoreInventory.h"

int main() {
    vector<Book> bookstoreInventory;

    int choice;
    do {
        cout << "Bookstore Inventory Management\n";
        cout << "1. Add a new book\n";
        cout << "2. Find a book\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(bookstoreInventory);
                break;
            case 2: {
                string searchISBN;
                cout << "Enter ISBN to search: ";
                cin >> searchISBN;
                Book foundBook;
                if (findBook(bookstoreInventory, searchISBN, foundBook)) {
                    cout << "Title: " << foundBook.title << endl;
                    cout << "Author: " << foundBook.author << endl;
                    cout << "Quantity: " << foundBook.quantity << endl;
                } else {
                    cout << "Book not found.\n";
                }
                break;
            }
            case 3:
                cout << "Exit successful.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
