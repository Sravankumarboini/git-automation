package tests;  // Add this line

import solutions.Solution;  // Ensure the solution is correctly imported

public class Test {
    public static void testCase(int[][] points, int expected, int testCaseNumber, int[] results) {
        Solution sol = new Solution();
        int result = sol.minTimeToVisitAllPoints(points);
        System.out.println("Test case " + testCaseNumber + ": Expected = " + expected + ", Actual = " + result);
        if (result == expected) {
            System.out.println("Test case " + testCaseNumber + " ✅ PASS");
            results[0]++;
        } else {
            System.out.println("Test case " + testCaseNumber + " ❌ FAIL");
            results[1]++;
        }
    }

    public static void main(String[] args) {
        int[] results = {0, 0}; // [Passed, Failed]

        int[][][] testCases = {
            {{0, 0}}, // Expected: 0
            {{0, 0}, {1000, 1000}}, // Expected: 1000
            {{0, 0}, {5, 0}, {10, 0}}, // Expected: 10
            {{0, 0}, {0, 5}, {0, 10}}, // Expected: 10
            {{-1000, -1000}, {1000, 1000}, {2000, 2000}}, // Expected: 3000
            {{5, 5}, {5, 5}, {5, 5}}, // Expected: 0
            {{-5, -5}, {-3, -3}, {0, 0}}, // Expected: 5
            {{0, 0}, {10, 0}, {10, 10}, {0, 10}}, // Expected: 30
            {{1, 1}, {2, 2}, {3, 3}, {4, 4}}, // Expected: 3
        };

        int[] expectedResults = {0, 1000, 10, 10, 3000, 0, 5, 30, 3};

        for (int i = 0; i < testCases.length; i++) {
            testCase(testCases[i], expectedResults[i], i + 1, results);
        }

        System.out.println("\n✅ Passed: " + results[0] + " | ❌ Failed: " + results[1]);
    }
}
