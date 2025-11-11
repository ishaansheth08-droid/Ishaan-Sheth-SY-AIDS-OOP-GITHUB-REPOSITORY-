#include <iostream>
using namespace std;

class Time {
    int H, M, S;
public:
    void getData() {
        cout << "Enter hours: ";
        cin >> H;
        cout << "Enter minutes: ";
        cin >> M;
        cout << "Enter seconds: ";
        cin >> S;
    }

    void displayTotalSeconds() {
        int total = H * 3600 + M * 60 + S;
        cout << "\nTotal time in seconds = " << total << endl;
    }
};

int main() {
    Time t;
    t.getData();
    t.displayTotalSeconds();
    return 0;
}
