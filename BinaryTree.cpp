/*The following code builds a basic Binary Tree that stores the number inserted using recursion and
then allows the user to depict the elements stored in the left subtree and right subtree*/

#include <iostream>
using namespace std;

class node{
	public:
	int key;
	node(int key){
		this->key=key;
	}
	node *left;
	node *right;

};
class tree{
	public:
	node *root;
	node *left;
	node *right;
	tree(){
	root=NULL;
	left=NULL;
	right=NULL;


	}// end of constructor

	void insert(int num, node *branch){
if(num<branch->key){
	if(branch->left!=NULL){
		insert(num, branch->left);
	}else{
		branch->left=new node(num);
		//branch->left->key=num;
		branch->left->left=NULL;
		branch->left->right=NULL;
	}// end of else for creation of left node
}// end of big if for the creation of left node

if(num>branch->key){

if(branch->right!=NULL){
	insert(num,branch->right);
}
else{
	branch->right=new node(num);
	//branch->right->key=num;
	branch->right->left=NULL;
	branch->right->right=NULL;

}//end of else for the creation of right node

}//end of big if for the creation of right node


}// end of first insert method

//second insert method handles the case in which the ree is first created and given it's first value
	void insert(int num){
		if(root!=NULL)
			insert(num,root);
		else{
			root=new node(num);
			//root->key=num;
			root->left=NULL;
			root->right=NULL;
		}
	}//end of second insert method

//Class Function to display the elelemts of the left subtree
	void LST(node *ptr){
if(root!=NULL){

if(ptr->left!=NULL){
LST(ptr->left);
}
cout<<ptr->key<<endl;

}// end of big if
else{

cout<<"The binary tree is empty"<<endl;

}

}

//Class Function to display the elelemts of the right subtree
	void RST(node *ptr){
if(root!=NULL){


if(ptr->right!=NULL){
RST(ptr->right);
}
cout<<ptr->key<<endl;

}// end of big if
else{

cout<<"The binary tree is empty"<<endl;

}

}

//Displays the elements in the right and left subtree collectively
void Print(){
cout<<"These are the elements of the left subtree of the Binary Tree"<<endl;
LST(root);
cout<<"These are the elements of the right subtree of the Binary Tree"<<endl;
RST(root);

}


};// end of binary tree class
int main(){
tree BT;
int num;
int choice;
int e;
cout<<"How many elements do you want in your Binary Tree"<<endl;
cin>>num;

//Allows the user to type in a specified number of elements
cout<<"Please type in your base number along with other numbers you want in the Binary Tree"<<endl;
for(int i=0;i<num;i++){
    cin>>e;
    BT.insert(e);

}

//Prints out the elements in the tree
BT.Print();



}






