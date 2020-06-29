#include <iostream>
using namespace std;
class Person{
public:
	virtual void introduce(){
		cout<<"Hello from Person"<<endl;
	}
};
class Student: public Person{
public:
	void introduce(){
		cout<<"Hello from Student"<<endl;
	}
};
class Farmer: public Person{
public:
	void introduce(){
		cout<<"Hello from Farmer"<<endl;
	}
};
void whosThis (Person &p){
	p.introduce();
}
int main(){
	Farmer F;
	Student S;
	cout<<endl;
	whosThis(S);
	cout<<endl;
	whosThis(F);
	cout<<endl;
	return 0;
}