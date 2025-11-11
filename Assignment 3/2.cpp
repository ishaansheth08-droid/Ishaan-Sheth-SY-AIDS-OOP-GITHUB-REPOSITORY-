#include <iostream>
using namespace std;

class book{
private:
    string book_title;
    string author_name;
    int price;
public:
    void accept(){
        cout << "Enter book title:  " <<endl; 
        cin >> book_title;
        cout << "Enter author name: " <<endl;  
        cin >> author_name; 
        cout << "Enter price:" << endl;
        cin >> price;
    }

    void disp(){
        cout << "Book title: " << book_title << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }

};


 
int main(){
    book b1;
    book *ptr = &b1;

    ptr->accept();
    ptr->disp();
    
    return 0;
}
