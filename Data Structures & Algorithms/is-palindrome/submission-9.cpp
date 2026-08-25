class Solution {
public:
    bool isPalindrome(string s) {
        
        erase_if( s,[](char c) {return isspace(c);} );
        erase_if( s,[](char c) {return !isalnum(c);} );
        int l=0, r=s.size()-1;
        while(l<r) {
            while(!alphaNum(s[l])) l++;
            while(!alphaNum(s[r])) r--;

            char left = tolower(s[l]);
            char right = tolower(s[r]);

            if(left!=right) return false;

            l++;
            r--;
        }

        return true;
        
    }
    bool alphaNum(char c) {
        return (c>='a' && c<='z') || 
                (c>='A' && c<='Z') ||
                (c>='0' && c<='9');
    }
};
