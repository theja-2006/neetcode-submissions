class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k=0;
        int n=nums.size();
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                k++;
            }
            else
                i++;
        }
    return n-k;
    }
};