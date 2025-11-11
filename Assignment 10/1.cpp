#include <iostream>
using namespace std;

template <class T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int int_arr[5] = {1 , 2 , 3 , 4 , 5};
    float flo_arr[5] = {1.1 , 2.2 , 3.3 , 4.4 , 5.5};
    double dec_arr[5] = {0.5 , 1.5, 2.5 , 3.5 , 4.5};

    cout << "Sum of Integer array: " << sumArray(int_arr, 5) << endl;
    cout << "Sum of Float array: " << sumArray(flo_arr, 5) << endl;
    cout << "Sum of Double array: " << sumArray(dec_arr, 5) << endl;

    return 0;
}
