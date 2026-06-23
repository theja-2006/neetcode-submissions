class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash_map;
        vector<int>ans;
        int n=nums.size();
        for(auto num:nums)
        {
            hash_map[num]++;
        }
        for(auto& pair:hash_map)
            if(pair.second>(n/3))
                ans.push_back(pair.first);
        return ans;
    }
};