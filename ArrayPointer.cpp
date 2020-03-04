#include<iostream>

using namespace std;

int sum(const int array[], int size)
{
	int result= array[0]+array[1]+array[2];
	return result;
}


int sumPtr(const int *array, int size)
{
	int result;
	result= *array+*(array+1)+*(array+2);
	return result;
}

int main()
{
	const int array[3]={1,2,3};
	
	cout<<"Sum= "<< sum(array, 3)<<endl;
	cout<<"SumPtr= "<< sumPtr(array, 3)<<endl;
	
	return 0;
}
