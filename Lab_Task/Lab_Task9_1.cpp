#include<iostream> 
using namespace std;
class clockType{
    int hour,min,sec;
public:
    //constructor
    clockType(int h,int m,int s);
    //copy constructor
    clockType(const clockType &obj);
    void printTime();
    //overloading assignment operator
    void operator = (const clockType &obj );
    //overloading comparison  operator
    bool operator ==(const clockType &obj);
    //overloading operator <<
    friend ostream& operator<<(ostream& print, const clockType& obj){
    print<< obj.hour<<" : "<<obj.min<<" : "<<obj.sec;
    return print ;
}
 
};
//constructor
clockType::clockType(int h,int m,int s){
    hour=h;
    min=m;
    sec=s;
}
//copy constructor
clockType::clockType(const clockType &obj){
    cout<<"Hello!I am the Copy Constructor you called! "<<endl;
    this->hour=obj.hour;
    this->min=obj.min;
    this->sec=obj.sec;
}
//overloading assignment operator
void clockType::operator = (const clockType &obj ){
    cout<<"Hello! I am the Assignment Operator Overloading Function! "<<endl;
    hour=obj.hour;
    min=obj.min;
    sec=obj.sec;
}
//overloading comparison  operator
bool clockType::operator ==(const clockType &obj){
    if(hour==obj.hour && min==obj.min && sec==obj.sec)
        return true;
    else
        return false;
}
//print function
 void clockType::printTime(){
     cout<<hour<<" : "<<min<<" : "<<sec<<endl;
 }
int main(){
    clockType clock1(01,30,40),clock2(02,50,45);
    cout<<"Time of clock1: ";
    clock1.printTime();
    cout<<"Time of clock2: ";
    clock2.printTime();
    cout<<endl;
    //call for copy constructor
    clockType clock3=clock2;
    cout<<"Copying value of clock2 to clock3: ";
    clock3.printTime();
    cout<<endl;
    //assigning value of clock2 to clock1
    clock1=clock2;
    cout<<"Time of clock1 after assigning to it the time of clock2: ";
    clock1.printTime();
    cout<<endl;
    //printing of objects
    cout<<"Printing value of object number one(clock1): "<<clock1<<endl;
    cout<<"Printing value of object number two(clock2): "<<clock2<<endl;
    cout<<endl;
    //comparison of objects
    if(clock1==clock2){
        cout<<"The time of clock1 and clock2 is equal."<<endl;
    }
    else{
        cout<<"The time of clock 1 and clock 2 is not equal."<<endl;
    }

    return 0;
    }

