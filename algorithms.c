#include <stdio.h>
#include "algorithms.h"
#include "graph.h"

// This will implement the algorithms we will test on the graph.
// They will be run in the main file.

void allStationPairs(int stations[], int numStations, int pairs[][2]) {
    int index = 0;
    
    for (int i=0; i < numStations; i++){
        for (int j=i+1; j < numStations; j++){
            pairs[index][0] = stations[i];
            pairs[index][1] = stations[j];
            index++;
        }
    }
}

// Takes in the stations
void DFS(int stations[V][V], bool visited[V], int start){
    // No clue how I implement this, we will try though
    
    printf("%d", start);

    visited[start] = true;

    for (int i=0; i < V; i++){
        if (stations[start][i] > 0 && (!visited[i])) {
            DFS(stations, visited, i);
        }
    }
}
