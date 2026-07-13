class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_set<int> window;
       int i=0;
       for(int j=0;j<nums.size();j++)
        {
            if(j-i>k)
            {
                window.erase(nums[i]);
                i++;
            }
            if(window.count(nums[j]))
                return true;
            else
                window.insert(nums[j]);
        }
        return false;
    }
};