

// brutev froce 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxProfit=0;
    for(int i=0; i<prices.size()-1; i++){
        for(int j=i+1; j<prices.size(); j++){
            if(prices[i]<prices[j]){
                profit=prices[j]-prices[i];

                if(profit>maxProfit){
                    maxProfit=profit;
                }

            }
        }



    }
    return maxProfit;
    }
};


// Optimal by DP

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0;
        int mini=prices[0];
        
        for(int i=1; i<prices.size(); i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini, prices[i]);


        }
        return profit;
    }
};

