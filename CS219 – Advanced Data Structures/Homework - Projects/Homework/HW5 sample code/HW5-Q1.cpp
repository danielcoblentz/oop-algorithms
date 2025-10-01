//
// Created by Hood User on 11/19/2024.
//
#include <iostream>
#include <string>
using namespace std;

// Node structure for a student
struct Student {
    string name;
    Student* prev;
    Student* next;

    Student(string n) : name(n), prev(nullptr), next(nullptr) {}
};

// StudentList class
class StudentList {
private:
    Student* head;
    Student* tail;
    int count;

public:
    StudentList() : head(nullptr), tail(nullptr), count(0) {}

    // Retrieve the first student
    string front() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            exit(1);
        }
        return head->name;
    }

    // Retrieve the last student
    string back() {
        if (tail == nullptr) {
            cout << "List is empty!" << endl;
            exit(1);
        }
        return tail->name;
    }

    // Insert a student into an empty list (Case 1)
    void insertEmpty(string name) {
        Student* newStudent = new Student(name);
        head = tail = newStudent;
        count++;
        cout << "Inserted \"" << name << "\" into empty list." << endl;
    }

    // Insert a student at the beginning (Case 2)
    void insertBeginning(string name) {
        Student* newStudent = new Student(name);
        newStudent->next = head;
        if (head != nullptr) {
            head->prev = newStudent;
        }
        head = newStudent;
        if (tail == nullptr) { // If the list was empty
            tail = newStudent;
        }
        count++;
        cout << "Inserted \"" << name << "\" at the beginning." << endl;
    }

    // Insert a student at the end (Case 3)
    void insertEnd(string name) {
        Student* newStudent = new Student(name);
        if (tail != nullptr) {
            tail->next = newStudent;
            newStudent->prev = tail;
        }
        tail = newStudent;
        if (head == nullptr) { // If the list was empty
            head = newStudent;
        }
        count++;
        cout << "Inserted \"" << name << "\" at the end." << endl;
    }

    // Insert a student after a specific student (Case 4)
    void insertAfter(string afterName, string name) {
        Student* temp = head;
        while (temp != nullptr && temp->name != afterName) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Student \"" << afterName << "\" not found!" << endl;
            return;
        }

        Student* newStudent = new Student(name);
        newStudent->next = temp->next;
        newStudent->prev = temp;

        if (temp->next != nullptr) {
            temp->next->prev = newStudent;
        } else { // If inserting at the end
            tail = newStudent;
        }

        temp->next = newStudent;
        count++;
        cout << "Inserted \"" << name << "\" after \"" << afterName << "\"." << endl;
    }

    // Display the student list
    void displayList() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Student* temp = head;
        cout << "Student List: ";
        while (temp != nullptr) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        cout << "END" << endl;
    }
};

// Main function for teaching
int main() {
    StudentList studentList;

    // Case 1: Insert into empty list
    studentList.insertEmpty("Alice");

    // Case 2: Insert at the beginning
    studentList.insertBeginning("Bob");

    // Case 3: Insert at the end
    studentList.insertEnd("Charlie");

    // Case 4: Insert after a specific student
    studentList.insertAfter("Alice", "David");

    // Display the list
    studentList.displayList();

    // Retrieve front and back
    cout << "First student: " << studentList.front() << endl;
    cout << "Last student: " << studentList.back() << endl;

    return 0;
}
