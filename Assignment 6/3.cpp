#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    void acceptPer(){
        cout << "Enter name: " <<endl; 
        cin >> name; 
        cout << "Enter age: " <<endl; 
        cin >> age; 
    }

};

class Student : public Person{
    int roll;
    float per;
    public:
    void acceptStud(){
        cout << "Enter roll number: " <<endl; 
        cin >> roll;
        cout << "Enter Percentage: " <<endl; 
        cin >> per;  
    }

    void displayStud(){
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll << endl; 
        cout << "Percentage: " << per <<endl; 
    }
};

class Staff : public Person{
    int emp_id;
    string subject;
    public:
    void acceptStaff(){
        cout << "Enter employee ID: " <<endl; 
        cin >> emp_id;
        cout << "Enter subject: " <<endl; 
        cin >> subject;  
    }
    void displayStaff(){
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << emp_id << endl; 
        cout << "Subject taught: " << subject <<endl; 
    }
};
 
int main(){
    Student s;
    Staff t;

    s.acceptPer();
    s.acceptStud();
    t.acceptPer();
    t.acceptStaff();

    s.displayStud();
    t.displayStaff();
    
    return 0;
}
