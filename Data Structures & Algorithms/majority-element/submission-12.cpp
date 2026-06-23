class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> hash_map;
       int n=nums.size();
       for(int num:nums)
       {
            hash_map[num]++;
       } 
       int max_val=0;
       int max_ele;
       for(auto& pair:hash_map)
       {
        if(pair.second>max_val)
        {
            max_val=pair.second;
            max_ele=pair.first;
        }
       }
       return max_ele;
    }
};