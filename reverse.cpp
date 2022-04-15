//Reversing the list through iteration.


#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head;//Global declaration of list name;

void Insert(int x){
   node* temp1 = new node;
   temp1->data = x;
   temp1->next = NULL;

   if(head == NULL){
   	head = temp1;
   	return;
   }

   //traverse to the last node
   node* temp2 = head;
   while(temp2->next != NULL){
   	  temp2 = temp2->next;
   }
   temp2->next = temp1;
}
void print(){
	node* temp = head;
	while(temp != NULL){
		cout << temp->data << " " ;
		temp = temp->next;
	}
	cout << "\n";
}
void reverseList(){
   node *current, *prev, *after;
   current = head;
   prev = NULL;
   while(current != NULL){
   	after = current->next; 
   	current->next = prev;
   	prev = current;
   	current = after;
   }	
   head = prev;
}


int main(){

	head = NULL;// EMPTY LIST
	int sizeOflist;
	cin >> sizeOflist;
	for(int i = 0; i < sizeOflist; ++i){
		int x; cin >> x;
		Insert(x);		
	}

	cout << "Initial List: " ;
	print();

	reverseList();
	cout << "Reversed List: " ;
	print();



	return 0; 
}