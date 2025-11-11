#include <iostream>
using namespace std;

class Library {
public:
    class Book { 
    public:
        string title;
        void setTitle(string t) {
            title = t;
        }
        void show() {
            cout << "Book Title: " << title << endl;
        }
    };
};

int main() {
    Library::Book b1; 
    b1.setTitle("The Alchemist");
    b1.show();
}
