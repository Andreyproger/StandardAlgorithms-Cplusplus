#include <iostream>
#include <string>


typedef struct list
{
    int data;
    list* next;
} list;

list * search_list(list * l, int element)
{
    if (NULL == l) return NULL;
    if (l->data == element)
        return l;
    else
        return ( search_list(l->next, element) );
}

int main()
{
    search_list(NULL, NULL);
}
