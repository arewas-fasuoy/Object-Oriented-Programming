//TASK NO 2
//2D Dynamic array

#include <iostream>
using namespace std;
int main()
{	
	//allocating dynamic memory
	int **arr=new int*[3];
	for (int i=0;i<3;i++)
	{
		arr[i] = new int[2];
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
	for(int i=0;i<3;i++)
	{ 
		for (int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	//deleting
	for(int i = 0;i < 3;i++) 
	{
    		delete [] arr[i];
	}
	delete [] arr;
	return 0;
}
