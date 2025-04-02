import sys
import os
from typing import List

# Ensure Python can find the solutions directory
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '../solutions')))

from min_time_to_visit_all_points import Solution

def test_case(points: List[List[int]], expected: int, test_number: int, passed: list, failed: list):
    sol = Solution()
    result = sol.minTimeToVisitAllPoints(points)
    print(f"Test case {test_number}: Expected = {expected}, Actual = {result}")
    if result == expected:
        print(f"Test case {test_number} ✅ PASS")
        passed.append(1)
    else:
        print(f"Test case {test_number} ❌ FAIL")
        failed.append(1)

def run_tests():
    passed, failed = [], []

    test_cases = [
        ([[0, 0]], 0),
        ([[0, 0], [1000, 1000]], 1000),
        ([[0, 0], [5, 0], [10, 0]], 10),
        ([[0, 0], [0, 5], [0, 10]], 10),
        ([[-1000, -1000], [1000, 1000], [2000, 2000]], 3000),
        ([[5, 5], [5, 5], [5, 5]], 0),
        ([[-5, -5], [-3, -3], [0, 0]], 5),
        ([[0, 0], [10, 0], [10, 10], [0, 10]], 30),
        ([[1, 1], [2, 2], [3, 3], [4, 4]], 3),
        ([[i, 0] for i in range(1000)], 999),
    ]

    for i, (points, expected) in enumerate(test_cases, start=1):
        test_case(points, expected, i, passed, failed)

    print(f"\n✅ Passed: {len(passed)} | ❌ Failed: {len(failed)}")

if __name__ == "__main__":
    run_tests()
