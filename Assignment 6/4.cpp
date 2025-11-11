#include <iostream>
using namespace std;

class College{
    protected:
    string cname;
};

class Employee : protected College{
    protected:
    string emp_name;
    int id;
};

class Staff : public Employee{
    string name;
    int deptId;
    public:
    void acceptEmp(){
        cout << "Enter college name: " <<endl; 
        cin >> cname; 
        cout << "Enter Employee name: " <<endl; 
        cin >> emp_name; 
        cout << "Enter ID: " <<endl; 
        cin >> id; 
        cout << "Enter staff name: " <<endl; 
        cin >> name; 
        cout << "Enter department id: " <<endl; 
        cin >> deptId; 
    }

    void displayEmp(){
        cout << "College: " << cname << endl; 
        cout << "Employee name : " << emp_name << endl; 
        cout << "ID: " << id << endl; 
        cout << "Staff Name: " << name << endl; 
        cout << "Department ID: " << deptId << endl; 
    }
};

class Student : protected College{
    string stu_name;
    int roll;
    public:
    void acceptStud(){
        cout << "Enter college name: " << endl;
        cin >> cname;
        cout << "Enter name: " <<endl; 
        cin >> stu_name; 
        cout << "Enter roll number: " <<endl; 
        cin >> roll; 
    }

    void displayStud(){
        cout << "College: " << cname << endl;
        cout << "Student name: " << stu_name << endl; 
        cout << "Roll Number: " << roll << endl; 
    }
    
};
 
int main(){
    Staff staff1;
    staff1.acceptEmp();
    staff1.displayEmp();

    Student stud1;
    stud1.acceptStud();
    stud1.displayStud();
 
    return 0;
}
