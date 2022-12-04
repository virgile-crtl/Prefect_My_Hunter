/*
** EPITECH PROJECT, 2022
** list
** File description:
** list
*/

#include <stdbool.h>
#include <stdlib.h>

#ifndef LIST_H_
    #define LIST_H_


typedef struct node_s {
    void *value;
    struct node_s *next;
}node_t;

typedef node_t *list_t;

void list_add_elem_at_back(list_t *front_ptr, node_t *elem);
void list_add_elem_at_front(list_t *front_ptr, node_t *elem);
bool list_add_elem_at_position(list_t *front_ptr, node_t *elem, int p);
void list_clear(list_t *front_ptr);
bool list_del_elem_at_back(list_t *front_ptr);
bool list_del_elem_at_front(list_t *front_ptr);
bool list_del_elem_at_position(list_t *front_ptr, unsigned int position);
node_t *list_get_elem_at_back(list_t list);
node_t *list_get_elem_at_front(list_t list);
node_t *list_get_elem_at_front(list_t list);
int list_get_size(list_t list);
bool list_is_empty(list_t list);


#endif /* !LIST_H_ */
