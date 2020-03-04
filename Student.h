using namespace std;

class SGrades
{
	string CourseName;
	char Grade;
	public:
		SGrades() : Grade('B'), CourseName("OOP")
		{
			cout<<"Grade Constructor....."<<endl;
		}
		
		void SetValues(string CN, char G)
		{
			CourseName=CN;
			Grade=G;
		}
		
		char GetGrades()
		{
			return Grade;
		}
		
		string GetCourseName()
		{
			return CourseName;
		}
		
		~SGrades()
		{
			cout<<"Grade Destructor ....."<<endl;
		}
};



class Student
{
	private:
		int ID;
		string Name;
		SGrades C1;
	public:
		Student(int Id)
		{
			cout<<"Student Constructor....."<<endl;
			Name="xyz";
			ID=Id;
		}
		Student(int R, string n)
		{
			cout<<"Student Constructor....."<<endl;
			Name=n;
			ID=R;
		}
		void SetAttributes(int R,  string n)
		{
			ID=R;
			Name=n;
			C1.SetValues("Web", 'A');
		}
		
		void GetAttributes()
		{
			cout<<"ID= "<<ID<<endl;
			cout<<"Name= "<<Name<<endl;
			cout<<"CourseName= "<<C1.GetCourseName()<<endl;
			cout<<"Grades= "<<C1.GetGrades()<<endl;
		}
		
		~Student()
		{
			cout<<"Destructor Student....."<<endl;
		}
};




