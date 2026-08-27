class Solution {
public:
    bool isValid(string s) {
        stack<char> stek;

        for(int i=0; i<s.size(); i++) {
            char c = s[i];
            if(c=='(' || c=='[' || c=='{')
                stek.push(c);
            else if(c==')' || c==']' || c=='}') {

                if(stek.empty()) return false;

                if(c==')' && stek.top()!='(') return false;
                if(c==']' && stek.top()!='[') return false;
                if(c=='}' && stek.top()!='{') return false;

                stek.pop();
            }
        }

        return stek.empty();
    }
};
