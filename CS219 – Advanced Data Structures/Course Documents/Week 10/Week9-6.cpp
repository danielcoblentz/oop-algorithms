////
//// Created by Hood User on 10/22/2024.
////
//#include <iostream>
//
//// Base class Car
//class Car {
//public:
//    void drive() {
//        std::cout << "Driving on the road.\n";
//    }
//};
//
//// Base class Airplane
//class Airplane {
//public:
//    void fly() {
//        std::cout << "Flying in the sky.\n";
//    }
//};
//
//// Derived class FlyingCar
//class FlyingCar : public Car, public Airplane {
//private:
//    bool isFlying;
//
//public:
//    FlyingCar() : isFlying(false) {}
//
//    void transform() {
//        if (isFlying) {
//            isFlying = false;
//            std::cout << "Transforming to car mode.\n";
//        } else {
//            isFlying = true;
//            std::cout << "Transforming to airplane mode.\n";
//        }
//    }
//
//    void move() {
//        if (isFlying) {
//            fly();   // From Airplane
//        } else {
//            drive(); // From Car
//        }
//    }
//};
//
//int main() {
//    FlyingCar myFlyingCar;
//
//    myFlyingCar.move();       // Should drive by default
//    myFlyingCar.transform();  // Switch to airplane mode
//    myFlyingCar.move();       // Should fly now
//    myFlyingCar.transform();  // Switch back to car mode
//    myFlyingCar.move();       // Should drive again
//
//    return 0;
//}
