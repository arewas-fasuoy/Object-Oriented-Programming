//TASK NO:3
#include <iostream>
using namespace std;
int main()
{	
	//allocating dynamic memory
	char **arr=new char*[100];
	for (int i=0;i<100;i++)
	{
		arr[i] = new char[100];
	}
	//taking input elements of array
	for (int i=0;i<3;i++)
	{	cout<<"Enter elements of row "<<i+1<<endl;
		for (int j=0; j<2;j++)
		{	
			cin>>arr[i][j];
		}
	}
	//printing the array
	cout<<"The Matrix is:"<<endl;
	for(int i=0;i<2;i++)
	{       	cout<<"Name"<<endl;
		for (int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	//deleting 
	for(int i = 0; i < 2; i++) 
	{
    		delete [] arr[i];
	}
	delete [] arr;
	return 0;
}
