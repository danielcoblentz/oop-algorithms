 //
 // Created by Hood User on 10/23/2024.
 //
 #include <iostream>
 using namespace std;

 // Class representing a Book
 class Book {
 private:
     string title; // Only title for simplicity

 public:
     // Constructor to initialize a Book with a title
     Book(string t) : title(t) {}

     // Function to get the title of the book
     string getTitle() const {
         return title;
     }
 };

 // Class representing a Library (composed of Books)
 class Library {
 private:
     Book* books[3]; // Fixed array of pointers to hold 3 books
     int bookCount;  // Keep track of the number of books in the library

 public:
     // Constructor to initialize the book count to 0
     Library() {
         bookCount = 0;
     }

     // Function to add a book to the library
     void addBook(Book* book) {
         if (bookCount < 3) {  // Check if there's space for more books
             books[bookCount] = book; // Add book to the array
             bookCount++;
             cout << "Book added: " << book->getTitle() << endl;
         } else {
             cout << "Library is full! Can't add more books." << endl;
         }
     }

     // Function to display all books in the library
     void displayBooks() const {
         if (bookCount == 0) {
             cout << "No books in the library." << endl;
         } else {
             cout << "Books in the library:" << endl;
             for (int i = 0; i < bookCount; i++) {
                 cout << books[i]->getTitle() << endl;
             }
         }
     }
 };

 int main() {
     // Create a Library object
     Library library;

     // Create some Book objects
     Book book1("The Great Gatsby");
     Book book2("To Kill a Mockingbird");
     Book book3("1984");

     // Add books to the library
     library.addBook(&book1);
     library.addBook(&book2);
     library.addBook(&book3);

     // Display all books in the library
     library.displayBooks();

     return 0;
 }
