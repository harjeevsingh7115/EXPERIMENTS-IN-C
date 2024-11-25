#include <stdio.h>
#include <stdlib.h>

// Definition of a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Recursive function to delete a linked list
void deleteList(struct Node* head) {
    if (head == NULL)
        return; // Base case: list is empty

    deleteList(head->next); // Recursive call to delete the rest of the list
    printf("Deleting node with data: %d\n", head->data);
    free(head); // Free the current node
}

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating a simple linked list: 1 -> 2 -> 3 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printf("Deleting the linked list:\n");
    deleteList(head);

    return 0;
}
