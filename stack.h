#ifndef STACK_H
#define STACK_H

#include "sll.h"

/* Stack with integer values implementation using linked list */
typedef sll_node stack_node;

/* Create a new stack and store given value (val).
Returns a pointer to the new stack. */
stack_node* stack_create(int val);

/* If the given stack (head) contains the value (val)
Returns true (1), false (0) otherwise. */
int stack_find(stack_node* head, int val);

/* Insert a new node with value (val) into the stack (head).
Returns the pointer to the new stack head. */
stack_node* stack_push(stack_node* head, int val);

/* Pop the last node of the stack.
Returns the value stored in popped node. */
int stack_pop(stack_node* head);

/* Free all the memory allocated for the stack (head) and all of its nodes */
void stack_destroy(stack_node* head);

#endif
