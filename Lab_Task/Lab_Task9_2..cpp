#include<iostream> 
using namespace std;
class Number{
    int num;
public:
    //constructor
    Number();
    void getNumber();
    void printNumber();
    //overloading comparison  operators
    bool operator !=(const Number &obj);
    bool operator ==(const Number &obj);
    bool operator >(const Number &obj);
    bool operator <(const Number &obj);
    //overloading assignment operator
    void operator = (const Number &obj );
 
};
//constructor
Number::Number(){
   num=0;
}
//getting input function
void Number::getNumber(){
    int n;
    cout<<"Enter an integer in the range of 1 to 100:  ";
    cin>>n;
    if (n>=0 && n<=100){
        num=n;
    }
    else{
        cout<<"Enter an integer that is in the range of 1 to 100:  ";
        cin>>n;
        num=n;
    }
}
//overloading assignment operator
void Number::operator = (const Number &obj ){
    cout<<"Hello! I am the Assignment Operator Overloading Function! "<<endl;
   num=obj.num;
}
//overloading comparison  operator
bool Number::operator ==(const Number &obj){
    if(num==obj.num)
        return true;
    else
        return false;
}
bool Number::operator !=(const Number &obj){
    if(num!=obj.num)
        return true;
    else
        return false;
}
bool Number::operator >(const Number &obj){
    if(num>obj.num)
        return true;
    else
        return false;
}
bool Number::operator <(const Number &obj){
    if(num<obj.num)
        return true;
    else
        return false;
}
//print function
 void Number::printNumber(){
     cout<<num<<endl;
 }
int main(){
    Number obj1,obj2;
    //getting numbers from user
    obj1.getNumber();
    obj2.getNumber();
    cout<<endl;
    //printing numbers
    cout<<"The Number of object 1 is: ";
    obj1.printNumber();
    cout<<"The Number of object 2 is: ";
    obj2.printNumber();
    cout<<endl;
    //comparison of obj1 and obj2
    if(obj1==obj2){
       cout<<"The number of of object 1 and object 2 are equal."<<endl<<endl;
    }
    else if(obj1!=obj2){
        cout<<"The number of of object 1 and object 2 are not equal."<<endl<<endl;
        if(obj1>obj2){
            cout<<"The number  of object 1 is greater than number of object 2."<<endl<<endl;
        }
    
        else if(obj1<obj2){
            cout<<"The number of of object 1 is smaller than number of object 2."<<endl<<endl;
        }
    }

    //assigning value of Num1 to Num2
    obj1=obj2;
    cout<<endl;
    cout<<"Value of object 1 after assigning to it value of object 2 is: ";
    obj1.printNumber();
    return 0;
    }