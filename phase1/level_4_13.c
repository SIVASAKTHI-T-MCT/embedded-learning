#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node {
    int data;
    struct node *next;
};

int insert_head(struct node **head, int value) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return -1;
    }
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
    return 0;
}
int insert_tail(struct node **head, int value) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return -1;
    }
    new_node->data = value;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return 0;
    }

    struct node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return 0;
}
int print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return 0;
}
int delete_value(struct node **head, int value) {
    struct node *current = *head;
    struct node *prev = NULL;

    while (current != NULL) {
        if (current->data == value) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return 0;
        }
        prev = current;
        current = current->next;
    }
    printf("Value %d not found in the list\n", value);
    return -1;
}
int delete_head(struct node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return -1;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
    return 0;
}
int delete_tail(struct node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return -1;
    }
    struct node *current = *head;
    struct node *prev = NULL;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;
    }
    free(current);
    return 0;
}
int free_list(struct node **head) {
    struct node *current = *head;
    struct node *next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
    return 0;
}
int main(void)
{
    struct node *head = NULL;
    insert_head(&head, 1);
    insert_tail(&head, 2);
    insert_tail(&head, 3);
    insert_tail(&head, 4);
    print_list(head);
    delete_value(&head, 2);
    print_list(head);
    delete_head(&head);
    print_list(head);
    delete_tail(&head);
    print_list(head);
    delete_head(&head);
    print_list(head);
    insert_tail(&head, 5);
    print_list(head);
    free_list(&head);
	printf("Hello\n");
	return 0;
}