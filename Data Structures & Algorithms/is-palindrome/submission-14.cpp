class Solution {
public:
    bool isPalindrome(string s) {
        string new_s="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                new_s+= tolower(s[i]);
            }
            
        }
        for(int i=0;i<new_s.size();i++)
        {
            if(new_s[i]!=new_s[(new_s.size()-1)-i])
                return false;
        }
        return true;
    }
};
