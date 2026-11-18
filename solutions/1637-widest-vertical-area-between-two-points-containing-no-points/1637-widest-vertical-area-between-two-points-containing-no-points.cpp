#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xCoords;
        xCoords.reserve(points.size());
        
        for (const auto& point : points) {
            xCoords.push_back(point[0]);
        }
        sort(xCoords.begin(), xCoords.end());
        int maxWidth = 0;
        
        for (size_t i = 1; i < xCoords.size(); ++i) {
            maxWidth = max(maxWidth, xCoords[i] - xCoords[i - 1]);
        }
        return maxWidth;
    }
};
