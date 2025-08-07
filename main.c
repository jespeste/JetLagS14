#include <stdio.h>
#include "graph.h"
#include "algorithms.h"

struct Station stationNames[V] = {
    {0,"Chaebon"},
    {1, "Busan"},
    {2, "Seoul"},
    {3, "Daedogeku"}
};

// These are all the edges. Change this for number of edges.
int lines[5][3] = {
    {0,1,100},
    {0,2,100},
    {1,3,100},
    {1,2,0},
    {2,3,0},
};

int stationsOnlyNumbers[V] = {0,1,2,3};

int main() { 
    int stations[V][V] = {0};
    
    int number_connections = sizeof(lines) / sizeof(lines[0]);

    for (int i = 0; i < number_connections; i++){
        addEdge(stations, lines[i][0], lines[i][1], lines[i][2]);
    };

    printf("adjacency matrix  representation\n");
    displayStations(stations);

    int path[V];     

    
    bool visited[V] = {false};
    
    DFS(stations, visited, 0);
    
    printf("DFS ran above, did it work?\n");

    int pairCount = V * (V-1) / 2;
    int pairs[pairCount][2];

    allStationPairs(stationsOnlyNumbers, V, pairs);

    for (int i = 0; i < pairCount; i++) {
        printf("Pair %d: (%d, %d)\n", i, pairs[i][0], pairs[i][1]);
    }

    return 0;
}
