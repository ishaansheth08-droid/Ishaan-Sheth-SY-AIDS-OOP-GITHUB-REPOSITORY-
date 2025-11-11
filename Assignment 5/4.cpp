#include <iostream>
using namespace std;

class Student{
    int roll;
    string name;
    public:
    Student(){
        name = "Unknown";
        roll = 0;
    }

    Student(string n){
        name = n;
        roll = 0;
    }

    Student(string n, int r){
        name = n;
        roll = r;
    }

    void display(){
        cout << "Name: " << name << endl; 
        cout << "Roll Number: " << roll << endl; 
    }
};
 
int main(){
    Student s1;
    Student s2("Anushree");
    Student s3("Gaurav", 18);

    s1.display();
    s2.display();
    s3.display();
 
    return 0;
}
