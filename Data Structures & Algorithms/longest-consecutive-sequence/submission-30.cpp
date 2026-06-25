class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        unordered_set<int>num_n(nums.begin(),nums.end());
        int longest=0;
        for(int num:num_n)
        {
            if(not num_n.count(num-1))
            {
                int length=1;
                while(num_n.count(num+length))
                {
                    length++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};
