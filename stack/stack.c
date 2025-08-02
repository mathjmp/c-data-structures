#include "stack.h"

struct stack* new_stack(int capacity) {

    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->capacity = capacity;
    s->length = 0;
    s->data = (int *) malloc(capacity * sizeof(int));
    return s;
}

void push(struct stack *stack, int element) {

    if (is_full(stack)) {
        printf("stack is full\n");
        return;
    }

    stack->data[stack->length] = element;
    stack->length += 1;
}

int pop(struct stack *stack) {

    if (is_empty(stack)) {
        printf("stack is empty\n");
        return -1;
    }

    int index = stack->length - 1;
    int element = stack->data[index];
    stack->data[index] = 0;
    stack->length -= 1;

    return element;
}

int is_empty(struct stack *stack) {

    return stack->length == 0;
}

int is_full(struct stack *stack) {

    return stack->length == stack->capacity;
}