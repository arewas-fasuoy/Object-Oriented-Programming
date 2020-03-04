#include<iostream>

#include<string.h>

using namespace std;
int main()
{

	// variable declaration
	int a=5;
	int &b=a;
	int *c= &a;
	
	string food="Pizza";
	string &meal= food;
	string *ptr= &food;
	// accessing values by reference and using pointers
	cout<<"values:"<<endl;
	cout<< "a= "<< a<<endl;
	cout<< "Food= "<<food<<endl;
	
	// Updating values using refernces
	meal="Pizza is yummy";
	
	cout<< "Food= "<<food<<endl;
	cout<< "Meal= "<<meal<<endl;
	
	//Accessing Addresse using operators
	cout<<"Addresses:"<<"\n";
	cout<< "a= "<< &a<<"\n";
	cout<< "Food= "<<&food<<"\n";
	
	
	// References  
	cout<<"b= "<< b<<endl;
	cout<<"b Address= "<< &b<<"\n";
	
	cout<< "Meal= "<<meal<<endl;
	cout<< "Meal Address= "<<&meal<<"\n";
	
	//Pointers
	cout<<"c= "<< c<<"\n";
	cout<< "ptr= "<<ptr<<"\n";
	
	cout<<"c Address= "<< *c<<endl;
	cout<< "ptr Address= "<<*ptr<<endl;
	
	system("Pause");
	return 0;
	
	
}
