


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void create() {
    int value;

    printf("Enter values (-1 to stop):\n");

    while (1) {
        scanf("%d", &value);

        if (value == -1) {
            break;
        }

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
}

void display() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Doubly Linked List (Forward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void display_reverse() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("Doubly Linked List (Reverse): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    create();
    display();
    display_reverse();
    return 0;
}
