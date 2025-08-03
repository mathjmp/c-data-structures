#include <stdio.h>
#include "queue/queue.c"
#include "binarytree/binarytree.c"

int main() {

    node *root = new_node(0);
    node *left = new_node(1);
    node *right = new_node(2);

    root->left = left;
    root->right = right;

    in_order_traversal(root);
}