#include<iostream>
using namespace std;
int main()
{
    string a[3]={"hello","hi"};
    cout<<a[0]<<" "<<a[2]<<"\n";
    int b[5]={1,2,3};
    cout<<b[0]<<" "<<b[3];
    a[2]="hey";
    cout<<"\n"<<a[2];
}