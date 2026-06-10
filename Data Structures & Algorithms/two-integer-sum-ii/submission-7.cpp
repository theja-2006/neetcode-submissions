class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f = 0;
        int b = numbers.size()-1;
        while(f<b)
        {
            for(int i=1;i<numbers.size();i++)
            {
                if(numbers[i]==target-numbers[f])
                {
                    return {f+1,i+1};
                }
            }
            f++;
            for(int i=numbers.size()-2;i>=0;i--)
            {
                if(numbers[i]==target-numbers[b])
                {
                    return {i+1,b+1};
                }
            }
            b--;
        }
    }
};
