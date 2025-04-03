#include <iostream>
#include <vector>
#include "../solutions/solution.cpp" // Include the implementation file

void testCase(std::vector<std::vector<int>>& points, int expected, int testCaseNumber, int& passed, int& failed) {
    Solution sol;
    int result = sol.minTimeToVisitAllPoints(points);

    std::cout << "Test case " << testCaseNumber << ": Expected = " << expected << ", Actual = " << result << std::endl;

    if (result == expected) {
        std::cout << "Test case " << testCaseNumber << " pass" << std::endl;
        passed++;
    } else {
        std::cout << "Test case " << testCaseNumber << " fail" << std::endl;
        failed++;
    }
}

int main() {
    int passed = 0, failed = 0;

    std::vector<std::vector<int>> points1 = {{0, 0}};
    testCase(points1, 0, 1, passed, failed);

    std::vector<std::vector<int>> points2 = {{0, 0}, {1000, 1000}};
    testCase(points2, 1000, 2, passed, failed);

    std::vector<std::vector<int>> points3 = {{0, 0}, {5, 0}, {10, 0}};
    testCase(points3, 10, 3, passed, failed);

    std::vector<std::vector<int>> points4 = {{0, 0}, {0, 5}, {0, 10}};
    testCase(points4, 10, 4, passed, failed);

    std::vector<std::vector<int>> points5 = {{-1000, -1000}, {1000, 1000}, {2000, 2000}};
    testCase(points5, 3000, 5, passed, failed);

    std::vector<std::vector<int>> points6 = {{5, 5}, {5, 5}, {5, 5}};
    testCase(points6, 0, 6, passed, failed);

    std::vector<std::vector<int>> points7 = {{-5, -5}, {-3, -3}, {0, 0}};
    testCase(points7, 5, 7, passed, failed);

    std::vector<std::vector<int>> points8 = {{0, 0}, {10, 0}, {10, 10}, {0, 10}};
    testCase(points8, 30, 8, passed, failed);

    std::vector<std::vector<int>> points9 = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
    testCase(points9, 3, 9, passed, failed);

    std::vector<std::vector<int>> points10 = {{0, 0}};
    for (int i = 1; i < 1000; ++i) {
        points10.push_back({i, 0});
    }
    testCase(points10, 999, 10, passed, failed);

    std::cout << "\nTest cases passed: " << passed << std::endl;
    std::cout << "Test cases failed: " << failed << std::endl;
}
