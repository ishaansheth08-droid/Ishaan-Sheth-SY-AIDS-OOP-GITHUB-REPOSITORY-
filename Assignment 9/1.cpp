#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("First.txt");  
    ofstream outFile("Second.txt"); 

    if (!inFile) {
        cout << "Error opening First.txt!" << endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        outFile.put(ch);
    }

    cout << "File copied successfully!" << endl;

    inFile.close();
    outFile.close();
    return 0;
}
