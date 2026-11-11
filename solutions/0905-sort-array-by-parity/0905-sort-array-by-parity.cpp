class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> newarray(n);
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                newarray[index]=nums[i];
                index++;
            }

        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                newarray[index]=nums[i];
                index++;
            }

        }return newarray;
        
    }
};