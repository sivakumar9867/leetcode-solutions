class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<int> sorted = score;
        sort(sorted.rbegin(), sorted.rend());

        vector<string> ans(n);

        for(int i = 0; i < n; i++) {
            int rank = find(sorted.begin(), sorted.end(), score[i]) - sorted.begin();

            if(rank == 0)
                ans[i] = "Gold Medal";
            else if(rank == 1)
                ans[i] = "Silver Medal";
            else if(rank == 2)
                ans[i] = "Bronze Medal";
            else
                ans[i] = to_string(rank + 1);
        }

        return ans;
    }
};