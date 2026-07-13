class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>window;
        for(int i=0;i<nums.size();i++)
        {
            if(window.count(nums[i]) and i-window[nums[i]]<=k)
                return true;
            else
                window[nums[i]]=i;
        }
        return false;
    }
};