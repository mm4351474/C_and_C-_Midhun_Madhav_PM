#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n;
    cout<<"Enter size of array : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
          cout<<"Enter element at position"<<i+1<<":";
          cin>>a[i];
    }
    cout<<"Array ==>";
    for(i=0;i<n;i++)
    {
          cout<<a[i];
    }
    return 0;
}
