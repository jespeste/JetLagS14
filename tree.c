#include "tree.h"
#include <stdlib.h>
#include "graph.h"

TreeNode* createNode(int vertex){
    TreeNode *node = malloc(sizeof(TreeNode));

    node->vertex = vertex;
    node->parent = NULL;
    node->first_child = NULL;
    node->next_child = NULL;
    return node;
}
