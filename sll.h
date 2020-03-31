#ifndef SLL_H
#define SLL_H

/* Singly-linked list with integer values */
typedef struct sll
{
    int val;
    struct sll* next;
}
sll_node;

/* Create a new singly-linked list and store given value (val).
Returns a pointer to the new singly-linked list. */
sll_node* sll_create(int val);

/* If the given singly-linked list (head) contains the value (val)
Returns true (1), false (0) otherwise. */
int sll_find(sll_node* head, int val);

/* Insert a new node with value (val) into the singly-linked list (head).
New nodes are inserted at the beginning of the linked list to reduce operations.
Returns the pointer to the new singly-linked list head. */
sll_node* sll_insert(sll_node* head, int val);

/* Free all the memory allocated for the singly-linked list (head) and all of its nodes */
void sll_destroy(sll_node* head);

#endif
