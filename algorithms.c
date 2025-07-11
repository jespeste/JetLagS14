#include <stdio.h>
#include "algorithms.h"

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
