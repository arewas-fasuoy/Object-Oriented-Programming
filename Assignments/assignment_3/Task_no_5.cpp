#include<iostream>
using namespace std;
class Parent
{
public:
	Parent();
	~Parent();
};
Parent::Parent()
	{
		cout<<"I am Parent, I got a new life"<<endl;
	}
Parent::~Parent()
	{
		cout<<"I am Parent , I am going to die"<<endl;
	}
class Child: public Parent
{
public:
	Child();
	~Child();
};
Child::Child()
	{
		cout<<"I am Child, I got a new life"<<endl;
	}
Child::~Child()
	{
		cout<<"I am Parent , I am going to die"<<endl;
	}

int main()
{
	Child *c= new Child;
	delete c;

	return 0;
}