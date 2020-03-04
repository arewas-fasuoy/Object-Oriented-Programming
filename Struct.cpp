#include<iostream>
#include<string.h>

using namespace std;

//struct definition

struct Student{
	
	string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;

};



int main()
{
	//struct Student Declaration
	Student s1;
	
	//Accessing members and initialization
	s1.firstName="Ali";
	s1.lastName="Rehman";
	s1.courseGrade='A';
	s1.testScore=40;
	s1.programmingScore=20;
	s1.GPA=3.5;
	
	
	cout<<s1.firstName<<" "<<s1.lastName<<endl;
	cout<<"Test Score= "<<s1.testScore<<endl;
	
	//assigning s1 values to a new Student s2
	Student s2;
	s2=s1;
	cout<<"Programming Score of s2= "<<s2.programmingScore<<endl;
	
	
	//Comparing Structs
	if(s1==s2)
	cout<<"Equal structs"<<endl;
	s1++;
	//Comparing Values
	if(s1.GPA==s2.GPA)
	s2.GPA=3.7;
	
	cout<<"s2 GPA= "<<s2.GPA<<endl;
	
	system("pause");
	return 0;
}
