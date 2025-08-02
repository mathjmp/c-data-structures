#ifndef STACK_H
#define STACK_H

typedef struct stack {
    int length;
    int capacity;
    int *data;
} stack;

struct stack* new_stack(int capacity);
void push(struct stack*, int element);
int pop(struct stack*);
int is_full(struct stack*);
int is_empty(struct stack*);

#endif