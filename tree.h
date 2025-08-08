#ifndef TREE_H
#define TREE_H

#include <stdbool.h>
#include "graph.h"

typedef struct TreeNode {
    int vertex;
    struct TreeNode *parent;
    struct TreeNode *first_child;
    struct TreeNdoe *next_child;
} TreeNode;

TreeNode* createNode(int vertex);

void addChild(TreeNode *parent, TreeNode *child);

TreeNode* build_dfs_tree(int stations[][V], int start);

void free_tree(TreeNode *root);

#endif
