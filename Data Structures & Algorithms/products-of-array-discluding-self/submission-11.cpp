class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            float prd=1;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==0 && i==j)
                {
                    continue;
                }
                prd=prd*nums[j];
            }
            if(nums[i]!=0)
            {
                res.push_back(prd/nums[i]);
            }
            else
            {
                res.push_back(prd);
            }
        }
        return res;
    }
};
