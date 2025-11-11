#include <iostream>
using namespace std;

class account{
private:
    int acc_no;
    int balance;
public:
    void accept(){
        cout << "Enter acc number:  " <<endl; 
        cin >> acc_no;
        cout << "Enter balance: " <<endl;  
        cin >> balance; 
    }

    void add_int(account a[]){
        cout << "New balance after 10% interest" << endl;
        for (int i = 0; i < 10; i++){
            if(a[i].balance >= 5000){
                a[i].balance = a[i].balance + (a[i].balance *0.10);
                cout << "Acc. Num. = " << a[i].acc_no << endl;
                cout << "Balance = " << a[i].balance << endl;
            }
        }
        
    }

};


 
int main(){
    account a[10];
    for (int i = 0; i < 10; i++){
        cout << "Enter details for acc : " << i+1 << endl;
        a[i].accept();
    }

    a[0].add_int(a);
    
    return 0;
}
