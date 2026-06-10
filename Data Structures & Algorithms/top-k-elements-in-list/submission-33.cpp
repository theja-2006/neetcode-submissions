class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        int n=nums.size();
        for(auto num:nums)
        {
            hashmap[num]++;
        }
        vector<pair<int,int>> count;
        for(auto pair:hashmap)
        {
            count.push_back({pair.second,pair.first});
        }
        sort(count.rbegin(),count.rend());
        vector<int> arr;
        for(auto p:count)
        {
            arr.push_back(p.second);
        }
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
};
