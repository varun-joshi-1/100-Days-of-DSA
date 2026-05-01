// Implement push and pop operations on a stack and verify stack operations.

#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) return;
    stack[++top] = x;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int peek() {
    if (top == -1) return -1;
    return stack[top];
}

void display() {
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n, x, op;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &op);

        if (op == 1) {
            scanf("%d", &x);
            push(x);
        } else if (op == 2) {
            printf("%d\n", pop());
        } else if (op == 3) {
            printf("%d\n", peek());
        }
    }

    display();

    return 0;
}