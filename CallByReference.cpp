#include<iostream>

using namespace std;

int cubeByValue(int number)
{
	number=number*number*number;
	return number;
} 


void cubeByReference (int *nPtr)
{
	*nPtr=*nPtr * *nPtr * *nPtr;	
}

int main()
{
	int number=5;
	
	cout<<"Call By Value="<< cubeByValue(number) <<endl;
	
	//cout<<"Call By Reference= "<<cubeByReference(&number)<<endl;
	cout<<"number= "<<number<<endl;
	cubeByReference(&number);
	cout<<"Call By Reference= "<<number<<endl;
	
	
	
	return 0;
}
