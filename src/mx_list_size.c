#include "../inc/libmx.h"

int mx_list_size(t_list *list)
{
    if (list == NULL)
        return 0;

    int count = 1;

    t_list *current_node = list;

    while (current_node->next != NULL) {
        current_node = current_node->next;
        count++;
    }

    return count;
}

