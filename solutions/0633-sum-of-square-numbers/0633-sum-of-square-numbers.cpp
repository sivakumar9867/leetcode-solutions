class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0;
        long long r=sqrt(c);
        while(l<=r){
            long long sum=l*l+r*r;
            if(c==sum){
                return true;
            }else if(c>sum){
                l++;
            }else{
                r--;
            }
        }return false;
        
    }
};