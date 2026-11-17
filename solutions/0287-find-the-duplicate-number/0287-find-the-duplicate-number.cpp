class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(int x:nums){
            if(dup.find(x)!=dup.end()){
                return x;
            }
            dup.insert(x);
        }return -1;
        
    }
};