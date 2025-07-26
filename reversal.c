#include <stdio.h>
#include "linkedlist.h"

// Doubly Reversal
void doubly_reverse() {
	doubly_node* last=doubly_head;
	while(last->next!=NULL)
		last=last->next;
	doubly_node* p=last;
	printf("\nReversal: ");
	while(p!=NULL) {
		if(p==doubly_head)
			printf("%d", p->data);
		else
			printf("%d --> ", p->data);
		p=p->prev;
	}
	printf("\n");
}

// Doubly Circular Reversal
void doubly_circular_reverse() {
	doubly_node* last=doubly_circular_head;
	while(last->next!=doubly_circular_head)
		last=last->next;
	doubly_node* p=last;
	printf("\nReversal: ");
	while(p->prev!=doubly_circular_head) {
		printf("%d --> ", p->data);
		p=p->prev;
	}
	printf("%d", p->data);
	printf("\n");
}
