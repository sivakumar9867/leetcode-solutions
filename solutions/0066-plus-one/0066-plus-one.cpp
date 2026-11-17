class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        vector<int> newarr(digits.size()+1);
        newarr[0]=1;
        digits=newarr;
        return digits;
        
    }
};