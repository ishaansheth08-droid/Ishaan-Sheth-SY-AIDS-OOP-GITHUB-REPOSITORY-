#include <iostream>
using namespace std;

class CollegeStudent {
protected:
    int student_id;
    string ccode;
public:
    void accept() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter College Code: ";
        cin >> ccode;
    }

    void display() {
        cout << "Student ID: " << student_id << endl;
        cout << "College Code: " << ccode << endl;
    }
};

class Test : virtual public CollegeStudent {
protected:
    float percentage;
public:
    void accept() {
        CollegeStudent::accept();
        cout << "Enter Test Percentage: ";
        cin >> percentage;
    }
    void display() {
        CollegeStudent::display(); 
        cout << "Test Percentage: " << percentage << "%" << endl;
    }
};

class Sports : virtual public CollegeStudent {
protected:
    char grade;
public:
    void accept() {
        cout << "Enter Sports Grade: ";
        cin >> grade;
    }
    void display() {
        cout << "Sports Grade: " << grade << endl;
    }
};

class Result : public Test, public Sports {
    float tot_marks;
public:
    void accept() {
        CollegeStudent::accept();
        cout << "Enter Test Percentage: ";
        cin >> percentage;
        cout << "Enter Sports Grade: ";
        cin >> grade;
        cout << "Enter Total Marks: ";
        cin >> tot_marks;
    }

    void display() {
        CollegeStudent::display();
        cout << "Test Percentage: " << percentage << "%" << endl;
        cout << "Sports Grade: " << grade << endl;
        cout << "Total Marks: " << tot_marks << endl;
    }
};

int main() {
    Result r;
    cout << "--- Enter Student Details ---" << endl;
    r.accept();
    cout << "\n--- Student Result ---" << endl;
    r.display();
    return 0;
}
