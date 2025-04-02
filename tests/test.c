#include <stdio.h>
#include <stdlib.h>
#include "../solutions/solution.c"
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

    // Test Case 1: Single point (no movement)
    int points1[][2] = {{0, 0}};
    int* p1[] = {points1[0]};
    int colSize1 = 2;
    runTest(p1, 1, &colSize1, 0, 1, &passed, &failed);

    // Test Case 2: Large diagonal move
    int points2[][2] = {{0, 0}, {1000, 1000}};
    int* p2[] = {points2[0], points2[1]};
    int colSize2 = 2;
    runTest(p2, 2, &colSize2, 1000, 2, &passed, &failed);

    // Test Case 3: Horizontal movement
    int points3[][2] = {{0, 0}, {5, 0}, {10, 0}};
    int* p3[] = {points3[0], points3[1], points3[2]};
    int colSize3 = 2;
    runTest(p3, 3, &colSize3, 10, 3, &passed, &failed);

    // Test Case 4: Vertical movement
    int points4[][2] = {{0, 0}, {0, 5}, {0, 10}};
    int* p4[] = {points4[0], points4[1], points4[2]};
    int colSize4 = 2;
    runTest(p4, 3, &colSize4, 10, 4, &passed, &failed);

    // Test Case 5: Large negative-to-positive movement
    int points5[][2] = {{-1000, -1000}, {1000, 1000}, {2000, 2000}};
    int* p5[] = {points5[0], points5[1], points5[2]};
    int colSize5 = 2;
    runTest(p5, 3, &colSize5, 3000, 5, &passed, &failed);

    // Test Case 6: No movement (repeated points)
    int points6[][2] = {{5, 5}, {5, 5}, {5, 5}};
    int* p6[] = {points6[0], points6[1], points6[2]};
    int colSize6 = 2;
    runTest(p6, 3, &colSize6, 0, 6, &passed, &failed);

    // Test Case 7: Negative coordinates
    int points7[][2] = {{-5, -5}, {-3, -3}, {0, 0}};
    int* p7[] = {points7[0], points7[1], points7[2]};
    int colSize7 = 2;
    runTest(p7, 3, &colSize7, 5, 7, &passed, &failed);

    // Test Case 8: Large rectangular movement
    int points8[][2] = {{0, 0}, {10, 0}, {10, 10}, {0, 10}};
    int* p8[] = {points8[0], points8[1], points8[2], points8[3]};
    int colSize8 = 2;
    runTest(p8, 4, &colSize8, 30, 8, &passed, &failed);

    // Test Case 9: Diagonal line movement
    int points9[][2] = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
    int* p9[] = {points9[0], points9[1], points9[2], points9[3]};
    int colSize9 = 2;
    runTest(p9, 4, &colSize9, 3, 9, &passed, &failed);

    // Test Case 10: Long sequence of points
    int points10[1000][2];
    for (int i = 0; i < 1000; i++) {
        points10[i][0] = i;
        points10[i][1] = 0;
    }
    int* p10[1000];
    for (int i = 0; i < 1000; i++) {
        p10[i] = points10[i];
    }
    int colSize10 = 2;
    runTest(p10, 1000, &colSize10, 999, 10, &passed, &failed);

    // Output the results
    printf("\nTest cases passed: %d\n", passed);
    printf("Test cases failed: %d\n", failed);

    return 0;
}
