#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
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
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}


void display() {
    struct node *temp = head;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void insert_node() {
    int choice = 1;

    while (choice == 1) {
        int value;
        printf("Enter value to insert: ");
        scanf("%d", &value);

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        printf("Do you want to insert another node? (1 = Yes / 0 = No): ");
        scanf("%d", &choice);
    }
}


void delete_node() {
    int value;
    printf("Enter value to delete: ");
    scanf("%d", &value);

    struct node *temp = head, *prev = NULL;

    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }


    if (temp->data == value) {
        head = temp->next;
        free(temp);
        printf("Node deleted!\n");
        return;
    }


    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node deleted!\n");
}


int main() {
    int choice;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Create List\n");
        printf("2. Display\n");
        printf("3. Insert Node\n");
        printf("4. Delete Node\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert_node(); break;
            case 4: delete_node(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
