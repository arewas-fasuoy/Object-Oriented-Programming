#include <iostream>
using namespace std;
class Enemy{
public:
	static int alive;
	//constructor
	Enemy(){
		cout<<"Object CREATED"<<endl;
		alive++;
	}
	static int get_count(){
		return alive;
	}
	//destructor
	~Enemy(){
		cout<<"Object DELETED"<<endl;
		alive--;
	}

};
//intialising static data member
int Enemy::alive=0;

int main(){
	cout<<"Number of Enemies Alive at Initial Stage: "<<Enemy::get_count()<<endl;
	Enemy *ptr;
	cout<<endl<<"----------Creating Objects----------"<<endl;
	//creating object number 1
	ptr=new Enemy;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//creating object number 2
	ptr=new Enemy;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//creating object number 3
	ptr=new Enemy;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//creating object number 4
	ptr=new Enemy;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	cout<<endl<<"----------Deleting Objects----------"<<endl;
	//deleting object number 1
	delete ptr;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//deleting object number 2
	delete ptr;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//deleting object number 3
	delete ptr;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	//deleting object number 4
	delete ptr;
	cout<<"Number of Enemies Alive : "<<Enemy::get_count()<<endl;
	cout<<endl;
	
	return 0;

}