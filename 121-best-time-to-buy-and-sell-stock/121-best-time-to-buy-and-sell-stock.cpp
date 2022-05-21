class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int pro=0;
        int ibuy=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>ibuy){
                pro=max(pro,prices[i]-ibuy);
            }
            else{
                ibuy=min(ibuy,prices[i]);
            }
        }
        return pro;
    }
};