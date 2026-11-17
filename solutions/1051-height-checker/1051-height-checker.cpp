class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int dnm=0;
        vector<int> newarr=heights;
        sort(heights.begin(),heights.end());
        for(int i=0;i<n;i++){
            if(newarr[i]!=heights[i]){
                dnm++;
            }

        }
        return dnm;

        
    }
};