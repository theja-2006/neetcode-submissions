class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f = 0;
        int b = numbers.size()-1;
        while(f < b)
        {
            int sum=numbers[f]+numbers[b];
            if(sum==target)
            {
                return {f+1,b+1};
            }
            else if(sum>target)
            {
                b--;
            }
            else
            {
                f++;
            }
        }
    }
};
