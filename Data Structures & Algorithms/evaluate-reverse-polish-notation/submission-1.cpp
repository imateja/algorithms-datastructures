class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stek;

        for (string s : tokens) {
            //test cases don't have negative numbers
            if (s.size() > 1 || isdigit(s[0])) {
                int num = stoi(s);
                stek.push(num);
            } 
            else {
                int right = stek.top();
                stek.pop();
                
                int left = stek.top();
                stek.pop();
                
                switch(s[0]) {
                    case '+':
                        stek.push(left + right);
                        break; 
                    case '-':
                        stek.push(left - right);
                        break;
                    case '*':
                        stek.push(left * right);
                        break;
                    case '/':
                        stek.push(left / right);
                        break;
                }
            }
        }
        return stek.top();
    }
};