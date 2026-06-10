class Solution {
public:

    string encode(vector<string>& strs) {
        vector<int>sizes;
        if(strs.empty())
            return "";
        for(const auto&s:strs)
        {
            sizes.push_back(s.size());
        }
        string res="";
        for(int n:sizes)
        {
            res+=to_string(n)+",";
        }
        res=res+"#";
        for(const auto&s:strs)
        {
            res+=s;
        }
    return res;
    }

    vector<string> decode(string s) {
        vector<int> sizes;
        vector<string> res;
        if(s.empty())
            return {};
        int j=0;
        while(s[j]!='#')
        {
            string cur="";
            while(s[j]!=',')
            {
                cur=cur+s[j];
                j++;
            }
            sizes.push_back(stoi(cur));
            j++;
        }

        j++;
        int i=j;
        for(int sz:sizes)
        {
            res.push_back(s.substr(i,sz));
            i=i+sz;
        }
        return res;
    }
};
