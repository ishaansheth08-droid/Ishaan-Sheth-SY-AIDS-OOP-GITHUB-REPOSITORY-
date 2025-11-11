#include <iostream>
using namespace std;

class College{
    int roll;
    string name;
    string course;
    public: 
    College(int r = 00, string n = "Unknown", string c = "Computer Engineering"){
        roll = r;
        name = n;
        course = c;
    }

    void display(){
        cout << "Roll Number: " << roll << endl; 
        cout << "Name: " << name << endl; 
        cout << "Course: " << course << endl; 
    }
};
 
int main(){
    College s1(37, "Anushree");
    College s2(18, "Gaurav");

    s1.display();
    s2.display();
 
    return 0;
}
