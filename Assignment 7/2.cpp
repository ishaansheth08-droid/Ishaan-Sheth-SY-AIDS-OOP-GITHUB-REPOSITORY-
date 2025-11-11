#include <iostream>
using namespace std;

class Sum {
public:
    int total(int a[], int n) {
        int s = 0;
        for(int i=0; i<n; i++)
            s += a[i];
        return s;
    }

    float total(float a[], int n) {
        float s = 0;
        for(int i=0; i<n; i++)
            s += a[i];
        return s;
    }
};

int main() {
    Sum s;
    int marks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    float grades[5] = {6.7, 8.7, 9.7, 7.7, 5.7};

    cout << "Sum of 10 student marks: " << s.total(marks, 10) << endl;
    cout << "Sum of 5 student grade points: " << s.total(grades, 5) << endl;
    return 0;
}
