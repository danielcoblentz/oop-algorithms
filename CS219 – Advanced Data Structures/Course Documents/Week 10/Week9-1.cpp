// //
// // Created by Hood User on 10/16/2024.
// //
// #include <iostream>
// #include <cmath>
// using namespace std;
//
// // Base class
// class Shape {
// public:
//     virtual void draw() const = 0;  // Pure virtual function (abstract class)
// };
//
// // Derived class from Shape
// class Circle : public Shape {
// private:
//     float radius;
// public:
//     Circle(float r) : radius(r) {}
//     void draw() const override {
//         cout << "Drawing a circle with radius: " << radius << endl;
//     }
// };
//
// // Derived class from Shape
// class Rectangle : public Shape {
// protected:
//     float length, width;
// public:
//     Rectangle(float l, float w) : length(l), width(w) {}
//     void draw() const override {
//         cout << "Drawing a rectangle with length: " << length << " and width: " << width << endl;
//     }
// };
//
// // Derived class from Rectangle
// class Square : public Rectangle {
// public:
//     Square(float side) : Rectangle(side, side) {}
//     void draw() const override {
//         cout << "Drawing a square with side: " << length << endl;
//     }
// };
//
// int main() {
//     Shape* shapes[] = {new Circle(5), new Rectangle(4, 6), new Square(5)};
//
//     for (Shape* shape : shapes) {
//         shape->draw();
//     }
//
//     // Free memory
//     for (Shape* shape : shapes) {
//         delete shape;
//     }
//
//     return 0;
// }
