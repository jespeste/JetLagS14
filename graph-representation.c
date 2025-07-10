#include <stdio.h>

// Number of vertices
#define V 4

void addEdge(int mat[V][V], int  i, int j, int weight) {
    mat[i][j] = weight;
    mat[j][i] = weight;
}

void displayMatrix(int mat[V][V]) {
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[V][V] = {0};

    addEdge(mat, 0, 1, 1);
    addEdge(mat, 0, 2, 2);
    addEdge(mat, 1, 2, 2);
    addEdge(mat, 2, 3, 1);

    printf("adjacency matrix  representation\n");
    displayMatrix(mat);

    return 0;
}
