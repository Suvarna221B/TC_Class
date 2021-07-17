#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p=&a;
    cout<<"\na: "<<a;
    cout<<"\n*p: "<<*p;
    *p = 20;
    cout<<"\n1 a: "<<a;
    cout<<"\n1 *p: "<<*p;
    int **ptr;
    ptr = &p;
    cout<<"\n\n**p: "<<**ptr;
    **ptr = 30;
    cout<<"\n\n2 a: "<<a;
    cout<<"\n2 *p: "<<*p;
    cout<<"\n2 **ptr: "<<**ptr<<"\n";
    return 0;
}