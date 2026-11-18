class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        int med=n/2;
        float ian=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(n%2==0)
            {
                ian=(nums1[med]+(nums1[med-1]))/2.00;
            }
            else
            {
                return nums1[med];
            }
        }
        return ian;
    }
};