//TASK 2
#include <iostream>
#include <string>
using namespace std;
class romanType{
	public:
	void setValue(string roman);
	string getValue(void);
	int convert(void);
	void printNumeral(void);
	private:
	string roman;
};

void romanType::setValue(string rom){
	roman=rom;
}

string romanType::getValue(void){
	return roman;
}
int romanType::convert(void){
	int value=0;
	for (int i=0;i<=6;i++){
		if (roman[i]=='M')
			value+=1000;
		else if (roman[i]=='D')
			value+=500;
		else if (roman[i]=='C')
			value+=100;
		else if (roman[i]=='L')
			value+=50;
		else if (roman[i]=='X')
			value+=10;
		else if (roman[i]=='V')
			value+=5;
		else if (roman[i]=='I')
			value+=1;
	
	}
	return value;
}

void romanType::printNumeral(void){
	int input;
	cout<<"Press 1 to view roman value and 2 to view corresponding integer value?"<<endl;
	cin>>input;
	if (input==1)
		cout<<"Integer value of roman numeral is:"<<convert()<<endl;
	else if(input==2)
		cout<<"Roman numeral is:"<<roman<<endl;

}

int main(){
	romanType r;
	string roman;
	cout<<"Enter the value of roman numeral:"<<endl;
	cin>>roman;
	r.setValue(roman);
	r.convert();
	r.printNumeral();
	return 0;


}
