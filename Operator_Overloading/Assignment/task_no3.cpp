#include<iostream> 
using namespace std; 
class person {
protected:
    string name;
    int age;
public:
    void set_data(){
        string n;
        int a;
        cout<<"Enter the name: ";
        cin>>n;
        cout<<"Enter the age: ";
        cin>>a;
        name=n;
        age=a;
    }
    string get_data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    void change_data(){
        int input,n_age;
        string n_name;
        cout<<"Press 1 to change name"<<endl;
        cout<<"Press 2 to change age"<<endl;
        cin>>input;
        if(input=1){
            cout<<"Enter the new name"<<endl;
            cin>>n_name;
            name=n_name;
        }
        else if(input=2){
            cout<<"Enter new age :";
            cin>>n_age;
            age=n_age;
        }

    }
void print_address(){
    cout<<this<<endl;
}
void del_record(){
    name="";
    age=0;
}
};
class student: public person{
private:
    int marks;
public:
    void set_marks(){
        int m;
        cout<<"Enter the marks of student"<<endl;
        cin>>m;
        marks=m;
    }
};
class employee: public person{
private:
    float salary;
public:
    void set_salary(){
        float s;
        cout<<"Enter the marks of student"<<endl;
        cin>>s;
        salary=s;
    }
 
};
int main(){
    char input;
    person P1,P2;
    student S1,S2;
    employee E1,E2;
    cout<<"Setting Data of Student"<<endl;
    S1.set_data();
    cout<<"Setting Data of Employee"<<endl;
    E1.set_data();
    cout<<"Changing Data of Student"<<endl;
    S1.change_data();
    cout<<"Changing Data of Employee"<<endl;
    E1.change_data();
    cout<<"Do you want to delete record(y/n)"<<endl;
    cin>>input;
    if(input='y'){
         cout<<"Deleting Data of Student"<<endl;
        S1.del_record();
        cout<<"Deleting Data of Employee"<<endl;
        E1.del_record();
    }
    cout<<"---Address of S1---"<<endl;
    S1.print_address();
    cout<<"---Address of S1---"<<endl;
    S2.print_address();
    cout<<"---Address of E1---"<<endl;
    E1.print_address();
    cout<<"---Address of E1---"<<endl;
    E2.print_address();
    cout<<"---Address of P1---"<<endl;
    P2.print_address();
    cout<<"---Address of P2---"<<endl;
    P1.print_address();

 
    return 0;
 
}