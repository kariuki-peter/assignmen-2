#include<iostream>
using namespace std;
void display()
{
    string choice;
cout << "Select choice=";
cin >> choice;
cout <<"\n";
{
if(choice=="1")
    class car;
else if(choice=="2")
class suv;
else if(choice=="3")
class truck;
//else(error);
}

};
class vehicle//class vehicle is the base class where other classes will inherit from
{
    public:
  string model,made_in;
  string distance;
  int year,hours;
  int overtime;
  virtual void calculateRentalCost()=0;//virtual function
};
class car:public vehicle
{
public:
      int numDoor;
        string type;
        string exaust;
    void calculateRentalCost()
      {
      cout << "Enter the model of the vehicle=";
      cin >> model;
      cout << "Enter the year vehicle made=";
      cin >> year;
      cout << "Enter country made in=";
      cin >> made_in;
      cout << "Enter the number of doors=";
      cin >> numDoor;
      cout << "Enter hours vehicle is hired=";
      cin >> hours;
      cout << "Enter overtime=";
      cin >> overtime;

        }

};
class suv:public vehicle
{
    public:
         string type;
    void calculateRentalCost()
{
      cout << "Enter the model of the vehicle=";
      cin >> model;
      cout << "Enter the year vehicle made=";
      cin >> year;
      cout << "Enter country made in=";
      cin >> made_in;
      cout << "Enter hours vehicle is hired=";
      cin >> hours;
      cout << "Enter overtime=";
      cin >> overtime;
    }

};
class truck:public vehicle
{
    public:
    string cargoCapacity;
    int numDoor;
    int rentalCost=(hours*2500)+(overtime*800);
    void calculateRentalCost()

    {
    cout << "Enter the model of the vehicle=";
      cin >> model;
      cout << "Enter the year vehicle made=";
      cin >> year;
      cout << "Enter country made in=";
      cin >> made_in;
      cout << "Enter the cargoCapacity=";
      cin >> cargoCapacity;
      cout << "Enter hours vehicle is hired=";
      cin >> hours;
      cout << "Enter overtime=";
      cin >> overtime;
      cout <<"\n Enter vehicle description";
      cout << "Enter the model of the vehicle="<<model<<endl;
      cout << "Enter the year vehicle made="<<year<<endl;
      cout << "Enter country made in="<<made_in<<endl;
      cout << "Enter the number of doors="<<numDoor<<endl;
      cout << "Enter the cargoCapacity="<<cargoCapacity<<endl;
      cout << "Enter hours vehicle is hired="<<hours<<endl;
      cout << "Enter overtime="<<overtime<<endl;
      cout << "The Rental cost is="<<rentalCost<<endl;

    }
};
main()
{
display();
vehicle*vptr;
car c;
vptr = &c;
suv s;
vptr = &s;
truck t;
vptr = &t;
vptr-> calculateRentalCost();//calling the virtual fuction
 }
