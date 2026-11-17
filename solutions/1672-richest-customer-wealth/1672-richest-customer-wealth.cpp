class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int size=accounts.size();
        int max=0;
        for(int i=0;i<size;i++){
            int sum=0;
            for(int j=0;j<accounts[0].size();j++){
                
                sum+=accounts[i][j];
                if(sum>=max){
                    max=sum;
                    
                }
            }
        }
        return max;
        
    }
};