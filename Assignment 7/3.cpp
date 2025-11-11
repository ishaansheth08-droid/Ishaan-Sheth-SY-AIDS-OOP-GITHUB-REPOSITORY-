#include <iostream>
using namespace std;

class Teacher {
    int experience;
public:
    Teacher(int e) {
        experience = e; 
    }

    void display() {
        cout << "Experience: " << experience << " years" << endl;
    }

    void operator-() {
        experience = -experience;
    }
};

int main() {
    Teacher t1(10);
    t1.display();
    -t1; 
    cout << "After negation: ";
    t1.display();
    return 0;
}
