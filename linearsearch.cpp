#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"enter the number of elements"<<"\n";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,j=0;
    cout<<"enter the element you want to search";
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<"element found at index:"<<i<<"\n";
            j=1;
            break;
        }
    }
    if(j==0)
    {
        cout<<"element not found";
    }
return 0;
}