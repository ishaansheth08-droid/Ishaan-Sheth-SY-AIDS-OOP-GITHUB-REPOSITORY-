#include <iostream>
using namespace std;

class Book {
    int id;
    string name;
    float price;
public:
    void getData() {
        cout << "\nEnter book ID: ";
        cin >> id;
        cout << "Enter book name: ";
        cin >> name;
        cout << "Enter book price: ";
        cin >> price;
    }

    float getPrice() { return price; }

    void display() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main() {
    Book b1, b2;

    cout << "Enter details for Book 1:" << endl;
    b1.getData();
    cout << "Enter details for Book 2:" << endl;
    b2.getData();

    if (b1.getPrice() > b2.getPrice())
        b1.display();
    else
        b2.display();

    return 0;
}
