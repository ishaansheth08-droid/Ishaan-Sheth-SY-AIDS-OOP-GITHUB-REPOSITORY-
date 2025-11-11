#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("First.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    int digits = 0, spaces = 0;

    while (file.get(ch)) {
        if (isdigit(ch))
            digits++;
        else if (isspace(ch))
            spaces++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    file.close();
    return 0;
}
