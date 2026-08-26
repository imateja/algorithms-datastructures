class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxA=0;
        while(l<r) {

            int left=heights[l], right = heights[r];
            int area=min(left,right)*(r-l);

            maxA = max(maxA,area);

            if(left<=right) l++;
            else r--;
        }

        return maxA;
    }
};
