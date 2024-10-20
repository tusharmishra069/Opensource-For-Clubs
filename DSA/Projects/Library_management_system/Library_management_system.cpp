#include <iostream>
#include <string>
using namespace std;

// Node structure to represent a book
struct Book {
    int id;
    string title;
    string author;
    Book* next;
};

// Linked List class for the library system
class Library {
private:
    Book* head;  // Head pointer of the linked list

public:
    // Constructor 
    Library() {
        head = nullptr;
    }

    // Function to add a book
    void addBook(int id, string title, string author) {
        Book* newBook = new Book();
        newBook->id = id;
        newBook->title = title;
        newBook->author = author;
        newBook->next = head;
        head = newBook;
        cout << "Book added successfully!" << endl;
    }

    // Function to delete a book 
    void deleteBook(int id) {
        Book* temp = head;
        Book* prev = nullptr;

        
        if (temp != nullptr && temp->id == id) {
            head = temp->next;
            delete temp;
            cout << "Book deleted successfully!" << endl;
            return;
        }

        // Search for the book to be deleted
        while (temp != nullptr && temp->id != id) {
            prev = temp;
            temp = temp->next;
        }

        // If book nhi mila
        if (temp == nullptr) {
            cout << "Book not found!" << endl;
            return;
        }

        // delete book
        prev->next = temp->next;
        delete temp;
        cout << "Book deleted successfully!" << endl;
    }

    // Function to search for a book 
    void searchBook(int id) {
        Book* temp = head;
        while (temp != nullptr) {
            if (temp->id == id) {
                cout << "Book Found: " << endl;
                cout << "ID: " << temp->id << endl;
                cout << "Title: " << temp->title << endl;
                cout << "Author: " << temp->author << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found!" << endl;
    }

    // display
    void displayBooks() {
        Book* temp = head;
        if (temp == nullptr) {
            cout << "No books available." << endl;
            return;
        }
        cout << "Books in the library:" << endl;
        while (temp != nullptr) {
            cout << "ID: " << temp->id << endl;
            cout << "Title: " << temp->title << endl;
            cout << "Author: " << temp->author << endl;
            cout << "-------------------------" << endl;
            temp = temp->next;
        }
    }

    // Destructor 
    ~Library() {
        while (head != nullptr) {
            Book* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\n==========Library Management System==========\n";
        cout<<endl;
        cout << "1. Add Book\n";
        cout << "2. Delete Book\n";
        cout << "3. Search Book\n";
        cout << "4. Display All Books\n";
        cout << "5. Exit\n";
        cout<<endl<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> id;
                cout << "Enter Book Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter Author Name: ";
                getline(cin, author);
                lib.addBook(id, title, author);
                break;

            case 2:
                cout << "Enter Book ID to delete: ";
                cin >> id;
                lib.deleteBook(id);
                break;

            case 3:
                cout << "Enter Book ID to search: ";
                cin >> id;
                lib.searchBook(id);
                break;

            case 4:
                lib.displayBooks();
                break;

            case 5:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}