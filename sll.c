#include <stdlib.h>
#include "sll.h"

sllnode* sll_create(int val)
{
    sllnode* node = malloc(sizeof(sllnode));
    node->val = val;
    node->next = NULL;
    return node;
}

sllnode* sll_insert(sllnode* head, int val)
{
    sllnode* new = sll_create(val);
    new->next = head;
}

int sll_find(sllnode* head, int val)
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

void sll_destroy(sllnode* head)
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
