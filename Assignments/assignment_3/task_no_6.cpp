#include <iostream>
using namespace std;
class Father{
public:
		Father();
		~Father();
};
Father::Father(){
	cout<<"I am Father, I got a new life"<<endl;
}
Father::~Father(){
	cout<<"I am Father, I am going to die"<<endl;
}
class Mother{
public:
	Mother();
	~Mother();

};
Mother::Mother(){
	cout<<"I am Mother, I got a new life"<<endl;
}
Mother::~Mother(){
	cout<<"I am Mother, I am going to die"<<endl;
}
class Child:public Father,public Mother{
public:
	Child();
	~Child();
};
Child::Child(){
	cout<<"I am Child, I got a new life"<<endl;
}
Child::~Child(){
	cout<<"I am Child, I am going to die"<<endl;
}
int main(){
	
	Child *c= new Child;
	delete c;
	return 0;
}