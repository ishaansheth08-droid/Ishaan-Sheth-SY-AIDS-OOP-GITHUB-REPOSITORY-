#include <iostream>
using namespace std;

class staff{
private:
    string name;
    string post;
public:
    void accept(){
        cout << "Enter name:  " <<endl; 
        cin >> name;
        cout << "Enter post: " <<endl;  
        cin >> post; 
    }

    void disp(staff a[]){
        cout << "Employess at HOD Position: " << endl;
        for (int i = 0; i < 10; i++){
            if(a[i].post == "HOD"){
                cout << "Name: " << a[i].name << endl;
            }
        }
        
    }

};


 
int main(){
    staff a[10];
    for (int i = 0; i < 10; i++){
        cout << "Enter employees details: " << i+1 << endl;
        a[i].accept();
    }

    a[0].disp(a);
    
    return 0;
}
