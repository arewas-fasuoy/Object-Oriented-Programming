#include <iostream>
using namespace std;
class Shape{
protected:
	int width,height;
public:
	Shape(int a =0,int b =0){
		width =a;
		height =b;
	}
	virtual int area(){
		cout <<"Parent class area : ";
		return 0;
	}
};
class Rectangle: public Shape{
public:
	Rectangle(int a =0,int b =0):Shape(a,b){}
	int area (){
		cout <<"Rectangle class area : ";
		return(width *height);
	}
};
class Triangle: public Shape{
	public:
		Triangle(int a =0,int b =0):Shape(a,b){}
		int area (){
			cout <<"Triangle class area : ";
			return(width *height /2);
		}
};
class Square: public Shape{
	public:
		Square(int a =0):Shape(a){}
		int area (){
			cout <<"Square class area : ";
			return(width*width);
		}
};
// Main function for the program
int main(){
Shape *shape;
Shape sh;
Rectangle rec(10,7);
Triangle tri(10,5);
Square square(10);
cout<<endl;
//store the adress of sh
shape=&sh;
//call for parent area
cout<<shape->area()<<endl<<endl;
cout<<"---------------------------|"<<endl<<endl;
// store the address of Rectangle
shape =&rec;
// call rectangle area.
cout<<shape->area()<<endl<<endl;
cout<<"---------------------------|"<<endl<<endl;
 // store the address of Triangle
 shape =&tri;
 // call triangle area.
 cout<<shape->area()<<endl<<endl;
 cout<<"--------------------------|"<<endl<<endl;
  // store the address of square
 shape =&square;
 // call square area.
 cout<<shape->area()<<endl<<endl;
 cout<<"--------------------------|"<<endl<<endl;

 return 0;
}