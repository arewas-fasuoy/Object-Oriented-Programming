#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	//size of int data type
	int a;
	size_t size=sizeof a;
	cout<<"size of int="<<size<<endl;
	
	//size of char data type
	char b;
	size=sizeof b;
	cout<<"size of char="<<size<<endl;
	
	//size of double data type
	double c;
	size=sizeof(c);
	cout<<"size of double="<<size<<endl;
	
	
	//size of string data type
	string d;
	size=sizeof(d);
	cout<<"size of string="<<size<<endl;
	
	//size of array
	int array[10];
	size=sizeof array;
	cout<<"size of array="<<size<<endl;

	//size of pointer
	int *ptr;
	size=sizeof (ptr);
	cout<<"size of pointer="<<size<<endl;
	
	
	system("Pause");
	return 0;
	
	
}
