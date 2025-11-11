#include <iostream>
using namespace std;

class Result2; 

class Result1 {
    float marks1;
public:
    void getMarks() {
        cout << "Enter marks of student in Result1: ";
        cin >> marks1;
    }
    friend void average(Result1, Result2);
};

class Result2 {
    float marks2;
public:
    void getMarks() {
        cout << "Enter marks of student in Result2: ";
        cin >> marks2;
    }
    friend void average(Result1, Result2);
};

void average(Result1 r1, Result2 r2) {
    float avg = (r1.marks1 + r2.marks2) / 2;
    cout << "Average marks = " << avg << endl;
}

int main() {
    Result1 r1;
    Result2 r2;
    r1.getMarks();
    r2.getMarks();
    average(r1, r2);
    return 0;
}
