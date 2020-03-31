#include <stdlib.h>
#include "stack.h"

stack_node* stack_create(int val)
{
    return sll_create(val);
}

int stack_find(stack_node* head, int val)
{
    return sll_find(head, val);
}

stack_node* stack_push(stack_node* head, int val)
{
    if (head->next == NULL)
    {
        stack_node* new = stack_create(val);
        head->next = new;
        return head;
    }
    return stack_push(head->next, val);
}

int stack_pop(stack_node* head)
{
    if (head->next == NULL)
    {
        int val = head->val;
        stack_destroy(head);
        return val;
    }
    return stack_pop(head->next);
}

void stack_destroy(stack_node* head)
{
    sll_destroy(head);
}
