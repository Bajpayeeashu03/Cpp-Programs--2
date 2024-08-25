#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string name;
    double mileage;
    double distance;
    double fuel;
public:
void input()
{
   cout <<"Enter The Name :-"<<endl;
   cin>>name;
   cout <<"Enter total Distance Travelled:"<<endl;
   cin>>distance;
    cout <<"Enter Total Fuel Consumed :"<<endl;
   cin>>fuel;
}

void displayDetails() {
        cout << "Name Is : " << name <<endl;
        mileage=distance/fuel;
        cout << "Mileage Is : " << mileage << " km/litre" <<endl;
    }
};

class TwoWheeler : public Vehicle {
private:
    double price;

public:
     void bike()
{ 
    Vehicle :: input();
    Vehicle :: displayDetails();
    cout<<"Enter The price Of Two Wheeler:"<<endl;
    cin>>price;
    cout<<"The Price Of Two Wheeler Is :"<<price<<endl;
    }
};

class FourWheeler : public Vehicle {
private:
    double cost;

public:
     void car()
{ 
   Vehicle :: input(); 
   Vehicle :: displayDetails();
   cout<<"Enter The price Of Four Wheeler:"<<endl;
   cin>>cost;
   cout<<"The Price of Four Wheeler is :"<<cost<<endl;
    
   }
};
int main() 
{
  TwoWheeler obj1;
  FourWheeler obj2;
  int choice;
  cout << "Enter 1 for TwoWheeler or 2 for FourWheeler:-";
    cin >> choice;
    switch (choice)
    {
       case 1 :
       obj1.bike();
       break;
       case 2 :
      obj2.car();
      default :
      cout <<"Invalid Choice"<<endl;
     return 0;
}
}