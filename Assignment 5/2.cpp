#include <iostream>
using namespace std;

class Student {
    string name;
    float per;
    public:
    Student(string n , float p){
        name = n;
        per = p;
    }

    void display(){
        cout << "Name: " << name << endl; 
        cout << "Percentage: " << per << endl; 
    }
};
 
int main(){
    Student s("Anushree", 93.2);
    s.display();
 
    return 0;
}
