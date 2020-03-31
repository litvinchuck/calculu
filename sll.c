#include <stdlib.h>
#include "sll.h"

sll_node* sll_create(int val)
{
    sll_node* node = malloc(sizeof(sll_node));
    node->val = val;
    node->next = NULL;
    return node;
}

sll_node* sll_insert(sll_node* head, int val)
{
    sll_node* new = sll_create(val);
    new->next = head;
    return new;
}

int sll_find(sll_node* head, int val)
{
    if (head == NULL)
    {
        return 0;
    }
    if (head->val == val)
    {
        return 1;
    }
    return sll_find(head->next, val);
}

void sll_destroy(sll_node* head)
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        sll_destroy(head->next);
    }
    free(head);
}
