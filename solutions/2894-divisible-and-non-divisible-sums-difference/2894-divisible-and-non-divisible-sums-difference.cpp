class Solution {
public:
    int differenceOfSums(int n, int m) {
        int by3=0,notby3=0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                by3+=i;
            }
            else{
                notby3+=i;
            }

        }
        return notby3-by3;
        
    }
};