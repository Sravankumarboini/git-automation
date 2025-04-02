import sys
sys.path.insert(0, '../solutions')  # Add solutions directory to path

from minTimeToVisitAllPoints import min_time_to_visit_all_points

def test_case(points, expected, test_number, passed, failed):
    result = min_time_to_visit_all_points(points)
    print(f"Test Case {test_number}: Expected = {expected}, Actual = {result}")

    if result == expected:
        print(f"Test Case {test_number} PASS")
        passed[0] += 1
    else:
        print(f"Test Case {test_number} FAIL")
        failed[0] += 1

def run_tests():
    passed, failed = [0], [0]

    test_case([[0, 0]], 0, 1, passed, failed)
    test_case([[0, 0], [1000, 1000]], 1000, 2, passed, failed)
    test_case([[0, 0], [5, 0], [10, 0]], 10, 3, passed, failed)

    print(f"\nTest cases passed: {passed[0]}")
    print(f"Test cases failed: {failed[0]}")

if __name__ == "__main__":
    run_tests()
