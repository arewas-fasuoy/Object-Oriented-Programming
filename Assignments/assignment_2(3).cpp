#include<iostream> 
using namespace std;
//BASE CLASS
class base{
protected:
    int real1, img1;
public:
    void input();
};
//FUNCTION OF BASE CLASS
void base::input(){
    cout<<"----COMPLEX NUMBER (BASE CLASS)----- "<<endl;
    cout<<"Enter the real part of complex number: ";
    cin>>real1;
    cout<<"Enter the imaginary part of complex number: ";
    cin>>img1;
    cout<<"Complex number of base class: "<<real1<<" + "<<img1<<" i"<<endl;
}
//DERIVED CLASS
class derived: public base{
private:
    int real2, imag2;
public:
    void input();
    derived add_numbers(derived &obj);
    float get_real();
    float get_img();
    friend class frnd_of_derived;
 };
//FUNCTIONS OF DERIVED CLASS
void derived::input(){
    base::input();
    cout<<endl;
    cout<<"----COMPLEX NUMBER (DERIVED CLASS)-----"<<endl;
    cout<<"Enter the real part of complex number: ";
    cin>>real2;
    cout<<"Enter the imaginary part of complex number: ";
    cin>>imag2;
    cout<<"Complex number of derived class: "<<real2<<" + "<<imag2<<" i"<<endl;
} 
derived derived::add_numbers(derived &obj){
    obj.real2 = this->real2 + real1;
    obj.imag2 = this->imag2 + img1;
    return obj;
}
float derived::get_real(){
    return real2;
}
float derived::get_img(){
    return imag2;
}
//FRIEND CLASS
class frnd_of_derived{
 private:
    int real3, imag3;
 public:
    void input();
    frnd_of_derived subtract(frnd_of_derived &obj1, derived &obj2);
    float get_real();
    float get_img();
};
//FUNCTION OF FRIEND CLASS
void frnd_of_derived::input(){
    cout<<"----COMPLEX NUMBER (FRIEND CLASS)----- "<<endl;
    cout<<"Enter the real part of complex number: ";
    cin>>real3;
    cout<<"Enter the imaginary part of complex number: ";
    cin>>imag3;
    cout<<"Complex number of friend class: "<<real3<<" + "<<imag3<<" i"<<endl;
}
frnd_of_derived frnd_of_derived::subtract(frnd_of_derived &obj1, derived &obj2){   
    obj1.real3 =obj2.real1-this->real3 ;
    obj1.imag3 =obj2.img1-this->imag3 ;
    return obj1;
}
float frnd_of_derived::get_real(){
    return real3;
}
float frnd_of_derived::get_img(){
    return imag3;
}
//MAIN FUNCTION
int main(){
 
    derived obj1;
    frnd_of_derived frnd1;
    obj1.input();
    derived obj2=obj1.add_numbers(obj1);
    cout<<endl;
    frnd1.input();
    frnd_of_derived frnd2 = frnd1.subtract(frnd1,obj1);
    cout<<endl;
    cout<<"COMPLEX NUMBER AFTER ADDITION :  ";
    cout<<obj2.get_real()<<"+"<<obj2.get_img()<<"i"<<endl;
    cout<<"COMPLEX NUMBER AFTER SUBTRACTION :  ";
    cout<<frnd2.get_real()<<"+"<<frnd2.get_img()<<"i"<<endl;
 
    return 0;
 
}