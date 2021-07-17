#include <iostream>
using namespace std;
  
void func(int a, int b)
{
    a = 10;
    b = 11;
    cout<<"In func, a = "<<a<<"  b = "<<b<<"\n";
}
int main()
{
    int x = 5, y = 7;
    cout<<"Before func, x = "<<x<<"  y = "<<y<<"\n";
    // Passing parameters
    func(x, y);
    cout<<"After func, x = "<<x<<"  y = "<<y<<"\n";
    return 0;
}