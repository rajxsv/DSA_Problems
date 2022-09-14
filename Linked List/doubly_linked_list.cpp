#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node* prev;

	node(int d){
		prev=NULL;
		data=d;
		next=NULL;
	}
};
void takeinput(node* &head,node* &tail){	
	node* n=head;
	
	int d;
	cin>>d;
	
	node* p=NULL;

	while(d!=(-1)){
		if(head==NULL){
			n=new node(d);
			head=n;

			n->prev=p;
			p=n;
			n=n->next;
		}
		else{
			n=new node(d);
			p->next=n;
			n->prev=p;
			//update conditions
			p=n;
			n=n->next;
		}
		cin>>d;
	}	
	tail=p;
}
void print2(node* head){
	while(head->next!=NULL){
		// cout<<head->data<<"->";
		head=head->next;
	}
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->prev;
	}
	cout << "NULL\n";
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout << "NULL\n";
}
int main(){

	node* head=NULL;
	node* tail=head;
	takeinput(head,tail);
	// cout<< head;
	print2(head);
	
	cout<<tail->data;

	return 0;
}