#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head;
void insert(int x){
	node* temp1 = new node;
	temp1->data = x;
	temp1->next = NULL;

	if(head == NULL){
		head = temp1;
		return;
	}

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
void deleteNth(int n){
	node* temp = head;
	if(n == 1){
		head = temp->next;
		delete(temp);
		return;		
	}

	//traverse to (n-1)th node
    for(int i = 0; i < n - 2; ++i){
		temp = temp->next;
	}
	//nth node
	node* temp2 = new node;
	temp2 = temp->next;
	temp->next = temp2->next;//(n+1)th node;

	delete(temp2);
}

int main(){
    head = NULL;
	int k;
	cin >> k;
	
	for(int i =0; i < k; ++i){
		int x; cin >> x;
		insert(x);
	}
	print();
	int n; cin >> n;
	deleteNth(n);
	print();

}