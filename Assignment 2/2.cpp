#include <iostream>
using namespace std;

class city{
    string name;
    int population;
    public:
    void accept(){
        cout << "Enter name of city: " << endl; 
        cin >> name;
        cout << "Enter a number: " <<endl; 
        cin >> population;  
    }

    void highest_population(city c[]){
        int high = 0;
        for (int i = 0; i < 5; i++) {
            if(c[i].population > c[high].population){
                high = i;
            }
        }
        cout << "City with highest population is: " << c[high].name << endl; 
        cout << "Population: " << c[high].population << endl;
    }
};
 
int main(){
    city c[5];
    for (int i = 0; i < 5; i++){
        cout << "Enter details for city " << i << endl; 
        c[i].accept();
    }
    
    c[0].highest_population(c);
    
    return 0;
}
