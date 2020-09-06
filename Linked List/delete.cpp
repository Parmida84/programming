#include<iostream>
#include<bits/stdc++.h>

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
	
void delet ( int n){


	node* temp = head;
	node* temp1 = head;
	for(int i = 0;i < n-1;i++)
		temp = temp->next;
	for(int i = 0;i <= n-1;i++)
		temp1 = temp1->next;
	temp->next =  temp1->next;
	free(temp1);
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
	delet(2);
	print();
	
}
