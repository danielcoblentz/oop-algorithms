// //
// // Created by Hood User on 10/23/2024.
// //
// #include <iostream>
// #include <string>
//
// class Address {
// private:
//     std::string street;
//     std::string city;
//
// public:
//     Address(const std::string& street, const std::string& city)
//         : street(street), city(city) {}
//
//     std::string getFullAddress() const {
//         return street + ", " + city;
//     }
// };
//
// class Person {
// private:
//     std::string name;
//     Address address;
//
// public:
//     Person(const std::string& name, const Address& address)
//         : name(name), address(address) {}
//
//     void introduce() const {
//         std::cout << "Hi, I'm " << name << " and I live at "
//                   << address.getFullAddress() << "." << std::endl;
//     }
// };
//
// int main() {
//     Address myAddress("123 Main St", "Anytown");
//     Person person("Alice", myAddress);
//
//     person.introduce();
//
//     return 0;
// }
