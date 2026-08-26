class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int i=0, l=1,r;
        // -1 -1 -1 2 
        while(i<n-2) {
            if(i>0 && nums[i]==nums[i-1]) {
                i++;
                continue;
            }
            l=i+1;
            r=n-1;
            while(l<r) {
            if(nums[i]+nums[l]+nums[r]==0) {
                vector<int>tmp ={nums[i],nums[l],nums[r]};
                res.push_back(tmp);
                while(l<r && nums[l]==nums[l+1])
                    l++;
                while(r>l && nums[r]==nums[r-1])
                    r--;
                l++;
                r--;
            }
            else if(nums[i]+nums[l]+nums[r]>0) {
                r--;
            }
            else 
                l++;

            }

            i++;
        }


        return res;
        
    }
};
