#include <iostream>
#include <string>
using namespace std;


struct players
{	int id;
	string first_name;
	string last_name;
	int no_of_goals;
	int age;
	int ranking;
};
void add(int *counter,players team[])
{	 
	{	cout<<"Enter the id of the player"<<endl;
		cin>>team[*counter].id;
		cout<<"Enter the first name of the player"<<endl;
		cin>>team[*counter].first_name;
		cout<<"Enter the last name of the player"<<endl;
		cin>>team[*counter].last_name;
		cout<<"Enter the no of goals of the player"<<endl;
		cin>>team[*counter].no_of_goals;
		cout<<"Enter the ranking of the player"<<endl;
		cin>>team[*counter].ranking;
		
	}
}
void update(int *counter,players team[] )
{	int id;
	string update;
	cout<<"Following is the list of player"<<endl<<*counter<<endl;
	cout<<"enter the player id to update the record";
 	cin>>id;
	for (int i=0;i<*counter;i++)
	{
		if (team[i].id==id)
			{ 
				cout<<"Please Enter the name of attribute u want to update(name,goal,ranking)"<<endl;
				cin>>update;
				if (update=="name")
					{
					cout<<"Enter the first name"<<endl;
					cin>>team[i].first_name;
					cout<<"Enter the last name"<<endl;
					cin>>team[i].last_name;
					}

				else if (update=="goal")
					{
					cout<<"enter the updated no of goals"<<endl;
					cin>>team[i].no_of_goals;
					}
				else if (update=="ranking")
					{
					cout<<"Enter the updated ranking"<<endl;
					cin>>team[i].ranking;
					}
				else
					{
					cout<<"The attribute is out of record"<<endl;
					}
			}
	}
}
void search_player(int *counter,players team[])
{
	string firstName,lastName;
	int choice,index;
	cout<<"Enter 1 to search by index and 2 to search by name";
	cin>>choice;
	if (choice==1)
	{
		cout<<"enter the index to search player";
		cin>>index;
		if (index<=*counter)
		{ 
			cout<<"Record Found!"<<endl;
			cout<<"PLayer Id:"<<team[index].id<<endl;
			cout<<"First name:"<<team[index].first_name<<endl;
			cout<<"Last name:"<<team[index].last_name<<endl;
			cout<<"No.Of Goals:"<<team[index].no_of_goals<<endl;
			cout<<"Ranking:"<<team[index].ranking<<endl;
		}
	else
	{
		cout<<"the index you entered is out of range"<<endl;
	}
        }
	else if(choice==2)
	{
		cout<<"enter the first and last name to search for player"<<endl;
		cin>>firstName>>lastName;
		for (int i=0;i<=*counter;i++)
		{
			if (team[i].first_name==firstName && team[i].last_name==lastName)
			{

			}
		}
	}
}
void display(int *counter,players team[])
{
	cout<<"following is the list of all players"<<endl;
	for (int i=0;i<=*counter;i++)
	{
		cout<<"PLayer Id/tFirst name/Last name/tNo.Of Goals/tRanking/t"<<endl;
		cout<<team[i].id<<endl;
		cout<<team[i].first_name<<"/t";
		cout<<team[i].last_name<<"/t";
		cout<<team[i].no_of_goals<<"/t";
		cout<<team[i].ranking<<endl;
	}
}

int main()
{
int counter=0;
int ans;
players team[11];
do
{	add(&counter,team);
	counter++;
	cout<<"Press 1, 2, 3, 4,5(5 to exit) to add a player,update the data,search for a player and display list of players,repectively"<<endl;
	cin>>ans;
	if (ans==1)	
		add(&counter,team);
	else if (ans==2)
		update(&counter,team);
	else if (ans==3)
		search_player(&counter,team);
	else if (ans==4)
		display(&counter,team);
	if(ans == 5){
		break;	
	}
}
while (ans!= 5);
return 0;
}
