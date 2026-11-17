#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();        
        vector<int> rank(n + 1);
        for (int i = 0; i < n; ++i) {
            rank[order[i]] = i;
        }
        sort(friends.begin(), friends.end(), [&](int a, int b) {
            return rank[a] < rank[b];
        });
        
        return friends;
    }
};
