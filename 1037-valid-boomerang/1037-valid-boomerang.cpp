class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        if(points.size() != 3)
			return false;
        return ((points[1][1] - points[0][1]) * (points[2][0] - points[0][0])) != ((points[2][1] - points[0][1]) * (points[1][0] - points[0][0]));
    }
};