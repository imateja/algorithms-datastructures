class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int res=0;

        set<int> setnum;
        set<int> starts;
        for(int i=0;i<n;i++)
            setnum.insert(nums[i]);
        for(int i=0;i<n;i++) {
            if(setnum.find(nums[i]-1)==setnum.end())
            starts.insert(nums[i]);
        }

        for(int i=0; i<n;i++) {
            int num=nums[i];
            int curr=0;
            if(starts.find(num)!=starts.end()) {
                while(setnum.find(num)!=setnum.end()) {
                    curr++;
                    res = max(res,curr);
                    num++;
                }
            }
        }


        return res;

    }
};
