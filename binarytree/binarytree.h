#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node;

node* new_node(int data);
void in_order_traversal(node*);
void pre_order_traversal(node*);
void post_order_traversal(node*);
node* insert_left(node*, int);
node* insert_right(node*, int);

#endif