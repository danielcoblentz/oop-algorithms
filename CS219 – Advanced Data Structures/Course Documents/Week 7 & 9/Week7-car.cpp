//
// Created by Hood User on 10/1/2024.
//
#include <iostream>
using namespace std;

// Car class definition
class Car {
public:
    string brand;  // Brand of the car (e.g., Toyota)
    string model;  // Model of the car (e.g., Camry)
    int year;      // Year of manufacture

    // Default constructor
    Car() : brand("Unknown Brand"), model("Unknown Model"), year(0) {}
//    Car() {
//        brand = "UnknownBrand";
//        model = "Unknown Model";
//        year = 0;
//    }

    // Parameterized constructor
    Car(string carBrand, string carModel, int carYear)
            : brand(carBrand), model(carModel), year(carYear) {}

//            Car (string brand, string model, int year){
//                this -> brand = brand;
//                this -> model =model;
//                this -> year = year;
//    }
    // Function to display car information
    void displayCarInfo() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }

    // Overloading the assignment operator
    Car& operator=(const Car& otherCar) {
        // Copy brand, model, and year from otherCar
        brand = otherCar.brand;
        model = otherCar.model;
        year = otherCar.year;

        return *this; // Return the current object to allow chain assignment
    }
};

int main() {
    // Step 1: Create two Car objects with different initial details
    Car car1("Toyota", "Camry", 2020);   // Car 1: Toyota Camry, 2020
    Car car2("Honda", "Accord", 2018);   // Car 2: Honda Accord, 2018

    cout << "Before assignment:" << endl;
    cout << "Car 1: ";
    car1.displayCarInfo();  // Display details of car 1
    cout << "Car 2: ";
    car2.displayCarInfo();  // Display details of car 2

    // Step 2: Use the assignment operator to copy details from car2 to car1
    car1 = car2;

    cout << "\nAfter assignment:" << endl;
    cout << "Car 1: ";
    car1.displayCarInfo();  // Display details of car 1 after assignment
    cout << "Car 2: ";
    car2.displayCarInfo();  // Display details of car 2

    return 0;
}
