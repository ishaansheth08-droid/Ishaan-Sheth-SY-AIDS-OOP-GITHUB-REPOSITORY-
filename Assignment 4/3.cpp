#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void get() {
        cout << "Enter number for A: ";
        cin >> x;
    }
    friend void swapValues(A &, B &);
    void show() { cout << "A = " << x << endl; }
};

class B {
    int y;
public:
    void get() {
        cout << "Enter number for B: ";
        cin >> y;
    }
    friend void swapValues(A &, B &);
    void show() { cout << "B = " << y << endl; }
};

void swapValues(A &a1, B &b1) {
    int temp = a1.x;
    a1.x = b1.y;
    b1.y = temp;
}

int main() {
    A a;
    B b;
    a.get();
    b.get();
    cout << "Before swapping:\n";
    a.show();
    b.show();
    swapValues(a, b);
    cout << "After swapping:\n";
    a.show();
    b.show();
    return 0;
}
