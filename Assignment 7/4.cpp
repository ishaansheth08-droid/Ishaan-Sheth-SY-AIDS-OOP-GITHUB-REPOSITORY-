#include <iostream>
using namespace std;

class Student {
    int count;
public:
    Student(int c = 0) {
        count = c; 
    }

    void operator++() {
        ++count;
    }

    void operator++(int) {
        count++;
    }

    void display() {
        cout << "Student count: " << count << endl;
    }
};

int main() {
    Student s1(50);
    cout << "Before increment:" << endl;
    s1.display();

    ++s1; 
    cout << "After pre-increment:" << endl;
    s1.display();

    s1++; 
    cout << "After post-increment:" << endl;
    s1.display();
    return 0;
}
