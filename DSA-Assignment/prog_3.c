#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert at end
struct Node* insertEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Normal traversal
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Reverse traversal using recursion
void reverseTraversal(struct Node* head) {
    if (head == NULL)
        return;

    reverseTraversal(head->next);  // Go to last node
    printf("%d -> ", head->data);  // Print while returning
}

int main() {
    struct Node* head = NULL;

    // Creating list: 10 → 20 → 30 → 40
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);

    printf("Normal Traversal:\n");
    display(head);

    printf("Reverse Traversal:\n");
    reverseTraversal(head);
    printf("NULL\n");

    return 0;
}