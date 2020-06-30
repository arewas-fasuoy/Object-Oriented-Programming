#include<iostream>
using namespace std;
class listType{
private:
	int size;
	int *arr;
public:
	listType(); 
	~listType();
	bool isEmptyList(); 
	bool isFullList();
	int search(int searchItem) ;
	void insert(int newElement);
	void remove(int removeElement);
	void printList();/
	
};
listType::listType(){
	size=10;
	 arr=new int[size];
	 for (int i=0;i<size;i++){
	 	cout<<"Enter element "<<i+1<<" of array: ";
	 	cin>>arr[i];
	 }
}
listType::~listType(){
	delete[] arr;

}
void listType::printList(){
 	cout<<"Elements of array are: ";
 	for (int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 }
 bool listType::isEmptyList(){
  	if (arr[size]!=0)
  		return 1;
  	else 
  		return 0;
  }
   bool listType::isFullList(){

   		if(sizeof(arr)==size)
   			return 1;
   		else 
   			return 0;
   }
int listType::search(int Item) {
	int c;
	for (int i=0;i<size;i++)
	{
		if(Item==arr[i])
			c=1;
		else 
			c=0;
	}
	return c;
}
 void listType::insert(int newElement){
 	int position;
  cout<<"Enter the position at which you want to insert an element:";
  cin>>position;
  arr[position]=newElement;
  cout<<"The array after inserting element is:";
  for (int i=0;i<size;i++){
  	cout<<arr[i]<<" ";
  }
  cout<<endl;
 }
 void listType::remove(int removeElement){
 	cout<<"Array after removing element is:";
 	for (int i=0;i<size;i++){
 		if(arr[i]==removeElement){
 			for(int j=i; j<(size-1);j++){
 				arr[j]==arr[j+1];}
 				break;

 		}
 		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 }

int main()
{
int element,R_element;
int a;
listType l;
l.printList();
cout<<"Enter the number you want ot search"<<endl;
cin>>a;
cout<<"Result after searching the element"<<l.search(a)<<endl;
cout<<"Result after calling function isEmptyList"<<l.isEmptyList()<<endl;
cout<<"Result after calling function isFullList"<<l.isFullList()<<endl;
cout<<"Enter the element you want to insert"<<endl;
cin>>element;
l.insert(element);
cout<<endl;
cout<<"Enter the element you want to remove"<<endl;
cin>>R_element;
l.remove(R_element);
cout<<endl;
return 0;
}
