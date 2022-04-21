#include<iostream>
using namespace std;

int main()
{
int size,arr[100],num;
int temp=-1;

cout<<"Enter size of array: ";
cin>>size;

cout<<"Enter "<<size<<" elements of array: ";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}

cout<<"Enter an element to search: ";
cin>>num;

for(int i=0;i<size;i++)
{
if(arr[i]==num)
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