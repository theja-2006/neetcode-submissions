class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>store(nums.begin(),nums.end());
        int longest=0;
        int length=1;
        for(int num:store)
        {
            if(not(store.count(num-1)))
            {
                length=1;
                while(store.count(num+1))
                {
                    length++;
                    num++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
