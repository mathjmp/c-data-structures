#include "queue.h"
#include <stdlib.h>

queue* new_queue(int capacity) {

    queue *queue = (struct queue *) malloc(sizeof(queue));
    queue->bottom = 0;
    queue->top = 0;
    queue->capacity = capacity;
    queue->data = (int *) malloc(capacity * sizeof(int));
}


void enqueue(queue *queue, int element) {

    if (is_full(queue)) {
        printf("queue is full\n");
        return;
    }

    int index = queue->top;
    int capacity = queue->capacity;
    queue->data[index % capacity] = element;
    queue->top += 1;
}

int dequeue(queue *queue) {

    if (is_empty(queue)) {
        printf("queue is empty\n");
        return -1;
    }

    int index = queue->bottom;
    int capacity = queue->capacity;
    int element = queue->data[index % capacity];
    queue->data[index] = 0;
    queue->bottom += 1;
    return element;
}

void show_queue(queue *queue) {

    int capacity = queue->capacity;
    for (int index = queue->bottom; index < queue->top; index++) {
        printf("[%d] ", queue->data[index % capacity]);
    }

    printf("\n");
}

int is_full(queue *queue) {
    return queue->top - queue->bottom == queue->capacity;
}

int is_empty(queue *queue) {
    return queue->top == queue->bottom;
}