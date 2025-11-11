#include <iostream>
using namespace std;

class Person {
protected:
    string name; int age;
public:
    void getPerson() {
        cout << "Enter name & age: ";
        cin >> name >> age;
    }
};

class Student : public Person {
    int roll; float per;
public:
    void getStudent() {
        cout << "Enter roll & %: ";
        cin >> roll >> per;
    }
    void showStudent() {
        cout << "\nStudent\nName: " << name << "\nAge: " << age
             << "\nRoll: " << roll << "\n%: " << per << endl;
    }
};

class Staff : public Person {
    int id; string sub;
public:
    void getStaff() {
        cout << "Enter ID & subject: ";
        cin >> id >> sub;
    }
    void showStaff() {
        cout << "\nStaff\nName: " << name << "\nAge: " << age
             << "\nID: " << id << "\nSubject: " << sub << endl;
    }
};

int main() {
    Student s; Staff t;
    s.getPerson(); s.getStudent();
    t.getPerson(); t.getStaff();
    s.showStudent(); t.showStaff();
}
