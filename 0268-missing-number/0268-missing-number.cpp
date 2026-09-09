class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // int i=n*(n+1)/2;
        // int j=0,k;
        // for(k=0;k<n;k++)
        // {
        //     j+=nums[k];
        // }
        // return i-j;
        int n=nums.size();
        int xr=0;
        for(int i=0;i<n;i++)
        {
            xr^=(i+1)^nums[i];
        }
        return xr;
    }
};