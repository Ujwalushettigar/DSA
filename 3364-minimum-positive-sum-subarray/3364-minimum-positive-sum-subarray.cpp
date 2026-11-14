class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int m=INT_MAX;
        int sum=0;
        while(l<=r)
        {
            for(int s=0;s+l<=nums.size();s++)
            {
                sum=0;
                for(int i=s;i<s+l;i++)
                {
                    sum=sum+nums[i];
                }
                if(sum<m && sum>0)
                {
                    m=sum;
                }
            }
            l++;
        }
        if(m==INT_MAX)
        {
            return -1;
        }
        return m;
    }
};