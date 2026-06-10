class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(hash_map.count(diff) and hash_map[diff]!=i)
            {
                return {hash_map[diff],i};
            }
            else
            {
                hash_map.insert({nums[i],i});
            }
        }
    }
};
