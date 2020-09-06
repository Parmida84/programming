#include<iostream>

using namespace std;

struct node{
	int data;
	node* next;
};

node* head = NULL; 
void insert(int nData){
	node* newNode = new node();
	newNode->data = nData;
	newNode->next = head;	
	head= newNode;	
}
void print(){
	node* temp = head;
	while (temp != NULL){
		cout<<temp->data;
		temp = temp->next;
	}
	
}

int main()
{
	insert(3);
	insert(5);
	insert(6);
	print();
	
}
