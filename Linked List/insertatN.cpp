#include<iostream>

using namespace std;

struct node{
	int data;
	node* next;
};

node* head = NULL; 
void insert(int nData, int n){
	node* newNode = new node();
	newNode->data = nData;
	newNode->next = NULL;
	if(n==1){
		newNode->next = head;
		head = newNode;
		return;
	}
	node* temp = head;
	for(int i = 0;i < n-2;i++)
		temp = temp->next;	
	newNode->next = temp->next;
	temp->next = newNode;
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
	insert(3,1);
	insert(5,2);
	insert(6,2);
	insert(2,3);
	print();
	
}
