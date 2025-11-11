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
    int marks[10] = {45, 56, 67, 78, 89, 90, 76, 88, 92, 85};
    float grades[5] = {9.2, 8.7, 9.5, 8.9, 9.0};

    cout << "Sum of 10 student marks: " << s.total(marks, 10) << endl;
    cout << "Sum of 5 student grade points: " << s.total(grades, 5) << endl;
    return 0;
}
