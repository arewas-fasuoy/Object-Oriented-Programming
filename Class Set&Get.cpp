#include<iostream>
using namespace std;
class Employee
{
	private:
		int salary;
	public:
		
		Employee(): salary(0)
		{
			
		}
		void SetSalary(int s)
		{
			salary=s;
		}
		
		int GetSalary()
		{
			return salary;
		}
};

int main()
{
	Employee E;
	cout<<"Start="<<E.GetSalary()<<endl;
	E.SetSalary(20000);
	cout<<"Salary = "<< E.GetSalary()<<endl;
	system("pause");
	return 0;
}
