class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> ans1;
        vector<int> ans2;

        for(int x:nums1){
            set1.insert(x);
        }
        for(int x:nums2){
            set2.insert(x);
        }
        for(int x:set1){
            if(set2.find(x)==set1.end()){
                ans1.push_back(x);
            }
        }for(int x:set2){
            if(set1.find(x)==set2.end()){
                ans2.push_back(x);
            }
        }
        return {ans1,ans2};


        
    }
};