#include <stdio.h>
#include "minTimeToVisitAllPoints.c"

void testCase(int points[][2], int size, int expected, int testCaseNumber, int* passed, int* failed) {
    int result = minTimeToVisitAllPoints(points, size);
    printf("Test Case %d: Expected = %d, Actual = %d\n", testCaseNumber, expected, result);
    
    if (result == expected) {
        printf("Test Case %d PASS\n", testCaseNumber);
        (*passed)++;
    } else {
        printf("Test Case %d FAIL\n", testCaseNumber);
        (*failed)++;
    }
}

int main() {
    int passed = 0, failed = 0;

    int points1[][2] = {{0, 0}};
    testCase(points1, 1, 0, 1, &passed, &failed);

    int points2[][2] = {{0, 0}, {1000, 1000}};
    testCase(points2, 2, 1000, 2, &passed, &failed);

    int points3[][2] = {{0, 0}, {5, 0}, {10, 0}};
    testCase(points3, 3, 10, 3, &passed, &failed);

    printf("\nTest cases passed: %d\n", passed);
    printf("Test cases failed: %d\n", failed);

    return 0;
}
