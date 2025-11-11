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

    string word, target;
    int count = 0;

    cout << "Enter word to count: ";
    cin >> target;

    while (file >> word) {
        if (word == target)
            count++;
    }

    cout << "Occurrence of \"" << target << "\": " << count << endl;

    file.close();
    return 0;
}
