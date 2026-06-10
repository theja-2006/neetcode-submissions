class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int f = i+1;
            int b = nums.size()-1;
            while(f < b)
            {
                if(nums[f]+nums[b]==-nums[i])
                {
                    res.insert({nums[i],nums[f],nums[b]});
                    f++;
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
        return vector<vector<int>>(res.begin(),res.end());
    }
};
