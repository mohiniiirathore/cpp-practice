#include <iostream>
using namespace std;

int display_arr(int marks[],int size)
{
    for(int i;i<size-1;i++)
    {
        cout<<marks[i]<<"\t";
    }
    return 0;
}
void smallest_and_largest(int marks[])
{
    int small=marks[0],large=marks[0];
    for(int i=0;i<5;i++)
    {
        if(marks[i]<small)
        {
            small=marks[i];
        }
        if(marks[i]>large)
        {
            large=marks[i];
        }
    }
    cout<<"The smallest element is: "<<small<<endl;
    cout<<"The largest element is: "<<large<<endl;
}
int linear_search(int marks[])
{
    int target;
    cout<<"enter the number to be searched :";
    cin>>target;
    for(int i=0;i<5;i++)
    {
        if(marks[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int rev_arr(int marks[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(marks[start],marks[end]);
    }
    return 0;
}
int main()
{
    int marks[6];
    int size;
    size=sizeof(marks)/sizeof(marks[0]);
    cout<<"enter marks:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    smallest_and_largest(marks);
    cout<<linear_search(marks);
    rev_arr(marks,size);
    display_arr(marks,size);
    return 0;
}