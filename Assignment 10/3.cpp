# include <iostream>
# include <math.h>
using namespace std;

template <class T1 , class T2 > class Calc{
    public:
    T1 x;
    T2 y;

    Calc(T1 n , T2 m){
        x = n;
        y = m;
    }

    void sum(){
        cout << "Sum : " << x+y << endl;
    }
    void diff(){
        cout << "Difference : " << x-y << endl;
    }
    void pro(){
        cout << "Product : " << x*y << endl;
    }
    void quo(){
        cout << "Quotient : " << x/y << endl;
    }
    void rem(){
        cout << "Remainder : " << x%y << endl;
    }
    void power(){
        cout << "X raised to Y is : " << pow(x,y) << endl;
    }
    void min_num(){
        cout << "Min of numbers : " << fmin(x, y) << endl;
    }
    void max_num(){
        cout << "Max of numbers : " << fmax(x, y) << endl;
    }
    void sin_x(){
        cout << "Sin of X : " << sin(x) << endl;
    }
    void cos_y(){
        cout << "Cos of Y : " << cos(y) << endl;
    }
};

int main(){
    Calc <int,int> n(100,200);

    n.sum();
    n.diff();
    n.pro();
    n.quo();
    n.rem();
    n.power();
    n.min_num();
    n.max_num();
    n.sin_x();
    n.cos_y();
}
