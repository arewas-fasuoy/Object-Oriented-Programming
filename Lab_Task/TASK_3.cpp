//TASK 3
#include <iostream> 
#include <string> 
using namespace std; 
class dayType {
	string day[7]; 
	string d; 
	int counter; 
	public: 
		dayType() {
			day[0] = "monday"; 
			day[1] = "tuesday";
			day[2] = "wednesday"; 
			day[3] = "thursday"; 
			day[4] = "friday"; 
			day[5] = "saturday"; 
			day[6] = "sunday"; } 
	public:
		void setDay(string day);
		void print();
		void prevDay();
		void nextDay();
		void addDay(int n);
};

void dayType::setDay(string day) { 
	d = day; 
} 

void dayType::print(){  
	cout << "Printing Day :" << d << endl; 
}

void dayType::prevDay() {
	for (int i = 0; i < 7;i++) 
		if (d == day[i]) 
		counter = i; 
	if (counter >0) 
		cout << "previous day :" << day[counter - 1] << endl; 
	else 
		cout << "previous day :" << day[6] << endl; 
}
void dayType::nextDay(){
	if (counter < 6) 
		cout << "next day :" << day[counter + 1] << endl; 
	else 
		cout << "next day :" << day[0] << endl; 
} 

void dayType::addDay(int n) { 
	int x = n % 7; 
	if ((x + counter) >= 6) { 
		x = (counter + x) % 7; 
		cout << "the day  after " <<n << " days will be :" << day[ x] << endl; 
	} 
	else if (x == 0) 
		cout << "the day  after "<<n<<" days will be :" << day[counter] << endl; 
}

int main() { 
	int num;
	string dayy; 
	dayType day;
	cout << "Enter the day" << endl;
	getline(cin, dayy);
	day.setDay(dayy);  
	cout << "Enter the Number " << endl; 
	cin >> num;
	day.print();
	day.prevDay();
	day.nextDay(); 
	day.addDay(num); 
	return 0; 
}

