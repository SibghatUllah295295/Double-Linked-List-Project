#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
node* head = NULL;
void addNode(int value){
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	if(head == NULL){
		head = new_node;
		new_node->prev = NULL;
	}
	else{
		node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
}
}
void addFirst(int value){
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	if(head == NULL){
		head = new_node;
		new_node->prev = NULL;
	}
	else{
		node* temp = new node;
		temp = head;
		temp->prev = new_node;
		new_node->prev = NULL;
		new_node->next = temp;
		head = new_node;
	}
}
void addLast(int value){
	node* new_node = new node;
	new_node->data = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	if(head == NULL){
		new_node->next = head;
		head = new_node;
	}
	else{
		node* temp = new node;
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
}
void display(){
	node* temp = new node;
	temp = head;
	while(temp != NULL){
		cout<<temp->data;
	cout<<endl;
		temp = temp->next;
	}
}

int main(){
	cout<<"Double Linked List Project"<<endl;
	addNode(1);
	addNode(2);
	addNode(14);
	addNode(20);
	addFirst(100);
	addFirst(200);
	addFirst(300);
	addLast(400);
	addLast(500);
	addLast(600);
	display();
	return 0;
}	
