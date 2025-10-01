////
//// Created by Hood User on 10/22/2024.
////
//#include <iostream>
//
//// Base class Device
//class Device {
//public:
//    void powerOn() {
//        std::cout << "Device powered on.\n";
//    }
//};
//
//// Derived class Scanner, virtual inheritance
//class Scanner : virtual public Device {
//public:
//    void scan() {
//        std::cout << "Scanning document...\n";
//    }
//};
//
//// Derived class Printer, virtual inheritance
//class Printer : virtual public Device {
//public:
//    void print() {
//        std::cout << "Printing document...\n";
//    }
//};
//
//// Derived class AllInOne, inherits from Scanner and Printer
//class AllInOne : public Scanner, public Printer {
//public:
//    void fax() {
//        std::cout << "Sending fax...\n";
//    }
//};
//
//int main() {
//    AllInOne aio;
//
//    aio.powerOn(); // From Device
//    aio.scan();    // From Scanner
//    aio.print();   // From Printer
//    aio.fax();     // From AllInOne
//
//    return 0;
//}
