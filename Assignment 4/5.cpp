#include <iostream>
using namespace std;

class B; 

class A {
    int x;
public:
    void get() {
        cout << "Enter number from Class A: ";
        cin >> x;
    }
    friend void greatest(A, B);
};

class B {
    int y;
public:
    void get() {
        cout << "Enter number from Class B: ";
        cin >> y;
    }
    friend void greatest(A, B);
};

void greatest(A a1, B b1) {
    if(a1.x > b1.y)
        cout << "Greatest number is from Class A: " << a1.x << endl;
    else
        cout << "Greatest number is from Class B: " << b1.y << endl;
}

int main() {
    A a;
    B b;
    a.get();
    b.get();
    greatest(a, b);
    return 0;
}
