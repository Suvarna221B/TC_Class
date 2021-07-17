#include <bits/stdc++.h>
using namespace std;
class Car
{
    // Access specifier
    public:
 
    // Data Members
    string nameofcar;
 
    // Member Functions()
    void printname()
    {
       cout << "name of the car is: " << nameofcar;
    }
};
 
int main() {
 
    // Declare an object of class geeks
    Car obj1;
 
    // accessing data member
    obj1.nameofcar = "BMW";
 
    // accessing member function
    obj1.printname();
    return 0;
}