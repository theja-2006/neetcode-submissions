class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(int num:nums)
        {
            int curr=num;
            int streak=0;
            while(store.count(curr))
            {
                streak++;
                curr++;
            }
            count=max(count,streak);
        }
        return count;
    }
};
