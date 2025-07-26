#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// Singly Linked List Insertion
void singly_insert(int pos, int val) {
	singly_node* temp=(singly_node*)malloc(sizeof(singly_node));
	temp->data=val;
	temp->next=NULL;
	singly_node* p=singly_head;
	if(pos==1) {
		temp->next=p;
		singly_head=temp;
	} else {
		int i=1;
		while(i<pos-1 && p->next!=NULL) {
			p=p->next;
			i++;
		}
		temp->next=p->next;
		p->next=temp;
	}
}

// Singly Circular Linked List Insertion
void singly_circular_insert(int pos, int val) {
	singly_node* temp=(singly_node*)malloc(sizeof(singly_node));
	temp->data=val;
	temp->next=temp;
	singly_node* p=singly_circular_head;
	if(pos==1) {
		while(p->next!=singly_circular_head)
			p=p->next;
		singly_circular_head=temp;
	} else {
		int i=1;
		while(i<pos-1) {
			p=p->next;
			i++;
		}
	}
	temp->next=p->next;
	p->next=temp;
}

// Doubly Linked List Insertion
void doubly_insert(int pos, int val){
	doubly_node* temp=(doubly_node*)malloc(sizeof(doubly_node));
	temp->prev=NULL;
	temp->data=val;
	temp->next=NULL;
	doubly_node* p=doubly_head;
	if(pos!=1){
		int count=1;
		while(count<pos-1){
			p=p->next;
			count++;
		}
		if(p->next!=NULL){
			temp->next=p->next;
			p->next->prev=temp;
		}
		p->next=temp;
		temp->prev=p;
	}else{
		doubly_head=temp;
		temp->next=p;
		p->prev=temp;
	}
}

// Doubly Circular Linked List Insertion
void doubly_circular_insert(int pos, int val) {
	doubly_node* temp=(doubly_node*)malloc(sizeof(doubly_node));
	temp->data=val;
	temp->next=temp;
	temp->prev=temp;
	if(doubly_circular_head==NULL)
		doubly_circular_head=temp;
	else if(doubly_circular_head!=NULL && pos==1) {
		doubly_node* p=doubly_circular_head->prev;
		temp->next=doubly_circular_head;
		doubly_circular_head->prev=temp;
		p->next=temp;
		temp->prev=p;
		doubly_circular_head=temp;
	} else if(doubly_circular_head!=NULL && pos>1) {
		doubly_node* p=doubly_circular_head;
		int count=1;
		while(p->next!=doubly_circular_head && count<pos-1) {
			p=p->next;
			count++;
		}
		temp->next=p->next;
		temp->prev=p;
		p->next->prev=temp;
		p->next=temp;
	}
}
