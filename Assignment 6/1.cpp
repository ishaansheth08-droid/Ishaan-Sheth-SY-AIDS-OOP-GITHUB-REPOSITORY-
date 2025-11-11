#include <iostream>
using namespace std;

class department{
protected:
    string dname;
};

class student : protected department{
protected: 
    string sname;
    int roll;
};

class marks :protected student{
    int m1, m2, percentage;
public:
    void accept(){
        cout << "Enter department :" << endl;
        cin >> dname;
        cout << "Enter name :" << endl;
        cin >> sname;
        cout << "Enter marks 1 :" << endl;
        cin >> m1;
        cout << "Enter marks 2 :" << endl;
        cin >> m2;
    }
    
    void calculate(){
        int per = (m1+m2)/2;
        cout << "Department: " << dname << endl;
        cout << "Name: " << sname << endl;
        cout << "Percentage: " << per << endl;
    }
    
};

int main(){
    marks m;
    m.accept();
    m.calculate();
    
    return 0;
}
