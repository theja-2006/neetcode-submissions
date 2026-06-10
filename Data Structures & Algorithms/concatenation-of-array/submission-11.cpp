class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int m=2*n;
        vector<int> ans(m);
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            ans[i]=nums[i];
        }
        for(j=i;j<m;j++)
        {
            ans[j]=nums[j-n];
        }
        return ans;
    }
};