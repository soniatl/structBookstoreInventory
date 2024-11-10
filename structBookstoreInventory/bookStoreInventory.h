//
//  used generative AI to create this file contents
//
using namespace std;

// Structure to represent a book
struct Book {
    string title;
    string author;
    string ISBN;
    int quantity;
    double price;

    // Overloading the '==' operator to compare books by ISBN
    bool operator==(const Book& other) const {
        return this->ISBN == other.ISBN;
    }
};

// Function to add a new book to the inventory
void addBook(vector<Book>& inventory) {
    Book newBook;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter ISBN: ";
    getline(cin, newBook.ISBN);
    cout << "Enter quantity: ";
    cin >> newBook.quantity;
    cout << "Enter price: ";
    cin >> newBook.price;
    cin.ignore(); // Consume newline character
    inventory.push_back(newBook);
    cout << "Book added successfully!\n";
}

// Function to find a book in the inventory
bool findBook(const vector<Book>& inventory, const string& ISBN, Book& foundBook) {
    for (const Book& book : inventory) {
        if (book.ISBN == ISBN) {
            foundBook = book;
            return true;
        }
    }
    return false;
}
