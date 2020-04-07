#include <iostream>
#include <string>
using namespace std;
class Wheel{
private:
	string type;
public:
	Wheel();
	void set_wheel_state(string s);
	string get_wheel_state();
	~Wheel();
};
Wheel::Wheel(){
	type="";
}
void Wheel::set_wheel_state(string s){
	type=s;
}
string Wheel::get_wheel_state(){
	return type;
}
Wheel::~Wheel(){};
class Car{
private:
	int i;
	Wheel array[4];
public:
	void set_car_to_moving();
	void set_car_to_stopped();
	void print_car_wheels_state();
};
void Car::set_car_to_moving(){
	string type = "TURNING";
	for ( i = 0; i <=3; i++){
		array[i].set_wheel_state(type);
		}
	}
void Car::set_car_to_stopped(){
	string type = "STOPPED";
	for ( i = 0; i <=3; i++){
		array[i].set_wheel_state(type);
		}
	}
void Car::print_car_wheels_state(){
	cout<<"Car State:"<<endl;
	for (i = 0; i <=3; i++){
		cout << "Wheel "<<i+1<<" is " << array[i].get_wheel_state() << endl;
		}
}
int main(){
 	Car C;
 	int input;
 	cout<<"Press 1 or 2 to set the state"<<endl;
	cout << " 1: Turning"<<endl;
	cout<<" 2: Stopped"<<endl;
	cin >> input;

	if (input == 1){
	 	C.set_car_to_moving();
		C.print_car_wheels_state();
	}
	else if(input=2){
		C.set_car_to_stopped();
		C.print_car_wheels_state();
	}

	return 0;
	}