#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout << "Initial Vector: " << endl;
    vector<int>::iterator I; 

    for (I = v.begin(); I != v.end(); ++I) {
        cout << *I << " " << endl;
    }

    cout << "Multiply by 10" << endl;
    for (I = v.begin(); I != v.end(); ++I) {
        *I = (*I) * 10;  
    }

    cout << "New Vector: " << endl;
    for (I = v.begin(); I != v.end(); ++I) {
        cout << *I << " " << endl;
    }

    return 0;
}

