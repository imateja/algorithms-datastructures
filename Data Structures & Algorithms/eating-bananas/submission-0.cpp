class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r = *max_element(piles.begin(), piles.end());
        int res=r;
        while(l<=r) {
            int mid = l + (r-l)/2;
            int totalhours = 0;

            for(int pile : piles) {
                totalhours+=ceil((double)pile / mid);
            }
            if(totalhours<=h) {
                r = mid-1;
                res=mid;
            }
            else {
                l = mid+1;
            }
        }

        return res;
    }
};
