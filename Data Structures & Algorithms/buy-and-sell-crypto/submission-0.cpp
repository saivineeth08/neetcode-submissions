class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,maxi=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            else{
                int diff=prices[i]-mini;
                maxi=max(maxi,diff);
            }
        }
        return maxi;
    }
};