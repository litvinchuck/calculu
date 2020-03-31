#include <stdlib.h>
#include "queue.h"

queue_node* queue_create(int val)
{
    return sll_create(val);
}

int queue_find(queue_node* head, int val)
{
    return sll_find(head, val);
}

queue_node* queue_insert(queue_node* head, int val)
{
    return sll_insert(head, val);
}

int queue_remove(queue_node* head)
{
    if (head->next == NULL)
    {
        int val = head->val;
        queue_destroy(head);
        return val;
    }
    return queue_remove(head->next);
}

void queue_destroy(queue_node* head)
{
    sll_destroy(head);
}
