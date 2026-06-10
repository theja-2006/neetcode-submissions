class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash_map;
        for(auto x:nums)
        {
            hash_map[x]++;
        }
        int max=hash_map[nums[0]];
        int max_num;
        for(auto & x:nums)
        {
            if(hash_map[x]>=max)
            {
                max=hash_map[x];
                max_num=x;
            }
        }
        return max_num;
    }
};