#include<iostream>
using namespace std;

void linearSearch(int a[],int n,int x)
{
int temp=-1;
for(int i=0;i<n;i++)
{
if(a[i]==x)
{
cout<<"Element found at position: "<<i+1<<endl;
temp=0;
break;
}
}

if(temp==-1)
{
cout<<"No element found"<<endl;
}
}
int main()
{
int size,arr[100],num;

cout<<"Enter size of array: ";
cin>>size;

cout<<"Enter "<<size<<" elements of array: ";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}

cout<<"Enter an element to search: ";
cin>>num;
linearSearch(arr,size,num);
}