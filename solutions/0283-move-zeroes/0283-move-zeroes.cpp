class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        for(int i=0;i<nums.size();i++){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                right++;
                left++;
            }
            else if(nums[right]==0){
                right++;
                
            }
        }
        
    }
};