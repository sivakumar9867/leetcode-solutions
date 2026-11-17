class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],diff=0,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            diff=prices[i]-min;
            if(diff>profit){
                profit=diff;
            }
        }
        return profit;
        
    }
};