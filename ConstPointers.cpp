#include<iostream>

using namespace std;

int main()
{
	int a=6;
	const int b=4;
	int *Ptr1;
	
	
	// NonConstant Data Non Constant Pointer
	Ptr1=&a;
	*Ptr1=5;
	cout<<a<<endl;
	
	
	//NonConstant Data Constant Pointer
	int *const Ptr2= &a;
	*Ptr2=6;
	//Ptr2=&b;
	cout<<*Ptr2<<endl;
	
	
	// Constant Data NonConstant Pointer
	const int *Ptr3= &b;
	//*Ptr3=6;
	Ptr3=&a;
	
	// Constant Data Constant Pointer
	const int *const Ptr4= &b;
	//*Ptr4=7;
	//Ptr4=&a;
	
	
	
	system("pause");
	return 0;
}
