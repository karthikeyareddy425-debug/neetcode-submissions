class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,p=0,min,n=prices.size();
        min = prices[0];
        for(i=1;i<n;i++){
            if(min > prices[i]){
                min = prices[i];
            }
            if(prices[i] - min > p){
                p = prices[i] - min;
            }
        }
        return p;
    }
};
