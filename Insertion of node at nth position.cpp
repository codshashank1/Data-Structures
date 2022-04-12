//insertion of node at nth position



#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node *head;
void insert(int x, int n){
	node* temp1 = new node;
	temp1->data = x;
	temp1->next = NULL;

	if(n == 1){
		temp1->next = head;
		head = temp1;
		return;
	}
	node* temp2 = head;
	//need to travers till n-1 th node's address
	//also 1 iteratioon i.e. head node is already present
	//therefore n-2 iterations.
	for(int i = 0; i < n-2; ++i){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
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

int main(){

	head = NULL;
	int k; cin >> k;
	for(int i = 0 ;i < k; ++i){
		int x, n;
		cin >> x >> n;
		insert(x, n);
		print();
	}
    
    


	return 0;
}