class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> og_nums=nums;
        int k=0;
        for (auto x:nums)
            if (x!=val)
                k++;
        int j=0;
        for(int i=0;i<og_nums.size();i++)
        {
            if(og_nums[i]!=val)
            {
                nums[j]=og_nums[i];
                j++;
            }
        }
        return k;
    }
};