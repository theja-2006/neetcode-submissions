class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for (auto x:nums)
            if (x!=val)
                k++;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return k;
    }
};