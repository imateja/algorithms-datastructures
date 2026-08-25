class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        vector<int> res;

        int l=0, r=n-1;

        while(l<r) {
            int left = numbers[l];
            int right = numbers[r];
            if(left+right == target) {
                //they want it to be 1-indexed in output lol
                res.push_back(l+1);
                res.push_back(r+1);
                break;
            }
            else if(left+right>target)
                r--;
            else l++;
            
        }


        return res;

    }
};
