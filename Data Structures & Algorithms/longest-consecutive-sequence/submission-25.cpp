class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>n_nums(nums.begin(),nums.end());
        int res=0;
        int streak;
        for(int num:n_nums)
        {
            streak=0;
            int curr=num;
            while(n_nums.count(curr))
            {
                streak++;
                curr++;
            }
            res=max(res,streak);
        }
        return res;
    }
};
