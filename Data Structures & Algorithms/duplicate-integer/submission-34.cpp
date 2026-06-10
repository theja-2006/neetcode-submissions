class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> hash_set; 
       for(int num:nums){
            if(hash_set.count(num))
            {
                return true;
            }
            hash_set.insert(num);
       }
       return false;
    }
};