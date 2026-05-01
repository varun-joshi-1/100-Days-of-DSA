// Implement a Priority Queue using an array. An element with smaller value has higher priority.

#include <stdio.h>

#define MAX 1000

int pq[MAX];
int size = 0;

void insert(int x) {
    int i = size - 1;
    while (i >= 0 && pq[i] > x) {
        pq[i + 1] = pq[i];
        i--;
    }
    pq[i + 1] = x;
    size++;
}

void delete() {
    if (size == 0) return;
    for (int i = 1; i < size; i++) {
        pq[i - 1] = pq[i];
    }
    size--;
}

int peek() {
    if (size == 0) return -1;
    return pq[0];
}

int main() {
    int n, x;
    scanf("%d", &n);

    while (n--) {
        int op;
        scanf("%d", &op);

        if (op == 1) {
            scanf("%d", &x);
            insert(x);
        } else if (op == 2) {
            delete();
        } else if (op == 3) {
            printf("%d\n", peek());
        }
    }

    return 0;
}