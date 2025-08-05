#include "binarytree.h"
#include <stdio.h>
#include <stdlib.h>

node* new_node(int data) {

    node *node = (struct node*) malloc(sizeof(node));
    node->data = data;
    return node;
}

void pre_order_traversal(node* node) {

    printf("%d\n", node->data);

    if (node->left != NULL) {
        pre_order_traversal(node->left);
    }

    if (node->right != NULL) {
        pre_order_traversal(node->right);
    }
}

void in_order_traversal(node *node) {

    if (node->left != NULL) {
        in_order_traversal(node->left);
    }

    printf("%d\n", node->data);

    if (node->right != NULL) {
        in_order_traversal(node->right);
    }
}

void post_order_traversal(node *node) {
   
    if (node->left != NULL) {
        post_order_traversal(node->left);
    }

    if (node->rigth != NULL) {
        post_order_traversal(node->right);
    }

    printf("%d\n", node->data);
}