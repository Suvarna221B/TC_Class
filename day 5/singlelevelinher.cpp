// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;
 
// base class
class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
    void display()
    {
      cout<<"vehicle 1"<<"\n";
    }
};
 
// sub class derived from a single base classes
class Car: public Vehicle{
  void display()//show with parameters too
  {
    cout<<"car 1"<<"\n";
  }
};
 
// main function
int main()
{  
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    return 0;
}
