//
// Created by Hood User on 11/20/2024.
//
/*
This program demonstrates a simple implementation of a singly linked list in C++.
It manages a list of books with basic operations like adding, deleting, removing, and swapping books.
*/

#include <iostream>
#include <string>

using namespace std;

// Define the structure for a Book node
struct Book {
    string title;
    string author;
    Book* next;
};

// Define the BookList class
class BookList {
public:
    Book* head;

    // Constructor
    BookList() : head(nullptr) {}

    // Add Book at the Start
    void addBookAtStart(string title, string author) {
        Book* newBook = new Book;
        newBook->title = title;
        newBook->author = author;
        newBook->next = head;
        head = newBook;
        cout << "Added book at the start: " << title << " by " << author << endl;
    }

    // Add Book at the End
    void addBookAtEnd(string title, string author) {
        Book* newBook = new Book;
        newBook->title = title;
        newBook->author = author;
        newBook->next = nullptr;
        if (head == nullptr) {
            head = newBook;
        } else {
            Book* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newBook;
        }
        cout << "Added book at the end: " << title << " by " << author << endl;
    }

    // Add Book at Specific Position
    void addBookAtPosition(int position, string title, string author) {
        Book* newBook = new Book;
        newBook->title = title;
        newBook->author = author;

        if (position == 0) {
            newBook->next = head;
            head = newBook;
            cout << "Added book at position " << position << ": " << title << " by " << author << endl;
            return;
        }

        Book* temp = head;
        for (int i = 0; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range." << endl;
            delete newBook;
            return;
        }

        newBook->next = temp->next;
        temp->next = newBook;
        cout << "Added book at position " << position << ": " << title << " by " << author << endl;
    }

    // Delete Book from the Start
    void deleteFirstBook() {
        if (head == nullptr) {
            cout << "No books to delete." << endl;
            return;
        }
        Book* temp = head;
        head = head->next;
        cout << "Deleted book: " << temp->title << " by " << temp->author << endl;
        delete temp;
    }

    // Delete Book from the End
    void deleteLastBook() {
        if (head == nullptr) {
            cout << "No books to delete." << endl;
            return;
        }
        if (head->next == nullptr) {
            cout << "Deleted book: " << head->title << " by " << head->author << endl;
            delete head;
            head = nullptr;
        } else {
            Book* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            cout << "Deleted book: " << temp->next->title << " by " << temp->next->author << endl;
            delete temp->next;
            temp->next = nullptr;
        }
    }

    // Remove Book by Title
    void removeBookByTitle(string title) {
        if (head == nullptr) {
            cout << "No books to remove." << endl;
            return;
        }

        if (head->title == title) {
            Book* temp = head;
            head = head->next;
            cout << "Removed book: " << title << " by " << temp->author << endl;
            delete temp;
            return;
        }

        Book* temp = head;
        while (temp->next != nullptr && temp->next->title != title) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Book not found: " << title << endl;
            return;
        }

        Book* toDelete = temp->next;
        temp->next = temp->next->next;
        cout << "Removed book: " << title << " by " << toDelete->author << endl;
        delete toDelete;
    }

    // Swap Two Books by Title
    void swapBooks(string title1, string title2) {
        if (title1 == title2) {
            cout << "Both titles are the same; no need to swap." << endl;
            return;
        }

        Book *prev1 = nullptr, *curr1 = head;
        while (curr1 && curr1->title != title1) {
            prev1 = curr1;
            curr1 = curr1->next;
        }

        Book *prev2 = nullptr, *curr2 = head;
        while (curr2 && curr2->title != title2) {
            prev2 = curr2;
            curr2 = curr2->next;
        }

        if (!curr1 || !curr2) {
            cout << "One or both books not found." << endl;
            return;
        }

        // Swap the nodes
        if (prev1) prev1->next = curr2; else head = curr2;
        if (prev2) prev2->next = curr1; else head = curr1;

        Book* temp = curr2->next;
        curr2->next = curr1->next;
        curr1->next = temp;

        cout << "Swapped books: " << title1 << " and " << title2 << endl;
    }

    // Display the list of books
    void displayBooks() {
        Book* current = head;
        while (current != nullptr) {
            cout << "\"" << current->title << "\" by " << current->author << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to demonstrate the operations
int main() {
    BookList library;

    // Demonstrate add operations
    library.addBookAtStart("The Great Gatsby", "F. Scott Fitzgerald");
    library.addBookAtEnd("To Kill a Mockingbird", "Harper Lee");
    library.addBookAtPosition(1, "1984", "George Orwell"); // Adding at a specific position
    library.displayBooks();

    // Demonstrate delete operations
    library.deleteFirstBook();
    library.deleteLastBook();
    library.displayBooks();

    // Demonstrate remove by title
    library.addBookAtEnd("Pride and Prejudice", "Jane Austen");
    library.addBookAtEnd("The Hobbit", "J.R.R. Tolkien");
    library.displayBooks();
    library.removeBookByTitle("Pride and Prejudice");
    library.displayBooks();

    // Demonstrate swap operation
    library.addBookAtStart("Moby Dick", "Herman Melville");
    library.addBookAtEnd("War and Peace", "Leo Tolstoy");
    library.displayBooks();
    library.swapBooks("Moby Dick", "War and Peace");
    library.displayBooks();

    return 0;
}
