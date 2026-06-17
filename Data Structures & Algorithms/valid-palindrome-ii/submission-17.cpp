class Solution {
public:
    bool validPalindrome(string s) {
        int l=0, r=s.length()-1;
        int n=s.length();
        while(l<r)
        {
            if(s[l]!=s[r])
            {
            string skipL=s.substr(l+1,r-l);
            string skipR=s.substr(l,r-l);
            return isPalindrome(skipL) || isPalindrome(skipR);
            }
            l++;
            r--;
        }
        return true;
    }

private:
    bool isPalindrome(string s)
    {
        int l=0, r=s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};