#include <iostream>
using namespace std;

class department { protected: string dname; };
class student { protected: string sname; int roll; };

class marks : protected department, protected student {
    int m1, m2;
public:
    void accept() {
        cout << "Enter department, name, marks1, marks2:\n";
        cin >> dname >> sname >> m1 >> m2;
    }
    void calculate() {
        cout << "Department: " << dname
             << "\nName: " << sname
             << "\nPercentage: " << (m1 + m2) / 2 << endl;
    }
};

int main() {
    marks m;
    m.accept();
    m.calculate();
}
