#include <iostream>
#include <string>
using namespace std;

//student class definition
class Student {
private:
    string name;
    int grade;

public:
    //setter for name
    void setName(const string& studentName) {
        name = studentName;
    }

    //setter for grade
    void setGrade(int studentGrade) {
        grade = studentGrade;
    }

    //getter for name
    string getName() const {
        return name;
    }

    //getter for grade
    int getGrade() const {
        return grade;
    }
};



// function to input data for students
void input_student_data(Student students[], int size) {
    string name;
    int grade;

    for (int i = 0; i < size; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.ignore(); // clear the input buffer to avoid left over data
        getline(cin, name); // handles full line input names + spaces
        cout << "Enter grade for " << name << ": ";
        cin >> grade;

        students[i].setName(name);
        students[i].setGrade(grade);
        cout << endl;
    }
}

//function to display student data to user
void display_student_data(const Student students[], int size) {
    cout << "Student Information:\n";
    cout << "---------------------\n";
    for (int i = 0; i < size; ++i) {
        cout << "Student " << i + 1 << ": " << students[i].getName()
             << " | Grade: " << students[i].getGrade() << endl;
    }
    cout << endl;
}

//function to calculate and display the average grade
void calculate_average(const Student students[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += students[i].getGrade();
    }

    double average = static_cast<double>(sum) / size;
    cout << "Average grade of the class: " << average << endl;
}

int main() {
    const int num_students = 5; //number of students
    Student students[num_students]; //array of Student objects

    //input student data
    input_student_data(students, num_students);

    //display student data
    display_student_data(students, num_students);

    //calculate and display the average grade
    calculate_average(students, num_students);

    return 0;
}
