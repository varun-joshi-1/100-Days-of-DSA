// Implement a Queue using a linked list supporting enqueue and dequeue operations.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node* temp = front;
    printf("%d\n", temp->data);
    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

int main() {
    int n, x, choice;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &choice);

        if (choice == 1) {
            scanf("%d", &x);
            enqueue(x);
        } else if (choice == 2) {
            dequeue();
        }
    }

    return 0;
}