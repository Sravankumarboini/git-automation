#include <vector>
#include <algorithm>
#include <cmath> //commit

class Solution {
public:
    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
        int time = 0;

        for (size_t i = 1; i < points.size(); i++) {
            int x1 = points[i - 1][0], y1 = points[i - 1][1];
            int x2 = points[i][0], y2 = points[i][1];

            int dx = std::abs(x2 - x1);
            int dy = std::abs(y2 - y1);

            time += std::max(dx, dy);
        }

        return time;
    }
}
