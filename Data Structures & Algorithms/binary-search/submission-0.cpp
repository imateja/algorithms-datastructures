class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int index=-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(target==nums[mid]) {
                index=mid;
                break;
            }
            else if(nums[mid]>target) {
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }

        return index;
    }
};
