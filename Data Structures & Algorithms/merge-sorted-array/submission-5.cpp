class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> dupe(m);
        for(int i=0;i<m;i++)
        {
            dupe[i]=nums1[i];
        }
        int i=0,j=0,indx=0;
        while(i<m && j<n)
        {
            if(dupe[i]<nums2[j])
            {
                nums1[indx]=dupe[i];
                i++;
                indx++;
            }
            else if(nums2[j]<dupe[i])
            {
                nums1[indx]=nums2[j];
                j++;
                indx++;
            }
            else
            {
                nums1[indx]=dupe[i];
                nums1[++indx]=nums2[j];
                i++;j++;indx++;
            }
        }
        while(i<m)
        {
            nums1[indx]=dupe[i];
            i++;
            indx++;
        }
        while(j<n)
        {
            nums1[indx]=nums2[j];
            j++;
            indx++;
        }
    }
};