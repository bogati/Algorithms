// Leetcode 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = INT_MIN; 
        if(prices.size()==0){return 0;}
        for(int i=0; i<prices.size(); i++){
            for(int j=i; j<prices.size(); j++){
                int temp_max = prices[j] - prices[i];
                if(temp_max > profit){
                    profit = temp_max; 
                }
                
            } //end of inner for 
        } //end of outer for 
        return profit==INT_MIN  ? 0 : profit;
    }
};
