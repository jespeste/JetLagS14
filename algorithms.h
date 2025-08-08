#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "graph.h"
void allStationPairs(int stations[], int numStations, int pairs[][2]);

int distanceCalculation(int station1, int station2, int path[V]);
void DFS(int stations[V][V], bool visited[], int start, int path[V], int* counter);
#endif
