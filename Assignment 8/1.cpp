#include <iostream>
#include <string>
using namespace std;

class Combine {
    string str;
public:
    Combine(string s = "") { str = s; }

    Combine operator+(Combine &obj) {
        return Combine(str + obj.str);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    Combine s1("xyz"), s2("pqr"), s3;
    s3 = s1 + s2;
    cout << "Concatenated string: ";
    s3.display();
    return 0;
}
