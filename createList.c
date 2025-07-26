#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// Singly Linked List Creation
void singly_create(int num_of_nodes) {
	if(num_of_nodes<=0) {
		printError("Invalid size given for linked list.");
		return;
	}
	printf("\nEnter data: \n");
	for(int i=1; i<=num_of_nodes; i++) {
		int data;
		printf("Node %d: ", i);
		scanf("%d", &data);
		singly_node* temp=(singly_node*)malloc(sizeof(singly_node));
		temp->data=data;
		temp->next=NULL;
		if(singly_head==NULL)
			singly_head=temp;
		else {
			singly_node* p=singly_head;
			while(p->next!=NULL)
				p=p->next;
			p->next=temp;
		}
	}
}

// Singly Circular Linked List Creation
void singly_circular_create(int num_of_nodes) {
	if(num_of_nodes<=0) {
		printError("Invalid size given for linked list.");
		return;
	}
	printf("\nEnter data: \n");
	for(int i=1; i<=num_of_nodes; i++) {
		int data;
		printf("Node %d: ", i);
		scanf("%d", &data);
		singly_node* temp=(singly_node*)malloc(sizeof(singly_node));
		temp->data=data;
		temp->next=temp;
		if(singly_circular_head==NULL)
			singly_circular_head=temp;
 		singly_node* p=singly_circular_head;
		while(p->next!=singly_circular_head){
			p=p->next;
		}
		p->next=temp;
		temp->next=singly_circular_head;
	}
}

// Doubly Linked List Creation
void doubly_create(int num_of_nodes) {
	if(num_of_nodes<=0) {
		printError("Invalid size given for linked list.");
		return;
	}
	printf("\nEnter data: \n");
	for(int i=1; i<=num_of_nodes; i++) {
		int data;
		printf("Node %d: ", i);
		scanf("%d", &data);
		doubly_node* temp=(doubly_node*)malloc(sizeof(doubly_node));
		temp->prev=NULL;
		temp->data=data;
		temp->next=NULL;
		if(doubly_head==NULL)
			doubly_head=temp;
		else{
			doubly_node* p=doubly_head;
			while(p->next!=NULL)
				p=p->next;
			p->next=temp;
			temp->prev=p;
		}
	}
}

// Doubly Circular Linked List Creation
void doubly_circular_create(int num_of_nodes) {
	if(num_of_nodes<=0) {
		printError("Invalid size given for linked list.");
		return;
	}
	printf("\nEnter data: \n");
	for(int i=1; i<=num_of_nodes; i++) {
		doubly_node* temp=(doubly_node*)malloc(sizeof(doubly_node));
		printf("Node %d: ", i);
		scanf("%d", &temp->data);
		temp->next=temp;
		temp->prev=temp;
		if(i==1)
			doubly_circular_head=temp;
		else {
			doubly_node* p=doubly_circular_head;
			while(p->next!=doubly_circular_head)
				p=p->next;
			temp->prev=p;
			p->next=temp;
			temp->next=doubly_circular_head;
			doubly_circular_head->prev=temp;
		}
	}
}
