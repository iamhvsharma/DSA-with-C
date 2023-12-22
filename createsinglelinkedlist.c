#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    ptr->data = value;
    ptr->next = NULL;
    return ptr;
}


// Main function for creating a linked list
int main() {
    // Creating nodes
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    return 0;
}
