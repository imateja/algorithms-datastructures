class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea=0;

        stack<pair<int,int>>stek;
        for(int i=0; i<heights.size(); i++) {
            int pom=-1;
            while(!stek.empty() && heights[i]<stek.top().second) {
                int area = stek.top().second*(i - stek.top().first);
                maxArea=max(area,maxArea);
                pom=stek.top().first;
                stek.pop();
            }
            if(pom!=-1) {
                stek.push({pom,heights[i]});
            }
            else {
                stek.push({i,heights[i]});
            }
        }
        //final check for those still left in stack
        while(!stek.empty()) {
            pair<int,int> curr = stek.top();
            stek.pop();

            int area = (heights.size() - curr.first)*curr.second;
            maxArea = max(area,maxArea);
        }

        return maxArea;
    }
};
