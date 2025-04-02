#include <stdio.h>
#include <stdlib.h>
//commit
int max(int a, int b) {
    return (a > b) ? a : b;
}

int minTimeToVisitAllPoints(int points[][2], int size) {
    int time = 0;
    for (int i = 1; i < size; i++) {
        int dx = abs(points[i][0] - points[i - 1][0]);
        int dy = abs(points[i][1] - points[i - 1][1]);
        time += max(dx, dy);
    }
    return time;
}
