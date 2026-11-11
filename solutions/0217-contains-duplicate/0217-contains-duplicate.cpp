class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(int x:nums){
            if(dup.find(x)!=dup.end()){
                return true;
            }
            dup.insert(x);
        }return false;
    }
};