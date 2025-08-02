#include <stdio.h>
#include "queue/queue.c"

int main() {

    int capacity = 5;
    queue *queue = new_queue(capacity);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    dequeue(queue);
    enqueue(queue, 60);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    enqueue(queue, 100);
    enqueue(queue, 200);
    enqueue(queue, 300);
    show_queue(queue);
}