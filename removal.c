#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// Singly Linked List Node Removal
void singly_remove(int pos) {
	singly_node* q=singly_head;
	singly_node* p=singly_head;
	if(p==NULL) {
		printError("Linked list is empty.");
	} else if(pos==1) {
		singly_head=p->next;
		p->next=NULL;
		free(p);
	} else {
		int i=1;
		while(i<pos && p->next!=NULL) {
			i++;
			q=p;
			p=p->next;
		}
		if(pos==i) {
			q->next=p->next;
			p->next=NULL;
			free(p);
		}
	}
}

// Singly Circular Linked List Node Removal
void singly_circular_remove(int pos){
	singly_node* p=singly_circular_head;
	if(p==NULL) {
		printError("Linked list is empty.");
	} else if(pos!=1){
		int count=1;
		while(count<pos-1){
			p=p->next;
			count++;
		}
	}else{
		while(p->next!=singly_circular_head)
			p=p->next;
		singly_circular_head=p->next->next;
	}
	singly_node* q=p->next;
	p->next=q->next;
	q->next=NULL;
	free(q);
}

// Doubly Linked List Node Removal
void doubly_remove(int pos) {
	doubly_node* p=doubly_head;
	if(p==NULL) {
		printError("Linked list is empty.");
	} else if(pos!=1){
		int count=1;
		while(count<pos){
			p=p->next;
			count++;
		}
		if(p->next!=NULL){
			p->prev->next=p->next;
			p->next->prev=p->prev;
		}else
			p->prev->next=NULL;
	}else{
		doubly_head=p->next;
		p->next->prev=NULL;
	}
	p->prev=NULL;
	p->next=NULL;
	free(p);
}

// Doubly Circular Linked List Node Removal
void doubly_circular_remove(int pos) {
	doubly_node* p=doubly_circular_head;
	doubly_node* q=doubly_circular_head;
	if(doubly_circular_head==NULL) {
		printError("Linked list is empty.");
	} else if(doubly_circular_head!=NULL && pos==1) {
		p=doubly_circular_head->prev;
		p->next=q->next;
		q->next->prev=p;
		doubly_circular_head=q->next;
		q->next=NULL;
		q->prev=NULL;
		free(q);
	} else if(doubly_circular_head!=NULL && pos>1) {
		int count=1;
		while(p->next!=NULL && count<pos-1) {
			p=p->next;
			count++;
		}
		q=p->next;
		p->next=q->next;
		q->next->prev=p;
		q->next=NULL;
		q->prev=NULL;
		free(q);
	}
}
