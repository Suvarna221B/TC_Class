#include <iostream>
using namespace std;
  
void swapnum(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
  
int main()
{
    int a = 10, b = 20;
  
    cout<<"before swap a is " <<a<<" and b is "<<b<<"\n";
    // passing parameters
    swapnum(&a, &b);
  
    cout<<"after swap a is " <<a<<" and b is "<<b<<"\n";
    return 0;
}