#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class PhoneNumber
{
	private:
		string areaCode;
		string Exchange;
		string line;
		
	public:
		friend ostream &operator<<(ostream &, const PhoneNumber &);
		friend istream &operator>>(istream &, PhoneNumber &);
};


ostream & operator<<(ostream &output, const PhoneNumber &number)
{
	output<<"(" <<number.areaCode <<")" <<number.Exchange <<"-" <<number.line;
	return output;
}

istream &operator>>(istream &input, PhoneNumber &number)
{
	input.ignore();
	input>>setw(3)>> number.areaCode;
	input.ignore(2);
	input>>setw(3)>> number.Exchange;
	input.ignore();
	input>>setw(4)>> number.line;
	return input;
}

int main()
{
	PhoneNumber phone;
	cout<<"Enter phone number in format (123) 456-7890:"<<endl;
	cin>>phone;
	cout<<"The phone number entered was:";
	cout<<phone<<endl;
	
	system("pause");
	return 0;
}
