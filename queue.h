#ifndef QUEUE_H
#define QUEUE_H

#include "sll.h"

typedef sll_node queue_node;

queue_node* queue_create(int val);

int queue_find(queue_node* head, int val);

queue_node* queue_insert(queue_node* head, int val);

int queue_remove(queue_node* head);

void queue_destroy(queue_node* head);

#endif
