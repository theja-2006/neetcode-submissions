class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=m+n-1;
        while(j>=n)
        {
            nums1[j]=nums1[j-n];
            j--;
        }
        while(i<n)
        {
            nums1[i]=nums2[i];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};