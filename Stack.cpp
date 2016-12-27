/* The following is the implementation of a stack as well as basic operations with the usage of pointers.
Some basic operations include adding elements to the stack, removing elements from the stack as
well as searching for particular elements in the stack  */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// This code implements a node with the use of pointers in order to allow the other methods in the
class node{
public:
	node *next;
	int value;
	node(int value){
		this->value=value;
}

};// end of node class

class stack{
	public:
	node *frontf;
	node *tail;
	int s;


public:
	stack(){
	frontf=NULL;
	tail=NULL;
}

//Adds elements to the stack
	void push(int x){
		node *current=new node(x);
		if(empty()){
			frontf=current;
			tail=current;
			current->next=NULL;


		}else{
			tail->next=current;
			tail=current;
			current->next=NULL;
		}


	}//end of push method

	//Checks for wheter or not the stack has no entries
	bool empty(){
		if(frontf==NULL){
			return true;
		}else{
			return false;
		}

	}// end of empty method

	//Show's the user all the elements currently in the stack
	void display(){
		node *current=frontf;
		while(current!=NULL){
			cout<<current->value<<endl;
			current=current->next;
		}

	}
	//Allows the user to set a fixed size for the stack
const int size(int s) {
		this->s=s;
		return s;
	}

	//Allows the user to search for a specific element within the stack at the given index p
	void search(int p){
		bool start=true;
		node *current=frontf;
		int count=0;
		while(start){
			current=current->next;
			count++;
			if(p==0){
				current=frontf;
				start=false;
			}
			else if(count==p){
				start=false;

			}
		}
		cout<<current->value<<endl;

	}//end of search method

	//Removes the the most recent element from the stack
	void pop(){
	node *del;

	if(empty()){
		cout<<"The stack is currently empty!"<<endl;
	}
	else{
		del=frontf;
		frontf=del->next;
		delete(del);

	}

}//End of pop method


};//end of stack class


int main(){
	int s;
	int choice;
	int e;
	stack mystack;
	bool loop=false;

	//Permits the user to set the size of their stack
	cout<<"Please set the size for your stack"<<endl;
	cin>>s;
	int size=mystack.size(s);

	//Permits the user to push a specific number of items onto their stack
	cout<<"Please type the elements you want added to your stack"<<endl;
	for(int i=0;i<size;i++){
		int element;
		cin>>element;
		mystack.push(element);

	}
	loop=true;

	/* Allows the user to add on elements,remove elements or
	display the elements of the stack until they decide
	 to exit the program */

	while(loop!=false){
	cout<<"Would you like to:\n 1. See all the elements currently stored in your stack \n 2. Add more elements to your stack \n 3.Remove the top-most element of your stack \n 4.Search for a specific element \n 5.Exit the program"<<endl;
	cin>>choice;
	if(choice==1){
		cout<<"These are the elements currently in the stack"<<endl;
		mystack.display();
	}
	else if(choice==2){
		cout<<"Please push your next entry onto the stack"<<endl;
		cin>>e;
		mystack.push(e);
	}
	else if(choice==3){
		cout<<"The latest element from your stack has been removed"<<endl;
		mystack.pop();
	}
	else if(choice==4){
		int index;
		cout<<"Please type in the index you want to check"<<endl;
		cin>>index;
		mystack.search(index);
	}
	else if(choice==5){
    exit(EXIT_SUCCESS);

	}

}// end of big while loop

return 0;

}// end of program
