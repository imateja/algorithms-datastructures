class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        int index=-1;

        while(l<=r) {
            int mid = l + (r-l)/2;
            if(nums[mid]==target) {
                index=mid;
                break;
            }
            else if(nums[l] <= nums[mid]) {
                if(target<nums[mid] && target>=nums[l])
                    r=mid-1;
                else if(target<=nums[mid] && target>nums[l]) {
                    l=mid+1;
                }
                else { // target>nums[mid]
                    l=mid+1;
                }
            }
            else { // nums[l] > nums[mid]
            //678945
                if(target>nums[mid] && target<=nums[r]) {
                    l=mid+1;
                }
                else{
                    r=mid-1;
                 }
            }
        }




        return index;
    }
};
