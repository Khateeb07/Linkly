#include "linkedlist.h"

const ops1 sll = {
	.create=singly_create,
	.traverse=singly_traverse,
	.insert=singly_insert,
	.remove=singly_remove,
	.size=singly_size
};

const ops1 scll = {
	.create=singly_circular_create,
	.traverse=singly_circular_traverse,
	.insert=singly_circular_insert,
	.remove=singly_circular_remove,
	.size=singly_circular_size
};

const ops2 dll = {
	.create=doubly_create,
	.traverse=doubly_traverse,
	.insert=doubly_insert,
	.remove=doubly_remove,
	.reverse=doubly_reverse,
	.size=doubly_size
};

const ops2 dcll = {
	.create=doubly_circular_create,
	.traverse=doubly_circular_traverse,
	.insert=doubly_circular_insert,
	.remove=doubly_circular_remove,
	.reverse=doubly_circular_reverse,
	.size=doubly_circular_size
};
