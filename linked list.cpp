#include<iostream>
#include<stdlib.h> 
using namespace std;

struct ll{
	int data;
	struct ll *next;
};
struct ll* head=NULL;


void traverse(){

	struct ll* ptr;
	ptr = head;
	while(ptr!=NULL){
		
		ptr=ptr->next;
	}
	
}

void traversal(){
	struct ll* ptr;
	ptr = head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

void insert(int value){
	struct ll* new_node=new ll;	
	if(head==NULL){

	new_node->data = value;
	new_node->next = NULL;
	

	head = new_node;

	}
	else{

		struct ll* next_new_node=new ll;
		struct ll* temp;
	
		temp = head;
   
   while (temp->next != NULL)
      temp = temp->next;  
   
   
		
		temp->next= next_new_node;
		
		next_new_node->data = value;
		next_new_node->next = NULL;	
	}
		
}


void deletion(int del){
	struct ll* ptr;
	ptr=head;
	if(head->data==del){
		head=head->next;
		delete ptr;
	} else {
		while(ptr->next!=NULL) {
			if(ptr->next->data==del){
				ll *t = ptr->next;
				ptr->next = ptr->next->next;
				delete t;
				break;
			}
			ptr=ptr->next;
		}
	}
	
}

int main(){
	int n,a,d;
	label: cout<<"\nEnter your choice\n";
	cout<<"1.traversal\n";
	cout<<"2.Insert\n";
	cout<<"3.delete\n";
	cout<<"4.EXIT\n";
	cin>>n;
	switch(n){
		case 1:traversal();
				goto label;
				
		case 2: cout<<"\nenter node value ";
				cin>>a;
				insert(a);
				goto label;
		case 3:cout<<"\nEnter value to delete ";
				cin>>d;
				deletion(d);
				goto label;
		case 4:exit(1);
	}
	
}
