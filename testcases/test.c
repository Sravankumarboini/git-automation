#include <stdio.h>
#include <stdlib.h>
#include "../solutions/minTimeToVisitAllPoints.c"

void runTest(int** points, int pointsSize, int* pointsColSize, int expected, int testCaseNumber, int* passed, int* failed) {
    int result = minTimeToVisitAllPoints(points, pointsSize, pointsColSize);
    printf("Test case %d: Expected = %d, Actual = %d\n", testCaseNumber, expected, result);
    
    if (result == expected) {
        printf("Test case %d passed ✅\n", testCaseNumber);
        (*passed)++;
    } else {
        printf("Test case %d failed ❌\n", testCaseNumber);
        (*failed)++;
    }
}

int main() {
    int passed = 0, failed = 0;

    // Test Case 1
    int points1[][2] = {{0, 0}};
    int* p1[] = {points1[0]};
    int colSize1 = 2;
    runTest(p1, 1, &colSize1, 0, 1, &passed, &failed);

    // Test Case 2
    int points2[][2] = {{0, 0}, {1000, 1000}};
    int* p2[] = {points2[0], points2[1]};
    int colSize2 = 2;
    runTest(p2, 2, &colSize2, 1000, 2, &passed, &failed);

    // Output the results
    printf("\nTest cases passed: %d\n", passed);
    printf("Test cases failed: %d\n", failed);

    return 0;
}
