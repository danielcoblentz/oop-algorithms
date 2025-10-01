////
//// Created by Hood User on 10/22/2024.
////
//#include <iostream>
//
//// Base class
//class Animal {
//protected:
//    int age;
//
//public:
//    Animal(int a) : age(a) {}
//
//    void eat() {
//        std::cout << "Eating...\n";
//    }
//
//    void sleep() {
//        std::cout << "Sleeping...\n";
//    }
//};
//
//// Derived class
//class Dog : public Animal {
//public:
//    Dog(int a) : Animal(a) {}
//
//    void bark() {
//        std::cout << "Barking...\n";
//    }
//};
//
//int main() {
//    Dog myDog(5);
//
//    myDog.eat();    // Inherited from Animal
//    myDog.sleep();  // Inherited from Animal
//    myDog.bark();   // Defined in Dog
//
//    return 0;
//}
