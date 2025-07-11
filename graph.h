#ifndef GRAPH_H
#define GRAPH_H

#define V 4

struct Station {
    int number;
    char name[20];
};

// Declare functions you want to use in main.c
void addEdge(int stations[V][V], int i, int j, int weight);
void displayStations(int stations[V][V]);

#endif
