#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class Employee {
private:
    int id;
    string name;
    int age;
    double salary;
public:
    Employee()
    {
        srand(time(0));
        id=rand();
    }
    void Details() {
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee age: ";
        cin>>age;
        salary = 0;
    }

    void display() {
        cout <<"Id Is : "<< id << endl;
        cout << "Name Is: " << name << endl;
        cout << "Age Is: " << age << endl;
        cout << "Incremented Salary Is : " << salary << endl;
    }
    friend class Boss;
};
class Boss {
public:
    void setsalary(Employee &e) {
        double salary;
        cout << "Enter salary: ";
        cin >> salary;
        e.salary=salary;
    }
    void increasesalary(Employee &e)
    {
        int increment;
        cout << "Enter increment: ";
        cin>>increment;
        e.salary+=increment;
    }
};`

int main() 
{
    Employee e;
    Boss d;    
    int c;
    do {
        cout << " 1. Enter Data, O. Exit "<<endl;
        cout << "Enter choice" <<endl;
        cin >>c;
        Switch(c)
        {
            Case 1:
                e. details ();
                d. setsalary (e).
                d. increasesalary (e);
                e display();
                break
            default:
                cout <<"Invalid "<<endl;
        }
    }while(c!=0);
    return 0;
}