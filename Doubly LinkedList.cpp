#include <bits/stdc++.h>
using namespace std;
//Doubly Linked List


struct node{
	int data;
	node* next;
	node* prev;
};

void insertAtHead(node** ptrToHead, int x){

	node* newNode = new node;
	newNode->data = x;

	if(*ptrToHead == NULL){
		*ptrToHead = newNode;
		newNode->prev = NULL;
		newNode->next = NULL;
		return;
	}

	//setting new links
	newNode->next = *ptrToHead;
	(*ptrToHead)->prev = newNode;
	//destroying the previous link and adjusting new head node.
	*ptrToHead = newNode;
	return;
}
void print(node* temp){
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
void reversePrint(node* temp){

	//using recursion
	// if(temp == NULL)
	// 	return;
	// reversePrint(temp->next);
	// cout << temp->data << " ";


	//using the prevlinks
	while(temp->next != NULL)
		temp = temp->next;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->prev;		
	}
	cout << "\n";
}
void insertAtTail(node *temp, int x){

	while(temp->next != NULL)
		temp = temp->next;

	node* newNode = new node;
	newNode->data = x;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next = NULL;
}

int main(){

	node* head = NULL;
	for(int i = 0; i < 5; ++i){
		int x; cin >> x;
		insertAtHead(&head, x);
	}
	
    print(head);
    reversePrint(head);
    insertAtTail(head, 7);
    print(head);



	return 0;
}
