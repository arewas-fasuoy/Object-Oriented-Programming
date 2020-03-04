#include<iostream>

using namespace std;
int main()
{
	
	int a=9;
	double b=3.0;
	
	int *aPtr=&a;
	double *bPtr=&b;
	void *ptr=NULL; 
	
	aPtr=(int*)bPtr;//pointer typecasting
	ptr=bPtr;
	ptr++;
	//*ptr=3; //dereferencing  a void pointer
	
	
	cout<<"bPtr= "<< bPtr<<endl;
	cout<<"aPtr="<<aPtr<<endl;
	cout<<"Ptr="<<ptr<<endl;
	//cout<<"Ptr="<<*ptr<<endl;
	
	
	system("Pause");
	return 0;
	
	
}
