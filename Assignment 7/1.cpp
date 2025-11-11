#include <iostream>
using namespace std;

class Area {
public:
    float calculate(float length, float breadth) {
        return length * breadth;
    }

    float calculate(float side) {
        return side * side;
    }
};

int main() {
    Area a;
    cout << "Area of Laboratory (Rectangular): " << a.calculate(10, 6) << endl;
    cout << "Area of Classroom (Square): " << a.calculate(5) << endl;
    return 0;
}
