class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> freq;
        int twice =-1,missing=-1;
        for(int x:nums){
            freq[x]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==2){
                twice=i;
            }
            if(freq[i]==0){
                missing=i;
            }
        }return {twice,missing};
    }
};