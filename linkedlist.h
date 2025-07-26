// Structure for singly_node
typedef struct snode {
	int data;
	struct snode *next;
} singly_node;

// Structure for doubly_node
typedef struct dnode {
	struct dnode *prev;
	int data;
	struct dnode *next;
} doubly_node;

extern singly_node* singly_head;	// Declares head of singly linkedlist globally.
extern singly_node* singly_circular_head;	// Declare head of singly circular linkedlist globally.

extern doubly_node* doubly_head;	// Declares head of doubly linkedlist globally.
extern doubly_node* doubly_circular_head;	// Declares head of doubly circular linkedlist globally.

typedef struct {
	void (*create)(int);
	void (*traverse)(void);
	void (*insert)(int, int);
	void (*remove)(int);
	void (*size)(void);
} ops1;

typedef struct {
	void (*create)(int);
	void (*traverse)(void);
	void (*insert)(int, int);
	void (*remove)(int);
	void (*reverse)(void);
	void (*size)(void);
} ops2;

extern const ops1 sll;
extern const ops1 scll;
extern const ops2 dll;
extern const ops2 dcll;

// Singly Linked List Prototype Declarations
void singly_create(int);
void singly_traverse(void);
void singly_insert(int, int);
void singly_remove(int);
void singly_size(void);

// Singly Circular Linked List Prototype Declarations
void singly_circular_create(int);
void singly_circular_traverse(void);
void singly_circular_insert(int, int);
void singly_circular_remove(int);
void singly_circular_size(void);

// Doubly Linked List Prototype Declarations
void doubly_create(int);
void doubly_traverse(void);
void doubly_insert(int, int);
void doubly_remove(int);
void doubly_reverse(void);
void doubly_size(void);

// Doubly Circular Linked List Prototype Declarations
void doubly_circular_create(int);
void doubly_circular_traverse(void);
void doubly_circular_insert(int, int);
void doubly_circular_remove(int);
void doubly_circular_reverse(void);
void doubly_circular_size(void);


// To Print Error Messages
void printError(const char*);
