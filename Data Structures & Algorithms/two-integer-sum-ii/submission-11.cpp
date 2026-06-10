class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f = 0;
       
        while(f<numbers.size())
        {
             int s = f+1;
            while(s<numbers.size())
            {
                if(numbers[f]+numbers[s]==target)
                {
                    return {f+1,s+1};
                }
                else
                {
                    s++;
                }
            }
            f++;
        }
    }
};
