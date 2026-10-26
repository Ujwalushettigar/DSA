class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> b(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                b[k++]=nums1[i++];
            }
            else
            {
                b[k++]=nums2[j++];
            }
        }
        while(i<m)
        {
            b[k++]=nums1[i++];
        }
        while(j<n)
        {
            b[k++]=nums2[j++];
        }
        nums1=b;
    }
};