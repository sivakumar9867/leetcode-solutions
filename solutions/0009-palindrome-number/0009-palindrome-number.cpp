class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long reverse=0;
        int digit=0;
        if(x<0){
            return false;
        }
        while(num!=0){
            digit=num%10;
            reverse=reverse*10+digit;
            num=num/10;
        }
        return x == reverse;
        

        
    }
};