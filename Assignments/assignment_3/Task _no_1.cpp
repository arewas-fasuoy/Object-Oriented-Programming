#include<iostream>
#include<string>
using namespace std;

class employee
{
public:
	int empl_numbr;
	string name;
	int phone_nmbrs[4];
	int age;
	float emp_compensation;
	employee(): empl_numbr(0), empl_compensation(0.00), age(0), name("____") ;
	employee(int x); 
	~employee();
	void setempl_num();
	int getempl_num();
	void printempl_num();
	void setname();
	string getname();
	void printname();
	void setpnmbrs();
	int getpnmbrs();
	void printpnmbrs();
	void setage();
	int getage();
	void printage();
	void setempl_compen();
    float getempl_compen();
	void printempl_compen();
	
};
employee::employee(): empl_numbr(0), empl_compensation(0.00), age(0), name("____") 
	{
		for(int i=0;i<4;i++)
		{
			phone_nmbrs[i]=0;
		}
	}
employee::employee(int x)  
	{
		age=x;
	}
employee::~employee()
	{
		cout<<"I am the destructor"<<endl;
	}
void employee::setempl_num()
	{
		int a;
		cout<<"enter employee number :";
		cin>>a;
		empl_numbr=a;
	}
		int getempl_num()
	{
		cout<<"employee number : ";
		return empl_numbr;
	}
void employee::printempl_num()
	{
		cout<<"employee number : ";
		cout<<empl_numbr;
	}
void employee:: setname()
	{
		string a;
		cout<<"enter employee's name :";
		cin>>a;
		name=a;
	}
string employee::getname()
	{
		cout<<"employee name :";
		return name;
	}
void employee::printname()
	{
		cout<<"employee name :";
		cout<<name;
	}
void employee::setpnmbrs()
	{
		int a[4];
		for(int i =0;i<4;i++)
		{
			cout<<"Enter "<<i+1<<" phone number : "<<endl;
			cin>>a[i];
			phone_nmbrs[i]=a[i];
		}
	}
int employee::getpnmbrs()
	{
		for(int i =0;i<4;i++)
		{
			cout<<i+1<<" phone number : ";
			return phone_nmbrs[i];
			cout<<endl;
		}
	}
void employee::printpnmbrs()
	{
		for(int i =0;i<4;i++)
		{
			cout<<i+1<<" phone number : ";
			cout<<phone_nmbrs[i];
			cout<<endl;
		}
	}
void employee::setage()
	{
		int x;
		cout<<"Please Enter employee's Age :";
		cin>>x;
		age=x;
	}
int employee::getage()
	{
		cout<<"Age : ";
		return age;
	}
void employee::printage()
	{
		cout<<"Age : ";
		cout<<age;
	}
void employee::setempl_compen()
	{
		float x;
		cout<<"Enter the employee’s Compensation in DOLLARS :";
		cin>>x;
		empl_compensation=x;
	}
 float employee:: getempl_compen()
	{
		cout<<"Compensation :$";
		return empl_compensation;
	}
void employee::printempl_compen()
	{
		cout<<"Compensation: $";
		cout<<empl_compensation;
	}

int main()
{
	employee *ptr=new employee [3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the data for "<<i+1<<" employee"<<endl;
		ptr[i].setempl_num();
		cout<<endl;
		ptr[i].setname();
		cout<<endl;
		ptr[i].setpnmbrs();
		cout<<endl;
		ptr[i].setage();
		cout<<endl;
		ptr[i].setempl_compen();
		cout<<endl;
	}
	cout<<"GET FUNCTIONS"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		cout<<"Data for "<<i+1<<" employee"<<endl;
		cout<<ptr[i].getempl_num();
		cout<<endl;
		cout<<ptr[i].getname();
		cout<<endl;
		cout<<ptr[i].getpnmbrs();
		cout<<endl;
		cout<<ptr[i].getage();
		cout<<endl;
		cout<<ptr[i].getempl_compen();
		cout<<endl;
	}
	cout<<"PRINT FUNCTIONS-"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		cout<<"Data for "<<i+1<<" employee"<<endl;
		ptr[i].printempl_num();
		cout<<endl;
		ptr[i].printname();
		cout<<endl;
		ptr[i].printpnmbrs();
		cout<<endl;
		ptr[i].printage();
		cout<<endl;
		ptr[i].printempl_compen();
		cout<<endl;
	}
	int i=0, x=0;
	char c='y';
	while(c!='n')
	{
	cout<<"Enter the employee numbr to update data ";
	cin>>i;
	i--;
	cout<<"press 1,2,3,4,5 to update employee number, employee's name,employee phone numbers, employee's age,  employee’s compensation respectively"<<endl;
	cin>>x;
	if(x=1)
	{
		ptr[i].setempl_num();
	}
	else if(x=2)
	{
		ptr[i].setname();
	}
	else if(x=3)
	{
		ptr[i].setpnmbrs();
	}
	else if(x=4)
	{
		ptr[i].setage();
	}
	else if(x=5)
	{
		ptr[i].setempl_compen();
	}
	cout<<"do u want to update something else? (y/n)";
	cin>>c;
	}
	system("pause");
	return 0;
}