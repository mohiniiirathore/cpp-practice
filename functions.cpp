#include <iostream>
using namespace std;


*int addition()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    int sum=0;
    for (int i=1; i<n+1; i++)
    {
        sum+=i;
    }
    cout<<sum;
}



int factorial()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    int fact=1;
    for (int i=1; i<n+1; i++)
    {
        fact*=i;
    }
    cout<<fact;
}



void digits()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum;
}
int main() 
{
    digits();
}

