#include <iostream> 
using namespace std; 

struct node
{
	int data;
	node* next;
	node* prev;
	
};

class LinkedList
{
	
private:
    node *head;
    node *tail;
    
public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void createNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        temp->prev=NULL;


         if (head == NULL)
        {
            head = tail = temp;
        }
          else
        {
            
            head->prev = NULL;
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
              
        }
     
    }
   
    void printList(int choice) {
    	//forward print
    	if (choice==1){
        	node * current = head;

        	while (current != NULL) {
            	cout << current->data <<endl;
            	current = current->next;

        	}
    	}
    	//reverse print
    	else if (choice==2){
    		 node* current = tail;

        while (current != NULL) {
            cout << current->data << endl;
            current = current->prev;

        	}
    	}
         
    }

    //inserting new Node at the head
    void pushNode(int value) {
    	node * new_node;
    	new_node = new node;

    	new_node->data = value;
    	new_node->next = head;
    	new_node->prev = NULL;
    	head->prev = new_node;
    	head = new_node;
	}
	//inserting Node at end 
	void insert_node_at_end(int value){
		node * new_node;
    	new_node = new node;
  		new_node->data = value;
    	tail->next=NULL;
		if(head == NULL){
    		head = new_node;
		}
		else{
    		node *current;
    		current = head;
    		while(current->next != NULL){
        		current = current->next;
    		}
    		current->next=new_node;
    		new_node->prev=current;
  
		}
	}
    
	// Inserting Node at a particular location    
	void insertNodeAtPosition(int pos, int value)
	{
      	node *pre = new node;
      	node *post = new node;
      	node *temp = new node;
      	post = head;

      	for(int i = 1; i < pos; i++)
      	{
          	pre = post;
          	post = post->next;
      	}
      	temp->data = value;
      	pre->next = temp; 
      	temp->prev = pre;
      	temp->next = post;
      	post->prev = temp;
	}

	//Deleting first item of the list
	int pop() {
    int retval = 0;
    node * next_node = NULL;

    next_node = head->next;
    next_node->prev = NULL;
    retval = head->data;
    delete head;
    head = next_node;

    return retval;
	}    

	/*Function to delete the Last node*/
 	void removeLastt(){
 		if (head->next == NULL) {
        	delete head;
    	}
 		node *current=head;
 		while(current->next != NULL){
 			current = current->next;
 		}
 		current->prev->next->next = NULL;
 		cout<<current->data<<" has been deleted"<<endl;
 		delete(current);
	 }
 	int removeLast() {
        int retval = 0;
        /* if there is only one item in the list, remove it */
        if (head->next == NULL) {
            retval = head->data;
            delete head;
            return retval;
        }

        /* get to the second to last node in the list */
        node* current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }

        /* now current points to the second to last item of the list, so let's remove current->next */
        retval = current->next->data;
        delete current->next;
        current->next = NULL;
        tail = current;
        return retval;
    }
//removing at a specific Position
	int removeByIndex(int n) {
    	int i = 0;
    	int retval = -1;
    	node * current = head;
    	node * temp_node = NULL;

    	if (n == 0) {
    		cout<<"Head Element"<<endl;
        	return 0;
    	}

    	for (i = 0; i < n-1; i++) {
        	if (current->next == NULL) {
            	return -1;
        	}
        	current = current->next;
    	}

    	node* opp;
    	temp_node = current->next;
    	opp = temp_node->next;
    	opp->prev = current;
    	retval = temp_node->data;
    	current->next = temp_node->next;
    	delete temp_node;

    	return retval;

	}

};


int main() 
{ 
   LinkedList L;
   cout<<endl;
   cout<<"-------Creating Nodes-----"<<endl<<endl;
   L.createNode(30);
   L.createNode(31);
   L.printList(1);
   cout<<endl;

   cout<<"------Pushing Node------"<<endl<<endl; 
   L.pushNode(32);
   L.createNode(60);
   L.printList(1);   // 42 41(pre) 70 34(post) 39 60 
   cout<<endl;

   cout<<"-------Inserting at a specific position-------"<<endl<<endl;
   cout<<"Inserted Value= 70"<<endl<<endl;	
   L.insertNodeAtPosition(3,70);
   L.printList(1);   
   cout<<endl;

  cout<<"--------Popping List From Head------"<<endl<<endl;
  cout<<"Popped value="<<L.pop()<<endl;
  cout<<endl;
  L.printList(1); 
  cout<<endl;

  cout<<"---------Popping List Form Tail------"<<endl<<endl;
  cout<<"Remove last="<<L.removeLast()<<endl;
  cout<<endl;
  L.printList(1); 
  cout<<endl;

  cout<<"--------Removing at a Specific Index-------"<<endl<<endl;
  cout<<"Removed value="<<L.removeByIndex(1)<<endl;
  cout<<endl;
  L.printList(1); 
  cout<<endl;

  cout<<"-------Printing IN Reverse (From Tail To Head)-------"<<endl;
  L.printList(2); 
  cout<<endl;
  
    return 0; 
}  





