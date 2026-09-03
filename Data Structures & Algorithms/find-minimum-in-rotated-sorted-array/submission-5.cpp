class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0, r = nums.size()-1;
        int res = nums[r];
        while(l<=r) {
            int mid = l + (r-l)/2;
            int contender = nums[mid];

            if(contender<res) {
                res=contender;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }


        return res;
    }
};
