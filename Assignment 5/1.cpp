#include <iostream>
using namespace std;

class number{
    int num;
public:
    number(){
        cout << "Enter a number: " << endl;
        cin >> num;

        int sum = 0;
        for (int i = 1; i <= num; i++){
            sum = sum + i;
        }

        cout << "The sum of numbers upto " << num << " is : " << sum << endl;
        
    }
};
 
int main(){
    number n;
 
    return 0;
}
