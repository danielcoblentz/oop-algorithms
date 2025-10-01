//#include <iostream>
//#include <iomanip>  // Include iomanip for setw, setprecision, etc.
//
//using namespace std;
//
//int main() {
//    // Product names and prices
//    string product1 = "Apple";
//    string product2 = "Banana";
//    string product3 = "Cherry";
//
//    float price1 = 85;
//    double price2 = 0.99;
//    double price3 = 2.50;
//
//    // Display the header
//    cout << setw(10) << "Product" << setw(10) << "Price" << endl;
//    cout << "--------------------" << endl;
//    // Alternative --> Display the header
//    cout << setfill('-') << setw(21) << "" << endl;
//    cout << "Text in between the dashes" << endl;
//    cout << setfill('*') << setw(21) << "" << endl;
//    // Display product names and prices with formatting
//    cout << setw(10) << product1 << setw(10) << fixed << setprecision(2) <<showpoint<< price1 << endl;
//    cout << setw(10) << product2 << setw(10) << fixed << setprecision(2) << price2 << endl;
//    cout << setw(10) << product3 << setw(10) << fixed << setprecision(2) << price3 << endl;
//
//    // Reset formatting
//    cout.unsetf(ios::fixed);
//
//    // Display a message without special formatting
//    cout << "\nFormatting reset. Displaying this message without special formatting." << endl;
//
//    return 0;
//}
