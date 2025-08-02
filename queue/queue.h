#ifndef QUEUE_H
#define QUEUE_H


typedef struct queue {
    int top;
    int bottom;
    int capacity;
    int *data;
} queue;

queue* new_queue(int length);
void enqueue(queue *queue, int element);
int dequeue(queue *queue);
int is_full(queue *queue);
int is_empty(queue *queue);
void show_queue(queue *queue);

#endif