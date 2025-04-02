package solutions;

public class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int time = 0;
        for (int i = 1; i < points.length; i++) {
            int x1 = points[i - 1][0], y1 = points[i - 1][1];
            int x2 = points[i][0], y2 = points[i][1];
            int dx = Math.abs(x2 - x1);
            int dy = Math.abs(y2 - y1);
            time += Math.max(dx, dy); // The diagonal move takes care of both x and y changes
        }
        return time;
    }
}
