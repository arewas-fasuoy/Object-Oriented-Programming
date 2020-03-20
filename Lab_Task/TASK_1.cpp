//TASK 1
#include <iostream>
using namespace std;
class counterType{
	public:
		counterType(){
		counter=0;
		}
		void setValue(int counter);
		int getValue(void);
		int increment(void);
		int decrement(int counter);
	
	private:
		int counter;
	
};

void counterType::setValue(int count){
	counter=count;
}
int counterType::getValue(void){
	return counter;
}
int counterType::increment(void){
	counter+=1;
	return counter;

}
int counterType::decrement(int counter){
	if (counter>=0){	
		counter-=1;
		return counter;
	}
	else
		cout<<"counter is negative"<<endl;
}

int main(){
	counterType c;
	int a;
	cout<<"Enter the value of counter"<<endl;
	cin>>a;
	c.setValue(a);
	c.getValue();
	cout<<"value of counter after increment"<<c.increment()<<endl;
	cout<<"value of counter after decrement"<<c.decrement(a)<<endl;
	return 0;


}

