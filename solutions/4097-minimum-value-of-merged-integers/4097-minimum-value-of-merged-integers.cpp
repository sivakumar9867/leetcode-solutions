class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int minvalue=INT_MAX;
        for(int i=0;i<n-1;i+=2){
            int digits = 0;
            int temp = nums[i+1];

            while(temp > 0) {
                digits++;
                temp /= 10;
            
            }
            int one = nums[i] * pow(10, digits) + nums[i+1];
            minvalue=min(minvalue,one);
            
        
        }
        return minvalue;
        
    }
};