//task no:1
#include <iostream>
using namespace std;
void getMem(int* arr,int n)
{arr=new int[n];
}
void init(int* arr,int n)
{
cout<<"enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{ cin>>*(arr+i);
}
}
void print (int* arr,int n)
{
for (int i=0;i<n;i++)
cout<<*(arr+i);
}
void freeMem(int*arr)
{
delete[]arr;

}
int main()
{
int n;
int *arr=NULL;
cout<<"enter the size of the array:"<<endl;
cin>>n;
arr=getMem(arr,n);
init(arr,n);
cout<<print(arr,n);
freeMem(arr);
return 0;
}


