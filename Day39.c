// Implement a Min Heap using an array where the smallest element is always at the root.

#include <stdio.h>

#define MAX 1000

int heap[MAX];
int size = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapifyUp(int i) {
    int parent = (i - 1) / 2;
    if (i > 0 && heap[i] < heap[parent]) {
        swap(&heap[i], &heap[parent]);
        heapifyUp(parent);
    }
}

void heapifyDown(int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;

    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapifyDown(smallest);
    }
}

void insert(int x) {
    heap[size] = x;
    heapifyUp(size);
    size++;
}

int extractMin() {
    if (size <= 0) return -1;

    int root = heap[0];
    heap[0] = heap[--size];
    heapifyDown(0);

    return root;
}

void display() {
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        insert(x);
    }

    display();
    printf("%d\n", extractMin());
    display();

    return 0;
}