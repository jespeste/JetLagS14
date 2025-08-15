#include "tree.h"
#include <stdlib.h>
#include "graph.h"

TreeNode* createNode(int vertex){
    TreeNode *node = malloc(sizeof(TreeNode));

    node->vertex = vertex;
    node->parent = NULL;
    node->first_child = NULL;
    node->next_sibling = NULL;
    return node;
}

void addChild(TreeNode *parent, TreeNode *child){
    if (parent->first_child == NULL){
        parent->first_child = child;
    } else {
        TreeNode *current = parent->first_child;
        while (current->next_sibling != NULL) {
            current = current->next_sibling;
        }
        current->next_sibling = child;
    }
    child->next_sibling = NULL;
}

TreeNode* buld_dfs_tree(int stations[][V], int start){
    // Need to figure out how to build the dfs tree from a starting node.
    // This can done using part of what I have already written in the simple DFS
    return NULL;
}
void free_tree(TreeNode *root){
    if (root==NULL) return;

    TreeNode *child = root->first_child;

    while (child != NULL){
        TreeNode *next = child->next_sibling;
        free_tree(child);
        child = next;
    }

    free(root);
}
