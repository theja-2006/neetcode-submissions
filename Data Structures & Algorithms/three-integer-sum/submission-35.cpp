class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int curr_sum=nums[i]+nums[j]+nums[k];
                    if(curr_sum==0)
                    {
                        st.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        vector<vector<int>> result(st.begin(),st.end());
        return result;
    }
};
