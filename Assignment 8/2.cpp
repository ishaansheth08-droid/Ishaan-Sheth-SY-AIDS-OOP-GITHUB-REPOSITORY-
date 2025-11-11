#include <iostream>
#include <string>
using namespace std;

class ILogin {
protected:
    string name, password;
public:
    virtual void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};
class EmailLogin : public ILogin {
    string email;
public:
    void accept() override {
        cout << "Enter Email ID: ";
        cin >> email;
        ILogin::accept();
    }

    void display() override {
        cout << "\n--- Email Login Details ---" << endl;
        cout << "Email ID: " << email << endl;
        ILogin::display();
    }
};

class MembershipLogin : public ILogin {
    string memberID;
public:
    void accept() override {
        cout << "Enter Membership ID: ";
        cin >> memberID;
        ILogin::accept();
    }

    void display() override {
        cout << "\n--- Membership Login Details ---" << endl;
        cout << "Membership ID: " << memberID << endl;
        ILogin::display();
    }
};

int main() {
    ILogin *login;

    EmailLogin e;
    MembershipLogin m;

    login = &e;
    login->accept();
    login->display();

    login = &m;
    login->accept();
    login->display();

    return 0;
}
