#include <iostream> 
using namespace std; 

struct node{

	int data;
	node* link;
	
};

class stack{
private:
  node* top;
public:
  stack(){
    top = NULL;
  }
  //PUSHING AT STACK
  void push(int value){
    cout<<"Pushing "<<value<<" at stack"<<endl;
    node * new_node;
    new_node = new node;
    new_node->data = value;
    new_node->link = top;
    top = new_node;
  }
  //REMOVING FROM STACK
  int pop() {
    if (isEmpty())
      cout<<"The stack is Empty"<<endl;
    else{
      cout<<"Popping from stack"<<endl;
      node * new_node = top;
      top=top->link;
      delete(new_node);
    }
  } 
  //CHECKING IF STACK IS EMPTY OR NOT 
  bool isEmpty(){
    if(top==NULL)
      return 1;
    else
      return 0;
  }
  //PRINTING STACK
  void printStack(){
    node *current = top;
    while ( current != NULL){
      cout << current->data <<endl;
      current = current->link;
    }
  }
};

int main(){
  stack obj;
  cout<<endl;
  obj.push(1);
  obj.push(2);
  obj.push(3);
  obj.push(4);
  obj.push(5);
  cout<<endl<<"Printing Stack"<<endl;
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  obj.printStack(); 
  cout<<endl;
  obj.pop();
  cout<<endl<<"Checking If stack is Empty or Not"<<endl;
  if (obj.isEmpty())
    cout<<"Stack is Empty"<<endl;
  else
    cout<<"Stack is Not Empty"<<endl;
  return 0; 
}  


