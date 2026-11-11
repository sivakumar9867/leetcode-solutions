class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long totalsum=(n*n+n)/2;
        int sum=0;
        for(int x:nums){
            sum+=x;
        }

        return totalsum-sum;
    }
};