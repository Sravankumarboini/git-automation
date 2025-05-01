#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    //code here 
    int totalTime = 0;
    
    for (int i = 0; i < pointsSize - 1; ++i) {
        int xDiff = abs(points[i+1][0] - points[i][0]);
        int yDiff = abs(points[i+1][1] - points[i][1]);
        totalTime += (xDiff > yDiff) ? xDiff : yDiff;
    }
    return totalTime;
}

