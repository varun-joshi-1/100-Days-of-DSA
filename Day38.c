// Deque (Double-Ended Queue)

#include <stdio.h>

#define MAX 1000

int dq[MAX];
int front = -1, rear = -1;

int empty() {
    return front == -1;
}

int size() {
    if (empty()) return 0;
    return rear - front + 1;
}

void push_front(int x) {
    if (front == 0 && rear == MAX - 1) return;

    if (empty()) {
        front = rear = 0;
    } else {
        for (int i = rear + 1; i > front; i--) {
            dq[i] = dq[i - 1];
        }
        dq[front] = x;
        rear++;
        return;
    }

    dq[front] = x;
}

void push_back(int x) {
    if (rear == MAX - 1) return;

    if (empty()) {
        front = rear = 0;
    } else {
        rear++;
    }

    dq[rear] = x;
}

void pop_front() {
    if (empty()) return;

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void pop_back() {
    if (empty()) return;

    if (front == rear) {
        front = rear = -1;
    } else {
        rear--;
    }
}

int get_front() {
    if (empty()) return -1;
    return dq[front];
}

int get_back() {
    if (empty()) return -1;
    return dq[rear];
}

void clear() {
    front = rear = -1;
}

void reverse() {
    if (empty()) return;

    int i = front, j = rear;
    while (i < j) {
        int t = dq[i];
        dq[i] = dq[j];
        dq[j] = t;
        i++;
        j--;
    }
}

void sort() {
    for (int i = front; i <= rear; i++) {
        for (int j = i + 1; j <= rear; j++) {
            if (dq[i] > dq[j]) {
                int t = dq[i];
                dq[i] = dq[j];
                dq[j] = t;
            }
        }
    }
}

int main() {
    push_back(10);
    push_back(5);
    push_front(20);
    push_back(15);

    printf("%d\n", get_front());
    printf("%d\n", get_back());
    printf("%d\n", size());

    reverse();
    printf("%d\n", get_front());

    sort();
    printf("%d\n", get_front());

    clear();
    printf("%d\n", empty());

    return 0;
}