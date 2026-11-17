class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end());
        int index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m){
                index=i;
                break;
            }
        }for(int i=0;i<nums.size();i++){
            if(nums[i]!=m && m<2*nums[i]){
                return -1;
            }
        }return index;
        
    }
};