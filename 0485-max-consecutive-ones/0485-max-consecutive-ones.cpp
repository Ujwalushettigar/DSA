class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0;
        int r=0;
        int m=0;
        while(r<nums.size())
        {
            if(nums[r]==1)
            {
                r++;
            }
            else
            {
                l=r+1;
                r=l;
            }
            if((r-l)>m)
            {
                m=r-l;
            }
        }
        return m;
    }
};