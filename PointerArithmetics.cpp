#include<iostream>

using namespace std;
int main()
{
	
	int array[10]={1,2,3,4,5,6,7,8,9,0};
	
	int *ptr1= array;
	int *ptr2= &array[5];
	cout<<"Ptr1= "<<*ptr1<<endl;
	cout<<"Ptr2= "<<*ptr2<<endl;
	
	//Using pointer arithmetics
	ptr1+=2;
	ptr2--;
	cout<<"After ptr arithmetic"<<endl;
	cout<<"Ptr1= "<<*ptr1<<endl;
	cout<<"Ptr2= "<<*ptr2<<endl;
	
	//subtracting pointers
	cout<<"Subtracting ptr1 from ptr2=" <<ptr2-ptr1<<endl; 
	
	
	system("Pause");
	return 0;
	
	
}
