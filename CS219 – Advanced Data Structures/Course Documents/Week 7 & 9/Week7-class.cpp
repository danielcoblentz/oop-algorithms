////
//// Created by Hood User on 9/26/2024.
////
//#include <iostream>
//#include <iomanip> // For formatting the time
//using namespace std;
//
//class Clock {
//private:
//    int hour;
//    int minute;
//    int second;
//
//public:
//    // Default constructor initializes clock to 00:00:00
//    Clock() : hour(0), minute(0), second(0) {}
//
//    // Parameterized constructor to initialize clock to a specific time
//    Clock(int h, int m, int s) {
//        setTime(h, m, s);
//    }
//
//    // Function to set the time with validation
//    void setTime(int h, int m, int s) {
//        if (h >= 0 && h < 24)
//            hour = h;
//        else
//            hour = 0;
//        if (m >= 0 && m < 60)
//            minute = m;
//        else
//            minute = 0;
//        if (s >= 0 && s < 60)
//            second = s;
//        else
//            second = 0;
//    }
//
//    // Function to print the time in HH:MM:SS format
//    void displayTime() const {
//        cout << setw(2) << setfill('0') << hour << ":"
//             << setw(2) << setfill('0') << minute << ":"
//             << setw(2) << setfill('0') << second << endl;
//    }
//
//    // Function to increment the time by one second
//    void tick() {
//        second++;
//        if (second == 60) {
//            second = 0;
//            minute++;
//            if (minute == 60) {
//                minute = 0;
//                hour++;
//                if (hour == 24) {
//                    hour = 0; // Reset after 24 hours
//                }
//            }
//        }
//    }
//};
//
//int main() {
//    // Create two Clock objects: myClock and yourClock
//    Clock myClock(10, 59, 58);  // Initial time set to 10:59:58
//    Clock yourClock(23, 59, 58); // Initial time set to 23:59:58
//
//    cout << "My Clock: ";
//    myClock.displayTime();
//    cout << "Your Clock: ";
//    yourClock.displayTime();
//
//    // Simulate time ticking for both clocks
//    cout << "\nAfter one tick:\n";
//    myClock.tick();
//    yourClock.tick();
//
//    cout << "My Clock: ";
//    myClock.displayTime();
//    cout << "Your Clock: ";
//    yourClock.displayTime();
//
//    return 0;
//}
