import sys
sys.path.insert(0, "../solutions")  # Ensure solutions/ is in the path

from solutions import Solution

def run_test_case(points, expected, test_case_number):
    sol = Solution()
    result = sol.minTimeToVisitAllPoints(points)

    print(f"Test case {test_case_number}: Expected = {expected}, Actual = {result}")
    if result == expected:
        print(f"Test case {test_case_number} ✅\n")
    else:
        print(f"Test case {test_case_number} ❌\n")

if __name__ == "__main__":
    run_test_case([[0, 0]], 0, 1)
    run_test_case([[0, 0], [1000, 1000]], 1000, 2)
    run_test_case([[0, 0], [5, 0], [10, 0]], 10, 3)
    run_test_case([[0, 0], [0, 5], [0, 10]], 10, 4)
    run_test_case([[-1000, -1000], [1000, 1000], [2000, 2000]], 3000, 5)
    run_test_case([[5, 5], [5, 5], [5, 5]], 0, 6)
    run_test_case([[-5, -5], [-3, -3], [0, 0]], 5, 7)
    run_test_case([[0, 0], [10, 0], [10, 10], [0, 10]], 30, 8)
    run_test_case([[1, 1], [2, 2], [3, 3], [4, 4]], 3, 9)

    # Large test case
    points = [[i, 0] for i in range(1000)]
    run_test_case(points, 999, 10)
