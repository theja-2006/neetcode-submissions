class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int n=word1.length();
        int m=word2.length();
        string newstr="";
        while(i<n || i<m)
        {
            if(i<n)
                newstr+=word1[i];
            if(i<m)
                newstr+=word2[i];
            i++;
        }
        return newstr;
    }
};