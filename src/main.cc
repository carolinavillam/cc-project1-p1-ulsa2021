#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Node 
{
	string dish;
	Node *next;
};

void Add(Node *&, string);
void Out(Node *&, string &);
int main ()
{
	Node *stack = NULL;
	int flag=1;
	string dish;
	do{
		cout<<"\nDish to add: ";
		cin>>dish;
		Add(stack,dish);
		cout<<"\nDo you want to add more? Yes - 1 \n  No - 2"<<endl;
		cin>>flag;
	}while(flag==1);
	cout<<"\nTaking dishes out of the stack"<<endl;
	while(stack!=NULL){
		
		Out(stack,dish);
		cout<<dish<<endl;
	}
	getch();
	return 0;
}

void Add(Node *&stack, string _dish){
	Node *newNode = new Node();
	newNode->dish = _dish;
	newNode->next = stack;
	stack = newNode;
	
	cout<< "\nAdd "<<_dish<<endl;
}

void Out(Node *&stack, string &_dish)
{
	Node *aux = stack;
	_dish = aux -> dish;
	stack = aux -> next;
	delete aux;
}
