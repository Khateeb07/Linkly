#include <stdio.h>
#include "linkedlist.h"

// Singly Linked List Size
void singly_size() {
	singly_node* p=singly_head;
	if(p==NULL) {
		printError("Linked list does not exist");
		return;
	}
	int count=0;
	while(p!=NULL) {
		count++;
		p=p->next;
	}
	printf("Size: %d\n", count);
}

// Singly Circular Linked List Size
void singly_circular_size() {
	singly_node* p=singly_circular_head;
	if(p==NULL) {
		printError("Linked list does not exist");
		return;
	}
	int count=1;
	while(p->next!=singly_circular_head) {
		p=p->next;
		count++;
	}
	printf("Size: %d\n", count);
}

// Doubly Linked List Size
void doubly_size() {
	doubly_node* p=doubly_head;
	if(p==NULL) {
		printError("Linked list does not exist");
		return;
	}
	int count=0;
	while(p!=NULL) {
		count++;
		p=p->next;
	}
	printf("Size: %d\n", count);
}

// Doubly Circular Linked List Size
void doubly_circular_size() {
	doubly_node* p=doubly_circular_head;
	if(p==NULL) {
		printError("Linked list does not exist");
		return;
	}
	int count=1;
	while(p->next!=doubly_circular_head) {
		p=p->next;
		count++;
	}
	printf("Size: %d\n", count);
}
