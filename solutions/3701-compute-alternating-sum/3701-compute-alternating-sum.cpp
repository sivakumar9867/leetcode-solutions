class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int oddsum=0;
        int evensum=0;
        int size=nums.size();
        if(size==1){
            return nums[0];
        }
        for(int i=0;i<size;i+=2){
            evensum+=nums[i];
        }
        for(int i=1;i<size;i+=2){
            oddsum+=nums[i];
        }
        int sum=evensum-oddsum;
        return sum;
        
    }
};