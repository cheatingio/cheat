#include <stdio.h>
#include <stdlib.h>

// Node structure for a doubly linked list
struct DoublyNode {
    int data;
    struct DoublyNode* prev;
    struct DoublyNode* next;
};

// Function to create a new doubly node
struct DoublyNode* createDoublyNode(int data) {
    struct DoublyNode* newNode = (struct DoublyNode*)malloc(sizeof(struct DoublyNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the doubly linked list
void insertAtBeginningDoubly(struct DoublyNode** head, int data) {
    struct DoublyNode* newNode = createDoublyNode(data);
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Function to print the doubly linked list (forward)
void printDoublyLinkedListForward(struct DoublyNode* head) {
    struct DoublyNode* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct DoublyNode* head = NULL;

    insertAtBeginningDoubly(&head, 30);
    insertAtBeginningDoubly(&head, 20);
    insertAtBeginningDoubly(&head, 10);

    printf("Doubly Linked List (Forward): ");
    printDoublyLinkedListForward(head);

    return 0;
}
