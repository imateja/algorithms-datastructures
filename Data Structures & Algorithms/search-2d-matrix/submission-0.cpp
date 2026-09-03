class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool exists = false;
        int row=matrix.size(), col = matrix[0].size();
        int l=0, r = row*col -1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            int i= mid/ col, j = mid % col;
            
            int contender = matrix[i][j];
            if(contender==target) {
                exists=true;
                break;
            }
            else if(contender<target) {
                l=mid+1;
            }
            else  {
                r=mid-1;
            }
        }

        return exists;
    }
};
