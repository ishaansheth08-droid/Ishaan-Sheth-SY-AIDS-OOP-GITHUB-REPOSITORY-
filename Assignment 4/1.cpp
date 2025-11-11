#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void get() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapValues(Swap s) { 
        int temp = s.a;
        s.a = s.b;
        s.b = temp;
        cout << "After swapping: a = " << s.a << ", b = " << s.b << endl;
    }
};

int main() {
    Swap s1;
    s1.get();
    s1.swapValues(s1);
    return 0;
}
