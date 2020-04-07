#include <iostream>
using namespace std;
//CLASS DEFINATION
class cylinderType{
public:
	cylinderType();
	void setRadius(double r);
	double getRadius();
	void setHeight(double h);
	double getHeight();
	void setCost(int paintCost,int shippingCost,int noOfContainers);
	double getPaintCost();
	double getShipCost();

private:
	double radius,height;
	int cost,costShip;
};
//CLASS CONSTRUCTOR
cylinderType::cylinderType(){
	radius=0.0;
	height=0.0;
	cost=0.0;
	costShip=0.0;
}
//MEMBER FUNCTIONS
void cylinderType::setRadius(double r){
	if (r >= 0)
		radius = r;
	else 
		radius = 0;
}
double cylinderType::getRadius(){
	radius=radius*28.32;
	return radius;
}
void cylinderType::setHeight(double h){
	height=h;
}
double cylinderType::getHeight(){
	height=height*28.32;
	return height;
}
void cylinderType::setCost(int paintCost,int shippingCost,int noOfContainers){
	cost==paintCost*noOfContainers;
	costShip=shippingCost*noOfContainers;
}
double cylinderType::getPaintCost(){
	double area;
	area=2*3.14*height+2*3.14*radius*radius;
	return cost*area;
}
double cylinderType::getShipCost(){
	return costShip;
}
//MAIN FUNCTION
int main(){
cylinderType container;
double h,rad,cost_p,cost_s,no_of_containers;
cout<<"Enter the height of the container in feet:"<<endl;
cin>>h;
container.setHeight(h);
cout<<"Enter the radius of the container in feet:"<<endl;
cin>>rad;
container.setRadius(rad);
cout<<"Enter the paint cost per square foot: "<<endl;
cin>>cost_p;
cout<<"Enter the shipping cost per container:"<<endl;
cin>>cost_s;
cout<<"Enter the number of container u want:"<<endl;
cin>>no_of_containers;
container.setCost(cost_p,cost_s,no_of_containers);
cout<<"------Dimensions Of Container in litres------"<<endl;
cout<<"Radius of Container  : "<<container.getRadius()<<"ltr"<<endl;
cout<<"Height of container : "<<container.getHeight()<<<<"ltr"endl;
cout<<"------Price Details-------"<<endl;
cout<<"Painting Cost per square foot: $"<<container.getPaintCost()<<endl;
cout<<"Shipping Cost per container  : $"<<container.getShipCost()<<endl;
cout<<"Total Amount                 : $"<<container.getShipCost()+container.getPaintCost()<<endl;
return 0;
}