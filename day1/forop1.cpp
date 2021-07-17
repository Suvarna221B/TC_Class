#include<iostream>
using namespace std;
int main() 
{
int i=0,x=0,y=0;

for(i=1;i<10;i*=2)
{
    int y = ++x;
    cout<<y;
}
cout<<x;

return 0;
}
