class Solution {
public:
    bool isPalindrome(string s) {
        string new_string="";
        for(auto c:s)
        {
            if(isalnum(c))
            {
                new_string.push_back(tolower(c));
            }
        }
        int n = new_string.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(new_string[i]==new_string[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
