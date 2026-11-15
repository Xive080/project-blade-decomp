struct N { struct N *prev; struct N *next; };
void f(struct N *free_list, struct N *n, struct N *list)
{
    if (n->next != 0) {
        n->next->prev = n->prev;
    }
    if (n->prev != 0) {
        n->prev->next = n->next;
    } else {
        list->next = n->next;
    }
    n->next = free_list->next;
    n->prev = 0;
    free_list->next = n;
    if (n->next != 0) {
        n->next->prev = n;
    }
}
