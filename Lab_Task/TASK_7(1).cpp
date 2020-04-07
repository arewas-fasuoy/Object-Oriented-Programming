#include<iostream>
using namespace std;

class circleType{
public:
	circleType(double r = 0.0);
	void setRadius(double r);
	double getRadius();
	double area();
	double circumference();
	void print();
private:
	double radius;
};
void circleType::setRadius(double r){
	if (r >= 0)
		radius = r;
	else 
		radius = 0;
}
double circleType::getRadius(){
	return radius;
}
double circleType::area(){
	return 3.1416 * radius * radius;
}
double circleType::circumference(){
	return 2 * 3.1416 * radius;
}
circleType::circleType(double r){
		setRadius(r);}
void circleType::print(){
	cout<<"the radius is: "<<getRadius()<<endl;
	cout<<"the circumfrance is: "<<circumference()<<endl;
	cout<<"the area is: "<<area()<<endl;
}
class cylinderType:public circleType{
public:
	cylinderType();
	void setHeight(double h);
	double getHeight();
	void setCentre(double a,double b);
	void setradius(double r);
	double getradius();
	void getCentre();
	double Volume();
	double surfaceArea();
private:
	double height,rad;
	double x,y;
};
cylinderType::cylinderType(height=0.0;x=0.0;y=0.0;){
}
void cylinderType::setHeight(double h){
	height=h;
}
double cylinderType::getHeight(){
	return height;
}
void cylinderType::setCentre(double a,double b){
	x=a;
	y=b;
}
void cylinderType::getCentre(){
	cout<<"The centre of the radius is at point : ("<<x<<","<<y<<")"<<endl;
}
void cylinderType::setradius(double r){
	rad=setRadius(r);
}
double cylinderType::getradius(){
	return rad;
}
double cylinderType::volume(){
	return area()*height;
} 
double cylinderType::surfaceArea(){
	return (circumference()*height)+(2*area());
}
//A=2πrh+2πr2

int main(){
	double r,a,b,h;
	cylinderType circle;
	cout<<"Enter the radius of the base of cylinder"<<endl;
	cin>>r;
	circle.setradius(r);
	cout<<"enter the point of center"<<endl;
	cin>>a>>b;
	circle.setCentre(a,b);
	cout<<"enter the height of cylinder"<<endl;
	cin>>h;
	circle.setHeight(h);
	cout<<"height:"<<circle.getHeight();
	cout<<"center:"<<circle.getCentre();
	cout<<"surface area:"<<circle.surfaceArea();
	return 0;


}
