class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int l=0,r=1;
        while(r<prices.size()) {
            if(prices[r] - prices[l]>0) {
                res = max(res,prices[r]-prices[l]);
                r++;
            }
            else {
                l=r;
                r++;
            }
        }


        return res;
    }
};
