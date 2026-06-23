class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=nums[j];
            if(nums[j]==k)
                count++;
            for(int i=j+1;i<n;i++)
            {
                sum=sum+nums[i];
                if(sum==k)
                    count++;
            }
        }
        return count;
    }
};