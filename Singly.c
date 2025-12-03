//Insert Node at the End of a Singly Linked List.
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};

int main(){
	struct Node*head=malloc(sizeof(struct Node));
	struct Node*second=malloc(sizeof(struct Node));
	struct Node*third=malloc(sizeof(struct Node ));
	struct Node*newelement=malloc(sizeof(struct Node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=NULL;
	
	printf("Enter an element to add : ");
	scanf("%d",&newelement->data);
	
	third->next=newelement;
	newelement->next=NULL;
	
	printf("linked list is :");
	while(head!=NULL){
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL");
		
	}
	
	

	
