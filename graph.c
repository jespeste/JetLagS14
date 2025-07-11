#include <stdio.h>

// Number of vertices
// Seem to be 31 of them
#define V 4

struct Station {
    int number;
    char name[20]; // Name of the Station
};

struct Line {
    int from;
    int to;
    int weight;
};

// Weight is the number of km between nodes
void addEdge(int stations[V][V], int  i, int j, int weight) {
    stations[i][j] = weight;
    stations[j][i] = weight;
}

void displayStations(int stations[V][V]){
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            printf("%d ", stations[i][j]);
        }
        printf("\n");
    }
}
