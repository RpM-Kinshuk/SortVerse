#include<iostream>
using namespace std;

int main()
{
    long long i=0,n;
    //cout<<"Enter the size of array: "; 
    cin>>n;
    long long a[n];
    //cout<<"Enter the elements of array:\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(long long j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                long long temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}