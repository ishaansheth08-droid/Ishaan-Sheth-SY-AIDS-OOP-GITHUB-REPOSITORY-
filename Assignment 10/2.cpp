#include <iostream>
#include <string>
using namespace std;

template <typename T>
T square(T num) {
    return num * num;
}

template <>
string square<string>(string str) {
    return str + str;  
}

int main() {
    int num = 5;
    double dec_num = 2.5;
    string str = "Apple";

    cout << "Square of integer: " << square(num) << endl;
    cout << "Square of double: " << square(dec_num) << endl;
    cout << "Square of string: " << square(str) << endl;

    return 0;
}
