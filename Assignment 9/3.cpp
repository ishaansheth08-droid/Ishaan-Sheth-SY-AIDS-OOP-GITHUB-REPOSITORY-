#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("First.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int count = 0;

    while (file >> word)
        count++;

    cout << "Total Words: " << count << endl;

    file.close();
    return 0;
}
