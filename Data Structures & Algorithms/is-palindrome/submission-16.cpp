class Solution {
public:
    bool isPalindrome(string s) {
        int f=0, b=s.length()-1;
        while(f < b)
        {
            while(f<b && !isalnum(s[f]))
            {
                f++;
            }
            while(b>f && !isalnum(s[b]))
            {
                b--;
            }
            if(tolower(s[f])!=tolower(s[b]))
            {
                return false;
            }
            f++;
            b--;
        }
        return true;
    }
};
