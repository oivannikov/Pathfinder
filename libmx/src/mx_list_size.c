 #include "libmx.h"

int mx_list_size(t_list *list) {
    int count = 1;
    t_list *tmp = list;

    if (!list)
        return 0;
    while (tmp->next != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

