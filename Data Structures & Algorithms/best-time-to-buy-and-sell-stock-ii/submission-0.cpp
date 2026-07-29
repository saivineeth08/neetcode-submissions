class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int i=0,j=1,sum=0;
       while(j<prices.size()){
            if(prices[j]>prices[i]){
                sum+=(prices[j]-prices[i]);
                i=j;
                j++;
            }
            else{
                i=j;
                j++;
            }
       }
       return sum;
    }
};