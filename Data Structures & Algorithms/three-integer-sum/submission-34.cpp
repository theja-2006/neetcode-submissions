class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int f = i+1;
            int b = nums.size()-1;
            while(f < b)
            {
                if(nums[f]+nums[b]==-nums[i])
                {
                    res.push_back({nums[i],nums[f],nums[b]});
                    f++;
                    b--;
                    while(f < b && nums[f]==nums[f-1])
                        f++;
                    while(f < b && nums[b]==nums[b+1])
                        b--;
                }
                else if(nums[f]+nums[b]<-nums[i])
                {
                    f++;
                }
                else
                {
                    b--;
                }
            }
        }
        return res;
    }
};
