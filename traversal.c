#include <stdio.h>
#include "linkedlist.h"

// Singly Linked List Traversal
void singly_traverse() {
	if (singly_head==NULL) {
		printError("Linked list is empty.");
		return;
	}
	singly_node* p=singly_head;
	printf("\nTraversal: ");
	while(p!=NULL) {
		if(p==singly_head)
			printf("%d", p->data);
		else
			printf(" --> %d", p->data);
		p=p->next;
	}
	printf("\n");
}

// Singly Circular Linked List Traversal
void singly_circular_traverse(){
	if (singly_circular_head==NULL) {
		printError("Linked list is empty.");
		return;
	}
	singly_node* p=singly_circular_head;
	printf("\nTraversal: ");
	while(p->next!=singly_circular_head) {
		printf("%d --> ", p->data);
		p=p->next;
	}
	printf("%d\n", p->data);
}

// Doubly Linked List Traversal
void doubly_traverse() {
	if(doubly_head==NULL) {
		printError("Linked list is empty.");
		return;
	}
	doubly_node* p=doubly_head;
	printf("\nTraversal: ");
	while(p!=NULL) {
		if(p==doubly_head)
			printf("%d", p->data);
		else
			printf(" --> %d", p->data);
		p=p->next;
	}
	printf("\n");
}

// Doubly Circular Linked List Traversal
void doubly_circular_traverse() {
	if(doubly_circular_head==NULL) {
		printError("Linked list is empty.");
		return;
	}
	doubly_node* p=doubly_circular_head;
	printf("\nTraversal: ");
	while(p->next!=doubly_circular_head) {
		printf("%d --> ", p->data);
		p=p->next;
	}
	printf("%d\n", p->data);
}
