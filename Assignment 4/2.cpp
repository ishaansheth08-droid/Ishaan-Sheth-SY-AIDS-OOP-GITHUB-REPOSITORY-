#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void get() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
    friend void swapValues(Swap &s);
};

void swapValues(Swap &s) {
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main() {
    Swap s;
    s.get();
    cout << "Before swapping: ";
    s.display();
    swapValues(s);
    cout << "After swapping: ";
    s.display();
    return 0;
}
