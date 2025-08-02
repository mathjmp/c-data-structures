#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct node {
    int data;
    node *left;
    node *right;
} node;

void in_order_traversal(node*);
void pre_order_traversal(node *);
void post_order_traversal(node *);
node* create_node(int);
node* insert_left(node*, int);
node* insert_right(node*, int);

#endif