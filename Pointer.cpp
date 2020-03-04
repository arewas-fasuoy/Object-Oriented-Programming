#include<iostream>

using namespace std;

int main()
{
	
	int y=5;
	int *yPtr=NULL;
	
	cout<<yPtr<<endl;
	
	//cout<<*yPtr;  //dereferencing null pointer
	
   yPtr= &y;
	cout<< yPtr<<endl;
	cout<< *yPtr<<endl;
//	
	*yPtr=9;
	cout<<y<<endl;
//	
	cin>> *yPtr;
	cout<<y <<endl;
	
	system("pause");
	return 0;
}
