#include<iostream>
using namespace std;
//CLASS Worker
class Worker{
private:
    char workName;
    char *ptr=&workName;
    string ssn;
    int size;
public:
    Worker();
    Worker(string x);
    ~Worker();
    void setWorkerName();
    void set_ssn();
    void getWorkerName();
    string get_ssn();
    virtual void printValues();
};
//DEFAULT CONSTRUCTOR
Worker::Worker(){
    cout<<endl;
    ptr=new char (0);
    size=0;
    ssn="";
}
//PAREMETERISED CONSTRUCTOR
Worker::Worker(string x){
    ssn=x;
    size=ssn.length()+1;
    ptr= new char [size];
}
//DESTRUCTOR
Worker::~Worker() {
    delete [] ptr;
}
//SET NAME FUNCTION
void Worker::setWorkerName(){
    if(workName!=0){
        cout<<"-----INPUTS-----"<<endl<<endl;
        cout<<"Enter Worker's Name: ";
        cin.getline(ptr,20);

    }
}
//SET SSN FUNCTION
void Worker::set_ssn(){
    cout<<"Enter Social Security Number: ";
    cin>>ssn;
    if (ssn.length() > 3 && ssn.length()  <= 5)
        ssn = ssn.insert(3, "-");
    else if (ssn.length() > 5)
        ssn = ssn.insert(5, "-").insert(3, "-");
}
//GET NAME FUNCTION 
void Worker::getWorkerName(){
           
    cout<<ptr;
         
}
//GET SSN FUNCTION
string Worker::get_ssn(){
        
    return ssn;
}
//PRINT VALUE VIRTUAL FUNCTION
void Worker::printValues(){
    cout<<endl<<"-----OUTPUTS-----"<<endl;
    cout<<endl<<"In base class Worker workerName is : ";
    getWorkerName();
    cout<<endl<<endl;
    cout<<"In base class Worker SSN is : "<<get_ssn()<<endl<<endl;
    cout<<"Worker Name: ";
    getWorkerName();
    cout<<"Social Security Number: "<<get_ssn()<<endl;
}
//CLASS PayWorker
class PayWorker: public Worker{
private:
    int dependents;
    double payRate;
public:
    PayWorker(string x);
    void  setPayRate();
    void setDependents();
    double getPayRate();
    int getDependents();
    void printValues();
};
PayWorker::PayWorker(string x): Worker(x){}
//SET PAY RATE FUNCTION
void PayWorker::setPayRate(){
    cout<<"Enter worker's Pay Rate : ";
    cin>>payRate;
}
//SET DEPENDENTS FUNCTION
void PayWorker::setDependents(){
    cout<<"Enter worker's dependents : ";
    cin>>dependents;
}
//GET PAY RATE FUNCTION
double PayWorker::getPayRate(){
        
    return payRate;
}
//GET DEPENDENT FUNCTION
int PayWorker::getDependents(){
        
    return dependents;
}
//PRINT FUNCTION
void PayWorker::printValues(){

    cout<<"In derived class PayWorker payRate is : "<<getPayRate()<<endl<<endl;
    cout<<"In derived class PayWorker dependents is : "<<getDependents()<<endl<<endl;
    cout<<"Worker Name: ";
    getWorkerName();
    cout<<endl<<endl<<"Social Security Number: "<<get_ssn()<<endl;
    cout<<endl<<"Pay Rate: $"<<getPayRate()<<endl;
    cout<<endl<<"Number of Dependents: "<<getDependents()<<endl<<endl;
}
//MAIN FUNCTION FOR THE PROGRAMM
int main()
{   
    Worker *W;
    Worker W2;
    string ssn="123456789";
    //call for overloaded constructor
    PayWorker obj(ssn);
    //setting values
    obj.setWorkerName();
    obj.set_ssn();
    obj.setPayRate();
    obj.setDependents();
    //store the adress of W2
    W=&W2;
    //call for base printValue
    W->printValues();
    // store the address of payWorker
    W=&obj;
    //call for derived printValue
    W->printValues();
    return 0;
}

