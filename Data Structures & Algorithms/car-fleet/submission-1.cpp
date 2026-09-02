class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairs;

        stack<pair<int,int>>stek;

        for(int i=0; i<position.size();i++) {
            pairs.push_back({position[i], speed[i]});
        }

        sort(pairs.rbegin(),pairs.rend());

        for(auto p : pairs) {
            if(stek.size()==0) {
                stek.push(p);
                continue;
            }
            double time = (double)(target-p.first)/p.second;
            pair<int,int> ontop = stek.top();
            double toptime = (double)(target - ontop.first) / ontop.second;
            stek.push(p);

            if(time<=toptime && stek.size()>1)
                stek.pop();
        }

        return stek.size();
    }
};
