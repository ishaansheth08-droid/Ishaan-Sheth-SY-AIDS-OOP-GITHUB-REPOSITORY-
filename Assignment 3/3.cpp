#include <iostream>
using namespace std;

class student{
private:
    int roll;
    int percentage;
public:
    void accept(){
        cout << "Enter roll:  " <<endl; 
        cin >> this->roll;
        cout << "Enter percentage: " <<endl;  
        cin >> this->percentage;
    }

    void disp(){
        cout << "Roll: " << this->roll << endl;
        cout << "Percentage: " << this->percentage << endl;
    }

};


 
int main(){
    student s1;
    s1.accept();
    s1.disp();
    
    return 0;
}
